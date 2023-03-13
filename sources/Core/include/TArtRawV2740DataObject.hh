/*
 * @file TArtRawV2740DataObject.hh
 * S.Ogio 20230209
 */

#ifndef TARTRAWV2740DATAOBJECT_H
#define TARTRAWV2740DATAOBJECT_H

#include <iostream>
#include "TNamed.h"
#include "TArtCore.hh"

class TArtRawV2740DataObject : public TNamed
{
 public: 
  TArtRawV2740DataObject();
  TArtRawV2740DataObject(int);
  virtual ~TArtRawV2740DataObject();

  virtual int       GetCh              (void);    
  virtual void      SetCh              (const int);
  virtual int       GetGeo             (void);    
  virtual void      SetGeo             (const int);
  virtual uint64_t  GetFormat          (void);    
  virtual void      SetFormat          (const uint64_t);  
  virtual uint64_t  GetTimeStamp       (void);  
  virtual void      SetTimeStamp       (const uint64_t);
  virtual uint16_t  GetFineTimeStamp   (void);  
  virtual void      SetFineTimeStamp   (const uint16_t);
  virtual uint16_t  GetEnergy          (void);  
  virtual void      SetEnergy          (const uint16_t);
  virtual uint8_t   GetDigitalProbeInfo(int);  
  virtual void      SetDigitalProbeInfo(int, const uint8_t);
  virtual uint8_t   GetAnalogProbeInfo (int);  
  virtual void      SetAnalogProbeInfo (int, const uint8_t);
  virtual uint8_t   GetFlagWaveform    (void);  
  virtual void      SetFlagWaveform    (const uint8_t);
  virtual uint8_t   GetFlagIsLast      (void);  
  virtual void      SetFlagIsLast      (const uint8_t);             
  virtual int       GetNData           (void);
  virtual int       GetTimeBacket      (int);
  virtual void      AddVal             (const int, const int);
  virtual void      DumpVal            (void);  
  virtual int       GetVal             (int);
  virtual int*      GetVals            (void);  
  virtual void      AddProbes          (const int,
				        const int16_t, const int16_t,
					const uint8_t,  const uint8_t,  const uint8_t,  const uint8_t);
  virtual int16_t  GetAnalogProbe     (int, int);
  virtual int16_t* GetAnalogProbes    (int);  
  virtual uint8_t   GetDigitalProbe    (int, int);
  virtual uint8_t*  GetDigitalProbes   (int);    

 protected:


  int                   geo;    // geo
  int                   channel;  // channel in the (CAMAC/VME) module
  uint64_t              format;
  uint64_t              timeStamp;
  uint16_t              fineTimeStamp,      energy;
  uint8_t               analogProbeInfo[2], digitalProbeInfo[4], flagWaveform, flagIsLast;
  std::vector<int>      timebacket;
  std::vector<int>      value;
  std::vector<int16_t> analogProbe[2];
  std::vector<uint8_t>  digitalProbe[4];  

  
  ClassDef(TArtRawV2740DataObject,1);
};

#endif




