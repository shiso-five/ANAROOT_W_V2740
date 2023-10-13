/*
 * @file TArtRawV2740DataObject.cc
 * S.Ogio 20230209
 */

#include "TArtRawV2740DataObject.hh"

TArtRawV2740DataObject::TArtRawV2740DataObject(){
  format = 99;
}

TArtRawV2740DataObject::TArtRawV2740DataObject(int inch) :
  channel(inch){
  format = 99; 
}

TArtRawV2740DataObject::~TArtRawV2740DataObject(){
}

int TArtRawV2740DataObject::GetCh(void){
  return channel;
}

void TArtRawV2740DataObject::SetCh (const int inch){
  channel = inch;
  return;
}

int TArtRawV2740DataObject::GetGeo(void){
  return geo;
}

void TArtRawV2740DataObject::SetGeo(const int ingeo){
  geo = ingeo;
  return;
}

uint64_t TArtRawV2740DataObject::GetFormat(void){
  return format; 
}
void TArtRawV2740DataObject::SetFormat(const uint64_t informat){
  format = informat;
  return;
}

uint64_t TArtRawV2740DataObject::GetTimeStamp(void){
  return timeStamp;
}

void TArtRawV2740DataObject::SetTimeStamp(const uint64_t inTimeStamp){
  timeStamp = inTimeStamp;
  return;
}

uint16_t TArtRawV2740DataObject::GetFineTimeStamp(void){
  return fineTimeStamp;
}

void TArtRawV2740DataObject::SetFineTimeStamp(const uint16_t inFineTimeStamp){
  fineTimeStamp = inFineTimeStamp;
  return;
}

uint32_t  TArtRawV2740DataObject::GetChTriggerCnt(void){
  return chTriggerCnt;
}
void TArtRawV2740DataObject::SetChTriggerCnt(const uint32_t inChTriggerCnt){
  chTriggerCnt = inChTriggerCnt;
  return;
}

uint16_t TArtRawV2740DataObject::GetEnergy(void){
  if(format == 0x02){
    return energy;
  }
  return 0xffff;  
}

void TArtRawV2740DataObject::SetEnergy(const uint16_t inEnergy){
  if(format == 0x02){  
    energy = inEnergy;
  }
  return;
}

uint8_t TArtRawV2740DataObject::GetDigitalProbeInfo(int idx){
  if(format == 0x02){
    if(idx<4){
      return digitalProbeInfo[idx];
    }
    else{
      std::cerr<<"<TArtRawV2740DataObject::GetDigitalProbeInfo()> ERROR : index >= 4."<<std::endl;
      return 0xff;
    }
  }
  return 0xff;
}

void TArtRawV2740DataObject::SetDigitalProbeInfo(int idx, const uint8_t inDigitalProbeInfo){
  if(format == 0x02){  
    if(idx<4){
      digitalProbeInfo[idx] = inDigitalProbeInfo;    
    }
    else{
      std::cerr<<"<TArtRawV2740DataObject::SetDigitalProbeInfo()> ERROR : index >= 4."<<std::endl;
    }
  }
  return;
}

uint8_t TArtRawV2740DataObject::GetAnalogProbeInfo(int idx){
  if(format == 0x02){
    if(idx<2){
      return analogProbeInfo[idx];
    }
    else{
      std::cerr<<"<TArtRawV2740DataObject::GetAnalogProbeInfo()> ERROR : index >= 2."<<std::endl;
      return 0xff;
    }
  }
  return 0xff;
}

void TArtRawV2740DataObject::SetAnalogProbeInfo(int idx, const uint8_t inAnalogProbeInfo){
  if(format == 0x02){  
    if(idx<2){
      analogProbeInfo[idx] = inAnalogProbeInfo;    
    }
    else{
      std::cerr<<"<TArtRawV2740DataObject::SetAnalogProbeInfo()> ERROR : index >= 2."<<std::endl;
    }
  }
  return;
}

uint8_t TArtRawV2740DataObject::GetFlagIsLast(void){
  return flagIsLast;
}

void TArtRawV2740DataObject::SetFlagIsLast(const uint8_t inFlagIsLast){
  flagIsLast = inFlagIsLast;
  
  return;
}

uint8_t TArtRawV2740DataObject::GetFlagWaveform(void){
  return flagWaveform;
}

void TArtRawV2740DataObject::SetFlagWaveform(const uint8_t inFlagWaveform){
  flagWaveform = inFlagWaveform;
  
  return;
}

int TArtRawV2740DataObject::GetNData(void){
  return timebacket.size();
}

int TArtRawV2740DataObject::GetTimeBacket(int i){
  return timebacket.at(i);
}

void TArtRawV2740DataObject::AddVal(const int tb, const int val){
  timebacket.push_back(tb);
  value.push_back(val);
  return;
}

void TArtRawV2740DataObject::DumpVal(void){
  for(int i=0;i<(int)timebacket.size();i++){
    TArtCore::Info(__FILE__,"geo=%d ch=%d tb=%d : %d",geo,channel,timebacket[i],value[i]);
  }
  return;
}

int TArtRawV2740DataObject::GetVal(int tb){
  return value.at(tb);
}

int* TArtRawV2740DataObject::GetVals(void){
  return &(value[0]);
}

void TArtRawV2740DataObject::AddProbes(const int      tb,
				       int16_t ap0, int16_t ap1,
				       const uint8_t  dp0, const uint8_t  dp1,
				       const uint8_t  dp2, const uint8_t  dp3){
  //  std::cout<<"format = "<<format<<std::endl;
  if(format == 0x02){  
    //  timebacket     .push_back(tb);
    //  std::cout<<"AnalogProbeInfo[0] = "<<(int)analogProbeInfo[0]<<" AnalogProbeInfo[1] = "<<(int)analogProbeInfo[1]<<std::endl;
    if( ((analogProbeInfo[0] & 0b00001000)>>3) && ((ap0 & 0b0010000000000000)>>13) ){ //calculate 14-bit complement on 2
      ap0 -= 16384;
    }
   
    if( ((analogProbeInfo[1] & 0b00001000)>>3) && ((ap1 & 0b0010000000000000)>>13) ){
      ap1 -= 16384;    
    }

    analogProbe [0].push_back(ap0);
    analogProbe [1].push_back(ap1); 
    digitalProbe[0].push_back(dp0);
    digitalProbe[1].push_back(dp1);
    digitalProbe[2].push_back(dp2);
    digitalProbe[3].push_back(dp3);

    AddVal(tb, -1);
  }
  
  return;
}

int16_t  TArtRawV2740DataObject::GetAnalogProbe     (int idx, int tb){
  if(format == 0x02){  
    if(idx<2){
      return analogProbe[idx].at(tb);
    }
    else{
      std::cerr<<"<TArtRawV2740DataObject::GetAnalogProbe()> ERROR : index >= 2."<<std::endl;
      return 0xff;
    }
    std::cerr<<"<TArtRawV2740DataObject::GetAnalogProbe()> ERROR : cannot return"<<std::endl;
  }
  return 0xff;  
}
int16_t* TArtRawV2740DataObject::GetAnalogProbes    (int idx){
  if(format == 0x02){ 
    if(idx<2){
      return &(analogProbe[idx][0]);
    }
    else{
      std::cerr<<"<TArtRawV2740DataObject::GetAnalogProbes()> ERROR : index >= 2."<<std::endl;
      return nullptr;
    }
    std::cerr<<"<TArtRawV2740DataObject::GetAnalogProbe()> ERROR : cannot return"<<std::endl;
  }
  return nullptr;  
}
uint8_t   TArtRawV2740DataObject::GetDigitalProbe    (int idx, int tb){
  if(format == 0x02){  
    if(idx<4){
      return digitalProbe[idx].at(tb);
    }
    else{
      std::cerr<<"<TArtRawV2740DataObject::GetDigitalProbe()> ERROR : index >= 4."<<std::endl;
      return 0xff;
    }
    std::cerr<<"<TArtRawV2740DataObject::GetAnalogProbe()> ERROR : cannot return"<<std::endl;
  }
  return 0xff;  
}
uint8_t*  TArtRawV2740DataObject::GetDigitalProbes   (int idx){
  if(format == 0x02){  
    if(idx<4){
      return &(digitalProbe[idx][0]);
    }
    else{
      std::cerr<<"<TArtRawV2740DataObject::GetDigitalProbes()> ERROR : index >= 4."<<std::endl;
      return nullptr;
    }
    std::cerr<<"<TArtRawV2740DataObject::GetAnalogProbe()> ERROR : cannot return"<<std::endl;
  }
  return nullptr;    
}


