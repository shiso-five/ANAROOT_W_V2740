// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anasamurai_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "include/TArtTacquilaMap.hh"
#include "include/TArtHIMEFilter.hh"
#include "include/TArtCalibFDC2Track.hh"
#include "include/TArtCalibRPDCTrack.hh"
#include "include/FieldMan.hh"
#include "include/TArtNINJAPla.hh"
#include "include/DCGeomRecord.hh"
#include "include/TArtDCTrack.hh"
#include "include/TArtCalibBDC1Hit.hh"
#include "include/TArtHIMEPlaPara.hh"
#include "include/TArtNEBULAFilter.hh"
#include "include/TArtCalibBPCHit.hh"
#include "include/TArtCalibSimpleDCTrack.hh"
#include "include/TArtCalibNeuLAND.hh"
#include "include/TArtCalcGlobalTrack.hh"
#include "include/TArtCalibFDC0Hit.hh"
#include "include/TArtCalibFDC1Track.hh"
#include "include/TArtCalibDCHit.hh"
#include "include/TArtTEDCsIPara.hh"
#include "include/TArtCalibS1DC2Track.hh"
#include "include/DCConfMan.hh"
#include "include/TArtNINJAPlaPara.hh"
#include "include/TArtTZero.hh"
#include "include/RungeKuttaUtilities.hh"
#include "include/TArtCalibS1DC1Track.hh"
#include "include/SAMURAIFieldMap.hh"
#include "include/TArtHODPla.hh"
#include "include/TArtNeutron.hh"
#include "include/TArtICF.hh"
#include "include/TArtCalibSimpleFDC0Track.hh"
#include "include/TArtNEBULAHPC.hh"
#include "include/TArtCalibRPTOFPla.hh"
#include "include/TArtCalibHODPla.hh"
#include "include/TArtRPTOFPla.hh"
#include "include/TArtCalibBDC2Track.hh"
#include "include/TArtHIMEPla.hh"
#include "include/TArtFragment.hh"
#include "include/TArtCalibDCTrack.hh"
#include "include/TArtCalibNEBULA.hh"
#include "include/TArtHODPlaPara.hh"
#include "include/TArtNeuLANDPla.hh"
#include "include/TArtCalibSAMURAI.hh"
#include "include/TArtDCHit.hh"
#include "include/TArtCalibSimpleFDC2Track.hh"
#include "include/TArtRecoSAMURAI.hh"
#include "include/TArtCalibSimpleBDC1Track.hh"
#include "include/TArtDCHitPara.hh"
#include "include/MathTools.hh"
#include "include/TArtCalibHIME.hh"
#include "include/TArtRPTOFPlaPara.hh"
#include "include/TArtCalibNeuLANDVETO.hh"
#include "include/TArtCalibFDC2Hit.hh"
#include "include/TArtCalibBDC1Track.hh"
#include "include/TArtCalibFDC1Hit.hh"
#include "include/TArtCalibNINJA.hh"
#include "include/TArtNeuLANDPlaPara.hh"
#include "include/TArtCalibPDCHit.hh"
#include "include/TArtCalibSimpleFDC1Track.hh"
#include "include/TArtCalibSimpleBDC2Track.hh"
#include "include/TArtCalibRPDCHit.hh"
#include "include/TArtRecoFragment.hh"
#include "include/TArtCalibICF.hh"
#include "include/TArtCalibBDC2Hit.hh"
#include "include/TArtCalibS1DC2Hit.hh"
#include "include/TArtCalibFDC0Track.hh"
#include "include/TArtTEDCsI.hh"
#include "include/TArtCalibS1DC1Hit.hh"
#include "include/TArtNEBULAPla.hh"
#include "include/TArtSAMURAIParameters.hh"
#include "include/TArtCalibNEBULAHPC.hh"
#include "include/TArtNEBULAHPCPara.hh"
#include "include/TArtCalibSAMURAITZero.hh"
#include "include/TArtCalibTEDCsI.hh"
#include "include/TArtRecoNeutron.hh"
#include "include/TArtCalibPDCTrack.hh"
#include "include/TArtNEBULAPlaPara.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TArtTacquilaMap(void *p = 0);
   static void *newArray_TArtTacquilaMap(Long_t size, void *p);
   static void delete_TArtTacquilaMap(void *p);
   static void deleteArray_TArtTacquilaMap(void *p);
   static void destruct_TArtTacquilaMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTacquilaMap*)
   {
      ::TArtTacquilaMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTacquilaMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTacquilaMap", ::TArtTacquilaMap::Class_Version(), "TArtTacquilaMap.hh", 7,
                  typeid(::TArtTacquilaMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTacquilaMap::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTacquilaMap) );
      instance.SetNew(&new_TArtTacquilaMap);
      instance.SetNewArray(&newArray_TArtTacquilaMap);
      instance.SetDelete(&delete_TArtTacquilaMap);
      instance.SetDeleteArray(&deleteArray_TArtTacquilaMap);
      instance.SetDestructor(&destruct_TArtTacquilaMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTacquilaMap*)
   {
      return GenerateInitInstanceLocal((::TArtTacquilaMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTacquilaMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtHIMEFilter*)
   {
      ::TArtHIMEFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtHIMEFilter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtHIMEFilter", ::TArtHIMEFilter::Class_Version(), "TArtHIMEFilter.hh", 9,
                  typeid(::TArtHIMEFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtHIMEFilter::Dictionary, isa_proxy, 4,
                  sizeof(::TArtHIMEFilter) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtHIMEFilter*)
   {
      return GenerateInitInstanceLocal((::TArtHIMEFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtHIMEFilter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtCalibDCTrack(void *p);
   static void deleteArray_TArtCalibDCTrack(void *p);
   static void destruct_TArtCalibDCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibDCTrack*)
   {
      ::TArtCalibDCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibDCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibDCTrack", ::TArtCalibDCTrack::Class_Version(), "TArtCalibDCTrack.hh", 45,
                  typeid(::TArtCalibDCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibDCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibDCTrack) );
      instance.SetDelete(&delete_TArtCalibDCTrack);
      instance.SetDeleteArray(&deleteArray_TArtCalibDCTrack);
      instance.SetDestructor(&destruct_TArtCalibDCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibDCTrack*)
   {
      return GenerateInitInstanceLocal((::TArtCalibDCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibDCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibFDC2Track(void *p = 0);
   static void *newArray_TArtCalibFDC2Track(Long_t size, void *p);
   static void delete_TArtCalibFDC2Track(void *p);
   static void deleteArray_TArtCalibFDC2Track(void *p);
   static void destruct_TArtCalibFDC2Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibFDC2Track*)
   {
      ::TArtCalibFDC2Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibFDC2Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibFDC2Track", ::TArtCalibFDC2Track::Class_Version(), "TArtCalibFDC2Track.hh", 11,
                  typeid(::TArtCalibFDC2Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibFDC2Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibFDC2Track) );
      instance.SetNew(&new_TArtCalibFDC2Track);
      instance.SetNewArray(&newArray_TArtCalibFDC2Track);
      instance.SetDelete(&delete_TArtCalibFDC2Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibFDC2Track);
      instance.SetDestructor(&destruct_TArtCalibFDC2Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibFDC2Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibFDC2Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibFDC2Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibRPDCTrack(void *p = 0);
   static void *newArray_TArtCalibRPDCTrack(Long_t size, void *p);
   static void delete_TArtCalibRPDCTrack(void *p);
   static void deleteArray_TArtCalibRPDCTrack(void *p);
   static void destruct_TArtCalibRPDCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibRPDCTrack*)
   {
      ::TArtCalibRPDCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibRPDCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibRPDCTrack", ::TArtCalibRPDCTrack::Class_Version(), "TArtCalibRPDCTrack.hh", 11,
                  typeid(::TArtCalibRPDCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibRPDCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibRPDCTrack) );
      instance.SetNew(&new_TArtCalibRPDCTrack);
      instance.SetNewArray(&newArray_TArtCalibRPDCTrack);
      instance.SetDelete(&delete_TArtCalibRPDCTrack);
      instance.SetDeleteArray(&deleteArray_TArtCalibRPDCTrack);
      instance.SetDestructor(&destruct_TArtCalibRPDCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibRPDCTrack*)
   {
      return GenerateInitInstanceLocal((::TArtCalibRPDCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibRPDCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNINJAPla(void *p = 0);
   static void *newArray_TArtNINJAPla(Long_t size, void *p);
   static void delete_TArtNINJAPla(void *p);
   static void deleteArray_TArtNINJAPla(void *p);
   static void destruct_TArtNINJAPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNINJAPla*)
   {
      ::TArtNINJAPla *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNINJAPla >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNINJAPla", ::TArtNINJAPla::Class_Version(), "TArtNINJAPla.hh", 10,
                  typeid(::TArtNINJAPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNINJAPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNINJAPla) );
      instance.SetNew(&new_TArtNINJAPla);
      instance.SetNewArray(&newArray_TArtNINJAPla);
      instance.SetDelete(&delete_TArtNINJAPla);
      instance.SetDeleteArray(&deleteArray_TArtNINJAPla);
      instance.SetDestructor(&destruct_TArtNINJAPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNINJAPla*)
   {
      return GenerateInitInstanceLocal((::TArtNINJAPla*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNINJAPla*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtDCTrack(void *p = 0);
   static void *newArray_TArtDCTrack(Long_t size, void *p);
   static void delete_TArtDCTrack(void *p);
   static void deleteArray_TArtDCTrack(void *p);
   static void destruct_TArtDCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDCTrack*)
   {
      ::TArtDCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtDCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtDCTrack", ::TArtDCTrack::Class_Version(), "TArtDCTrack.hh", 16,
                  typeid(::TArtDCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtDCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TArtDCTrack) );
      instance.SetNew(&new_TArtDCTrack);
      instance.SetNewArray(&newArray_TArtDCTrack);
      instance.SetDelete(&delete_TArtDCTrack);
      instance.SetDeleteArray(&deleteArray_TArtDCTrack);
      instance.SetDestructor(&destruct_TArtDCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDCTrack*)
   {
      return GenerateInitInstanceLocal((::TArtDCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtDCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtCalibDCHit(void *p);
   static void deleteArray_TArtCalibDCHit(void *p);
   static void destruct_TArtCalibDCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibDCHit*)
   {
      ::TArtCalibDCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibDCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibDCHit", ::TArtCalibDCHit::Class_Version(), "TArtCalibDCHit.hh", 16,
                  typeid(::TArtCalibDCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibDCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibDCHit) );
      instance.SetDelete(&delete_TArtCalibDCHit);
      instance.SetDeleteArray(&deleteArray_TArtCalibDCHit);
      instance.SetDestructor(&destruct_TArtCalibDCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibDCHit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibDCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibDCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibBDC1Hit(void *p = 0);
   static void *newArray_TArtCalibBDC1Hit(Long_t size, void *p);
   static void delete_TArtCalibBDC1Hit(void *p);
   static void deleteArray_TArtCalibBDC1Hit(void *p);
   static void destruct_TArtCalibBDC1Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibBDC1Hit*)
   {
      ::TArtCalibBDC1Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibBDC1Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibBDC1Hit", ::TArtCalibBDC1Hit::Class_Version(), "TArtCalibBDC1Hit.hh", 9,
                  typeid(::TArtCalibBDC1Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibBDC1Hit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibBDC1Hit) );
      instance.SetNew(&new_TArtCalibBDC1Hit);
      instance.SetNewArray(&newArray_TArtCalibBDC1Hit);
      instance.SetDelete(&delete_TArtCalibBDC1Hit);
      instance.SetDeleteArray(&deleteArray_TArtCalibBDC1Hit);
      instance.SetDestructor(&destruct_TArtCalibBDC1Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibBDC1Hit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibBDC1Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibBDC1Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtHIMEPlaPara(void *p = 0);
   static void *newArray_TArtHIMEPlaPara(Long_t size, void *p);
   static void delete_TArtHIMEPlaPara(void *p);
   static void deleteArray_TArtHIMEPlaPara(void *p);
   static void destruct_TArtHIMEPlaPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtHIMEPlaPara*)
   {
      ::TArtHIMEPlaPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtHIMEPlaPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtHIMEPlaPara", ::TArtHIMEPlaPara::Class_Version(), "TArtHIMEPlaPara.hh", 9,
                  typeid(::TArtHIMEPlaPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtHIMEPlaPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtHIMEPlaPara) );
      instance.SetNew(&new_TArtHIMEPlaPara);
      instance.SetNewArray(&newArray_TArtHIMEPlaPara);
      instance.SetDelete(&delete_TArtHIMEPlaPara);
      instance.SetDeleteArray(&deleteArray_TArtHIMEPlaPara);
      instance.SetDestructor(&destruct_TArtHIMEPlaPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtHIMEPlaPara*)
   {
      return GenerateInitInstanceLocal((::TArtHIMEPlaPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtHIMEPlaPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNEBULAFilter*)
   {
      ::TArtNEBULAFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNEBULAFilter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNEBULAFilter", ::TArtNEBULAFilter::Class_Version(), "TArtNEBULAFilter.hh", 9,
                  typeid(::TArtNEBULAFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNEBULAFilter::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNEBULAFilter) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNEBULAFilter*)
   {
      return GenerateInitInstanceLocal((::TArtNEBULAFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNEBULAFilter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibBPCHit(void *p = 0);
   static void *newArray_TArtCalibBPCHit(Long_t size, void *p);
   static void delete_TArtCalibBPCHit(void *p);
   static void deleteArray_TArtCalibBPCHit(void *p);
   static void destruct_TArtCalibBPCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibBPCHit*)
   {
      ::TArtCalibBPCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibBPCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibBPCHit", ::TArtCalibBPCHit::Class_Version(), "TArtCalibBPCHit.hh", 9,
                  typeid(::TArtCalibBPCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibBPCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibBPCHit) );
      instance.SetNew(&new_TArtCalibBPCHit);
      instance.SetNewArray(&newArray_TArtCalibBPCHit);
      instance.SetDelete(&delete_TArtCalibBPCHit);
      instance.SetDeleteArray(&deleteArray_TArtCalibBPCHit);
      instance.SetDestructor(&destruct_TArtCalibBPCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibBPCHit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibBPCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibBPCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtCalibSimpleDCTrack(void *p);
   static void deleteArray_TArtCalibSimpleDCTrack(void *p);
   static void destruct_TArtCalibSimpleDCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSimpleDCTrack*)
   {
      ::TArtCalibSimpleDCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSimpleDCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSimpleDCTrack", ::TArtCalibSimpleDCTrack::Class_Version(), "TArtCalibSimpleDCTrack.hh", 45,
                  typeid(::TArtCalibSimpleDCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSimpleDCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSimpleDCTrack) );
      instance.SetDelete(&delete_TArtCalibSimpleDCTrack);
      instance.SetDeleteArray(&deleteArray_TArtCalibSimpleDCTrack);
      instance.SetDestructor(&destruct_TArtCalibSimpleDCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSimpleDCTrack*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSimpleDCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSimpleDCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtSAMURAIParameters(void *p = 0);
   static void *newArray_TArtSAMURAIParameters(Long_t size, void *p);
   static void delete_TArtSAMURAIParameters(void *p);
   static void deleteArray_TArtSAMURAIParameters(void *p);
   static void destruct_TArtSAMURAIParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSAMURAIParameters*)
   {
      ::TArtSAMURAIParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtSAMURAIParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtSAMURAIParameters", ::TArtSAMURAIParameters::Class_Version(), "TArtSAMURAIParameters.hh", 43,
                  typeid(::TArtSAMURAIParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtSAMURAIParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtSAMURAIParameters) );
      instance.SetNew(&new_TArtSAMURAIParameters);
      instance.SetNewArray(&newArray_TArtSAMURAIParameters);
      instance.SetDelete(&delete_TArtSAMURAIParameters);
      instance.SetDeleteArray(&deleteArray_TArtSAMURAIParameters);
      instance.SetDestructor(&destruct_TArtSAMURAIParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSAMURAIParameters*)
   {
      return GenerateInitInstanceLocal((::TArtSAMURAIParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtSAMURAIParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNeuLANDPla(void *p = 0);
   static void *newArray_TArtNeuLANDPla(Long_t size, void *p);
   static void delete_TArtNeuLANDPla(void *p);
   static void deleteArray_TArtNeuLANDPla(void *p);
   static void destruct_TArtNeuLANDPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNeuLANDPla*)
   {
      ::TArtNeuLANDPla *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNeuLANDPla >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNeuLANDPla", ::TArtNeuLANDPla::Class_Version(), "TArtNeuLANDPla.hh", 10,
                  typeid(::TArtNeuLANDPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNeuLANDPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNeuLANDPla) );
      instance.SetNew(&new_TArtNeuLANDPla);
      instance.SetNewArray(&newArray_TArtNeuLANDPla);
      instance.SetDelete(&delete_TArtNeuLANDPla);
      instance.SetDeleteArray(&deleteArray_TArtNeuLANDPla);
      instance.SetDestructor(&destruct_TArtNeuLANDPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNeuLANDPla*)
   {
      return GenerateInitInstanceLocal((::TArtNeuLANDPla*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNeuLANDPla*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTacquilaPara(void *p = 0);
   static void *newArray_TArtTacquilaPara(Long_t size, void *p);
   static void delete_TArtTacquilaPara(void *p);
   static void deleteArray_TArtTacquilaPara(void *p);
   static void destruct_TArtTacquilaPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTacquilaPara*)
   {
      ::TArtTacquilaPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTacquilaPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTacquilaPara", ::TArtTacquilaPara::Class_Version(), "TArtNeuLANDPlaPara.hh", 9,
                  typeid(::TArtTacquilaPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTacquilaPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTacquilaPara) );
      instance.SetNew(&new_TArtTacquilaPara);
      instance.SetNewArray(&newArray_TArtTacquilaPara);
      instance.SetDelete(&delete_TArtTacquilaPara);
      instance.SetDeleteArray(&deleteArray_TArtTacquilaPara);
      instance.SetDestructor(&destruct_TArtTacquilaPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTacquilaPara*)
   {
      return GenerateInitInstanceLocal((::TArtTacquilaPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTacquilaPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNeuLANDPlaPara(void *p = 0);
   static void *newArray_TArtNeuLANDPlaPara(Long_t size, void *p);
   static void delete_TArtNeuLANDPlaPara(void *p);
   static void deleteArray_TArtNeuLANDPlaPara(void *p);
   static void destruct_TArtNeuLANDPlaPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNeuLANDPlaPara*)
   {
      ::TArtNeuLANDPlaPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNeuLANDPlaPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNeuLANDPlaPara", ::TArtNeuLANDPlaPara::Class_Version(), "TArtNeuLANDPlaPara.hh", 44,
                  typeid(::TArtNeuLANDPlaPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNeuLANDPlaPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNeuLANDPlaPara) );
      instance.SetNew(&new_TArtNeuLANDPlaPara);
      instance.SetNewArray(&newArray_TArtNeuLANDPlaPara);
      instance.SetDelete(&delete_TArtNeuLANDPlaPara);
      instance.SetDeleteArray(&deleteArray_TArtNeuLANDPlaPara);
      instance.SetDestructor(&destruct_TArtNeuLANDPlaPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNeuLANDPlaPara*)
   {
      return GenerateInitInstanceLocal((::TArtNeuLANDPlaPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNeuLANDPlaPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibNeuLAND(void *p = 0);
   static void *newArray_TArtCalibNeuLAND(Long_t size, void *p);
   static void delete_TArtCalibNeuLAND(void *p);
   static void deleteArray_TArtCalibNeuLAND(void *p);
   static void destruct_TArtCalibNeuLAND(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibNeuLAND*)
   {
      ::TArtCalibNeuLAND *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibNeuLAND >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibNeuLAND", ::TArtCalibNeuLAND::Class_Version(), "TArtCalibNeuLAND.hh", 38,
                  typeid(::TArtCalibNeuLAND), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibNeuLAND::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibNeuLAND) );
      instance.SetNew(&new_TArtCalibNeuLAND);
      instance.SetNewArray(&newArray_TArtCalibNeuLAND);
      instance.SetDelete(&delete_TArtCalibNeuLAND);
      instance.SetDeleteArray(&deleteArray_TArtCalibNeuLAND);
      instance.SetDestructor(&destruct_TArtCalibNeuLAND);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibNeuLAND*)
   {
      return GenerateInitInstanceLocal((::TArtCalibNeuLAND*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibNeuLAND*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtCalcGlobalTrack(void *p);
   static void deleteArray_TArtCalcGlobalTrack(void *p);
   static void destruct_TArtCalcGlobalTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalcGlobalTrack*)
   {
      ::TArtCalcGlobalTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalcGlobalTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalcGlobalTrack", ::TArtCalcGlobalTrack::Class_Version(), "TArtCalcGlobalTrack.hh", 20,
                  typeid(::TArtCalcGlobalTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalcGlobalTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalcGlobalTrack) );
      instance.SetDelete(&delete_TArtCalcGlobalTrack);
      instance.SetDeleteArray(&deleteArray_TArtCalcGlobalTrack);
      instance.SetDestructor(&destruct_TArtCalcGlobalTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalcGlobalTrack*)
   {
      return GenerateInitInstanceLocal((::TArtCalcGlobalTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalcGlobalTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibFDC0Hit(void *p = 0);
   static void *newArray_TArtCalibFDC0Hit(Long_t size, void *p);
   static void delete_TArtCalibFDC0Hit(void *p);
   static void deleteArray_TArtCalibFDC0Hit(void *p);
   static void destruct_TArtCalibFDC0Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibFDC0Hit*)
   {
      ::TArtCalibFDC0Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibFDC0Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibFDC0Hit", ::TArtCalibFDC0Hit::Class_Version(), "TArtCalibFDC0Hit.hh", 9,
                  typeid(::TArtCalibFDC0Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibFDC0Hit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibFDC0Hit) );
      instance.SetNew(&new_TArtCalibFDC0Hit);
      instance.SetNewArray(&newArray_TArtCalibFDC0Hit);
      instance.SetDelete(&delete_TArtCalibFDC0Hit);
      instance.SetDeleteArray(&deleteArray_TArtCalibFDC0Hit);
      instance.SetDestructor(&destruct_TArtCalibFDC0Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibFDC0Hit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibFDC0Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibFDC0Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibFDC1Track(void *p = 0);
   static void *newArray_TArtCalibFDC1Track(Long_t size, void *p);
   static void delete_TArtCalibFDC1Track(void *p);
   static void deleteArray_TArtCalibFDC1Track(void *p);
   static void destruct_TArtCalibFDC1Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibFDC1Track*)
   {
      ::TArtCalibFDC1Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibFDC1Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibFDC1Track", ::TArtCalibFDC1Track::Class_Version(), "TArtCalibFDC1Track.hh", 11,
                  typeid(::TArtCalibFDC1Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibFDC1Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibFDC1Track) );
      instance.SetNew(&new_TArtCalibFDC1Track);
      instance.SetNewArray(&newArray_TArtCalibFDC1Track);
      instance.SetDelete(&delete_TArtCalibFDC1Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibFDC1Track);
      instance.SetDestructor(&destruct_TArtCalibFDC1Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibFDC1Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibFDC1Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibFDC1Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTEDCsIPara(void *p = 0);
   static void *newArray_TArtTEDCsIPara(Long_t size, void *p);
   static void delete_TArtTEDCsIPara(void *p);
   static void deleteArray_TArtTEDCsIPara(void *p);
   static void destruct_TArtTEDCsIPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTEDCsIPara*)
   {
      ::TArtTEDCsIPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTEDCsIPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTEDCsIPara", ::TArtTEDCsIPara::Class_Version(), "TArtTEDCsIPara.hh", 10,
                  typeid(::TArtTEDCsIPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTEDCsIPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTEDCsIPara) );
      instance.SetNew(&new_TArtTEDCsIPara);
      instance.SetNewArray(&newArray_TArtTEDCsIPara);
      instance.SetDelete(&delete_TArtTEDCsIPara);
      instance.SetDeleteArray(&deleteArray_TArtTEDCsIPara);
      instance.SetDestructor(&destruct_TArtTEDCsIPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTEDCsIPara*)
   {
      return GenerateInitInstanceLocal((::TArtTEDCsIPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTEDCsIPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibS1DC2Track(void *p = 0);
   static void *newArray_TArtCalibS1DC2Track(Long_t size, void *p);
   static void delete_TArtCalibS1DC2Track(void *p);
   static void deleteArray_TArtCalibS1DC2Track(void *p);
   static void destruct_TArtCalibS1DC2Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibS1DC2Track*)
   {
      ::TArtCalibS1DC2Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibS1DC2Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibS1DC2Track", ::TArtCalibS1DC2Track::Class_Version(), "TArtCalibS1DC2Track.hh", 11,
                  typeid(::TArtCalibS1DC2Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibS1DC2Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibS1DC2Track) );
      instance.SetNew(&new_TArtCalibS1DC2Track);
      instance.SetNewArray(&newArray_TArtCalibS1DC2Track);
      instance.SetDelete(&delete_TArtCalibS1DC2Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibS1DC2Track);
      instance.SetDestructor(&destruct_TArtCalibS1DC2Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibS1DC2Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibS1DC2Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibS1DC2Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNINJAPlaPara(void *p = 0);
   static void *newArray_TArtNINJAPlaPara(Long_t size, void *p);
   static void delete_TArtNINJAPlaPara(void *p);
   static void deleteArray_TArtNINJAPlaPara(void *p);
   static void destruct_TArtNINJAPlaPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNINJAPlaPara*)
   {
      ::TArtNINJAPlaPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNINJAPlaPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNINJAPlaPara", ::TArtNINJAPlaPara::Class_Version(), "TArtNINJAPlaPara.hh", 8,
                  typeid(::TArtNINJAPlaPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNINJAPlaPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNINJAPlaPara) );
      instance.SetNew(&new_TArtNINJAPlaPara);
      instance.SetNewArray(&newArray_TArtNINJAPlaPara);
      instance.SetDelete(&delete_TArtNINJAPlaPara);
      instance.SetDeleteArray(&deleteArray_TArtNINJAPlaPara);
      instance.SetDestructor(&destruct_TArtNINJAPlaPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNINJAPlaPara*)
   {
      return GenerateInitInstanceLocal((::TArtNINJAPlaPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNINJAPlaPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTZero(void *p = 0);
   static void *newArray_TArtTZero(Long_t size, void *p);
   static void delete_TArtTZero(void *p);
   static void deleteArray_TArtTZero(void *p);
   static void destruct_TArtTZero(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTZero*)
   {
      ::TArtTZero *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTZero >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTZero", ::TArtTZero::Class_Version(), "TArtTZero.hh", 9,
                  typeid(::TArtTZero), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTZero::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTZero) );
      instance.SetNew(&new_TArtTZero);
      instance.SetNewArray(&newArray_TArtTZero);
      instance.SetDelete(&delete_TArtTZero);
      instance.SetDeleteArray(&deleteArray_TArtTZero);
      instance.SetDestructor(&destruct_TArtTZero);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTZero*)
   {
      return GenerateInitInstanceLocal((::TArtTZero*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTZero*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibS1DC1Track(void *p = 0);
   static void *newArray_TArtCalibS1DC1Track(Long_t size, void *p);
   static void delete_TArtCalibS1DC1Track(void *p);
   static void deleteArray_TArtCalibS1DC1Track(void *p);
   static void destruct_TArtCalibS1DC1Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibS1DC1Track*)
   {
      ::TArtCalibS1DC1Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibS1DC1Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibS1DC1Track", ::TArtCalibS1DC1Track::Class_Version(), "TArtCalibS1DC1Track.hh", 11,
                  typeid(::TArtCalibS1DC1Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibS1DC1Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibS1DC1Track) );
      instance.SetNew(&new_TArtCalibS1DC1Track);
      instance.SetNewArray(&newArray_TArtCalibS1DC1Track);
      instance.SetDelete(&delete_TArtCalibS1DC1Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibS1DC1Track);
      instance.SetDestructor(&destruct_TArtCalibS1DC1Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibS1DC1Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibS1DC1Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibS1DC1Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtHODPla(void *p = 0);
   static void *newArray_TArtHODPla(Long_t size, void *p);
   static void delete_TArtHODPla(void *p);
   static void deleteArray_TArtHODPla(void *p);
   static void destruct_TArtHODPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtHODPla*)
   {
      ::TArtHODPla *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtHODPla >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtHODPla", ::TArtHODPla::Class_Version(), "TArtHODPla.hh", 6,
                  typeid(::TArtHODPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtHODPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtHODPla) );
      instance.SetNew(&new_TArtHODPla);
      instance.SetNewArray(&newArray_TArtHODPla);
      instance.SetDelete(&delete_TArtHODPla);
      instance.SetDeleteArray(&deleteArray_TArtHODPla);
      instance.SetDestructor(&destruct_TArtHODPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtHODPla*)
   {
      return GenerateInitInstanceLocal((::TArtHODPla*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtHODPla*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNeutron(void *p = 0);
   static void *newArray_TArtNeutron(Long_t size, void *p);
   static void delete_TArtNeutron(void *p);
   static void deleteArray_TArtNeutron(void *p);
   static void destruct_TArtNeutron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNeutron*)
   {
      ::TArtNeutron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNeutron >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNeutron", ::TArtNeutron::Class_Version(), "TArtNeutron.hh", 7,
                  typeid(::TArtNeutron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNeutron::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNeutron) );
      instance.SetNew(&new_TArtNeutron);
      instance.SetNewArray(&newArray_TArtNeutron);
      instance.SetDelete(&delete_TArtNeutron);
      instance.SetDeleteArray(&deleteArray_TArtNeutron);
      instance.SetDestructor(&destruct_TArtNeutron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNeutron*)
   {
      return GenerateInitInstanceLocal((::TArtNeutron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNeutron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtICF(void *p = 0);
   static void *newArray_TArtICF(Long_t size, void *p);
   static void delete_TArtICF(void *p);
   static void deleteArray_TArtICF(void *p);
   static void destruct_TArtICF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtICF*)
   {
      ::TArtICF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtICF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtICF", ::TArtICF::Class_Version(), "TArtICF.hh", 12,
                  typeid(::TArtICF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtICF::Dictionary, isa_proxy, 4,
                  sizeof(::TArtICF) );
      instance.SetNew(&new_TArtICF);
      instance.SetNewArray(&newArray_TArtICF);
      instance.SetDelete(&delete_TArtICF);
      instance.SetDeleteArray(&deleteArray_TArtICF);
      instance.SetDestructor(&destruct_TArtICF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtICF*)
   {
      return GenerateInitInstanceLocal((::TArtICF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtICF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibSimpleFDC0Track(void *p = 0);
   static void *newArray_TArtCalibSimpleFDC0Track(Long_t size, void *p);
   static void delete_TArtCalibSimpleFDC0Track(void *p);
   static void deleteArray_TArtCalibSimpleFDC0Track(void *p);
   static void destruct_TArtCalibSimpleFDC0Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSimpleFDC0Track*)
   {
      ::TArtCalibSimpleFDC0Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSimpleFDC0Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSimpleFDC0Track", ::TArtCalibSimpleFDC0Track::Class_Version(), "TArtCalibSimpleFDC0Track.hh", 11,
                  typeid(::TArtCalibSimpleFDC0Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSimpleFDC0Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSimpleFDC0Track) );
      instance.SetNew(&new_TArtCalibSimpleFDC0Track);
      instance.SetNewArray(&newArray_TArtCalibSimpleFDC0Track);
      instance.SetDelete(&delete_TArtCalibSimpleFDC0Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibSimpleFDC0Track);
      instance.SetDestructor(&destruct_TArtCalibSimpleFDC0Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSimpleFDC0Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSimpleFDC0Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC0Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNEBULAHPC(void *p = 0);
   static void *newArray_TArtNEBULAHPC(Long_t size, void *p);
   static void delete_TArtNEBULAHPC(void *p);
   static void deleteArray_TArtNEBULAHPC(void *p);
   static void destruct_TArtNEBULAHPC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNEBULAHPC*)
   {
      ::TArtNEBULAHPC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNEBULAHPC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNEBULAHPC", ::TArtNEBULAHPC::Class_Version(), "TArtNEBULAHPC.hh", 10,
                  typeid(::TArtNEBULAHPC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNEBULAHPC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNEBULAHPC) );
      instance.SetNew(&new_TArtNEBULAHPC);
      instance.SetNewArray(&newArray_TArtNEBULAHPC);
      instance.SetDelete(&delete_TArtNEBULAHPC);
      instance.SetDeleteArray(&deleteArray_TArtNEBULAHPC);
      instance.SetDestructor(&destruct_TArtNEBULAHPC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNEBULAHPC*)
   {
      return GenerateInitInstanceLocal((::TArtNEBULAHPC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNEBULAHPC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibRPTOFPla(void *p = 0);
   static void *newArray_TArtCalibRPTOFPla(Long_t size, void *p);
   static void delete_TArtCalibRPTOFPla(void *p);
   static void deleteArray_TArtCalibRPTOFPla(void *p);
   static void destruct_TArtCalibRPTOFPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibRPTOFPla*)
   {
      ::TArtCalibRPTOFPla *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibRPTOFPla >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibRPTOFPla", ::TArtCalibRPTOFPla::Class_Version(), "TArtCalibRPTOFPla.hh", 17,
                  typeid(::TArtCalibRPTOFPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibRPTOFPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibRPTOFPla) );
      instance.SetNew(&new_TArtCalibRPTOFPla);
      instance.SetNewArray(&newArray_TArtCalibRPTOFPla);
      instance.SetDelete(&delete_TArtCalibRPTOFPla);
      instance.SetDeleteArray(&deleteArray_TArtCalibRPTOFPla);
      instance.SetDestructor(&destruct_TArtCalibRPTOFPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibRPTOFPla*)
   {
      return GenerateInitInstanceLocal((::TArtCalibRPTOFPla*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibRPTOFPla*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibHODPla(void *p = 0);
   static void *newArray_TArtCalibHODPla(Long_t size, void *p);
   static void delete_TArtCalibHODPla(void *p);
   static void deleteArray_TArtCalibHODPla(void *p);
   static void destruct_TArtCalibHODPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibHODPla*)
   {
      ::TArtCalibHODPla *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibHODPla >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibHODPla", ::TArtCalibHODPla::Class_Version(), "TArtCalibHODPla.hh", 17,
                  typeid(::TArtCalibHODPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibHODPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibHODPla) );
      instance.SetNew(&new_TArtCalibHODPla);
      instance.SetNewArray(&newArray_TArtCalibHODPla);
      instance.SetDelete(&delete_TArtCalibHODPla);
      instance.SetDeleteArray(&deleteArray_TArtCalibHODPla);
      instance.SetDestructor(&destruct_TArtCalibHODPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibHODPla*)
   {
      return GenerateInitInstanceLocal((::TArtCalibHODPla*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibHODPla*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRPTOFPla(void *p = 0);
   static void *newArray_TArtRPTOFPla(Long_t size, void *p);
   static void delete_TArtRPTOFPla(void *p);
   static void deleteArray_TArtRPTOFPla(void *p);
   static void destruct_TArtRPTOFPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRPTOFPla*)
   {
      ::TArtRPTOFPla *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRPTOFPla >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRPTOFPla", ::TArtRPTOFPla::Class_Version(), "TArtRPTOFPla.hh", 11,
                  typeid(::TArtRPTOFPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRPTOFPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRPTOFPla) );
      instance.SetNew(&new_TArtRPTOFPla);
      instance.SetNewArray(&newArray_TArtRPTOFPla);
      instance.SetDelete(&delete_TArtRPTOFPla);
      instance.SetDeleteArray(&deleteArray_TArtRPTOFPla);
      instance.SetDestructor(&destruct_TArtRPTOFPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRPTOFPla*)
   {
      return GenerateInitInstanceLocal((::TArtRPTOFPla*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRPTOFPla*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibBDC2Track(void *p = 0);
   static void *newArray_TArtCalibBDC2Track(Long_t size, void *p);
   static void delete_TArtCalibBDC2Track(void *p);
   static void deleteArray_TArtCalibBDC2Track(void *p);
   static void destruct_TArtCalibBDC2Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibBDC2Track*)
   {
      ::TArtCalibBDC2Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibBDC2Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibBDC2Track", ::TArtCalibBDC2Track::Class_Version(), "TArtCalibBDC2Track.hh", 11,
                  typeid(::TArtCalibBDC2Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibBDC2Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibBDC2Track) );
      instance.SetNew(&new_TArtCalibBDC2Track);
      instance.SetNewArray(&newArray_TArtCalibBDC2Track);
      instance.SetDelete(&delete_TArtCalibBDC2Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibBDC2Track);
      instance.SetDestructor(&destruct_TArtCalibBDC2Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibBDC2Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibBDC2Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibBDC2Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtHIMEPla(void *p = 0);
   static void *newArray_TArtHIMEPla(Long_t size, void *p);
   static void delete_TArtHIMEPla(void *p);
   static void deleteArray_TArtHIMEPla(void *p);
   static void destruct_TArtHIMEPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtHIMEPla*)
   {
      ::TArtHIMEPla *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtHIMEPla >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtHIMEPla", ::TArtHIMEPla::Class_Version(), "TArtHIMEPla.hh", 10,
                  typeid(::TArtHIMEPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtHIMEPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtHIMEPla) );
      instance.SetNew(&new_TArtHIMEPla);
      instance.SetNewArray(&newArray_TArtHIMEPla);
      instance.SetDelete(&delete_TArtHIMEPla);
      instance.SetDeleteArray(&deleteArray_TArtHIMEPla);
      instance.SetDestructor(&destruct_TArtHIMEPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtHIMEPla*)
   {
      return GenerateInitInstanceLocal((::TArtHIMEPla*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtHIMEPla*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtFragment(void *p = 0);
   static void *newArray_TArtFragment(Long_t size, void *p);
   static void delete_TArtFragment(void *p);
   static void deleteArray_TArtFragment(void *p);
   static void destruct_TArtFragment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtFragment*)
   {
      ::TArtFragment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtFragment >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtFragment", ::TArtFragment::Class_Version(), "TArtFragment.hh", 8,
                  typeid(::TArtFragment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtFragment::Dictionary, isa_proxy, 4,
                  sizeof(::TArtFragment) );
      instance.SetNew(&new_TArtFragment);
      instance.SetNewArray(&newArray_TArtFragment);
      instance.SetDelete(&delete_TArtFragment);
      instance.SetDeleteArray(&deleteArray_TArtFragment);
      instance.SetDestructor(&destruct_TArtFragment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtFragment*)
   {
      return GenerateInitInstanceLocal((::TArtFragment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtFragment*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNEBULAPla(void *p = 0);
   static void *newArray_TArtNEBULAPla(Long_t size, void *p);
   static void delete_TArtNEBULAPla(void *p);
   static void deleteArray_TArtNEBULAPla(void *p);
   static void destruct_TArtNEBULAPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNEBULAPla*)
   {
      ::TArtNEBULAPla *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNEBULAPla >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNEBULAPla", ::TArtNEBULAPla::Class_Version(), "TArtNEBULAPla.hh", 10,
                  typeid(::TArtNEBULAPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNEBULAPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNEBULAPla) );
      instance.SetNew(&new_TArtNEBULAPla);
      instance.SetNewArray(&newArray_TArtNEBULAPla);
      instance.SetDelete(&delete_TArtNEBULAPla);
      instance.SetDeleteArray(&deleteArray_TArtNEBULAPla);
      instance.SetDestructor(&destruct_TArtNEBULAPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNEBULAPla*)
   {
      return GenerateInitInstanceLocal((::TArtNEBULAPla*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNEBULAPla*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNEBULAPlaPara(void *p = 0);
   static void *newArray_TArtNEBULAPlaPara(Long_t size, void *p);
   static void delete_TArtNEBULAPlaPara(void *p);
   static void deleteArray_TArtNEBULAPlaPara(void *p);
   static void destruct_TArtNEBULAPlaPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNEBULAPlaPara*)
   {
      ::TArtNEBULAPlaPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNEBULAPlaPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNEBULAPlaPara", ::TArtNEBULAPlaPara::Class_Version(), "TArtNEBULAPlaPara.hh", 9,
                  typeid(::TArtNEBULAPlaPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNEBULAPlaPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNEBULAPlaPara) );
      instance.SetNew(&new_TArtNEBULAPlaPara);
      instance.SetNewArray(&newArray_TArtNEBULAPlaPara);
      instance.SetDelete(&delete_TArtNEBULAPlaPara);
      instance.SetDeleteArray(&deleteArray_TArtNEBULAPlaPara);
      instance.SetDestructor(&destruct_TArtNEBULAPlaPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNEBULAPlaPara*)
   {
      return GenerateInitInstanceLocal((::TArtNEBULAPlaPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNEBULAPlaPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibNEBULAMult(void *p = 0);
   static void *newArray_TArtCalibNEBULAMult(Long_t size, void *p);
   static void delete_TArtCalibNEBULAMult(void *p);
   static void deleteArray_TArtCalibNEBULAMult(void *p);
   static void destruct_TArtCalibNEBULAMult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibNEBULAMult*)
   {
      ::TArtCalibNEBULAMult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibNEBULAMult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibNEBULAMult", ::TArtCalibNEBULAMult::Class_Version(), "TArtCalibNEBULA.hh", 39,
                  typeid(::TArtCalibNEBULAMult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibNEBULAMult::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibNEBULAMult) );
      instance.SetNew(&new_TArtCalibNEBULAMult);
      instance.SetNewArray(&newArray_TArtCalibNEBULAMult);
      instance.SetDelete(&delete_TArtCalibNEBULAMult);
      instance.SetDeleteArray(&deleteArray_TArtCalibNEBULAMult);
      instance.SetDestructor(&destruct_TArtCalibNEBULAMult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibNEBULAMult*)
   {
      return GenerateInitInstanceLocal((::TArtCalibNEBULAMult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibNEBULAMult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibNEBULA(void *p = 0);
   static void *newArray_TArtCalibNEBULA(Long_t size, void *p);
   static void delete_TArtCalibNEBULA(void *p);
   static void deleteArray_TArtCalibNEBULA(void *p);
   static void destruct_TArtCalibNEBULA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibNEBULA*)
   {
      ::TArtCalibNEBULA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibNEBULA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibNEBULA", ::TArtCalibNEBULA::Class_Version(), "TArtCalibNEBULA.hh", 60,
                  typeid(::TArtCalibNEBULA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibNEBULA::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibNEBULA) );
      instance.SetNew(&new_TArtCalibNEBULA);
      instance.SetNewArray(&newArray_TArtCalibNEBULA);
      instance.SetDelete(&delete_TArtCalibNEBULA);
      instance.SetDeleteArray(&deleteArray_TArtCalibNEBULA);
      instance.SetDestructor(&destruct_TArtCalibNEBULA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibNEBULA*)
   {
      return GenerateInitInstanceLocal((::TArtCalibNEBULA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibNEBULA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtHODPlaPara(void *p = 0);
   static void *newArray_TArtHODPlaPara(Long_t size, void *p);
   static void delete_TArtHODPlaPara(void *p);
   static void deleteArray_TArtHODPlaPara(void *p);
   static void destruct_TArtHODPlaPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtHODPlaPara*)
   {
      ::TArtHODPlaPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtHODPlaPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtHODPlaPara", ::TArtHODPlaPara::Class_Version(), "TArtHODPlaPara.hh", 12,
                  typeid(::TArtHODPlaPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtHODPlaPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtHODPlaPara) );
      instance.SetNew(&new_TArtHODPlaPara);
      instance.SetNewArray(&newArray_TArtHODPlaPara);
      instance.SetDelete(&delete_TArtHODPlaPara);
      instance.SetDeleteArray(&deleteArray_TArtHODPlaPara);
      instance.SetDestructor(&destruct_TArtHODPlaPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtHODPlaPara*)
   {
      return GenerateInitInstanceLocal((::TArtHODPlaPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtHODPlaPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibSAMURAI(void *p = 0);
   static void *newArray_TArtCalibSAMURAI(Long_t size, void *p);
   static void delete_TArtCalibSAMURAI(void *p);
   static void deleteArray_TArtCalibSAMURAI(void *p);
   static void destruct_TArtCalibSAMURAI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSAMURAI*)
   {
      ::TArtCalibSAMURAI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSAMURAI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSAMURAI", ::TArtCalibSAMURAI::Class_Version(), "TArtCalibSAMURAI.hh", 27,
                  typeid(::TArtCalibSAMURAI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSAMURAI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSAMURAI) );
      instance.SetNew(&new_TArtCalibSAMURAI);
      instance.SetNewArray(&newArray_TArtCalibSAMURAI);
      instance.SetDelete(&delete_TArtCalibSAMURAI);
      instance.SetDeleteArray(&deleteArray_TArtCalibSAMURAI);
      instance.SetDestructor(&destruct_TArtCalibSAMURAI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSAMURAI*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSAMURAI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSAMURAI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtDCHit(void *p = 0);
   static void *newArray_TArtDCHit(Long_t size, void *p);
   static void delete_TArtDCHit(void *p);
   static void deleteArray_TArtDCHit(void *p);
   static void destruct_TArtDCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDCHit*)
   {
      ::TArtDCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtDCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtDCHit", ::TArtDCHit::Class_Version(), "TArtDCHit.hh", 6,
                  typeid(::TArtDCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtDCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtDCHit) );
      instance.SetNew(&new_TArtDCHit);
      instance.SetNewArray(&newArray_TArtDCHit);
      instance.SetDelete(&delete_TArtDCHit);
      instance.SetDeleteArray(&deleteArray_TArtDCHit);
      instance.SetDestructor(&destruct_TArtDCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDCHit*)
   {
      return GenerateInitInstanceLocal((::TArtDCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtDCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibSimpleFDC2Track(void *p = 0);
   static void *newArray_TArtCalibSimpleFDC2Track(Long_t size, void *p);
   static void delete_TArtCalibSimpleFDC2Track(void *p);
   static void deleteArray_TArtCalibSimpleFDC2Track(void *p);
   static void destruct_TArtCalibSimpleFDC2Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSimpleFDC2Track*)
   {
      ::TArtCalibSimpleFDC2Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSimpleFDC2Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSimpleFDC2Track", ::TArtCalibSimpleFDC2Track::Class_Version(), "TArtCalibSimpleFDC2Track.hh", 11,
                  typeid(::TArtCalibSimpleFDC2Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSimpleFDC2Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSimpleFDC2Track) );
      instance.SetNew(&new_TArtCalibSimpleFDC2Track);
      instance.SetNewArray(&newArray_TArtCalibSimpleFDC2Track);
      instance.SetDelete(&delete_TArtCalibSimpleFDC2Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibSimpleFDC2Track);
      instance.SetDestructor(&destruct_TArtCalibSimpleFDC2Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSimpleFDC2Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSimpleFDC2Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC2Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRecoSAMURAI(void *p = 0);
   static void *newArray_TArtRecoSAMURAI(Long_t size, void *p);
   static void delete_TArtRecoSAMURAI(void *p);
   static void deleteArray_TArtRecoSAMURAI(void *p);
   static void destruct_TArtRecoSAMURAI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRecoSAMURAI*)
   {
      ::TArtRecoSAMURAI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRecoSAMURAI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRecoSAMURAI", ::TArtRecoSAMURAI::Class_Version(), "TArtRecoSAMURAI.hh", 18,
                  typeid(::TArtRecoSAMURAI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRecoSAMURAI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRecoSAMURAI) );
      instance.SetNew(&new_TArtRecoSAMURAI);
      instance.SetNewArray(&newArray_TArtRecoSAMURAI);
      instance.SetDelete(&delete_TArtRecoSAMURAI);
      instance.SetDeleteArray(&deleteArray_TArtRecoSAMURAI);
      instance.SetDestructor(&destruct_TArtRecoSAMURAI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRecoSAMURAI*)
   {
      return GenerateInitInstanceLocal((::TArtRecoSAMURAI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRecoSAMURAI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibSimpleBDC1Track(void *p = 0);
   static void *newArray_TArtCalibSimpleBDC1Track(Long_t size, void *p);
   static void delete_TArtCalibSimpleBDC1Track(void *p);
   static void deleteArray_TArtCalibSimpleBDC1Track(void *p);
   static void destruct_TArtCalibSimpleBDC1Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSimpleBDC1Track*)
   {
      ::TArtCalibSimpleBDC1Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSimpleBDC1Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSimpleBDC1Track", ::TArtCalibSimpleBDC1Track::Class_Version(), "TArtCalibSimpleBDC1Track.hh", 11,
                  typeid(::TArtCalibSimpleBDC1Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSimpleBDC1Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSimpleBDC1Track) );
      instance.SetNew(&new_TArtCalibSimpleBDC1Track);
      instance.SetNewArray(&newArray_TArtCalibSimpleBDC1Track);
      instance.SetDelete(&delete_TArtCalibSimpleBDC1Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibSimpleBDC1Track);
      instance.SetDestructor(&destruct_TArtCalibSimpleBDC1Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSimpleBDC1Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSimpleBDC1Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC1Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtDCHitPara(void *p = 0);
   static void *newArray_TArtDCHitPara(Long_t size, void *p);
   static void delete_TArtDCHitPara(void *p);
   static void deleteArray_TArtDCHitPara(void *p);
   static void destruct_TArtDCHitPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDCHitPara*)
   {
      ::TArtDCHitPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtDCHitPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtDCHitPara", ::TArtDCHitPara::Class_Version(), "TArtDCHitPara.hh", 12,
                  typeid(::TArtDCHitPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtDCHitPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtDCHitPara) );
      instance.SetNew(&new_TArtDCHitPara);
      instance.SetNewArray(&newArray_TArtDCHitPara);
      instance.SetDelete(&delete_TArtDCHitPara);
      instance.SetDeleteArray(&deleteArray_TArtDCHitPara);
      instance.SetDestructor(&destruct_TArtDCHitPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDCHitPara*)
   {
      return GenerateInitInstanceLocal((::TArtDCHitPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtDCHitPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibHIMEMult(void *p = 0);
   static void *newArray_TArtCalibHIMEMult(Long_t size, void *p);
   static void delete_TArtCalibHIMEMult(void *p);
   static void deleteArray_TArtCalibHIMEMult(void *p);
   static void destruct_TArtCalibHIMEMult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibHIMEMult*)
   {
      ::TArtCalibHIMEMult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibHIMEMult >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibHIMEMult", ::TArtCalibHIMEMult::Class_Version(), "TArtCalibHIME.hh", 41,
                  typeid(::TArtCalibHIMEMult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibHIMEMult::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibHIMEMult) );
      instance.SetNew(&new_TArtCalibHIMEMult);
      instance.SetNewArray(&newArray_TArtCalibHIMEMult);
      instance.SetDelete(&delete_TArtCalibHIMEMult);
      instance.SetDeleteArray(&deleteArray_TArtCalibHIMEMult);
      instance.SetDestructor(&destruct_TArtCalibHIMEMult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibHIMEMult*)
   {
      return GenerateInitInstanceLocal((::TArtCalibHIMEMult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibHIMEMult*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibHIME(void *p = 0);
   static void *newArray_TArtCalibHIME(Long_t size, void *p);
   static void delete_TArtCalibHIME(void *p);
   static void deleteArray_TArtCalibHIME(void *p);
   static void destruct_TArtCalibHIME(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibHIME*)
   {
      ::TArtCalibHIME *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibHIME >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibHIME", ::TArtCalibHIME::Class_Version(), "TArtCalibHIME.hh", 64,
                  typeid(::TArtCalibHIME), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibHIME::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibHIME) );
      instance.SetNew(&new_TArtCalibHIME);
      instance.SetNewArray(&newArray_TArtCalibHIME);
      instance.SetDelete(&delete_TArtCalibHIME);
      instance.SetDeleteArray(&deleteArray_TArtCalibHIME);
      instance.SetDestructor(&destruct_TArtCalibHIME);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibHIME*)
   {
      return GenerateInitInstanceLocal((::TArtCalibHIME*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibHIME*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRPTOFPlaPara(void *p = 0);
   static void *newArray_TArtRPTOFPlaPara(Long_t size, void *p);
   static void delete_TArtRPTOFPlaPara(void *p);
   static void deleteArray_TArtRPTOFPlaPara(void *p);
   static void destruct_TArtRPTOFPlaPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRPTOFPlaPara*)
   {
      ::TArtRPTOFPlaPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRPTOFPlaPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRPTOFPlaPara", ::TArtRPTOFPlaPara::Class_Version(), "TArtRPTOFPlaPara.hh", 12,
                  typeid(::TArtRPTOFPlaPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRPTOFPlaPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRPTOFPlaPara) );
      instance.SetNew(&new_TArtRPTOFPlaPara);
      instance.SetNewArray(&newArray_TArtRPTOFPlaPara);
      instance.SetDelete(&delete_TArtRPTOFPlaPara);
      instance.SetDeleteArray(&deleteArray_TArtRPTOFPlaPara);
      instance.SetDestructor(&destruct_TArtRPTOFPlaPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRPTOFPlaPara*)
   {
      return GenerateInitInstanceLocal((::TArtRPTOFPlaPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRPTOFPlaPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibNeuLANDVETO(void *p = 0);
   static void *newArray_TArtCalibNeuLANDVETO(Long_t size, void *p);
   static void delete_TArtCalibNeuLANDVETO(void *p);
   static void deleteArray_TArtCalibNeuLANDVETO(void *p);
   static void destruct_TArtCalibNeuLANDVETO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibNeuLANDVETO*)
   {
      ::TArtCalibNeuLANDVETO *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibNeuLANDVETO >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibNeuLANDVETO", ::TArtCalibNeuLANDVETO::Class_Version(), "TArtCalibNeuLANDVETO.hh", 37,
                  typeid(::TArtCalibNeuLANDVETO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibNeuLANDVETO::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibNeuLANDVETO) );
      instance.SetNew(&new_TArtCalibNeuLANDVETO);
      instance.SetNewArray(&newArray_TArtCalibNeuLANDVETO);
      instance.SetDelete(&delete_TArtCalibNeuLANDVETO);
      instance.SetDeleteArray(&deleteArray_TArtCalibNeuLANDVETO);
      instance.SetDestructor(&destruct_TArtCalibNeuLANDVETO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibNeuLANDVETO*)
   {
      return GenerateInitInstanceLocal((::TArtCalibNeuLANDVETO*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibNeuLANDVETO*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibFDC2Hit(void *p = 0);
   static void *newArray_TArtCalibFDC2Hit(Long_t size, void *p);
   static void delete_TArtCalibFDC2Hit(void *p);
   static void deleteArray_TArtCalibFDC2Hit(void *p);
   static void destruct_TArtCalibFDC2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibFDC2Hit*)
   {
      ::TArtCalibFDC2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibFDC2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibFDC2Hit", ::TArtCalibFDC2Hit::Class_Version(), "TArtCalibFDC2Hit.hh", 9,
                  typeid(::TArtCalibFDC2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibFDC2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibFDC2Hit) );
      instance.SetNew(&new_TArtCalibFDC2Hit);
      instance.SetNewArray(&newArray_TArtCalibFDC2Hit);
      instance.SetDelete(&delete_TArtCalibFDC2Hit);
      instance.SetDeleteArray(&deleteArray_TArtCalibFDC2Hit);
      instance.SetDestructor(&destruct_TArtCalibFDC2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibFDC2Hit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibFDC2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibFDC2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibBDC1Track(void *p = 0);
   static void *newArray_TArtCalibBDC1Track(Long_t size, void *p);
   static void delete_TArtCalibBDC1Track(void *p);
   static void deleteArray_TArtCalibBDC1Track(void *p);
   static void destruct_TArtCalibBDC1Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibBDC1Track*)
   {
      ::TArtCalibBDC1Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibBDC1Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibBDC1Track", ::TArtCalibBDC1Track::Class_Version(), "TArtCalibBDC1Track.hh", 11,
                  typeid(::TArtCalibBDC1Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibBDC1Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibBDC1Track) );
      instance.SetNew(&new_TArtCalibBDC1Track);
      instance.SetNewArray(&newArray_TArtCalibBDC1Track);
      instance.SetDelete(&delete_TArtCalibBDC1Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibBDC1Track);
      instance.SetDestructor(&destruct_TArtCalibBDC1Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibBDC1Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibBDC1Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibBDC1Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibFDC1Hit(void *p = 0);
   static void *newArray_TArtCalibFDC1Hit(Long_t size, void *p);
   static void delete_TArtCalibFDC1Hit(void *p);
   static void deleteArray_TArtCalibFDC1Hit(void *p);
   static void destruct_TArtCalibFDC1Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibFDC1Hit*)
   {
      ::TArtCalibFDC1Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibFDC1Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibFDC1Hit", ::TArtCalibFDC1Hit::Class_Version(), "TArtCalibFDC1Hit.hh", 9,
                  typeid(::TArtCalibFDC1Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibFDC1Hit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibFDC1Hit) );
      instance.SetNew(&new_TArtCalibFDC1Hit);
      instance.SetNewArray(&newArray_TArtCalibFDC1Hit);
      instance.SetDelete(&delete_TArtCalibFDC1Hit);
      instance.SetDeleteArray(&deleteArray_TArtCalibFDC1Hit);
      instance.SetDestructor(&destruct_TArtCalibFDC1Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibFDC1Hit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibFDC1Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibFDC1Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibNINJA(void *p = 0);
   static void *newArray_TArtCalibNINJA(Long_t size, void *p);
   static void delete_TArtCalibNINJA(void *p);
   static void deleteArray_TArtCalibNINJA(void *p);
   static void destruct_TArtCalibNINJA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibNINJA*)
   {
      ::TArtCalibNINJA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibNINJA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibNINJA", ::TArtCalibNINJA::Class_Version(), "TArtCalibNINJA.hh", 40,
                  typeid(::TArtCalibNINJA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibNINJA::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibNINJA) );
      instance.SetNew(&new_TArtCalibNINJA);
      instance.SetNewArray(&newArray_TArtCalibNINJA);
      instance.SetDelete(&delete_TArtCalibNINJA);
      instance.SetDeleteArray(&deleteArray_TArtCalibNINJA);
      instance.SetDestructor(&destruct_TArtCalibNINJA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibNINJA*)
   {
      return GenerateInitInstanceLocal((::TArtCalibNINJA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibNINJA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibPDCHit(void *p = 0);
   static void *newArray_TArtCalibPDCHit(Long_t size, void *p);
   static void delete_TArtCalibPDCHit(void *p);
   static void deleteArray_TArtCalibPDCHit(void *p);
   static void destruct_TArtCalibPDCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibPDCHit*)
   {
      ::TArtCalibPDCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibPDCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibPDCHit", ::TArtCalibPDCHit::Class_Version(), "TArtCalibPDCHit.hh", 9,
                  typeid(::TArtCalibPDCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibPDCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibPDCHit) );
      instance.SetNew(&new_TArtCalibPDCHit);
      instance.SetNewArray(&newArray_TArtCalibPDCHit);
      instance.SetDelete(&delete_TArtCalibPDCHit);
      instance.SetDeleteArray(&deleteArray_TArtCalibPDCHit);
      instance.SetDestructor(&destruct_TArtCalibPDCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibPDCHit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibPDCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibPDCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibSimpleFDC1Track(void *p = 0);
   static void *newArray_TArtCalibSimpleFDC1Track(Long_t size, void *p);
   static void delete_TArtCalibSimpleFDC1Track(void *p);
   static void deleteArray_TArtCalibSimpleFDC1Track(void *p);
   static void destruct_TArtCalibSimpleFDC1Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSimpleFDC1Track*)
   {
      ::TArtCalibSimpleFDC1Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSimpleFDC1Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSimpleFDC1Track", ::TArtCalibSimpleFDC1Track::Class_Version(), "TArtCalibSimpleFDC1Track.hh", 11,
                  typeid(::TArtCalibSimpleFDC1Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSimpleFDC1Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSimpleFDC1Track) );
      instance.SetNew(&new_TArtCalibSimpleFDC1Track);
      instance.SetNewArray(&newArray_TArtCalibSimpleFDC1Track);
      instance.SetDelete(&delete_TArtCalibSimpleFDC1Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibSimpleFDC1Track);
      instance.SetDestructor(&destruct_TArtCalibSimpleFDC1Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSimpleFDC1Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSimpleFDC1Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC1Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibSimpleBDC2Track(void *p = 0);
   static void *newArray_TArtCalibSimpleBDC2Track(Long_t size, void *p);
   static void delete_TArtCalibSimpleBDC2Track(void *p);
   static void deleteArray_TArtCalibSimpleBDC2Track(void *p);
   static void destruct_TArtCalibSimpleBDC2Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSimpleBDC2Track*)
   {
      ::TArtCalibSimpleBDC2Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSimpleBDC2Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSimpleBDC2Track", ::TArtCalibSimpleBDC2Track::Class_Version(), "TArtCalibSimpleBDC2Track.hh", 11,
                  typeid(::TArtCalibSimpleBDC2Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSimpleBDC2Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSimpleBDC2Track) );
      instance.SetNew(&new_TArtCalibSimpleBDC2Track);
      instance.SetNewArray(&newArray_TArtCalibSimpleBDC2Track);
      instance.SetDelete(&delete_TArtCalibSimpleBDC2Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibSimpleBDC2Track);
      instance.SetDestructor(&destruct_TArtCalibSimpleBDC2Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSimpleBDC2Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSimpleBDC2Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC2Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibRPDCHit(void *p = 0);
   static void *newArray_TArtCalibRPDCHit(Long_t size, void *p);
   static void delete_TArtCalibRPDCHit(void *p);
   static void deleteArray_TArtCalibRPDCHit(void *p);
   static void destruct_TArtCalibRPDCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibRPDCHit*)
   {
      ::TArtCalibRPDCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibRPDCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibRPDCHit", ::TArtCalibRPDCHit::Class_Version(), "TArtCalibRPDCHit.hh", 9,
                  typeid(::TArtCalibRPDCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibRPDCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibRPDCHit) );
      instance.SetNew(&new_TArtCalibRPDCHit);
      instance.SetNewArray(&newArray_TArtCalibRPDCHit);
      instance.SetDelete(&delete_TArtCalibRPDCHit);
      instance.SetDeleteArray(&deleteArray_TArtCalibRPDCHit);
      instance.SetDestructor(&destruct_TArtCalibRPDCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibRPDCHit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibRPDCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibRPDCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRecoFragment(void *p = 0);
   static void *newArray_TArtRecoFragment(Long_t size, void *p);
   static void delete_TArtRecoFragment(void *p);
   static void deleteArray_TArtRecoFragment(void *p);
   static void destruct_TArtRecoFragment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRecoFragment*)
   {
      ::TArtRecoFragment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRecoFragment >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRecoFragment", ::TArtRecoFragment::Class_Version(), "TArtRecoFragment.hh", 41,
                  typeid(::TArtRecoFragment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRecoFragment::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRecoFragment) );
      instance.SetNew(&new_TArtRecoFragment);
      instance.SetNewArray(&newArray_TArtRecoFragment);
      instance.SetDelete(&delete_TArtRecoFragment);
      instance.SetDeleteArray(&deleteArray_TArtRecoFragment);
      instance.SetDestructor(&destruct_TArtRecoFragment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRecoFragment*)
   {
      return GenerateInitInstanceLocal((::TArtRecoFragment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRecoFragment*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibICF(void *p = 0);
   static void *newArray_TArtCalibICF(Long_t size, void *p);
   static void delete_TArtCalibICF(void *p);
   static void deleteArray_TArtCalibICF(void *p);
   static void destruct_TArtCalibICF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibICF*)
   {
      ::TArtCalibICF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibICF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibICF", ::TArtCalibICF::Class_Version(), "TArtCalibICF.hh", 14,
                  typeid(::TArtCalibICF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibICF::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibICF) );
      instance.SetNew(&new_TArtCalibICF);
      instance.SetNewArray(&newArray_TArtCalibICF);
      instance.SetDelete(&delete_TArtCalibICF);
      instance.SetDeleteArray(&deleteArray_TArtCalibICF);
      instance.SetDestructor(&destruct_TArtCalibICF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibICF*)
   {
      return GenerateInitInstanceLocal((::TArtCalibICF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibICF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibBDC2Hit(void *p = 0);
   static void *newArray_TArtCalibBDC2Hit(Long_t size, void *p);
   static void delete_TArtCalibBDC2Hit(void *p);
   static void deleteArray_TArtCalibBDC2Hit(void *p);
   static void destruct_TArtCalibBDC2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibBDC2Hit*)
   {
      ::TArtCalibBDC2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibBDC2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibBDC2Hit", ::TArtCalibBDC2Hit::Class_Version(), "TArtCalibBDC2Hit.hh", 9,
                  typeid(::TArtCalibBDC2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibBDC2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibBDC2Hit) );
      instance.SetNew(&new_TArtCalibBDC2Hit);
      instance.SetNewArray(&newArray_TArtCalibBDC2Hit);
      instance.SetDelete(&delete_TArtCalibBDC2Hit);
      instance.SetDeleteArray(&deleteArray_TArtCalibBDC2Hit);
      instance.SetDestructor(&destruct_TArtCalibBDC2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibBDC2Hit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibBDC2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibBDC2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibS1DC2Hit(void *p = 0);
   static void *newArray_TArtCalibS1DC2Hit(Long_t size, void *p);
   static void delete_TArtCalibS1DC2Hit(void *p);
   static void deleteArray_TArtCalibS1DC2Hit(void *p);
   static void destruct_TArtCalibS1DC2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibS1DC2Hit*)
   {
      ::TArtCalibS1DC2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibS1DC2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibS1DC2Hit", ::TArtCalibS1DC2Hit::Class_Version(), "TArtCalibS1DC2Hit.hh", 9,
                  typeid(::TArtCalibS1DC2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibS1DC2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibS1DC2Hit) );
      instance.SetNew(&new_TArtCalibS1DC2Hit);
      instance.SetNewArray(&newArray_TArtCalibS1DC2Hit);
      instance.SetDelete(&delete_TArtCalibS1DC2Hit);
      instance.SetDeleteArray(&deleteArray_TArtCalibS1DC2Hit);
      instance.SetDestructor(&destruct_TArtCalibS1DC2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibS1DC2Hit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibS1DC2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibS1DC2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibFDC0Track(void *p = 0);
   static void *newArray_TArtCalibFDC0Track(Long_t size, void *p);
   static void delete_TArtCalibFDC0Track(void *p);
   static void deleteArray_TArtCalibFDC0Track(void *p);
   static void destruct_TArtCalibFDC0Track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibFDC0Track*)
   {
      ::TArtCalibFDC0Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibFDC0Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibFDC0Track", ::TArtCalibFDC0Track::Class_Version(), "TArtCalibFDC0Track.hh", 11,
                  typeid(::TArtCalibFDC0Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibFDC0Track::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibFDC0Track) );
      instance.SetNew(&new_TArtCalibFDC0Track);
      instance.SetNewArray(&newArray_TArtCalibFDC0Track);
      instance.SetDelete(&delete_TArtCalibFDC0Track);
      instance.SetDeleteArray(&deleteArray_TArtCalibFDC0Track);
      instance.SetDestructor(&destruct_TArtCalibFDC0Track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibFDC0Track*)
   {
      return GenerateInitInstanceLocal((::TArtCalibFDC0Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibFDC0Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTEDCsI(void *p = 0);
   static void *newArray_TArtTEDCsI(Long_t size, void *p);
   static void delete_TArtTEDCsI(void *p);
   static void deleteArray_TArtTEDCsI(void *p);
   static void destruct_TArtTEDCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTEDCsI*)
   {
      ::TArtTEDCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTEDCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTEDCsI", ::TArtTEDCsI::Class_Version(), "TArtTEDCsI.hh", 6,
                  typeid(::TArtTEDCsI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTEDCsI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTEDCsI) );
      instance.SetNew(&new_TArtTEDCsI);
      instance.SetNewArray(&newArray_TArtTEDCsI);
      instance.SetDelete(&delete_TArtTEDCsI);
      instance.SetDeleteArray(&deleteArray_TArtTEDCsI);
      instance.SetDestructor(&destruct_TArtTEDCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTEDCsI*)
   {
      return GenerateInitInstanceLocal((::TArtTEDCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTEDCsI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibS1DC1Hit(void *p = 0);
   static void *newArray_TArtCalibS1DC1Hit(Long_t size, void *p);
   static void delete_TArtCalibS1DC1Hit(void *p);
   static void deleteArray_TArtCalibS1DC1Hit(void *p);
   static void destruct_TArtCalibS1DC1Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibS1DC1Hit*)
   {
      ::TArtCalibS1DC1Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibS1DC1Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibS1DC1Hit", ::TArtCalibS1DC1Hit::Class_Version(), "TArtCalibS1DC1Hit.hh", 9,
                  typeid(::TArtCalibS1DC1Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibS1DC1Hit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibS1DC1Hit) );
      instance.SetNew(&new_TArtCalibS1DC1Hit);
      instance.SetNewArray(&newArray_TArtCalibS1DC1Hit);
      instance.SetDelete(&delete_TArtCalibS1DC1Hit);
      instance.SetDeleteArray(&deleteArray_TArtCalibS1DC1Hit);
      instance.SetDestructor(&destruct_TArtCalibS1DC1Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibS1DC1Hit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibS1DC1Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibS1DC1Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibNEBULAHPC(void *p = 0);
   static void *newArray_TArtCalibNEBULAHPC(Long_t size, void *p);
   static void delete_TArtCalibNEBULAHPC(void *p);
   static void deleteArray_TArtCalibNEBULAHPC(void *p);
   static void destruct_TArtCalibNEBULAHPC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibNEBULAHPC*)
   {
      ::TArtCalibNEBULAHPC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibNEBULAHPC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibNEBULAHPC", ::TArtCalibNEBULAHPC::Class_Version(), "TArtCalibNEBULAHPC.hh", 24,
                  typeid(::TArtCalibNEBULAHPC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibNEBULAHPC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibNEBULAHPC) );
      instance.SetNew(&new_TArtCalibNEBULAHPC);
      instance.SetNewArray(&newArray_TArtCalibNEBULAHPC);
      instance.SetDelete(&delete_TArtCalibNEBULAHPC);
      instance.SetDeleteArray(&deleteArray_TArtCalibNEBULAHPC);
      instance.SetDestructor(&destruct_TArtCalibNEBULAHPC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibNEBULAHPC*)
   {
      return GenerateInitInstanceLocal((::TArtCalibNEBULAHPC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibNEBULAHPC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtNEBULAHPCPara(void *p = 0);
   static void *newArray_TArtNEBULAHPCPara(Long_t size, void *p);
   static void delete_TArtNEBULAHPCPara(void *p);
   static void deleteArray_TArtNEBULAHPCPara(void *p);
   static void destruct_TArtNEBULAHPCPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtNEBULAHPCPara*)
   {
      ::TArtNEBULAHPCPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtNEBULAHPCPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtNEBULAHPCPara", ::TArtNEBULAHPCPara::Class_Version(), "TArtNEBULAHPCPara.hh", 9,
                  typeid(::TArtNEBULAHPCPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtNEBULAHPCPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtNEBULAHPCPara) );
      instance.SetNew(&new_TArtNEBULAHPCPara);
      instance.SetNewArray(&newArray_TArtNEBULAHPCPara);
      instance.SetDelete(&delete_TArtNEBULAHPCPara);
      instance.SetDeleteArray(&deleteArray_TArtNEBULAHPCPara);
      instance.SetDestructor(&destruct_TArtNEBULAHPCPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtNEBULAHPCPara*)
   {
      return GenerateInitInstanceLocal((::TArtNEBULAHPCPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtNEBULAHPCPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibSAMURAITZero(void *p = 0);
   static void *newArray_TArtCalibSAMURAITZero(Long_t size, void *p);
   static void delete_TArtCalibSAMURAITZero(void *p);
   static void deleteArray_TArtCalibSAMURAITZero(void *p);
   static void destruct_TArtCalibSAMURAITZero(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSAMURAITZero*)
   {
      ::TArtCalibSAMURAITZero *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSAMURAITZero >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSAMURAITZero", ::TArtCalibSAMURAITZero::Class_Version(), "TArtCalibSAMURAITZero.hh", 14,
                  typeid(::TArtCalibSAMURAITZero), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSAMURAITZero::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSAMURAITZero) );
      instance.SetNew(&new_TArtCalibSAMURAITZero);
      instance.SetNewArray(&newArray_TArtCalibSAMURAITZero);
      instance.SetDelete(&delete_TArtCalibSAMURAITZero);
      instance.SetDeleteArray(&deleteArray_TArtCalibSAMURAITZero);
      instance.SetDestructor(&destruct_TArtCalibSAMURAITZero);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSAMURAITZero*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSAMURAITZero*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSAMURAITZero*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibTEDCsI(void *p = 0);
   static void *newArray_TArtCalibTEDCsI(Long_t size, void *p);
   static void delete_TArtCalibTEDCsI(void *p);
   static void deleteArray_TArtCalibTEDCsI(void *p);
   static void destruct_TArtCalibTEDCsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibTEDCsI*)
   {
      ::TArtCalibTEDCsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibTEDCsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibTEDCsI", ::TArtCalibTEDCsI::Class_Version(), "TArtCalibTEDCsI.hh", 17,
                  typeid(::TArtCalibTEDCsI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibTEDCsI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibTEDCsI) );
      instance.SetNew(&new_TArtCalibTEDCsI);
      instance.SetNewArray(&newArray_TArtCalibTEDCsI);
      instance.SetDelete(&delete_TArtCalibTEDCsI);
      instance.SetDeleteArray(&deleteArray_TArtCalibTEDCsI);
      instance.SetDestructor(&destruct_TArtCalibTEDCsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibTEDCsI*)
   {
      return GenerateInitInstanceLocal((::TArtCalibTEDCsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibTEDCsI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRecoNeutron(void *p = 0);
   static void *newArray_TArtRecoNeutron(Long_t size, void *p);
   static void delete_TArtRecoNeutron(void *p);
   static void deleteArray_TArtRecoNeutron(void *p);
   static void destruct_TArtRecoNeutron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRecoNeutron*)
   {
      ::TArtRecoNeutron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRecoNeutron >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRecoNeutron", ::TArtRecoNeutron::Class_Version(), "TArtRecoNeutron.hh", 15,
                  typeid(::TArtRecoNeutron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRecoNeutron::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRecoNeutron) );
      instance.SetNew(&new_TArtRecoNeutron);
      instance.SetNewArray(&newArray_TArtRecoNeutron);
      instance.SetDelete(&delete_TArtRecoNeutron);
      instance.SetDeleteArray(&deleteArray_TArtRecoNeutron);
      instance.SetDestructor(&destruct_TArtRecoNeutron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRecoNeutron*)
   {
      return GenerateInitInstanceLocal((::TArtRecoNeutron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRecoNeutron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibPDCTrack(void *p = 0);
   static void *newArray_TArtCalibPDCTrack(Long_t size, void *p);
   static void delete_TArtCalibPDCTrack(void *p);
   static void deleteArray_TArtCalibPDCTrack(void *p);
   static void destruct_TArtCalibPDCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibPDCTrack*)
   {
      ::TArtCalibPDCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibPDCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibPDCTrack", ::TArtCalibPDCTrack::Class_Version(), "TArtCalibPDCTrack.hh", 17,
                  typeid(::TArtCalibPDCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibPDCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibPDCTrack) );
      instance.SetNew(&new_TArtCalibPDCTrack);
      instance.SetNewArray(&newArray_TArtCalibPDCTrack);
      instance.SetDelete(&delete_TArtCalibPDCTrack);
      instance.SetDeleteArray(&deleteArray_TArtCalibPDCTrack);
      instance.SetDestructor(&destruct_TArtCalibPDCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibPDCTrack*)
   {
      return GenerateInitInstanceLocal((::TArtCalibPDCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibPDCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtTacquilaMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTacquilaMap::Class_Name()
{
   return "TArtTacquilaMap";
}

//______________________________________________________________________________
const char *TArtTacquilaMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTacquilaMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTacquilaMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTacquilaMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTacquilaMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTacquilaMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTacquilaMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTacquilaMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtHIMEFilter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtHIMEFilter::Class_Name()
{
   return "TArtHIMEFilter";
}

//______________________________________________________________________________
const char *TArtHIMEFilter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEFilter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtHIMEFilter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEFilter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtHIMEFilter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEFilter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtHIMEFilter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEFilter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibDCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibDCTrack::Class_Name()
{
   return "TArtCalibDCTrack";
}

//______________________________________________________________________________
const char *TArtCalibDCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibDCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibDCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibDCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibFDC2Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibFDC2Track::Class_Name()
{
   return "TArtCalibFDC2Track";
}

//______________________________________________________________________________
const char *TArtCalibFDC2Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC2Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibFDC2Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC2Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibFDC2Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC2Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibFDC2Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC2Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibRPDCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibRPDCTrack::Class_Name()
{
   return "TArtCalibRPDCTrack";
}

//______________________________________________________________________________
const char *TArtCalibRPDCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPDCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibRPDCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPDCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibRPDCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPDCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibRPDCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPDCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNINJAPla::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNINJAPla::Class_Name()
{
   return "TArtNINJAPla";
}

//______________________________________________________________________________
const char *TArtNINJAPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNINJAPla*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNINJAPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNINJAPla*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNINJAPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNINJAPla*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNINJAPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNINJAPla*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtDCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtDCTrack::Class_Name()
{
   return "TArtDCTrack";
}

//______________________________________________________________________________
const char *TArtDCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtDCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtDCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtDCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibDCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibDCHit::Class_Name()
{
   return "TArtCalibDCHit";
}

//______________________________________________________________________________
const char *TArtCalibDCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibDCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibDCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibDCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDCHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibBDC1Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibBDC1Hit::Class_Name()
{
   return "TArtCalibBDC1Hit";
}

//______________________________________________________________________________
const char *TArtCalibBDC1Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC1Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibBDC1Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC1Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibBDC1Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC1Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibBDC1Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC1Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtHIMEPlaPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtHIMEPlaPara::Class_Name()
{
   return "TArtHIMEPlaPara";
}

//______________________________________________________________________________
const char *TArtHIMEPlaPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEPlaPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtHIMEPlaPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEPlaPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtHIMEPlaPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEPlaPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtHIMEPlaPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEPlaPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNEBULAFilter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNEBULAFilter::Class_Name()
{
   return "TArtNEBULAFilter";
}

//______________________________________________________________________________
const char *TArtNEBULAFilter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAFilter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNEBULAFilter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAFilter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNEBULAFilter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAFilter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNEBULAFilter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAFilter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibBPCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibBPCHit::Class_Name()
{
   return "TArtCalibBPCHit";
}

//______________________________________________________________________________
const char *TArtCalibBPCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBPCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibBPCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBPCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibBPCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBPCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibBPCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBPCHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSimpleDCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSimpleDCTrack::Class_Name()
{
   return "TArtCalibSimpleDCTrack";
}

//______________________________________________________________________________
const char *TArtCalibSimpleDCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleDCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSimpleDCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleDCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSimpleDCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleDCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSimpleDCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleDCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtSAMURAIParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtSAMURAIParameters::Class_Name()
{
   return "TArtSAMURAIParameters";
}

//______________________________________________________________________________
const char *TArtSAMURAIParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSAMURAIParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtSAMURAIParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSAMURAIParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtSAMURAIParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSAMURAIParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtSAMURAIParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSAMURAIParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNeuLANDPla::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNeuLANDPla::Class_Name()
{
   return "TArtNeuLANDPla";
}

//______________________________________________________________________________
const char *TArtNeuLANDPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNeuLANDPla*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNeuLANDPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNeuLANDPla*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNeuLANDPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNeuLANDPla*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNeuLANDPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNeuLANDPla*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTacquilaPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTacquilaPara::Class_Name()
{
   return "TArtTacquilaPara";
}

//______________________________________________________________________________
const char *TArtTacquilaPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTacquilaPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTacquilaPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTacquilaPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTacquilaPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTacquilaPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTacquilaPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTacquilaPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNeuLANDPlaPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNeuLANDPlaPara::Class_Name()
{
   return "TArtNeuLANDPlaPara";
}

//______________________________________________________________________________
const char *TArtNeuLANDPlaPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNeuLANDPlaPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNeuLANDPlaPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNeuLANDPlaPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNeuLANDPlaPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNeuLANDPlaPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNeuLANDPlaPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNeuLANDPlaPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibNeuLAND::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibNeuLAND::Class_Name()
{
   return "TArtCalibNeuLAND";
}

//______________________________________________________________________________
const char *TArtCalibNeuLAND::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNeuLAND*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibNeuLAND::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNeuLAND*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibNeuLAND::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNeuLAND*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibNeuLAND::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNeuLAND*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalcGlobalTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalcGlobalTrack::Class_Name()
{
   return "TArtCalcGlobalTrack";
}

//______________________________________________________________________________
const char *TArtCalcGlobalTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalcGlobalTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalcGlobalTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalcGlobalTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalcGlobalTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalcGlobalTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalcGlobalTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalcGlobalTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibFDC0Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibFDC0Hit::Class_Name()
{
   return "TArtCalibFDC0Hit";
}

//______________________________________________________________________________
const char *TArtCalibFDC0Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC0Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibFDC0Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC0Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibFDC0Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC0Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibFDC0Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC0Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibFDC1Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibFDC1Track::Class_Name()
{
   return "TArtCalibFDC1Track";
}

//______________________________________________________________________________
const char *TArtCalibFDC1Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC1Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibFDC1Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC1Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibFDC1Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC1Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibFDC1Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC1Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTEDCsIPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTEDCsIPara::Class_Name()
{
   return "TArtTEDCsIPara";
}

//______________________________________________________________________________
const char *TArtTEDCsIPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTEDCsIPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTEDCsIPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTEDCsIPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTEDCsIPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTEDCsIPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTEDCsIPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTEDCsIPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibS1DC2Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibS1DC2Track::Class_Name()
{
   return "TArtCalibS1DC2Track";
}

//______________________________________________________________________________
const char *TArtCalibS1DC2Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC2Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibS1DC2Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC2Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibS1DC2Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC2Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibS1DC2Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC2Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNINJAPlaPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNINJAPlaPara::Class_Name()
{
   return "TArtNINJAPlaPara";
}

//______________________________________________________________________________
const char *TArtNINJAPlaPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNINJAPlaPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNINJAPlaPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNINJAPlaPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNINJAPlaPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNINJAPlaPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNINJAPlaPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNINJAPlaPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTZero::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTZero::Class_Name()
{
   return "TArtTZero";
}

//______________________________________________________________________________
const char *TArtTZero::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTZero*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTZero::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTZero*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTZero::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTZero*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTZero::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTZero*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibS1DC1Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibS1DC1Track::Class_Name()
{
   return "TArtCalibS1DC1Track";
}

//______________________________________________________________________________
const char *TArtCalibS1DC1Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC1Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibS1DC1Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC1Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibS1DC1Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC1Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibS1DC1Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC1Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtHODPla::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtHODPla::Class_Name()
{
   return "TArtHODPla";
}

//______________________________________________________________________________
const char *TArtHODPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHODPla*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtHODPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHODPla*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtHODPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHODPla*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtHODPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHODPla*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNeutron::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNeutron::Class_Name()
{
   return "TArtNeutron";
}

//______________________________________________________________________________
const char *TArtNeutron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNeutron*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNeutron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNeutron*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNeutron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNeutron*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNeutron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNeutron*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtICF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtICF::Class_Name()
{
   return "TArtICF";
}

//______________________________________________________________________________
const char *TArtICF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtICF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtICF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtICF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtICF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtICF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtICF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtICF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSimpleFDC0Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSimpleFDC0Track::Class_Name()
{
   return "TArtCalibSimpleFDC0Track";
}

//______________________________________________________________________________
const char *TArtCalibSimpleFDC0Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC0Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSimpleFDC0Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC0Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSimpleFDC0Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC0Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSimpleFDC0Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC0Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNEBULAHPC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNEBULAHPC::Class_Name()
{
   return "TArtNEBULAHPC";
}

//______________________________________________________________________________
const char *TArtNEBULAHPC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAHPC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNEBULAHPC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAHPC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNEBULAHPC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAHPC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNEBULAHPC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAHPC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibRPTOFPla::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibRPTOFPla::Class_Name()
{
   return "TArtCalibRPTOFPla";
}

//______________________________________________________________________________
const char *TArtCalibRPTOFPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPTOFPla*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibRPTOFPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPTOFPla*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibRPTOFPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPTOFPla*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibRPTOFPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPTOFPla*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibHODPla::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibHODPla::Class_Name()
{
   return "TArtCalibHODPla";
}

//______________________________________________________________________________
const char *TArtCalibHODPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHODPla*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibHODPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHODPla*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibHODPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHODPla*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibHODPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHODPla*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRPTOFPla::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRPTOFPla::Class_Name()
{
   return "TArtRPTOFPla";
}

//______________________________________________________________________________
const char *TArtRPTOFPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRPTOFPla*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRPTOFPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRPTOFPla*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRPTOFPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRPTOFPla*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRPTOFPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRPTOFPla*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibBDC2Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibBDC2Track::Class_Name()
{
   return "TArtCalibBDC2Track";
}

//______________________________________________________________________________
const char *TArtCalibBDC2Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC2Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibBDC2Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC2Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibBDC2Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC2Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibBDC2Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC2Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtHIMEPla::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtHIMEPla::Class_Name()
{
   return "TArtHIMEPla";
}

//______________________________________________________________________________
const char *TArtHIMEPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEPla*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtHIMEPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEPla*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtHIMEPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEPla*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtHIMEPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHIMEPla*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtFragment::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtFragment::Class_Name()
{
   return "TArtFragment";
}

//______________________________________________________________________________
const char *TArtFragment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFragment*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtFragment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFragment*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtFragment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFragment*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtFragment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFragment*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNEBULAPla::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNEBULAPla::Class_Name()
{
   return "TArtNEBULAPla";
}

//______________________________________________________________________________
const char *TArtNEBULAPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAPla*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNEBULAPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAPla*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNEBULAPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAPla*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNEBULAPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAPla*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNEBULAPlaPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNEBULAPlaPara::Class_Name()
{
   return "TArtNEBULAPlaPara";
}

//______________________________________________________________________________
const char *TArtNEBULAPlaPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAPlaPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNEBULAPlaPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAPlaPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNEBULAPlaPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAPlaPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNEBULAPlaPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAPlaPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibNEBULAMult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibNEBULAMult::Class_Name()
{
   return "TArtCalibNEBULAMult";
}

//______________________________________________________________________________
const char *TArtCalibNEBULAMult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULAMult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibNEBULAMult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULAMult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibNEBULAMult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULAMult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibNEBULAMult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULAMult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibNEBULA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibNEBULA::Class_Name()
{
   return "TArtCalibNEBULA";
}

//______________________________________________________________________________
const char *TArtCalibNEBULA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibNEBULA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibNEBULA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibNEBULA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtHODPlaPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtHODPlaPara::Class_Name()
{
   return "TArtHODPlaPara";
}

//______________________________________________________________________________
const char *TArtHODPlaPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHODPlaPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtHODPlaPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtHODPlaPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtHODPlaPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHODPlaPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtHODPlaPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtHODPlaPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSAMURAI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSAMURAI::Class_Name()
{
   return "TArtCalibSAMURAI";
}

//______________________________________________________________________________
const char *TArtCalibSAMURAI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSAMURAI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSAMURAI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSAMURAI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSAMURAI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSAMURAI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSAMURAI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSAMURAI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtDCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtDCHit::Class_Name()
{
   return "TArtDCHit";
}

//______________________________________________________________________________
const char *TArtDCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtDCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtDCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtDCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDCHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSimpleFDC2Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSimpleFDC2Track::Class_Name()
{
   return "TArtCalibSimpleFDC2Track";
}

//______________________________________________________________________________
const char *TArtCalibSimpleFDC2Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC2Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSimpleFDC2Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC2Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSimpleFDC2Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC2Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSimpleFDC2Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC2Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRecoSAMURAI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRecoSAMURAI::Class_Name()
{
   return "TArtRecoSAMURAI";
}

//______________________________________________________________________________
const char *TArtRecoSAMURAI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoSAMURAI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRecoSAMURAI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoSAMURAI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRecoSAMURAI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoSAMURAI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRecoSAMURAI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoSAMURAI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSimpleBDC1Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSimpleBDC1Track::Class_Name()
{
   return "TArtCalibSimpleBDC1Track";
}

//______________________________________________________________________________
const char *TArtCalibSimpleBDC1Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC1Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSimpleBDC1Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC1Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSimpleBDC1Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC1Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSimpleBDC1Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC1Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtDCHitPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtDCHitPara::Class_Name()
{
   return "TArtDCHitPara";
}

//______________________________________________________________________________
const char *TArtDCHitPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDCHitPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtDCHitPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDCHitPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtDCHitPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDCHitPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtDCHitPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDCHitPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibHIMEMult::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibHIMEMult::Class_Name()
{
   return "TArtCalibHIMEMult";
}

//______________________________________________________________________________
const char *TArtCalibHIMEMult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHIMEMult*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibHIMEMult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHIMEMult*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibHIMEMult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHIMEMult*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibHIMEMult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHIMEMult*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibHIME::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibHIME::Class_Name()
{
   return "TArtCalibHIME";
}

//______________________________________________________________________________
const char *TArtCalibHIME::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHIME*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibHIME::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHIME*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibHIME::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHIME*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibHIME::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibHIME*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRPTOFPlaPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRPTOFPlaPara::Class_Name()
{
   return "TArtRPTOFPlaPara";
}

//______________________________________________________________________________
const char *TArtRPTOFPlaPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRPTOFPlaPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRPTOFPlaPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRPTOFPlaPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRPTOFPlaPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRPTOFPlaPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRPTOFPlaPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRPTOFPlaPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibNeuLANDVETO::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibNeuLANDVETO::Class_Name()
{
   return "TArtCalibNeuLANDVETO";
}

//______________________________________________________________________________
const char *TArtCalibNeuLANDVETO::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNeuLANDVETO*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibNeuLANDVETO::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNeuLANDVETO*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibNeuLANDVETO::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNeuLANDVETO*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibNeuLANDVETO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNeuLANDVETO*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibFDC2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibFDC2Hit::Class_Name()
{
   return "TArtCalibFDC2Hit";
}

//______________________________________________________________________________
const char *TArtCalibFDC2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibFDC2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibFDC2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibFDC2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibBDC1Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibBDC1Track::Class_Name()
{
   return "TArtCalibBDC1Track";
}

//______________________________________________________________________________
const char *TArtCalibBDC1Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC1Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibBDC1Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC1Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibBDC1Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC1Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibBDC1Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC1Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibFDC1Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibFDC1Hit::Class_Name()
{
   return "TArtCalibFDC1Hit";
}

//______________________________________________________________________________
const char *TArtCalibFDC1Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC1Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibFDC1Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC1Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibFDC1Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC1Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibFDC1Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC1Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibNINJA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibNINJA::Class_Name()
{
   return "TArtCalibNINJA";
}

//______________________________________________________________________________
const char *TArtCalibNINJA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNINJA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibNINJA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNINJA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibNINJA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNINJA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibNINJA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNINJA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibPDCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibPDCHit::Class_Name()
{
   return "TArtCalibPDCHit";
}

//______________________________________________________________________________
const char *TArtCalibPDCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPDCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibPDCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPDCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibPDCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPDCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibPDCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPDCHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSimpleFDC1Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSimpleFDC1Track::Class_Name()
{
   return "TArtCalibSimpleFDC1Track";
}

//______________________________________________________________________________
const char *TArtCalibSimpleFDC1Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC1Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSimpleFDC1Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC1Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSimpleFDC1Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC1Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSimpleFDC1Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleFDC1Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSimpleBDC2Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSimpleBDC2Track::Class_Name()
{
   return "TArtCalibSimpleBDC2Track";
}

//______________________________________________________________________________
const char *TArtCalibSimpleBDC2Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC2Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSimpleBDC2Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC2Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSimpleBDC2Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC2Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSimpleBDC2Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSimpleBDC2Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibRPDCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibRPDCHit::Class_Name()
{
   return "TArtCalibRPDCHit";
}

//______________________________________________________________________________
const char *TArtCalibRPDCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPDCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibRPDCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPDCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibRPDCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPDCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibRPDCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRPDCHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRecoFragment::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRecoFragment::Class_Name()
{
   return "TArtRecoFragment";
}

//______________________________________________________________________________
const char *TArtRecoFragment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoFragment*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRecoFragment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoFragment*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRecoFragment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoFragment*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRecoFragment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoFragment*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibICF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibICF::Class_Name()
{
   return "TArtCalibICF";
}

//______________________________________________________________________________
const char *TArtCalibICF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibICF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibICF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibICF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibICF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibICF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibICF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibICF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibBDC2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibBDC2Hit::Class_Name()
{
   return "TArtCalibBDC2Hit";
}

//______________________________________________________________________________
const char *TArtCalibBDC2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibBDC2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibBDC2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibBDC2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibS1DC2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibS1DC2Hit::Class_Name()
{
   return "TArtCalibS1DC2Hit";
}

//______________________________________________________________________________
const char *TArtCalibS1DC2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibS1DC2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibS1DC2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibS1DC2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibFDC0Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibFDC0Track::Class_Name()
{
   return "TArtCalibFDC0Track";
}

//______________________________________________________________________________
const char *TArtCalibFDC0Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC0Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibFDC0Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC0Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibFDC0Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC0Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibFDC0Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFDC0Track*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTEDCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTEDCsI::Class_Name()
{
   return "TArtTEDCsI";
}

//______________________________________________________________________________
const char *TArtTEDCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTEDCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTEDCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTEDCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTEDCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTEDCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTEDCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTEDCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibS1DC1Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibS1DC1Hit::Class_Name()
{
   return "TArtCalibS1DC1Hit";
}

//______________________________________________________________________________
const char *TArtCalibS1DC1Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC1Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibS1DC1Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC1Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibS1DC1Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC1Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibS1DC1Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibS1DC1Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibNEBULAHPC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibNEBULAHPC::Class_Name()
{
   return "TArtCalibNEBULAHPC";
}

//______________________________________________________________________________
const char *TArtCalibNEBULAHPC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULAHPC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibNEBULAHPC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULAHPC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibNEBULAHPC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULAHPC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibNEBULAHPC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibNEBULAHPC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtNEBULAHPCPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtNEBULAHPCPara::Class_Name()
{
   return "TArtNEBULAHPCPara";
}

//______________________________________________________________________________
const char *TArtNEBULAHPCPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAHPCPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtNEBULAHPCPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAHPCPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtNEBULAHPCPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAHPCPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtNEBULAHPCPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtNEBULAHPCPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSAMURAITZero::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSAMURAITZero::Class_Name()
{
   return "TArtCalibSAMURAITZero";
}

//______________________________________________________________________________
const char *TArtCalibSAMURAITZero::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSAMURAITZero*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSAMURAITZero::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSAMURAITZero*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSAMURAITZero::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSAMURAITZero*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSAMURAITZero::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSAMURAITZero*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibTEDCsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibTEDCsI::Class_Name()
{
   return "TArtCalibTEDCsI";
}

//______________________________________________________________________________
const char *TArtCalibTEDCsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTEDCsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibTEDCsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTEDCsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibTEDCsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTEDCsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibTEDCsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTEDCsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRecoNeutron::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRecoNeutron::Class_Name()
{
   return "TArtRecoNeutron";
}

//______________________________________________________________________________
const char *TArtRecoNeutron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoNeutron*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRecoNeutron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoNeutron*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRecoNeutron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoNeutron*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRecoNeutron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoNeutron*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibPDCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibPDCTrack::Class_Name()
{
   return "TArtCalibPDCTrack";
}

//______________________________________________________________________________
const char *TArtCalibPDCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPDCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibPDCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPDCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibPDCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPDCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibPDCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPDCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtTacquilaMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTacquilaMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTacquilaMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTacquilaMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTacquilaMap(void *p) {
      return  p ? new(p) ::TArtTacquilaMap : new ::TArtTacquilaMap;
   }
   static void *newArray_TArtTacquilaMap(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTacquilaMap[nElements] : new ::TArtTacquilaMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTacquilaMap(void *p) {
      delete ((::TArtTacquilaMap*)p);
   }
   static void deleteArray_TArtTacquilaMap(void *p) {
      delete [] ((::TArtTacquilaMap*)p);
   }
   static void destruct_TArtTacquilaMap(void *p) {
      typedef ::TArtTacquilaMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTacquilaMap

//______________________________________________________________________________
void TArtHIMEFilter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtHIMEFilter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtHIMEFilter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtHIMEFilter::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::TArtHIMEFilter

//______________________________________________________________________________
void TArtCalibDCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibDCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibDCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibDCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtCalibDCTrack(void *p) {
      delete ((::TArtCalibDCTrack*)p);
   }
   static void deleteArray_TArtCalibDCTrack(void *p) {
      delete [] ((::TArtCalibDCTrack*)p);
   }
   static void destruct_TArtCalibDCTrack(void *p) {
      typedef ::TArtCalibDCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibDCTrack

//______________________________________________________________________________
void TArtCalibFDC2Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibFDC2Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibFDC2Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibFDC2Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibFDC2Track(void *p) {
      return  p ? new(p) ::TArtCalibFDC2Track : new ::TArtCalibFDC2Track;
   }
   static void *newArray_TArtCalibFDC2Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibFDC2Track[nElements] : new ::TArtCalibFDC2Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibFDC2Track(void *p) {
      delete ((::TArtCalibFDC2Track*)p);
   }
   static void deleteArray_TArtCalibFDC2Track(void *p) {
      delete [] ((::TArtCalibFDC2Track*)p);
   }
   static void destruct_TArtCalibFDC2Track(void *p) {
      typedef ::TArtCalibFDC2Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibFDC2Track

//______________________________________________________________________________
void TArtCalibRPDCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibRPDCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibRPDCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibRPDCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibRPDCTrack(void *p) {
      return  p ? new(p) ::TArtCalibRPDCTrack : new ::TArtCalibRPDCTrack;
   }
   static void *newArray_TArtCalibRPDCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibRPDCTrack[nElements] : new ::TArtCalibRPDCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibRPDCTrack(void *p) {
      delete ((::TArtCalibRPDCTrack*)p);
   }
   static void deleteArray_TArtCalibRPDCTrack(void *p) {
      delete [] ((::TArtCalibRPDCTrack*)p);
   }
   static void destruct_TArtCalibRPDCTrack(void *p) {
      typedef ::TArtCalibRPDCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibRPDCTrack

//______________________________________________________________________________
void TArtNINJAPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNINJAPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNINJAPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNINJAPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNINJAPla(void *p) {
      return  p ? new(p) ::TArtNINJAPla : new ::TArtNINJAPla;
   }
   static void *newArray_TArtNINJAPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNINJAPla[nElements] : new ::TArtNINJAPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNINJAPla(void *p) {
      delete ((::TArtNINJAPla*)p);
   }
   static void deleteArray_TArtNINJAPla(void *p) {
      delete [] ((::TArtNINJAPla*)p);
   }
   static void destruct_TArtNINJAPla(void *p) {
      typedef ::TArtNINJAPla current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNINJAPla

//______________________________________________________________________________
void TArtDCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtDCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtDCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtDCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtDCTrack(void *p) {
      return  p ? new(p) ::TArtDCTrack : new ::TArtDCTrack;
   }
   static void *newArray_TArtDCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TArtDCTrack[nElements] : new ::TArtDCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtDCTrack(void *p) {
      delete ((::TArtDCTrack*)p);
   }
   static void deleteArray_TArtDCTrack(void *p) {
      delete [] ((::TArtDCTrack*)p);
   }
   static void destruct_TArtDCTrack(void *p) {
      typedef ::TArtDCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtDCTrack

//______________________________________________________________________________
void TArtCalibDCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibDCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibDCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibDCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtCalibDCHit(void *p) {
      delete ((::TArtCalibDCHit*)p);
   }
   static void deleteArray_TArtCalibDCHit(void *p) {
      delete [] ((::TArtCalibDCHit*)p);
   }
   static void destruct_TArtCalibDCHit(void *p) {
      typedef ::TArtCalibDCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibDCHit

//______________________________________________________________________________
void TArtCalibBDC1Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibBDC1Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibBDC1Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibBDC1Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibBDC1Hit(void *p) {
      return  p ? new(p) ::TArtCalibBDC1Hit : new ::TArtCalibBDC1Hit;
   }
   static void *newArray_TArtCalibBDC1Hit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibBDC1Hit[nElements] : new ::TArtCalibBDC1Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibBDC1Hit(void *p) {
      delete ((::TArtCalibBDC1Hit*)p);
   }
   static void deleteArray_TArtCalibBDC1Hit(void *p) {
      delete [] ((::TArtCalibBDC1Hit*)p);
   }
   static void destruct_TArtCalibBDC1Hit(void *p) {
      typedef ::TArtCalibBDC1Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibBDC1Hit

//______________________________________________________________________________
void TArtHIMEPlaPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtHIMEPlaPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtHIMEPlaPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtHIMEPlaPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtHIMEPlaPara(void *p) {
      return  p ? new(p) ::TArtHIMEPlaPara : new ::TArtHIMEPlaPara;
   }
   static void *newArray_TArtHIMEPlaPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtHIMEPlaPara[nElements] : new ::TArtHIMEPlaPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtHIMEPlaPara(void *p) {
      delete ((::TArtHIMEPlaPara*)p);
   }
   static void deleteArray_TArtHIMEPlaPara(void *p) {
      delete [] ((::TArtHIMEPlaPara*)p);
   }
   static void destruct_TArtHIMEPlaPara(void *p) {
      typedef ::TArtHIMEPlaPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtHIMEPlaPara

//______________________________________________________________________________
void TArtNEBULAFilter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNEBULAFilter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNEBULAFilter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNEBULAFilter::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::TArtNEBULAFilter

//______________________________________________________________________________
void TArtCalibBPCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibBPCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibBPCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibBPCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibBPCHit(void *p) {
      return  p ? new(p) ::TArtCalibBPCHit : new ::TArtCalibBPCHit;
   }
   static void *newArray_TArtCalibBPCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibBPCHit[nElements] : new ::TArtCalibBPCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibBPCHit(void *p) {
      delete ((::TArtCalibBPCHit*)p);
   }
   static void deleteArray_TArtCalibBPCHit(void *p) {
      delete [] ((::TArtCalibBPCHit*)p);
   }
   static void destruct_TArtCalibBPCHit(void *p) {
      typedef ::TArtCalibBPCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibBPCHit

//______________________________________________________________________________
void TArtCalibSimpleDCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSimpleDCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSimpleDCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSimpleDCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtCalibSimpleDCTrack(void *p) {
      delete ((::TArtCalibSimpleDCTrack*)p);
   }
   static void deleteArray_TArtCalibSimpleDCTrack(void *p) {
      delete [] ((::TArtCalibSimpleDCTrack*)p);
   }
   static void destruct_TArtCalibSimpleDCTrack(void *p) {
      typedef ::TArtCalibSimpleDCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSimpleDCTrack

//______________________________________________________________________________
void TArtSAMURAIParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtSAMURAIParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtSAMURAIParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtSAMURAIParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtSAMURAIParameters(void *p) {
      return  p ? new(p) ::TArtSAMURAIParameters : new ::TArtSAMURAIParameters;
   }
   static void *newArray_TArtSAMURAIParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtSAMURAIParameters[nElements] : new ::TArtSAMURAIParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtSAMURAIParameters(void *p) {
      delete ((::TArtSAMURAIParameters*)p);
   }
   static void deleteArray_TArtSAMURAIParameters(void *p) {
      delete [] ((::TArtSAMURAIParameters*)p);
   }
   static void destruct_TArtSAMURAIParameters(void *p) {
      typedef ::TArtSAMURAIParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtSAMURAIParameters

//______________________________________________________________________________
void TArtNeuLANDPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNeuLANDPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNeuLANDPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNeuLANDPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNeuLANDPla(void *p) {
      return  p ? new(p) ::TArtNeuLANDPla : new ::TArtNeuLANDPla;
   }
   static void *newArray_TArtNeuLANDPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNeuLANDPla[nElements] : new ::TArtNeuLANDPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNeuLANDPla(void *p) {
      delete ((::TArtNeuLANDPla*)p);
   }
   static void deleteArray_TArtNeuLANDPla(void *p) {
      delete [] ((::TArtNeuLANDPla*)p);
   }
   static void destruct_TArtNeuLANDPla(void *p) {
      typedef ::TArtNeuLANDPla current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNeuLANDPla

//______________________________________________________________________________
void TArtTacquilaPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTacquilaPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTacquilaPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTacquilaPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTacquilaPara(void *p) {
      return  p ? new(p) ::TArtTacquilaPara : new ::TArtTacquilaPara;
   }
   static void *newArray_TArtTacquilaPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTacquilaPara[nElements] : new ::TArtTacquilaPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTacquilaPara(void *p) {
      delete ((::TArtTacquilaPara*)p);
   }
   static void deleteArray_TArtTacquilaPara(void *p) {
      delete [] ((::TArtTacquilaPara*)p);
   }
   static void destruct_TArtTacquilaPara(void *p) {
      typedef ::TArtTacquilaPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTacquilaPara

//______________________________________________________________________________
void TArtNeuLANDPlaPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNeuLANDPlaPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNeuLANDPlaPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNeuLANDPlaPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNeuLANDPlaPara(void *p) {
      return  p ? new(p) ::TArtNeuLANDPlaPara : new ::TArtNeuLANDPlaPara;
   }
   static void *newArray_TArtNeuLANDPlaPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNeuLANDPlaPara[nElements] : new ::TArtNeuLANDPlaPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNeuLANDPlaPara(void *p) {
      delete ((::TArtNeuLANDPlaPara*)p);
   }
   static void deleteArray_TArtNeuLANDPlaPara(void *p) {
      delete [] ((::TArtNeuLANDPlaPara*)p);
   }
   static void destruct_TArtNeuLANDPlaPara(void *p) {
      typedef ::TArtNeuLANDPlaPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNeuLANDPlaPara

//______________________________________________________________________________
void TArtCalibNeuLAND::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibNeuLAND.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibNeuLAND::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibNeuLAND::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibNeuLAND(void *p) {
      return  p ? new(p) ::TArtCalibNeuLAND : new ::TArtCalibNeuLAND;
   }
   static void *newArray_TArtCalibNeuLAND(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibNeuLAND[nElements] : new ::TArtCalibNeuLAND[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibNeuLAND(void *p) {
      delete ((::TArtCalibNeuLAND*)p);
   }
   static void deleteArray_TArtCalibNeuLAND(void *p) {
      delete [] ((::TArtCalibNeuLAND*)p);
   }
   static void destruct_TArtCalibNeuLAND(void *p) {
      typedef ::TArtCalibNeuLAND current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibNeuLAND

//______________________________________________________________________________
void TArtCalcGlobalTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalcGlobalTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalcGlobalTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalcGlobalTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtCalcGlobalTrack(void *p) {
      delete ((::TArtCalcGlobalTrack*)p);
   }
   static void deleteArray_TArtCalcGlobalTrack(void *p) {
      delete [] ((::TArtCalcGlobalTrack*)p);
   }
   static void destruct_TArtCalcGlobalTrack(void *p) {
      typedef ::TArtCalcGlobalTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalcGlobalTrack

//______________________________________________________________________________
void TArtCalibFDC0Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibFDC0Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibFDC0Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibFDC0Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibFDC0Hit(void *p) {
      return  p ? new(p) ::TArtCalibFDC0Hit : new ::TArtCalibFDC0Hit;
   }
   static void *newArray_TArtCalibFDC0Hit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibFDC0Hit[nElements] : new ::TArtCalibFDC0Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibFDC0Hit(void *p) {
      delete ((::TArtCalibFDC0Hit*)p);
   }
   static void deleteArray_TArtCalibFDC0Hit(void *p) {
      delete [] ((::TArtCalibFDC0Hit*)p);
   }
   static void destruct_TArtCalibFDC0Hit(void *p) {
      typedef ::TArtCalibFDC0Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibFDC0Hit

//______________________________________________________________________________
void TArtCalibFDC1Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibFDC1Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibFDC1Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibFDC1Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibFDC1Track(void *p) {
      return  p ? new(p) ::TArtCalibFDC1Track : new ::TArtCalibFDC1Track;
   }
   static void *newArray_TArtCalibFDC1Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibFDC1Track[nElements] : new ::TArtCalibFDC1Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibFDC1Track(void *p) {
      delete ((::TArtCalibFDC1Track*)p);
   }
   static void deleteArray_TArtCalibFDC1Track(void *p) {
      delete [] ((::TArtCalibFDC1Track*)p);
   }
   static void destruct_TArtCalibFDC1Track(void *p) {
      typedef ::TArtCalibFDC1Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibFDC1Track

//______________________________________________________________________________
void TArtTEDCsIPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTEDCsIPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTEDCsIPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTEDCsIPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTEDCsIPara(void *p) {
      return  p ? new(p) ::TArtTEDCsIPara : new ::TArtTEDCsIPara;
   }
   static void *newArray_TArtTEDCsIPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTEDCsIPara[nElements] : new ::TArtTEDCsIPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTEDCsIPara(void *p) {
      delete ((::TArtTEDCsIPara*)p);
   }
   static void deleteArray_TArtTEDCsIPara(void *p) {
      delete [] ((::TArtTEDCsIPara*)p);
   }
   static void destruct_TArtTEDCsIPara(void *p) {
      typedef ::TArtTEDCsIPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTEDCsIPara

//______________________________________________________________________________
void TArtCalibS1DC2Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibS1DC2Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibS1DC2Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibS1DC2Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibS1DC2Track(void *p) {
      return  p ? new(p) ::TArtCalibS1DC2Track : new ::TArtCalibS1DC2Track;
   }
   static void *newArray_TArtCalibS1DC2Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibS1DC2Track[nElements] : new ::TArtCalibS1DC2Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibS1DC2Track(void *p) {
      delete ((::TArtCalibS1DC2Track*)p);
   }
   static void deleteArray_TArtCalibS1DC2Track(void *p) {
      delete [] ((::TArtCalibS1DC2Track*)p);
   }
   static void destruct_TArtCalibS1DC2Track(void *p) {
      typedef ::TArtCalibS1DC2Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibS1DC2Track

//______________________________________________________________________________
void TArtNINJAPlaPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNINJAPlaPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNINJAPlaPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNINJAPlaPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNINJAPlaPara(void *p) {
      return  p ? new(p) ::TArtNINJAPlaPara : new ::TArtNINJAPlaPara;
   }
   static void *newArray_TArtNINJAPlaPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNINJAPlaPara[nElements] : new ::TArtNINJAPlaPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNINJAPlaPara(void *p) {
      delete ((::TArtNINJAPlaPara*)p);
   }
   static void deleteArray_TArtNINJAPlaPara(void *p) {
      delete [] ((::TArtNINJAPlaPara*)p);
   }
   static void destruct_TArtNINJAPlaPara(void *p) {
      typedef ::TArtNINJAPlaPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNINJAPlaPara

//______________________________________________________________________________
void TArtTZero::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTZero.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTZero::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTZero::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTZero(void *p) {
      return  p ? new(p) ::TArtTZero : new ::TArtTZero;
   }
   static void *newArray_TArtTZero(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTZero[nElements] : new ::TArtTZero[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTZero(void *p) {
      delete ((::TArtTZero*)p);
   }
   static void deleteArray_TArtTZero(void *p) {
      delete [] ((::TArtTZero*)p);
   }
   static void destruct_TArtTZero(void *p) {
      typedef ::TArtTZero current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTZero

//______________________________________________________________________________
void TArtCalibS1DC1Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibS1DC1Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibS1DC1Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibS1DC1Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibS1DC1Track(void *p) {
      return  p ? new(p) ::TArtCalibS1DC1Track : new ::TArtCalibS1DC1Track;
   }
   static void *newArray_TArtCalibS1DC1Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibS1DC1Track[nElements] : new ::TArtCalibS1DC1Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibS1DC1Track(void *p) {
      delete ((::TArtCalibS1DC1Track*)p);
   }
   static void deleteArray_TArtCalibS1DC1Track(void *p) {
      delete [] ((::TArtCalibS1DC1Track*)p);
   }
   static void destruct_TArtCalibS1DC1Track(void *p) {
      typedef ::TArtCalibS1DC1Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibS1DC1Track

//______________________________________________________________________________
void TArtHODPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtHODPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtHODPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtHODPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtHODPla(void *p) {
      return  p ? new(p) ::TArtHODPla : new ::TArtHODPla;
   }
   static void *newArray_TArtHODPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtHODPla[nElements] : new ::TArtHODPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtHODPla(void *p) {
      delete ((::TArtHODPla*)p);
   }
   static void deleteArray_TArtHODPla(void *p) {
      delete [] ((::TArtHODPla*)p);
   }
   static void destruct_TArtHODPla(void *p) {
      typedef ::TArtHODPla current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtHODPla

//______________________________________________________________________________
void TArtNeutron::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNeutron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNeutron::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNeutron::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNeutron(void *p) {
      return  p ? new(p) ::TArtNeutron : new ::TArtNeutron;
   }
   static void *newArray_TArtNeutron(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNeutron[nElements] : new ::TArtNeutron[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNeutron(void *p) {
      delete ((::TArtNeutron*)p);
   }
   static void deleteArray_TArtNeutron(void *p) {
      delete [] ((::TArtNeutron*)p);
   }
   static void destruct_TArtNeutron(void *p) {
      typedef ::TArtNeutron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNeutron

//______________________________________________________________________________
void TArtICF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtICF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtICF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtICF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtICF(void *p) {
      return  p ? new(p) ::TArtICF : new ::TArtICF;
   }
   static void *newArray_TArtICF(Long_t nElements, void *p) {
      return p ? new(p) ::TArtICF[nElements] : new ::TArtICF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtICF(void *p) {
      delete ((::TArtICF*)p);
   }
   static void deleteArray_TArtICF(void *p) {
      delete [] ((::TArtICF*)p);
   }
   static void destruct_TArtICF(void *p) {
      typedef ::TArtICF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtICF

//______________________________________________________________________________
void TArtCalibSimpleFDC0Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSimpleFDC0Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSimpleFDC0Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSimpleFDC0Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSimpleFDC0Track(void *p) {
      return  p ? new(p) ::TArtCalibSimpleFDC0Track : new ::TArtCalibSimpleFDC0Track;
   }
   static void *newArray_TArtCalibSimpleFDC0Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSimpleFDC0Track[nElements] : new ::TArtCalibSimpleFDC0Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSimpleFDC0Track(void *p) {
      delete ((::TArtCalibSimpleFDC0Track*)p);
   }
   static void deleteArray_TArtCalibSimpleFDC0Track(void *p) {
      delete [] ((::TArtCalibSimpleFDC0Track*)p);
   }
   static void destruct_TArtCalibSimpleFDC0Track(void *p) {
      typedef ::TArtCalibSimpleFDC0Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSimpleFDC0Track

//______________________________________________________________________________
void TArtNEBULAHPC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNEBULAHPC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNEBULAHPC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNEBULAHPC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNEBULAHPC(void *p) {
      return  p ? new(p) ::TArtNEBULAHPC : new ::TArtNEBULAHPC;
   }
   static void *newArray_TArtNEBULAHPC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNEBULAHPC[nElements] : new ::TArtNEBULAHPC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNEBULAHPC(void *p) {
      delete ((::TArtNEBULAHPC*)p);
   }
   static void deleteArray_TArtNEBULAHPC(void *p) {
      delete [] ((::TArtNEBULAHPC*)p);
   }
   static void destruct_TArtNEBULAHPC(void *p) {
      typedef ::TArtNEBULAHPC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNEBULAHPC

//______________________________________________________________________________
void TArtCalibRPTOFPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibRPTOFPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibRPTOFPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibRPTOFPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibRPTOFPla(void *p) {
      return  p ? new(p) ::TArtCalibRPTOFPla : new ::TArtCalibRPTOFPla;
   }
   static void *newArray_TArtCalibRPTOFPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibRPTOFPla[nElements] : new ::TArtCalibRPTOFPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibRPTOFPla(void *p) {
      delete ((::TArtCalibRPTOFPla*)p);
   }
   static void deleteArray_TArtCalibRPTOFPla(void *p) {
      delete [] ((::TArtCalibRPTOFPla*)p);
   }
   static void destruct_TArtCalibRPTOFPla(void *p) {
      typedef ::TArtCalibRPTOFPla current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibRPTOFPla

//______________________________________________________________________________
void TArtCalibHODPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibHODPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibHODPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibHODPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibHODPla(void *p) {
      return  p ? new(p) ::TArtCalibHODPla : new ::TArtCalibHODPla;
   }
   static void *newArray_TArtCalibHODPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibHODPla[nElements] : new ::TArtCalibHODPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibHODPla(void *p) {
      delete ((::TArtCalibHODPla*)p);
   }
   static void deleteArray_TArtCalibHODPla(void *p) {
      delete [] ((::TArtCalibHODPla*)p);
   }
   static void destruct_TArtCalibHODPla(void *p) {
      typedef ::TArtCalibHODPla current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibHODPla

//______________________________________________________________________________
void TArtRPTOFPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRPTOFPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRPTOFPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRPTOFPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRPTOFPla(void *p) {
      return  p ? new(p) ::TArtRPTOFPla : new ::TArtRPTOFPla;
   }
   static void *newArray_TArtRPTOFPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRPTOFPla[nElements] : new ::TArtRPTOFPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRPTOFPla(void *p) {
      delete ((::TArtRPTOFPla*)p);
   }
   static void deleteArray_TArtRPTOFPla(void *p) {
      delete [] ((::TArtRPTOFPla*)p);
   }
   static void destruct_TArtRPTOFPla(void *p) {
      typedef ::TArtRPTOFPla current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRPTOFPla

//______________________________________________________________________________
void TArtCalibBDC2Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibBDC2Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibBDC2Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibBDC2Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibBDC2Track(void *p) {
      return  p ? new(p) ::TArtCalibBDC2Track : new ::TArtCalibBDC2Track;
   }
   static void *newArray_TArtCalibBDC2Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibBDC2Track[nElements] : new ::TArtCalibBDC2Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibBDC2Track(void *p) {
      delete ((::TArtCalibBDC2Track*)p);
   }
   static void deleteArray_TArtCalibBDC2Track(void *p) {
      delete [] ((::TArtCalibBDC2Track*)p);
   }
   static void destruct_TArtCalibBDC2Track(void *p) {
      typedef ::TArtCalibBDC2Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibBDC2Track

//______________________________________________________________________________
void TArtHIMEPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtHIMEPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtHIMEPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtHIMEPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtHIMEPla(void *p) {
      return  p ? new(p) ::TArtHIMEPla : new ::TArtHIMEPla;
   }
   static void *newArray_TArtHIMEPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtHIMEPla[nElements] : new ::TArtHIMEPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtHIMEPla(void *p) {
      delete ((::TArtHIMEPla*)p);
   }
   static void deleteArray_TArtHIMEPla(void *p) {
      delete [] ((::TArtHIMEPla*)p);
   }
   static void destruct_TArtHIMEPla(void *p) {
      typedef ::TArtHIMEPla current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtHIMEPla

//______________________________________________________________________________
void TArtFragment::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtFragment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtFragment::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtFragment::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtFragment(void *p) {
      return  p ? new(p) ::TArtFragment : new ::TArtFragment;
   }
   static void *newArray_TArtFragment(Long_t nElements, void *p) {
      return p ? new(p) ::TArtFragment[nElements] : new ::TArtFragment[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtFragment(void *p) {
      delete ((::TArtFragment*)p);
   }
   static void deleteArray_TArtFragment(void *p) {
      delete [] ((::TArtFragment*)p);
   }
   static void destruct_TArtFragment(void *p) {
      typedef ::TArtFragment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtFragment

//______________________________________________________________________________
void TArtNEBULAPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNEBULAPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNEBULAPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNEBULAPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNEBULAPla(void *p) {
      return  p ? new(p) ::TArtNEBULAPla : new ::TArtNEBULAPla;
   }
   static void *newArray_TArtNEBULAPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNEBULAPla[nElements] : new ::TArtNEBULAPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNEBULAPla(void *p) {
      delete ((::TArtNEBULAPla*)p);
   }
   static void deleteArray_TArtNEBULAPla(void *p) {
      delete [] ((::TArtNEBULAPla*)p);
   }
   static void destruct_TArtNEBULAPla(void *p) {
      typedef ::TArtNEBULAPla current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNEBULAPla

//______________________________________________________________________________
void TArtNEBULAPlaPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNEBULAPlaPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNEBULAPlaPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNEBULAPlaPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNEBULAPlaPara(void *p) {
      return  p ? new(p) ::TArtNEBULAPlaPara : new ::TArtNEBULAPlaPara;
   }
   static void *newArray_TArtNEBULAPlaPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNEBULAPlaPara[nElements] : new ::TArtNEBULAPlaPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNEBULAPlaPara(void *p) {
      delete ((::TArtNEBULAPlaPara*)p);
   }
   static void deleteArray_TArtNEBULAPlaPara(void *p) {
      delete [] ((::TArtNEBULAPlaPara*)p);
   }
   static void destruct_TArtNEBULAPlaPara(void *p) {
      typedef ::TArtNEBULAPlaPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNEBULAPlaPara

//______________________________________________________________________________
void TArtCalibNEBULAMult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibNEBULAMult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibNEBULAMult::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibNEBULAMult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibNEBULAMult(void *p) {
      return  p ? new(p) ::TArtCalibNEBULAMult : new ::TArtCalibNEBULAMult;
   }
   static void *newArray_TArtCalibNEBULAMult(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibNEBULAMult[nElements] : new ::TArtCalibNEBULAMult[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibNEBULAMult(void *p) {
      delete ((::TArtCalibNEBULAMult*)p);
   }
   static void deleteArray_TArtCalibNEBULAMult(void *p) {
      delete [] ((::TArtCalibNEBULAMult*)p);
   }
   static void destruct_TArtCalibNEBULAMult(void *p) {
      typedef ::TArtCalibNEBULAMult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibNEBULAMult

//______________________________________________________________________________
void TArtCalibNEBULA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibNEBULA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibNEBULA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibNEBULA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibNEBULA(void *p) {
      return  p ? new(p) ::TArtCalibNEBULA : new ::TArtCalibNEBULA;
   }
   static void *newArray_TArtCalibNEBULA(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibNEBULA[nElements] : new ::TArtCalibNEBULA[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibNEBULA(void *p) {
      delete ((::TArtCalibNEBULA*)p);
   }
   static void deleteArray_TArtCalibNEBULA(void *p) {
      delete [] ((::TArtCalibNEBULA*)p);
   }
   static void destruct_TArtCalibNEBULA(void *p) {
      typedef ::TArtCalibNEBULA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibNEBULA

//______________________________________________________________________________
void TArtHODPlaPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtHODPlaPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtHODPlaPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtHODPlaPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtHODPlaPara(void *p) {
      return  p ? new(p) ::TArtHODPlaPara : new ::TArtHODPlaPara;
   }
   static void *newArray_TArtHODPlaPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtHODPlaPara[nElements] : new ::TArtHODPlaPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtHODPlaPara(void *p) {
      delete ((::TArtHODPlaPara*)p);
   }
   static void deleteArray_TArtHODPlaPara(void *p) {
      delete [] ((::TArtHODPlaPara*)p);
   }
   static void destruct_TArtHODPlaPara(void *p) {
      typedef ::TArtHODPlaPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtHODPlaPara

//______________________________________________________________________________
void TArtCalibSAMURAI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSAMURAI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSAMURAI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSAMURAI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSAMURAI(void *p) {
      return  p ? new(p) ::TArtCalibSAMURAI : new ::TArtCalibSAMURAI;
   }
   static void *newArray_TArtCalibSAMURAI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSAMURAI[nElements] : new ::TArtCalibSAMURAI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSAMURAI(void *p) {
      delete ((::TArtCalibSAMURAI*)p);
   }
   static void deleteArray_TArtCalibSAMURAI(void *p) {
      delete [] ((::TArtCalibSAMURAI*)p);
   }
   static void destruct_TArtCalibSAMURAI(void *p) {
      typedef ::TArtCalibSAMURAI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSAMURAI

//______________________________________________________________________________
void TArtDCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtDCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtDCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtDCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtDCHit(void *p) {
      return  p ? new(p) ::TArtDCHit : new ::TArtDCHit;
   }
   static void *newArray_TArtDCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtDCHit[nElements] : new ::TArtDCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtDCHit(void *p) {
      delete ((::TArtDCHit*)p);
   }
   static void deleteArray_TArtDCHit(void *p) {
      delete [] ((::TArtDCHit*)p);
   }
   static void destruct_TArtDCHit(void *p) {
      typedef ::TArtDCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtDCHit

//______________________________________________________________________________
void TArtCalibSimpleFDC2Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSimpleFDC2Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSimpleFDC2Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSimpleFDC2Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSimpleFDC2Track(void *p) {
      return  p ? new(p) ::TArtCalibSimpleFDC2Track : new ::TArtCalibSimpleFDC2Track;
   }
   static void *newArray_TArtCalibSimpleFDC2Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSimpleFDC2Track[nElements] : new ::TArtCalibSimpleFDC2Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSimpleFDC2Track(void *p) {
      delete ((::TArtCalibSimpleFDC2Track*)p);
   }
   static void deleteArray_TArtCalibSimpleFDC2Track(void *p) {
      delete [] ((::TArtCalibSimpleFDC2Track*)p);
   }
   static void destruct_TArtCalibSimpleFDC2Track(void *p) {
      typedef ::TArtCalibSimpleFDC2Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSimpleFDC2Track

//______________________________________________________________________________
void TArtRecoSAMURAI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRecoSAMURAI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRecoSAMURAI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRecoSAMURAI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRecoSAMURAI(void *p) {
      return  p ? new(p) ::TArtRecoSAMURAI : new ::TArtRecoSAMURAI;
   }
   static void *newArray_TArtRecoSAMURAI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRecoSAMURAI[nElements] : new ::TArtRecoSAMURAI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRecoSAMURAI(void *p) {
      delete ((::TArtRecoSAMURAI*)p);
   }
   static void deleteArray_TArtRecoSAMURAI(void *p) {
      delete [] ((::TArtRecoSAMURAI*)p);
   }
   static void destruct_TArtRecoSAMURAI(void *p) {
      typedef ::TArtRecoSAMURAI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRecoSAMURAI

//______________________________________________________________________________
void TArtCalibSimpleBDC1Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSimpleBDC1Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSimpleBDC1Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSimpleBDC1Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSimpleBDC1Track(void *p) {
      return  p ? new(p) ::TArtCalibSimpleBDC1Track : new ::TArtCalibSimpleBDC1Track;
   }
   static void *newArray_TArtCalibSimpleBDC1Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSimpleBDC1Track[nElements] : new ::TArtCalibSimpleBDC1Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSimpleBDC1Track(void *p) {
      delete ((::TArtCalibSimpleBDC1Track*)p);
   }
   static void deleteArray_TArtCalibSimpleBDC1Track(void *p) {
      delete [] ((::TArtCalibSimpleBDC1Track*)p);
   }
   static void destruct_TArtCalibSimpleBDC1Track(void *p) {
      typedef ::TArtCalibSimpleBDC1Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSimpleBDC1Track

//______________________________________________________________________________
void TArtDCHitPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtDCHitPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtDCHitPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtDCHitPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtDCHitPara(void *p) {
      return  p ? new(p) ::TArtDCHitPara : new ::TArtDCHitPara;
   }
   static void *newArray_TArtDCHitPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtDCHitPara[nElements] : new ::TArtDCHitPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtDCHitPara(void *p) {
      delete ((::TArtDCHitPara*)p);
   }
   static void deleteArray_TArtDCHitPara(void *p) {
      delete [] ((::TArtDCHitPara*)p);
   }
   static void destruct_TArtDCHitPara(void *p) {
      typedef ::TArtDCHitPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtDCHitPara

//______________________________________________________________________________
void TArtCalibHIMEMult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibHIMEMult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibHIMEMult::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibHIMEMult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibHIMEMult(void *p) {
      return  p ? new(p) ::TArtCalibHIMEMult : new ::TArtCalibHIMEMult;
   }
   static void *newArray_TArtCalibHIMEMult(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibHIMEMult[nElements] : new ::TArtCalibHIMEMult[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibHIMEMult(void *p) {
      delete ((::TArtCalibHIMEMult*)p);
   }
   static void deleteArray_TArtCalibHIMEMult(void *p) {
      delete [] ((::TArtCalibHIMEMult*)p);
   }
   static void destruct_TArtCalibHIMEMult(void *p) {
      typedef ::TArtCalibHIMEMult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibHIMEMult

//______________________________________________________________________________
void TArtCalibHIME::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibHIME.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibHIME::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibHIME::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibHIME(void *p) {
      return  p ? new(p) ::TArtCalibHIME : new ::TArtCalibHIME;
   }
   static void *newArray_TArtCalibHIME(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibHIME[nElements] : new ::TArtCalibHIME[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibHIME(void *p) {
      delete ((::TArtCalibHIME*)p);
   }
   static void deleteArray_TArtCalibHIME(void *p) {
      delete [] ((::TArtCalibHIME*)p);
   }
   static void destruct_TArtCalibHIME(void *p) {
      typedef ::TArtCalibHIME current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibHIME

//______________________________________________________________________________
void TArtRPTOFPlaPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRPTOFPlaPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRPTOFPlaPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRPTOFPlaPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRPTOFPlaPara(void *p) {
      return  p ? new(p) ::TArtRPTOFPlaPara : new ::TArtRPTOFPlaPara;
   }
   static void *newArray_TArtRPTOFPlaPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRPTOFPlaPara[nElements] : new ::TArtRPTOFPlaPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRPTOFPlaPara(void *p) {
      delete ((::TArtRPTOFPlaPara*)p);
   }
   static void deleteArray_TArtRPTOFPlaPara(void *p) {
      delete [] ((::TArtRPTOFPlaPara*)p);
   }
   static void destruct_TArtRPTOFPlaPara(void *p) {
      typedef ::TArtRPTOFPlaPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRPTOFPlaPara

//______________________________________________________________________________
void TArtCalibNeuLANDVETO::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibNeuLANDVETO.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibNeuLANDVETO::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibNeuLANDVETO::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibNeuLANDVETO(void *p) {
      return  p ? new(p) ::TArtCalibNeuLANDVETO : new ::TArtCalibNeuLANDVETO;
   }
   static void *newArray_TArtCalibNeuLANDVETO(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibNeuLANDVETO[nElements] : new ::TArtCalibNeuLANDVETO[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibNeuLANDVETO(void *p) {
      delete ((::TArtCalibNeuLANDVETO*)p);
   }
   static void deleteArray_TArtCalibNeuLANDVETO(void *p) {
      delete [] ((::TArtCalibNeuLANDVETO*)p);
   }
   static void destruct_TArtCalibNeuLANDVETO(void *p) {
      typedef ::TArtCalibNeuLANDVETO current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibNeuLANDVETO

//______________________________________________________________________________
void TArtCalibFDC2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibFDC2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibFDC2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibFDC2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibFDC2Hit(void *p) {
      return  p ? new(p) ::TArtCalibFDC2Hit : new ::TArtCalibFDC2Hit;
   }
   static void *newArray_TArtCalibFDC2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibFDC2Hit[nElements] : new ::TArtCalibFDC2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibFDC2Hit(void *p) {
      delete ((::TArtCalibFDC2Hit*)p);
   }
   static void deleteArray_TArtCalibFDC2Hit(void *p) {
      delete [] ((::TArtCalibFDC2Hit*)p);
   }
   static void destruct_TArtCalibFDC2Hit(void *p) {
      typedef ::TArtCalibFDC2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibFDC2Hit

//______________________________________________________________________________
void TArtCalibBDC1Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibBDC1Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibBDC1Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibBDC1Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibBDC1Track(void *p) {
      return  p ? new(p) ::TArtCalibBDC1Track : new ::TArtCalibBDC1Track;
   }
   static void *newArray_TArtCalibBDC1Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibBDC1Track[nElements] : new ::TArtCalibBDC1Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibBDC1Track(void *p) {
      delete ((::TArtCalibBDC1Track*)p);
   }
   static void deleteArray_TArtCalibBDC1Track(void *p) {
      delete [] ((::TArtCalibBDC1Track*)p);
   }
   static void destruct_TArtCalibBDC1Track(void *p) {
      typedef ::TArtCalibBDC1Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibBDC1Track

//______________________________________________________________________________
void TArtCalibFDC1Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibFDC1Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibFDC1Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibFDC1Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibFDC1Hit(void *p) {
      return  p ? new(p) ::TArtCalibFDC1Hit : new ::TArtCalibFDC1Hit;
   }
   static void *newArray_TArtCalibFDC1Hit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibFDC1Hit[nElements] : new ::TArtCalibFDC1Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibFDC1Hit(void *p) {
      delete ((::TArtCalibFDC1Hit*)p);
   }
   static void deleteArray_TArtCalibFDC1Hit(void *p) {
      delete [] ((::TArtCalibFDC1Hit*)p);
   }
   static void destruct_TArtCalibFDC1Hit(void *p) {
      typedef ::TArtCalibFDC1Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibFDC1Hit

//______________________________________________________________________________
void TArtCalibNINJA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibNINJA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibNINJA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibNINJA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibNINJA(void *p) {
      return  p ? new(p) ::TArtCalibNINJA : new ::TArtCalibNINJA;
   }
   static void *newArray_TArtCalibNINJA(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibNINJA[nElements] : new ::TArtCalibNINJA[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibNINJA(void *p) {
      delete ((::TArtCalibNINJA*)p);
   }
   static void deleteArray_TArtCalibNINJA(void *p) {
      delete [] ((::TArtCalibNINJA*)p);
   }
   static void destruct_TArtCalibNINJA(void *p) {
      typedef ::TArtCalibNINJA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibNINJA

//______________________________________________________________________________
void TArtCalibPDCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibPDCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibPDCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibPDCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibPDCHit(void *p) {
      return  p ? new(p) ::TArtCalibPDCHit : new ::TArtCalibPDCHit;
   }
   static void *newArray_TArtCalibPDCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibPDCHit[nElements] : new ::TArtCalibPDCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibPDCHit(void *p) {
      delete ((::TArtCalibPDCHit*)p);
   }
   static void deleteArray_TArtCalibPDCHit(void *p) {
      delete [] ((::TArtCalibPDCHit*)p);
   }
   static void destruct_TArtCalibPDCHit(void *p) {
      typedef ::TArtCalibPDCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibPDCHit

//______________________________________________________________________________
void TArtCalibSimpleFDC1Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSimpleFDC1Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSimpleFDC1Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSimpleFDC1Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSimpleFDC1Track(void *p) {
      return  p ? new(p) ::TArtCalibSimpleFDC1Track : new ::TArtCalibSimpleFDC1Track;
   }
   static void *newArray_TArtCalibSimpleFDC1Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSimpleFDC1Track[nElements] : new ::TArtCalibSimpleFDC1Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSimpleFDC1Track(void *p) {
      delete ((::TArtCalibSimpleFDC1Track*)p);
   }
   static void deleteArray_TArtCalibSimpleFDC1Track(void *p) {
      delete [] ((::TArtCalibSimpleFDC1Track*)p);
   }
   static void destruct_TArtCalibSimpleFDC1Track(void *p) {
      typedef ::TArtCalibSimpleFDC1Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSimpleFDC1Track

//______________________________________________________________________________
void TArtCalibSimpleBDC2Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSimpleBDC2Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSimpleBDC2Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSimpleBDC2Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSimpleBDC2Track(void *p) {
      return  p ? new(p) ::TArtCalibSimpleBDC2Track : new ::TArtCalibSimpleBDC2Track;
   }
   static void *newArray_TArtCalibSimpleBDC2Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSimpleBDC2Track[nElements] : new ::TArtCalibSimpleBDC2Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSimpleBDC2Track(void *p) {
      delete ((::TArtCalibSimpleBDC2Track*)p);
   }
   static void deleteArray_TArtCalibSimpleBDC2Track(void *p) {
      delete [] ((::TArtCalibSimpleBDC2Track*)p);
   }
   static void destruct_TArtCalibSimpleBDC2Track(void *p) {
      typedef ::TArtCalibSimpleBDC2Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSimpleBDC2Track

//______________________________________________________________________________
void TArtCalibRPDCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibRPDCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibRPDCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibRPDCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibRPDCHit(void *p) {
      return  p ? new(p) ::TArtCalibRPDCHit : new ::TArtCalibRPDCHit;
   }
   static void *newArray_TArtCalibRPDCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibRPDCHit[nElements] : new ::TArtCalibRPDCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibRPDCHit(void *p) {
      delete ((::TArtCalibRPDCHit*)p);
   }
   static void deleteArray_TArtCalibRPDCHit(void *p) {
      delete [] ((::TArtCalibRPDCHit*)p);
   }
   static void destruct_TArtCalibRPDCHit(void *p) {
      typedef ::TArtCalibRPDCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibRPDCHit

//______________________________________________________________________________
void TArtRecoFragment::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRecoFragment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRecoFragment::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRecoFragment::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRecoFragment(void *p) {
      return  p ? new(p) ::TArtRecoFragment : new ::TArtRecoFragment;
   }
   static void *newArray_TArtRecoFragment(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRecoFragment[nElements] : new ::TArtRecoFragment[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRecoFragment(void *p) {
      delete ((::TArtRecoFragment*)p);
   }
   static void deleteArray_TArtRecoFragment(void *p) {
      delete [] ((::TArtRecoFragment*)p);
   }
   static void destruct_TArtRecoFragment(void *p) {
      typedef ::TArtRecoFragment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRecoFragment

//______________________________________________________________________________
void TArtCalibICF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibICF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibICF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibICF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibICF(void *p) {
      return  p ? new(p) ::TArtCalibICF : new ::TArtCalibICF;
   }
   static void *newArray_TArtCalibICF(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibICF[nElements] : new ::TArtCalibICF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibICF(void *p) {
      delete ((::TArtCalibICF*)p);
   }
   static void deleteArray_TArtCalibICF(void *p) {
      delete [] ((::TArtCalibICF*)p);
   }
   static void destruct_TArtCalibICF(void *p) {
      typedef ::TArtCalibICF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibICF

//______________________________________________________________________________
void TArtCalibBDC2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibBDC2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibBDC2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibBDC2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibBDC2Hit(void *p) {
      return  p ? new(p) ::TArtCalibBDC2Hit : new ::TArtCalibBDC2Hit;
   }
   static void *newArray_TArtCalibBDC2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibBDC2Hit[nElements] : new ::TArtCalibBDC2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibBDC2Hit(void *p) {
      delete ((::TArtCalibBDC2Hit*)p);
   }
   static void deleteArray_TArtCalibBDC2Hit(void *p) {
      delete [] ((::TArtCalibBDC2Hit*)p);
   }
   static void destruct_TArtCalibBDC2Hit(void *p) {
      typedef ::TArtCalibBDC2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibBDC2Hit

//______________________________________________________________________________
void TArtCalibS1DC2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibS1DC2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibS1DC2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibS1DC2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibS1DC2Hit(void *p) {
      return  p ? new(p) ::TArtCalibS1DC2Hit : new ::TArtCalibS1DC2Hit;
   }
   static void *newArray_TArtCalibS1DC2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibS1DC2Hit[nElements] : new ::TArtCalibS1DC2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibS1DC2Hit(void *p) {
      delete ((::TArtCalibS1DC2Hit*)p);
   }
   static void deleteArray_TArtCalibS1DC2Hit(void *p) {
      delete [] ((::TArtCalibS1DC2Hit*)p);
   }
   static void destruct_TArtCalibS1DC2Hit(void *p) {
      typedef ::TArtCalibS1DC2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibS1DC2Hit

//______________________________________________________________________________
void TArtCalibFDC0Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibFDC0Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibFDC0Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibFDC0Track::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibFDC0Track(void *p) {
      return  p ? new(p) ::TArtCalibFDC0Track : new ::TArtCalibFDC0Track;
   }
   static void *newArray_TArtCalibFDC0Track(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibFDC0Track[nElements] : new ::TArtCalibFDC0Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibFDC0Track(void *p) {
      delete ((::TArtCalibFDC0Track*)p);
   }
   static void deleteArray_TArtCalibFDC0Track(void *p) {
      delete [] ((::TArtCalibFDC0Track*)p);
   }
   static void destruct_TArtCalibFDC0Track(void *p) {
      typedef ::TArtCalibFDC0Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibFDC0Track

//______________________________________________________________________________
void TArtTEDCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTEDCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTEDCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTEDCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTEDCsI(void *p) {
      return  p ? new(p) ::TArtTEDCsI : new ::TArtTEDCsI;
   }
   static void *newArray_TArtTEDCsI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTEDCsI[nElements] : new ::TArtTEDCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTEDCsI(void *p) {
      delete ((::TArtTEDCsI*)p);
   }
   static void deleteArray_TArtTEDCsI(void *p) {
      delete [] ((::TArtTEDCsI*)p);
   }
   static void destruct_TArtTEDCsI(void *p) {
      typedef ::TArtTEDCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTEDCsI

//______________________________________________________________________________
void TArtCalibS1DC1Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibS1DC1Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibS1DC1Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibS1DC1Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibS1DC1Hit(void *p) {
      return  p ? new(p) ::TArtCalibS1DC1Hit : new ::TArtCalibS1DC1Hit;
   }
   static void *newArray_TArtCalibS1DC1Hit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibS1DC1Hit[nElements] : new ::TArtCalibS1DC1Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibS1DC1Hit(void *p) {
      delete ((::TArtCalibS1DC1Hit*)p);
   }
   static void deleteArray_TArtCalibS1DC1Hit(void *p) {
      delete [] ((::TArtCalibS1DC1Hit*)p);
   }
   static void destruct_TArtCalibS1DC1Hit(void *p) {
      typedef ::TArtCalibS1DC1Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibS1DC1Hit

//______________________________________________________________________________
void TArtCalibNEBULAHPC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibNEBULAHPC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibNEBULAHPC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibNEBULAHPC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibNEBULAHPC(void *p) {
      return  p ? new(p) ::TArtCalibNEBULAHPC : new ::TArtCalibNEBULAHPC;
   }
   static void *newArray_TArtCalibNEBULAHPC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibNEBULAHPC[nElements] : new ::TArtCalibNEBULAHPC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibNEBULAHPC(void *p) {
      delete ((::TArtCalibNEBULAHPC*)p);
   }
   static void deleteArray_TArtCalibNEBULAHPC(void *p) {
      delete [] ((::TArtCalibNEBULAHPC*)p);
   }
   static void destruct_TArtCalibNEBULAHPC(void *p) {
      typedef ::TArtCalibNEBULAHPC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibNEBULAHPC

//______________________________________________________________________________
void TArtNEBULAHPCPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtNEBULAHPCPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtNEBULAHPCPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtNEBULAHPCPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtNEBULAHPCPara(void *p) {
      return  p ? new(p) ::TArtNEBULAHPCPara : new ::TArtNEBULAHPCPara;
   }
   static void *newArray_TArtNEBULAHPCPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtNEBULAHPCPara[nElements] : new ::TArtNEBULAHPCPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtNEBULAHPCPara(void *p) {
      delete ((::TArtNEBULAHPCPara*)p);
   }
   static void deleteArray_TArtNEBULAHPCPara(void *p) {
      delete [] ((::TArtNEBULAHPCPara*)p);
   }
   static void destruct_TArtNEBULAHPCPara(void *p) {
      typedef ::TArtNEBULAHPCPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtNEBULAHPCPara

//______________________________________________________________________________
void TArtCalibSAMURAITZero::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSAMURAITZero.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSAMURAITZero::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSAMURAITZero::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSAMURAITZero(void *p) {
      return  p ? new(p) ::TArtCalibSAMURAITZero : new ::TArtCalibSAMURAITZero;
   }
   static void *newArray_TArtCalibSAMURAITZero(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSAMURAITZero[nElements] : new ::TArtCalibSAMURAITZero[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSAMURAITZero(void *p) {
      delete ((::TArtCalibSAMURAITZero*)p);
   }
   static void deleteArray_TArtCalibSAMURAITZero(void *p) {
      delete [] ((::TArtCalibSAMURAITZero*)p);
   }
   static void destruct_TArtCalibSAMURAITZero(void *p) {
      typedef ::TArtCalibSAMURAITZero current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSAMURAITZero

//______________________________________________________________________________
void TArtCalibTEDCsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibTEDCsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibTEDCsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibTEDCsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibTEDCsI(void *p) {
      return  p ? new(p) ::TArtCalibTEDCsI : new ::TArtCalibTEDCsI;
   }
   static void *newArray_TArtCalibTEDCsI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibTEDCsI[nElements] : new ::TArtCalibTEDCsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibTEDCsI(void *p) {
      delete ((::TArtCalibTEDCsI*)p);
   }
   static void deleteArray_TArtCalibTEDCsI(void *p) {
      delete [] ((::TArtCalibTEDCsI*)p);
   }
   static void destruct_TArtCalibTEDCsI(void *p) {
      typedef ::TArtCalibTEDCsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibTEDCsI

//______________________________________________________________________________
void TArtRecoNeutron::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRecoNeutron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRecoNeutron::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRecoNeutron::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRecoNeutron(void *p) {
      return  p ? new(p) ::TArtRecoNeutron : new ::TArtRecoNeutron;
   }
   static void *newArray_TArtRecoNeutron(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRecoNeutron[nElements] : new ::TArtRecoNeutron[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRecoNeutron(void *p) {
      delete ((::TArtRecoNeutron*)p);
   }
   static void deleteArray_TArtRecoNeutron(void *p) {
      delete [] ((::TArtRecoNeutron*)p);
   }
   static void destruct_TArtRecoNeutron(void *p) {
      typedef ::TArtRecoNeutron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRecoNeutron

//______________________________________________________________________________
void TArtCalibPDCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibPDCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibPDCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibPDCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibPDCTrack(void *p) {
      return  p ? new(p) ::TArtCalibPDCTrack : new ::TArtCalibPDCTrack;
   }
   static void *newArray_TArtCalibPDCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibPDCTrack[nElements] : new ::TArtCalibPDCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibPDCTrack(void *p) {
      delete ((::TArtCalibPDCTrack*)p);
   }
   static void deleteArray_TArtCalibPDCTrack(void *p) {
      delete [] ((::TArtCalibPDCTrack*)p);
   }
   static void destruct_TArtCalibPDCTrack(void *p) {
      typedef ::TArtCalibPDCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibPDCTrack

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 339,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      ::ROOT::AddClassAlternate("vector<unsigned short>","std::vector<unsigned short, std::allocator<unsigned short> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned short>*)0x0)->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete ((vector<unsigned short>*)p);
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] ((vector<unsigned short>*)p);
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 339,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 339,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = 0);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 339,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      ::ROOT::AddClassAlternate("vector<TString>","std::vector<TString, std::allocator<TString> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)0x0)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *vectorlETArtTEDCsIParamUgR_Dictionary();
   static void vectorlETArtTEDCsIParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtTEDCsIParamUgR(void *p = 0);
   static void *newArray_vectorlETArtTEDCsIParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtTEDCsIParamUgR(void *p);
   static void deleteArray_vectorlETArtTEDCsIParamUgR(void *p);
   static void destruct_vectorlETArtTEDCsIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtTEDCsIPara*>*)
   {
      vector<TArtTEDCsIPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtTEDCsIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtTEDCsIPara*>", -2, "vector", 339,
                  typeid(vector<TArtTEDCsIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtTEDCsIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtTEDCsIPara*>) );
      instance.SetNew(&new_vectorlETArtTEDCsIParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtTEDCsIParamUgR);
      instance.SetDelete(&delete_vectorlETArtTEDCsIParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtTEDCsIParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtTEDCsIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtTEDCsIPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtTEDCsIPara*>","std::vector<TArtTEDCsIPara*, std::allocator<TArtTEDCsIPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtTEDCsIPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtTEDCsIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtTEDCsIPara*>*)0x0)->GetClass();
      vectorlETArtTEDCsIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtTEDCsIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtTEDCsIParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtTEDCsIPara*> : new vector<TArtTEDCsIPara*>;
   }
   static void *newArray_vectorlETArtTEDCsIParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtTEDCsIPara*>[nElements] : new vector<TArtTEDCsIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtTEDCsIParamUgR(void *p) {
      delete ((vector<TArtTEDCsIPara*>*)p);
   }
   static void deleteArray_vectorlETArtTEDCsIParamUgR(void *p) {
      delete [] ((vector<TArtTEDCsIPara*>*)p);
   }
   static void destruct_vectorlETArtTEDCsIParamUgR(void *p) {
      typedef vector<TArtTEDCsIPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtTEDCsIPara*>

namespace ROOT {
   static TClass *vectorlETArtRPTOFPlaParamUgR_Dictionary();
   static void vectorlETArtRPTOFPlaParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtRPTOFPlaParamUgR(void *p = 0);
   static void *newArray_vectorlETArtRPTOFPlaParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtRPTOFPlaParamUgR(void *p);
   static void deleteArray_vectorlETArtRPTOFPlaParamUgR(void *p);
   static void destruct_vectorlETArtRPTOFPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtRPTOFPlaPara*>*)
   {
      vector<TArtRPTOFPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtRPTOFPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtRPTOFPlaPara*>", -2, "vector", 339,
                  typeid(vector<TArtRPTOFPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtRPTOFPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtRPTOFPlaPara*>) );
      instance.SetNew(&new_vectorlETArtRPTOFPlaParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtRPTOFPlaParamUgR);
      instance.SetDelete(&delete_vectorlETArtRPTOFPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtRPTOFPlaParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtRPTOFPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtRPTOFPlaPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtRPTOFPlaPara*>","std::vector<TArtRPTOFPlaPara*, std::allocator<TArtRPTOFPlaPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtRPTOFPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtRPTOFPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtRPTOFPlaPara*>*)0x0)->GetClass();
      vectorlETArtRPTOFPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtRPTOFPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtRPTOFPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtRPTOFPlaPara*> : new vector<TArtRPTOFPlaPara*>;
   }
   static void *newArray_vectorlETArtRPTOFPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtRPTOFPlaPara*>[nElements] : new vector<TArtRPTOFPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtRPTOFPlaParamUgR(void *p) {
      delete ((vector<TArtRPTOFPlaPara*>*)p);
   }
   static void deleteArray_vectorlETArtRPTOFPlaParamUgR(void *p) {
      delete [] ((vector<TArtRPTOFPlaPara*>*)p);
   }
   static void destruct_vectorlETArtRPTOFPlaParamUgR(void *p) {
      typedef vector<TArtRPTOFPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtRPTOFPlaPara*>

namespace ROOT {
   static TClass *vectorlETArtHODPlaParamUgR_Dictionary();
   static void vectorlETArtHODPlaParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtHODPlaParamUgR(void *p = 0);
   static void *newArray_vectorlETArtHODPlaParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtHODPlaParamUgR(void *p);
   static void deleteArray_vectorlETArtHODPlaParamUgR(void *p);
   static void destruct_vectorlETArtHODPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtHODPlaPara*>*)
   {
      vector<TArtHODPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtHODPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtHODPlaPara*>", -2, "vector", 339,
                  typeid(vector<TArtHODPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtHODPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtHODPlaPara*>) );
      instance.SetNew(&new_vectorlETArtHODPlaParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtHODPlaParamUgR);
      instance.SetDelete(&delete_vectorlETArtHODPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtHODPlaParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtHODPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtHODPlaPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtHODPlaPara*>","std::vector<TArtHODPlaPara*, std::allocator<TArtHODPlaPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtHODPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtHODPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtHODPlaPara*>*)0x0)->GetClass();
      vectorlETArtHODPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtHODPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtHODPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtHODPlaPara*> : new vector<TArtHODPlaPara*>;
   }
   static void *newArray_vectorlETArtHODPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtHODPlaPara*>[nElements] : new vector<TArtHODPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtHODPlaParamUgR(void *p) {
      delete ((vector<TArtHODPlaPara*>*)p);
   }
   static void deleteArray_vectorlETArtHODPlaParamUgR(void *p) {
      delete [] ((vector<TArtHODPlaPara*>*)p);
   }
   static void destruct_vectorlETArtHODPlaParamUgR(void *p) {
      typedef vector<TArtHODPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtHODPlaPara*>

namespace ROOT {
   static TClass *vectorlETArtDCHitParamUgR_Dictionary();
   static void vectorlETArtDCHitParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtDCHitParamUgR(void *p = 0);
   static void *newArray_vectorlETArtDCHitParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtDCHitParamUgR(void *p);
   static void deleteArray_vectorlETArtDCHitParamUgR(void *p);
   static void destruct_vectorlETArtDCHitParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtDCHitPara*>*)
   {
      vector<TArtDCHitPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtDCHitPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtDCHitPara*>", -2, "vector", 339,
                  typeid(vector<TArtDCHitPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtDCHitParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtDCHitPara*>) );
      instance.SetNew(&new_vectorlETArtDCHitParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtDCHitParamUgR);
      instance.SetDelete(&delete_vectorlETArtDCHitParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtDCHitParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtDCHitParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtDCHitPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtDCHitPara*>","std::vector<TArtDCHitPara*, std::allocator<TArtDCHitPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtDCHitPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtDCHitParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtDCHitPara*>*)0x0)->GetClass();
      vectorlETArtDCHitParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtDCHitParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtDCHitParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtDCHitPara*> : new vector<TArtDCHitPara*>;
   }
   static void *newArray_vectorlETArtDCHitParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtDCHitPara*>[nElements] : new vector<TArtDCHitPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtDCHitParamUgR(void *p) {
      delete ((vector<TArtDCHitPara*>*)p);
   }
   static void deleteArray_vectorlETArtDCHitParamUgR(void *p) {
      delete [] ((vector<TArtDCHitPara*>*)p);
   }
   static void destruct_vectorlETArtDCHitParamUgR(void *p) {
      typedef vector<TArtDCHitPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtDCHitPara*>

namespace ROOT {
   static TClass *vectorlETArtDCHitmUgR_Dictionary();
   static void vectorlETArtDCHitmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtDCHitmUgR(void *p = 0);
   static void *newArray_vectorlETArtDCHitmUgR(Long_t size, void *p);
   static void delete_vectorlETArtDCHitmUgR(void *p);
   static void deleteArray_vectorlETArtDCHitmUgR(void *p);
   static void destruct_vectorlETArtDCHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtDCHit*>*)
   {
      vector<TArtDCHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtDCHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtDCHit*>", -2, "vector", 339,
                  typeid(vector<TArtDCHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtDCHitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtDCHit*>) );
      instance.SetNew(&new_vectorlETArtDCHitmUgR);
      instance.SetNewArray(&newArray_vectorlETArtDCHitmUgR);
      instance.SetDelete(&delete_vectorlETArtDCHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtDCHitmUgR);
      instance.SetDestructor(&destruct_vectorlETArtDCHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtDCHit*> >()));

      ::ROOT::AddClassAlternate("vector<TArtDCHit*>","std::vector<TArtDCHit*, std::allocator<TArtDCHit*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtDCHit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtDCHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtDCHit*>*)0x0)->GetClass();
      vectorlETArtDCHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtDCHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtDCHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtDCHit*> : new vector<TArtDCHit*>;
   }
   static void *newArray_vectorlETArtDCHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtDCHit*>[nElements] : new vector<TArtDCHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtDCHitmUgR(void *p) {
      delete ((vector<TArtDCHit*>*)p);
   }
   static void deleteArray_vectorlETArtDCHitmUgR(void *p) {
      delete [] ((vector<TArtDCHit*>*)p);
   }
   static void destruct_vectorlETArtDCHitmUgR(void *p) {
      typedef vector<TArtDCHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtDCHit*>

namespace ROOT {
   static TClass *vectorlETArtCalibPDCTrackcLcLlayer_typegR_Dictionary();
   static void vectorlETArtCalibPDCTrackcLcLlayer_typegR_TClassManip(TClass*);
   static void *new_vectorlETArtCalibPDCTrackcLcLlayer_typegR(void *p = 0);
   static void *newArray_vectorlETArtCalibPDCTrackcLcLlayer_typegR(Long_t size, void *p);
   static void delete_vectorlETArtCalibPDCTrackcLcLlayer_typegR(void *p);
   static void deleteArray_vectorlETArtCalibPDCTrackcLcLlayer_typegR(void *p);
   static void destruct_vectorlETArtCalibPDCTrackcLcLlayer_typegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtCalibPDCTrack::layer_type>*)
   {
      vector<TArtCalibPDCTrack::layer_type> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtCalibPDCTrack::layer_type>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtCalibPDCTrack::layer_type>", -2, "vector", 339,
                  typeid(vector<TArtCalibPDCTrack::layer_type>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtCalibPDCTrackcLcLlayer_typegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtCalibPDCTrack::layer_type>) );
      instance.SetNew(&new_vectorlETArtCalibPDCTrackcLcLlayer_typegR);
      instance.SetNewArray(&newArray_vectorlETArtCalibPDCTrackcLcLlayer_typegR);
      instance.SetDelete(&delete_vectorlETArtCalibPDCTrackcLcLlayer_typegR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtCalibPDCTrackcLcLlayer_typegR);
      instance.SetDestructor(&destruct_vectorlETArtCalibPDCTrackcLcLlayer_typegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtCalibPDCTrack::layer_type> >()));

      ::ROOT::AddClassAlternate("vector<TArtCalibPDCTrack::layer_type>","std::vector<TArtCalibPDCTrack::layer_type, std::allocator<TArtCalibPDCTrack::layer_type> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtCalibPDCTrack::layer_type>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtCalibPDCTrackcLcLlayer_typegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtCalibPDCTrack::layer_type>*)0x0)->GetClass();
      vectorlETArtCalibPDCTrackcLcLlayer_typegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtCalibPDCTrackcLcLlayer_typegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtCalibPDCTrackcLcLlayer_typegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtCalibPDCTrack::layer_type> : new vector<TArtCalibPDCTrack::layer_type>;
   }
   static void *newArray_vectorlETArtCalibPDCTrackcLcLlayer_typegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtCalibPDCTrack::layer_type>[nElements] : new vector<TArtCalibPDCTrack::layer_type>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtCalibPDCTrackcLcLlayer_typegR(void *p) {
      delete ((vector<TArtCalibPDCTrack::layer_type>*)p);
   }
   static void deleteArray_vectorlETArtCalibPDCTrackcLcLlayer_typegR(void *p) {
      delete [] ((vector<TArtCalibPDCTrack::layer_type>*)p);
   }
   static void destruct_vectorlETArtCalibPDCTrackcLcLlayer_typegR(void *p) {
      typedef vector<TArtCalibPDCTrack::layer_type> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtCalibPDCTrack::layer_type>

namespace ROOT {
   static TClass *vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR_Dictionary();
   static void vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(void *p = 0);
   static void *newArray_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(Long_t size, void *p);
   static void delete_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(void *p);
   static void deleteArray_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(void *p);
   static void destruct_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtCalcGlobalTrack::TrackHit*>*)
   {
      vector<TArtCalcGlobalTrack::TrackHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtCalcGlobalTrack::TrackHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtCalcGlobalTrack::TrackHit*>", -2, "vector", 339,
                  typeid(vector<TArtCalcGlobalTrack::TrackHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtCalcGlobalTrack::TrackHit*>) );
      instance.SetNew(&new_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR);
      instance.SetNewArray(&newArray_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR);
      instance.SetDelete(&delete_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR);
      instance.SetDestructor(&destruct_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtCalcGlobalTrack::TrackHit*> >()));

      ::ROOT::AddClassAlternate("vector<TArtCalcGlobalTrack::TrackHit*>","std::vector<TArtCalcGlobalTrack::TrackHit*, std::allocator<TArtCalcGlobalTrack::TrackHit*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtCalcGlobalTrack::TrackHit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtCalcGlobalTrack::TrackHit*>*)0x0)->GetClass();
      vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtCalcGlobalTrack::TrackHit*> : new vector<TArtCalcGlobalTrack::TrackHit*>;
   }
   static void *newArray_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtCalcGlobalTrack::TrackHit*>[nElements] : new vector<TArtCalcGlobalTrack::TrackHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(void *p) {
      delete ((vector<TArtCalcGlobalTrack::TrackHit*>*)p);
   }
   static void deleteArray_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(void *p) {
      delete [] ((vector<TArtCalcGlobalTrack::TrackHit*>*)p);
   }
   static void destruct_vectorlETArtCalcGlobalTrackcLcLTrackHitmUgR(void *p) {
      typedef vector<TArtCalcGlobalTrack::TrackHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtCalcGlobalTrack::TrackHit*>

namespace ROOT {
   static TClass *maplEunsignedsPintcOdoublegR_Dictionary();
   static void maplEunsignedsPintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOdoublegR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOdoublegR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOdoublegR(void *p);
   static void deleteArray_maplEunsignedsPintcOdoublegR(void *p);
   static void destruct_maplEunsignedsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,double>*)
   {
      map<unsigned int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,double>", -2, "map", 100,
                  typeid(map<unsigned int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,double>) );
      instance.SetNew(&new_maplEunsignedsPintcOdoublegR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOdoublegR);
      instance.SetDelete(&delete_maplEunsignedsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOdoublegR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,double> >()));

      ::ROOT::AddClassAlternate("map<unsigned int,double>","std::map<unsigned int, double, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,double>*)0x0)->GetClass();
      maplEunsignedsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,double> : new map<unsigned int,double>;
   }
   static void *newArray_maplEunsignedsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,double>[nElements] : new map<unsigned int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOdoublegR(void *p) {
      delete ((map<unsigned int,double>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOdoublegR(void *p) {
      delete [] ((map<unsigned int,double>*)p);
   }
   static void destruct_maplEunsignedsPintcOdoublegR(void *p) {
      typedef map<unsigned int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,double>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      ::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOTArtTacquilaParamUgR_Dictionary();
   static void maplEintcOTArtTacquilaParamUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtTacquilaParamUgR(void *p = 0);
   static void *newArray_maplEintcOTArtTacquilaParamUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtTacquilaParamUgR(void *p);
   static void deleteArray_maplEintcOTArtTacquilaParamUgR(void *p);
   static void destruct_maplEintcOTArtTacquilaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtTacquilaPara*>*)
   {
      map<int,TArtTacquilaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtTacquilaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtTacquilaPara*>", -2, "map", 100,
                  typeid(map<int,TArtTacquilaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtTacquilaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtTacquilaPara*>) );
      instance.SetNew(&new_maplEintcOTArtTacquilaParamUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtTacquilaParamUgR);
      instance.SetDelete(&delete_maplEintcOTArtTacquilaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtTacquilaParamUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtTacquilaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtTacquilaPara*> >()));

      ::ROOT::AddClassAlternate("map<int,TArtTacquilaPara*>","std::map<int, TArtTacquilaPara*, std::less<int>, std::allocator<std::pair<int const, TArtTacquilaPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TArtTacquilaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtTacquilaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TArtTacquilaPara*>*)0x0)->GetClass();
      maplEintcOTArtTacquilaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtTacquilaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtTacquilaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtTacquilaPara*> : new map<int,TArtTacquilaPara*>;
   }
   static void *newArray_maplEintcOTArtTacquilaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtTacquilaPara*>[nElements] : new map<int,TArtTacquilaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtTacquilaParamUgR(void *p) {
      delete ((map<int,TArtTacquilaPara*>*)p);
   }
   static void deleteArray_maplEintcOTArtTacquilaParamUgR(void *p) {
      delete [] ((map<int,TArtTacquilaPara*>*)p);
   }
   static void destruct_maplEintcOTArtTacquilaParamUgR(void *p) {
      typedef map<int,TArtTacquilaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtTacquilaPara*>

namespace ROOT {
   static TClass *maplEintcOTArtNeuLANDPlaParamUgR_Dictionary();
   static void maplEintcOTArtNeuLANDPlaParamUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtNeuLANDPlaParamUgR(void *p = 0);
   static void *newArray_maplEintcOTArtNeuLANDPlaParamUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtNeuLANDPlaParamUgR(void *p);
   static void deleteArray_maplEintcOTArtNeuLANDPlaParamUgR(void *p);
   static void destruct_maplEintcOTArtNeuLANDPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtNeuLANDPlaPara*>*)
   {
      map<int,TArtNeuLANDPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtNeuLANDPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtNeuLANDPlaPara*>", -2, "map", 100,
                  typeid(map<int,TArtNeuLANDPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtNeuLANDPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtNeuLANDPlaPara*>) );
      instance.SetNew(&new_maplEintcOTArtNeuLANDPlaParamUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtNeuLANDPlaParamUgR);
      instance.SetDelete(&delete_maplEintcOTArtNeuLANDPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtNeuLANDPlaParamUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtNeuLANDPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtNeuLANDPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<int,TArtNeuLANDPlaPara*>","std::map<int, TArtNeuLANDPlaPara*, std::less<int>, std::allocator<std::pair<int const, TArtNeuLANDPlaPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TArtNeuLANDPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtNeuLANDPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TArtNeuLANDPlaPara*>*)0x0)->GetClass();
      maplEintcOTArtNeuLANDPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtNeuLANDPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtNeuLANDPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtNeuLANDPlaPara*> : new map<int,TArtNeuLANDPlaPara*>;
   }
   static void *newArray_maplEintcOTArtNeuLANDPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtNeuLANDPlaPara*>[nElements] : new map<int,TArtNeuLANDPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtNeuLANDPlaParamUgR(void *p) {
      delete ((map<int,TArtNeuLANDPlaPara*>*)p);
   }
   static void deleteArray_maplEintcOTArtNeuLANDPlaParamUgR(void *p) {
      delete [] ((map<int,TArtNeuLANDPlaPara*>*)p);
   }
   static void destruct_maplEintcOTArtNeuLANDPlaParamUgR(void *p) {
      typedef map<int,TArtNeuLANDPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtNeuLANDPlaPara*>

namespace ROOT {
   static TClass *maplEintcOTArtNINJAPlaParamUgR_Dictionary();
   static void maplEintcOTArtNINJAPlaParamUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtNINJAPlaParamUgR(void *p = 0);
   static void *newArray_maplEintcOTArtNINJAPlaParamUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtNINJAPlaParamUgR(void *p);
   static void deleteArray_maplEintcOTArtNINJAPlaParamUgR(void *p);
   static void destruct_maplEintcOTArtNINJAPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtNINJAPlaPara*>*)
   {
      map<int,TArtNINJAPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtNINJAPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtNINJAPlaPara*>", -2, "map", 100,
                  typeid(map<int,TArtNINJAPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtNINJAPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtNINJAPlaPara*>) );
      instance.SetNew(&new_maplEintcOTArtNINJAPlaParamUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtNINJAPlaParamUgR);
      instance.SetDelete(&delete_maplEintcOTArtNINJAPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtNINJAPlaParamUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtNINJAPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtNINJAPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<int,TArtNINJAPlaPara*>","std::map<int, TArtNINJAPlaPara*, std::less<int>, std::allocator<std::pair<int const, TArtNINJAPlaPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TArtNINJAPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtNINJAPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TArtNINJAPlaPara*>*)0x0)->GetClass();
      maplEintcOTArtNINJAPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtNINJAPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtNINJAPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtNINJAPlaPara*> : new map<int,TArtNINJAPlaPara*>;
   }
   static void *newArray_maplEintcOTArtNINJAPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtNINJAPlaPara*>[nElements] : new map<int,TArtNINJAPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtNINJAPlaParamUgR(void *p) {
      delete ((map<int,TArtNINJAPlaPara*>*)p);
   }
   static void deleteArray_maplEintcOTArtNINJAPlaParamUgR(void *p) {
      delete [] ((map<int,TArtNINJAPlaPara*>*)p);
   }
   static void destruct_maplEintcOTArtNINJAPlaParamUgR(void *p) {
      typedef map<int,TArtNINJAPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtNINJAPlaPara*>

namespace ROOT {
   static TClass *maplEintcOTArtNEBULAPlaParamUgR_Dictionary();
   static void maplEintcOTArtNEBULAPlaParamUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtNEBULAPlaParamUgR(void *p = 0);
   static void *newArray_maplEintcOTArtNEBULAPlaParamUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtNEBULAPlaParamUgR(void *p);
   static void deleteArray_maplEintcOTArtNEBULAPlaParamUgR(void *p);
   static void destruct_maplEintcOTArtNEBULAPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtNEBULAPlaPara*>*)
   {
      map<int,TArtNEBULAPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtNEBULAPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtNEBULAPlaPara*>", -2, "map", 100,
                  typeid(map<int,TArtNEBULAPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtNEBULAPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtNEBULAPlaPara*>) );
      instance.SetNew(&new_maplEintcOTArtNEBULAPlaParamUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtNEBULAPlaParamUgR);
      instance.SetDelete(&delete_maplEintcOTArtNEBULAPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtNEBULAPlaParamUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtNEBULAPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtNEBULAPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<int,TArtNEBULAPlaPara*>","std::map<int, TArtNEBULAPlaPara*, std::less<int>, std::allocator<std::pair<int const, TArtNEBULAPlaPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TArtNEBULAPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtNEBULAPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TArtNEBULAPlaPara*>*)0x0)->GetClass();
      maplEintcOTArtNEBULAPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtNEBULAPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtNEBULAPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtNEBULAPlaPara*> : new map<int,TArtNEBULAPlaPara*>;
   }
   static void *newArray_maplEintcOTArtNEBULAPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtNEBULAPlaPara*>[nElements] : new map<int,TArtNEBULAPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtNEBULAPlaParamUgR(void *p) {
      delete ((map<int,TArtNEBULAPlaPara*>*)p);
   }
   static void deleteArray_maplEintcOTArtNEBULAPlaParamUgR(void *p) {
      delete [] ((map<int,TArtNEBULAPlaPara*>*)p);
   }
   static void destruct_maplEintcOTArtNEBULAPlaParamUgR(void *p) {
      typedef map<int,TArtNEBULAPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtNEBULAPlaPara*>

namespace ROOT {
   static TClass *maplEintcOTArtNEBULAHPCParamUgR_Dictionary();
   static void maplEintcOTArtNEBULAHPCParamUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtNEBULAHPCParamUgR(void *p = 0);
   static void *newArray_maplEintcOTArtNEBULAHPCParamUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtNEBULAHPCParamUgR(void *p);
   static void deleteArray_maplEintcOTArtNEBULAHPCParamUgR(void *p);
   static void destruct_maplEintcOTArtNEBULAHPCParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtNEBULAHPCPara*>*)
   {
      map<int,TArtNEBULAHPCPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtNEBULAHPCPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtNEBULAHPCPara*>", -2, "map", 100,
                  typeid(map<int,TArtNEBULAHPCPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtNEBULAHPCParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtNEBULAHPCPara*>) );
      instance.SetNew(&new_maplEintcOTArtNEBULAHPCParamUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtNEBULAHPCParamUgR);
      instance.SetDelete(&delete_maplEintcOTArtNEBULAHPCParamUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtNEBULAHPCParamUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtNEBULAHPCParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtNEBULAHPCPara*> >()));

      ::ROOT::AddClassAlternate("map<int,TArtNEBULAHPCPara*>","std::map<int, TArtNEBULAHPCPara*, std::less<int>, std::allocator<std::pair<int const, TArtNEBULAHPCPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TArtNEBULAHPCPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtNEBULAHPCParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TArtNEBULAHPCPara*>*)0x0)->GetClass();
      maplEintcOTArtNEBULAHPCParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtNEBULAHPCParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtNEBULAHPCParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtNEBULAHPCPara*> : new map<int,TArtNEBULAHPCPara*>;
   }
   static void *newArray_maplEintcOTArtNEBULAHPCParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtNEBULAHPCPara*>[nElements] : new map<int,TArtNEBULAHPCPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtNEBULAHPCParamUgR(void *p) {
      delete ((map<int,TArtNEBULAHPCPara*>*)p);
   }
   static void deleteArray_maplEintcOTArtNEBULAHPCParamUgR(void *p) {
      delete [] ((map<int,TArtNEBULAHPCPara*>*)p);
   }
   static void destruct_maplEintcOTArtNEBULAHPCParamUgR(void *p) {
      typedef map<int,TArtNEBULAHPCPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtNEBULAHPCPara*>

namespace ROOT {
   static TClass *maplEintcOTArtHIMEPlaParamUgR_Dictionary();
   static void maplEintcOTArtHIMEPlaParamUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtHIMEPlaParamUgR(void *p = 0);
   static void *newArray_maplEintcOTArtHIMEPlaParamUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtHIMEPlaParamUgR(void *p);
   static void deleteArray_maplEintcOTArtHIMEPlaParamUgR(void *p);
   static void destruct_maplEintcOTArtHIMEPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtHIMEPlaPara*>*)
   {
      map<int,TArtHIMEPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtHIMEPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtHIMEPlaPara*>", -2, "map", 100,
                  typeid(map<int,TArtHIMEPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtHIMEPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtHIMEPlaPara*>) );
      instance.SetNew(&new_maplEintcOTArtHIMEPlaParamUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtHIMEPlaParamUgR);
      instance.SetDelete(&delete_maplEintcOTArtHIMEPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtHIMEPlaParamUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtHIMEPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtHIMEPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<int,TArtHIMEPlaPara*>","std::map<int, TArtHIMEPlaPara*, std::less<int>, std::allocator<std::pair<int const, TArtHIMEPlaPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TArtHIMEPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtHIMEPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TArtHIMEPlaPara*>*)0x0)->GetClass();
      maplEintcOTArtHIMEPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtHIMEPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtHIMEPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtHIMEPlaPara*> : new map<int,TArtHIMEPlaPara*>;
   }
   static void *newArray_maplEintcOTArtHIMEPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtHIMEPlaPara*>[nElements] : new map<int,TArtHIMEPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtHIMEPlaParamUgR(void *p) {
      delete ((map<int,TArtHIMEPlaPara*>*)p);
   }
   static void deleteArray_maplEintcOTArtHIMEPlaParamUgR(void *p) {
      delete [] ((map<int,TArtHIMEPlaPara*>*)p);
   }
   static void destruct_maplEintcOTArtHIMEPlaParamUgR(void *p) {
      typedef map<int,TArtHIMEPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtHIMEPlaPara*>

namespace ROOT {
   static TClass *maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR_Dictionary();
   static void maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR_TClassManip(TClass*);
   static void *new_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(void *p = 0);
   static void *newArray_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(Long_t size, void *p);
   static void delete_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(void *p);
   static void deleteArray_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(void *p);
   static void destruct_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtTacquilaMap,const TArtTacquilaPara*>*)
   {
      map<TArtTacquilaMap,const TArtTacquilaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtTacquilaMap,const TArtTacquilaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtTacquilaMap,const TArtTacquilaPara*>", -2, "map", 100,
                  typeid(map<TArtTacquilaMap,const TArtTacquilaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtTacquilaMap,const TArtTacquilaPara*>) );
      instance.SetNew(&new_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR);
      instance.SetNewArray(&newArray_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR);
      instance.SetDelete(&delete_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR);
      instance.SetDestructor(&destruct_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtTacquilaMap,const TArtTacquilaPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtTacquilaMap,const TArtTacquilaPara*>","std::map<TArtTacquilaMap, TArtTacquilaPara const*, std::less<TArtTacquilaMap>, std::allocator<std::pair<TArtTacquilaMap const, TArtTacquilaPara const*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtTacquilaMap,const TArtTacquilaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtTacquilaMap,const TArtTacquilaPara*>*)0x0)->GetClass();
      maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtTacquilaMap,const TArtTacquilaPara*> : new map<TArtTacquilaMap,const TArtTacquilaPara*>;
   }
   static void *newArray_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtTacquilaMap,const TArtTacquilaPara*>[nElements] : new map<TArtTacquilaMap,const TArtTacquilaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(void *p) {
      delete ((map<TArtTacquilaMap,const TArtTacquilaPara*>*)p);
   }
   static void deleteArray_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(void *p) {
      delete [] ((map<TArtTacquilaMap,const TArtTacquilaPara*>*)p);
   }
   static void destruct_maplETArtTacquilaMapcOconstsPTArtTacquilaParamUgR(void *p) {
      typedef map<TArtTacquilaMap,const TArtTacquilaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtTacquilaMap,const TArtTacquilaPara*>

namespace ROOT {
   static TClass *maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR_Dictionary();
   static void maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR_TClassManip(TClass*);
   static void *new_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(void *p = 0);
   static void *newArray_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(Long_t size, void *p);
   static void delete_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(void *p);
   static void deleteArray_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(void *p);
   static void destruct_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>*)
   {
      map<TArtTacquilaMap,const TArtNeuLANDPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>", -2, "map", 100,
                  typeid(map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>) );
      instance.SetNew(&new_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR);
      instance.SetNewArray(&newArray_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR);
      instance.SetDelete(&delete_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR);
      instance.SetDestructor(&destruct_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtTacquilaMap,const TArtNeuLANDPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>","std::map<TArtTacquilaMap, TArtNeuLANDPlaPara const*, std::less<TArtTacquilaMap>, std::allocator<std::pair<TArtTacquilaMap const, TArtNeuLANDPlaPara const*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>*)0x0)->GetClass();
      maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtTacquilaMap,const TArtNeuLANDPlaPara*> : new map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>;
   }
   static void *newArray_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>[nElements] : new map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(void *p) {
      delete ((map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>*)p);
   }
   static void deleteArray_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(void *p) {
      delete [] ((map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>*)p);
   }
   static void destruct_maplETArtTacquilaMapcOconstsPTArtNeuLANDPlaParamUgR(void *p) {
      typedef map<TArtTacquilaMap,const TArtNeuLANDPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtTacquilaMap,const TArtNeuLANDPlaPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR_Dictionary();
   static void maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,const TArtNINJAPlaPara*>*)
   {
      map<TArtRIDFMap,const TArtNINJAPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,const TArtNINJAPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,const TArtNINJAPlaPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,const TArtNINJAPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,const TArtNINJAPlaPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,const TArtNINJAPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,const TArtNINJAPlaPara*>","std::map<TArtRIDFMap, TArtNINJAPlaPara const*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtNINJAPlaPara const*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,const TArtNINJAPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,const TArtNINJAPlaPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,const TArtNINJAPlaPara*> : new map<TArtRIDFMap,const TArtNINJAPlaPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,const TArtNINJAPlaPara*>[nElements] : new map<TArtRIDFMap,const TArtNINJAPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(void *p) {
      delete ((map<TArtRIDFMap,const TArtNINJAPlaPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,const TArtNINJAPlaPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOconstsPTArtNINJAPlaParamUgR(void *p) {
      typedef map<TArtRIDFMap,const TArtNINJAPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,const TArtNINJAPlaPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR_Dictionary();
   static void maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,const TArtNEBULAPlaPara*>*)
   {
      map<TArtRIDFMap,const TArtNEBULAPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,const TArtNEBULAPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,const TArtNEBULAPlaPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,const TArtNEBULAPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,const TArtNEBULAPlaPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,const TArtNEBULAPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,const TArtNEBULAPlaPara*>","std::map<TArtRIDFMap, TArtNEBULAPlaPara const*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtNEBULAPlaPara const*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,const TArtNEBULAPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,const TArtNEBULAPlaPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,const TArtNEBULAPlaPara*> : new map<TArtRIDFMap,const TArtNEBULAPlaPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,const TArtNEBULAPlaPara*>[nElements] : new map<TArtRIDFMap,const TArtNEBULAPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(void *p) {
      delete ((map<TArtRIDFMap,const TArtNEBULAPlaPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,const TArtNEBULAPlaPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOconstsPTArtNEBULAPlaParamUgR(void *p) {
      typedef map<TArtRIDFMap,const TArtNEBULAPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,const TArtNEBULAPlaPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR_Dictionary();
   static void maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,const TArtNEBULAHPCPara*>*)
   {
      map<TArtRIDFMap,const TArtNEBULAHPCPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,const TArtNEBULAHPCPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,const TArtNEBULAHPCPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,const TArtNEBULAHPCPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,const TArtNEBULAHPCPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,const TArtNEBULAHPCPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,const TArtNEBULAHPCPara*>","std::map<TArtRIDFMap, TArtNEBULAHPCPara const*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtNEBULAHPCPara const*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,const TArtNEBULAHPCPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,const TArtNEBULAHPCPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,const TArtNEBULAHPCPara*> : new map<TArtRIDFMap,const TArtNEBULAHPCPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,const TArtNEBULAHPCPara*>[nElements] : new map<TArtRIDFMap,const TArtNEBULAHPCPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(void *p) {
      delete ((map<TArtRIDFMap,const TArtNEBULAHPCPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,const TArtNEBULAHPCPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOconstsPTArtNEBULAHPCParamUgR(void *p) {
      typedef map<TArtRIDFMap,const TArtNEBULAHPCPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,const TArtNEBULAHPCPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR_Dictionary();
   static void maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,const TArtHIMEPlaPara*>*)
   {
      map<TArtRIDFMap,const TArtHIMEPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,const TArtHIMEPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,const TArtHIMEPlaPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,const TArtHIMEPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,const TArtHIMEPlaPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,const TArtHIMEPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,const TArtHIMEPlaPara*>","std::map<TArtRIDFMap, TArtHIMEPlaPara const*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtHIMEPlaPara const*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,const TArtHIMEPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,const TArtHIMEPlaPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,const TArtHIMEPlaPara*> : new map<TArtRIDFMap,const TArtHIMEPlaPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,const TArtHIMEPlaPara*>[nElements] : new map<TArtRIDFMap,const TArtHIMEPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(void *p) {
      delete ((map<TArtRIDFMap,const TArtHIMEPlaPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,const TArtHIMEPlaPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOconstsPTArtHIMEPlaParamUgR(void *p) {
      typedef map<TArtRIDFMap,const TArtHIMEPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,const TArtHIMEPlaPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtTEDCsIParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtTEDCsIParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtTEDCsIParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtTEDCsIParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtTEDCsIParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtTEDCsIParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtTEDCsIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtTEDCsIPara*>*)
   {
      map<TArtRIDFMap,TArtTEDCsIPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtTEDCsIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtTEDCsIPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtTEDCsIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtTEDCsIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtTEDCsIPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtTEDCsIParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtTEDCsIParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtTEDCsIParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtTEDCsIParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtTEDCsIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtTEDCsIPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtTEDCsIPara*>","std::map<TArtRIDFMap, TArtTEDCsIPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtTEDCsIPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtTEDCsIPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtTEDCsIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtTEDCsIPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtTEDCsIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtTEDCsIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtTEDCsIParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtTEDCsIPara*> : new map<TArtRIDFMap,TArtTEDCsIPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtTEDCsIParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtTEDCsIPara*>[nElements] : new map<TArtRIDFMap,TArtTEDCsIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtTEDCsIParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtTEDCsIPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtTEDCsIParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtTEDCsIPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtTEDCsIParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtTEDCsIPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtTEDCsIPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtRPTOFPlaParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtRPTOFPlaParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtRPTOFPlaPara*>*)
   {
      map<TArtRIDFMap,TArtRPTOFPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtRPTOFPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtRPTOFPlaPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtRPTOFPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtRPTOFPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtRPTOFPlaPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtRPTOFPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtRPTOFPlaPara*>","std::map<TArtRIDFMap, TArtRPTOFPlaPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtRPTOFPlaPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtRPTOFPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtRPTOFPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtRPTOFPlaPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtRPTOFPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtRPTOFPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtRPTOFPlaPara*> : new map<TArtRIDFMap,TArtRPTOFPlaPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtRPTOFPlaPara*>[nElements] : new map<TArtRIDFMap,TArtRPTOFPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtRPTOFPlaPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtRPTOFPlaPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtRPTOFPlaParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtRPTOFPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtRPTOFPlaPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtHODPlaParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtHODPlaParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtHODPlaParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtHODPlaParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtHODPlaParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtHODPlaParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtHODPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtHODPlaPara*>*)
   {
      map<TArtRIDFMap,TArtHODPlaPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtHODPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtHODPlaPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtHODPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtHODPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtHODPlaPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtHODPlaParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtHODPlaParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtHODPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtHODPlaParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtHODPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtHODPlaPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtHODPlaPara*>","std::map<TArtRIDFMap, TArtHODPlaPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtHODPlaPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtHODPlaPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtHODPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtHODPlaPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtHODPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtHODPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtHODPlaParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtHODPlaPara*> : new map<TArtRIDFMap,TArtHODPlaPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtHODPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtHODPlaPara*>[nElements] : new map<TArtRIDFMap,TArtHODPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtHODPlaParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtHODPlaPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtHODPlaParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtHODPlaPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtHODPlaParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtHODPlaPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtHODPlaPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtDCHitParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtDCHitParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtDCHitParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtDCHitParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtDCHitParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtDCHitParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtDCHitParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtDCHitPara*>*)
   {
      map<TArtRIDFMap,TArtDCHitPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtDCHitPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtDCHitPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtDCHitPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtDCHitParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtDCHitPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtDCHitParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtDCHitParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtDCHitParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtDCHitParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtDCHitParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtDCHitPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtDCHitPara*>","std::map<TArtRIDFMap, TArtDCHitPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtDCHitPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtDCHitPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtDCHitParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtDCHitPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtDCHitParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtDCHitParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtDCHitParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtDCHitPara*> : new map<TArtRIDFMap,TArtDCHitPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtDCHitParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtDCHitPara*>[nElements] : new map<TArtRIDFMap,TArtDCHitPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtDCHitParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtDCHitPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtDCHitParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtDCHitPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtDCHitParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtDCHitPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtDCHitPara*>

namespace {
  void TriggerDictionaryInitialization_anasamurai_dict_Impl() {
    static const char* headers[] = {
"include/TArtTacquilaMap.hh",
"include/TArtHIMEFilter.hh",
"include/TArtCalibFDC2Track.hh",
"include/TArtCalibRPDCTrack.hh",
"include/FieldMan.hh",
"include/TArtNINJAPla.hh",
"include/DCGeomRecord.hh",
"include/TArtDCTrack.hh",
"include/TArtCalibBDC1Hit.hh",
"include/TArtHIMEPlaPara.hh",
"include/TArtNEBULAFilter.hh",
"include/TArtCalibBPCHit.hh",
"include/TArtCalibSimpleDCTrack.hh",
"include/TArtCalibNeuLAND.hh",
"include/TArtCalcGlobalTrack.hh",
"include/TArtCalibFDC0Hit.hh",
"include/TArtCalibFDC1Track.hh",
"include/TArtCalibDCHit.hh",
"include/TArtTEDCsIPara.hh",
"include/TArtCalibS1DC2Track.hh",
"include/DCConfMan.hh",
"include/TArtNINJAPlaPara.hh",
"include/TArtTZero.hh",
"include/RungeKuttaUtilities.hh",
"include/TArtCalibS1DC1Track.hh",
"include/SAMURAIFieldMap.hh",
"include/TArtHODPla.hh",
"include/TArtNeutron.hh",
"include/TArtICF.hh",
"include/TArtCalibSimpleFDC0Track.hh",
"include/TArtNEBULAHPC.hh",
"include/TArtCalibRPTOFPla.hh",
"include/TArtCalibHODPla.hh",
"include/TArtRPTOFPla.hh",
"include/TArtCalibBDC2Track.hh",
"include/TArtHIMEPla.hh",
"include/TArtFragment.hh",
"include/TArtCalibDCTrack.hh",
"include/TArtCalibNEBULA.hh",
"include/TArtHODPlaPara.hh",
"include/TArtNeuLANDPla.hh",
"include/TArtCalibSAMURAI.hh",
"include/TArtDCHit.hh",
"include/TArtCalibSimpleFDC2Track.hh",
"include/TArtRecoSAMURAI.hh",
"include/TArtCalibSimpleBDC1Track.hh",
"include/TArtDCHitPara.hh",
"include/MathTools.hh",
"include/TArtCalibHIME.hh",
"include/TArtRPTOFPlaPara.hh",
"include/TArtCalibNeuLANDVETO.hh",
"include/TArtCalibFDC2Hit.hh",
"include/TArtCalibBDC1Track.hh",
"include/TArtCalibFDC1Hit.hh",
"include/TArtCalibNINJA.hh",
"include/TArtNeuLANDPlaPara.hh",
"include/TArtCalibPDCHit.hh",
"include/TArtCalibSimpleFDC1Track.hh",
"include/TArtCalibSimpleBDC2Track.hh",
"include/TArtCalibRPDCHit.hh",
"include/TArtRecoFragment.hh",
"include/TArtCalibICF.hh",
"include/TArtCalibBDC2Hit.hh",
"include/TArtCalibS1DC2Hit.hh",
"include/TArtCalibFDC0Track.hh",
"include/TArtTEDCsI.hh",
"include/TArtCalibS1DC1Hit.hh",
"include/TArtNEBULAPla.hh",
"include/TArtSAMURAIParameters.hh",
"include/TArtCalibNEBULAHPC.hh",
"include/TArtNEBULAHPCPara.hh",
"include/TArtCalibSAMURAITZero.hh",
"include/TArtCalibTEDCsI.hh",
"include/TArtRecoNeutron.hh",
"include/TArtCalibPDCTrack.hh",
"include/TArtNEBULAPlaPara.hh",
0
    };
    static const char* includePaths[] = {
"/opt/root/include",
"../../Core/include",
"../../Reconstruction/BigRIPS/include",
"/opt/root/include/",
"/home/quser/src/anaroot/sources/Reconstruction/SAMURAI/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anasamurai_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TArtTacquilaMap.hh")))  TArtTacquilaMap;
class __attribute__((annotate("$clingAutoload$include/TArtHIMEFilter.hh")))  TArtHIMEFilter;
class __attribute__((annotate("$clingAutoload$TArtCalibDCTrack.hh")))  __attribute__((annotate("$clingAutoload$include/TArtCalibFDC2Track.hh")))  TArtCalibDCTrack;
class __attribute__((annotate("$clingAutoload$include/TArtCalibFDC2Track.hh")))  TArtCalibFDC2Track;
class __attribute__((annotate("$clingAutoload$include/TArtCalibRPDCTrack.hh")))  TArtCalibRPDCTrack;
class __attribute__((annotate("$clingAutoload$include/TArtNINJAPla.hh")))  TArtNINJAPla;
class __attribute__((annotate("$clingAutoload$include/TArtDCTrack.hh")))  TArtDCTrack;
class __attribute__((annotate("$clingAutoload$TArtCalibDCHit.hh")))  __attribute__((annotate("$clingAutoload$include/TArtCalibBDC1Hit.hh")))  TArtCalibDCHit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibBDC1Hit.hh")))  TArtCalibBDC1Hit;
class __attribute__((annotate("$clingAutoload$include/TArtHIMEPlaPara.hh")))  TArtHIMEPlaPara;
class __attribute__((annotate("$clingAutoload$include/TArtNEBULAFilter.hh")))  TArtNEBULAFilter;
class __attribute__((annotate("$clingAutoload$include/TArtCalibBPCHit.hh")))  TArtCalibBPCHit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSimpleDCTrack.hh")))  TArtCalibSimpleDCTrack;
class __attribute__((annotate("$clingAutoload$TArtSAMURAIParameters.hh")))  __attribute__((annotate("$clingAutoload$include/TArtCalibNeuLAND.hh")))  TArtSAMURAIParameters;
class __attribute__((annotate("$clingAutoload$TArtNeuLANDPla.hh")))  __attribute__((annotate("$clingAutoload$include/TArtCalibNeuLAND.hh")))  TArtNeuLANDPla;
class __attribute__((annotate("$clingAutoload$TArtNeuLANDPlaPara.hh")))  __attribute__((annotate("$clingAutoload$include/TArtCalibNeuLAND.hh")))  TArtTacquilaPara;
class __attribute__((annotate("$clingAutoload$TArtNeuLANDPlaPara.hh")))  __attribute__((annotate("$clingAutoload$include/TArtCalibNeuLAND.hh")))  TArtNeuLANDPlaPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibNeuLAND.hh")))  TArtCalibNeuLAND;
class __attribute__((annotate("$clingAutoload$include/TArtCalcGlobalTrack.hh")))  TArtCalcGlobalTrack;
class __attribute__((annotate("$clingAutoload$include/TArtCalibFDC0Hit.hh")))  TArtCalibFDC0Hit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibFDC1Track.hh")))  TArtCalibFDC1Track;
class __attribute__((annotate("$clingAutoload$include/TArtTEDCsIPara.hh")))  TArtTEDCsIPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibS1DC2Track.hh")))  TArtCalibS1DC2Track;
class __attribute__((annotate("$clingAutoload$include/TArtNINJAPlaPara.hh")))  TArtNINJAPlaPara;
class __attribute__((annotate("$clingAutoload$include/TArtTZero.hh")))  TArtTZero;
class __attribute__((annotate("$clingAutoload$include/TArtCalibS1DC1Track.hh")))  TArtCalibS1DC1Track;
class __attribute__((annotate("$clingAutoload$include/TArtHODPla.hh")))  TArtHODPla;
class __attribute__((annotate("$clingAutoload$include/TArtNeutron.hh")))  TArtNeutron;
class __attribute__((annotate("$clingAutoload$include/TArtICF.hh")))  TArtICF;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSimpleFDC0Track.hh")))  TArtCalibSimpleFDC0Track;
class __attribute__((annotate("$clingAutoload$include/TArtNEBULAHPC.hh")))  TArtNEBULAHPC;
class __attribute__((annotate("$clingAutoload$include/TArtCalibRPTOFPla.hh")))  TArtCalibRPTOFPla;
class __attribute__((annotate("$clingAutoload$include/TArtCalibHODPla.hh")))  TArtCalibHODPla;
class __attribute__((annotate("$clingAutoload$include/TArtRPTOFPla.hh")))  TArtRPTOFPla;
class __attribute__((annotate("$clingAutoload$include/TArtCalibBDC2Track.hh")))  TArtCalibBDC2Track;
class __attribute__((annotate("$clingAutoload$include/TArtHIMEPla.hh")))  TArtHIMEPla;
class __attribute__((annotate("$clingAutoload$include/TArtFragment.hh")))  TArtFragment;
class __attribute__((annotate("$clingAutoload$TArtNEBULAPla.hh")))  __attribute__((annotate("$clingAutoload$include/TArtCalibNEBULA.hh")))  TArtNEBULAPla;
class __attribute__((annotate("$clingAutoload$TArtNEBULAPlaPara.hh")))  __attribute__((annotate("$clingAutoload$include/TArtCalibNEBULA.hh")))  TArtNEBULAPlaPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibNEBULA.hh")))  TArtCalibNEBULAMult;
class __attribute__((annotate("$clingAutoload$include/TArtCalibNEBULA.hh")))  TArtCalibNEBULA;
class __attribute__((annotate("$clingAutoload$include/TArtHODPlaPara.hh")))  TArtHODPlaPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSAMURAI.hh")))  TArtCalibSAMURAI;
class __attribute__((annotate("$clingAutoload$include/TArtDCHit.hh")))  TArtDCHit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSimpleFDC2Track.hh")))  TArtCalibSimpleFDC2Track;
class __attribute__((annotate("$clingAutoload$include/TArtRecoSAMURAI.hh")))  TArtRecoSAMURAI;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSimpleBDC1Track.hh")))  TArtCalibSimpleBDC1Track;
class __attribute__((annotate("$clingAutoload$include/TArtDCHitPara.hh")))  TArtDCHitPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibHIME.hh")))  TArtCalibHIMEMult;
class __attribute__((annotate("$clingAutoload$include/TArtCalibHIME.hh")))  TArtCalibHIME;
class __attribute__((annotate("$clingAutoload$include/TArtRPTOFPlaPara.hh")))  TArtRPTOFPlaPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibNeuLANDVETO.hh")))  TArtCalibNeuLANDVETO;
class __attribute__((annotate("$clingAutoload$include/TArtCalibFDC2Hit.hh")))  TArtCalibFDC2Hit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibBDC1Track.hh")))  TArtCalibBDC1Track;
class __attribute__((annotate("$clingAutoload$include/TArtCalibFDC1Hit.hh")))  TArtCalibFDC1Hit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibNINJA.hh")))  TArtCalibNINJA;
class __attribute__((annotate("$clingAutoload$include/TArtCalibPDCHit.hh")))  TArtCalibPDCHit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSimpleFDC1Track.hh")))  TArtCalibSimpleFDC1Track;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSimpleBDC2Track.hh")))  TArtCalibSimpleBDC2Track;
class __attribute__((annotate("$clingAutoload$include/TArtCalibRPDCHit.hh")))  TArtCalibRPDCHit;
class __attribute__((annotate("$clingAutoload$include/TArtRecoFragment.hh")))  TArtRecoFragment;
class __attribute__((annotate("$clingAutoload$include/TArtCalibICF.hh")))  TArtCalibICF;
class __attribute__((annotate("$clingAutoload$include/TArtCalibBDC2Hit.hh")))  TArtCalibBDC2Hit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibS1DC2Hit.hh")))  TArtCalibS1DC2Hit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibFDC0Track.hh")))  TArtCalibFDC0Track;
class __attribute__((annotate("$clingAutoload$include/TArtTEDCsI.hh")))  TArtTEDCsI;
class __attribute__((annotate("$clingAutoload$include/TArtCalibS1DC1Hit.hh")))  TArtCalibS1DC1Hit;
class __attribute__((annotate("$clingAutoload$include/TArtCalibNEBULAHPC.hh")))  TArtCalibNEBULAHPC;
class __attribute__((annotate("$clingAutoload$include/TArtNEBULAHPCPara.hh")))  TArtNEBULAHPCPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSAMURAITZero.hh")))  TArtCalibSAMURAITZero;
class __attribute__((annotate("$clingAutoload$include/TArtCalibTEDCsI.hh")))  TArtCalibTEDCsI;
class __attribute__((annotate("$clingAutoload$include/TArtRecoNeutron.hh")))  TArtRecoNeutron;
class __attribute__((annotate("$clingAutoload$include/TArtCalibPDCTrack.hh")))  TArtCalibPDCTrack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anasamurai_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtTacquilaMap.hh"
#include "include/TArtHIMEFilter.hh"
#include "include/TArtCalibFDC2Track.hh"
#include "include/TArtCalibRPDCTrack.hh"
#include "include/FieldMan.hh"
#include "include/TArtNINJAPla.hh"
#include "include/DCGeomRecord.hh"
#include "include/TArtDCTrack.hh"
#include "include/TArtCalibBDC1Hit.hh"
#include "include/TArtHIMEPlaPara.hh"
#include "include/TArtNEBULAFilter.hh"
#include "include/TArtCalibBPCHit.hh"
#include "include/TArtCalibSimpleDCTrack.hh"
#include "include/TArtCalibNeuLAND.hh"
#include "include/TArtCalcGlobalTrack.hh"
#include "include/TArtCalibFDC0Hit.hh"
#include "include/TArtCalibFDC1Track.hh"
#include "include/TArtCalibDCHit.hh"
#include "include/TArtTEDCsIPara.hh"
#include "include/TArtCalibS1DC2Track.hh"
#include "include/DCConfMan.hh"
#include "include/TArtNINJAPlaPara.hh"
#include "include/TArtTZero.hh"
#include "include/RungeKuttaUtilities.hh"
#include "include/TArtCalibS1DC1Track.hh"
#include "include/SAMURAIFieldMap.hh"
#include "include/TArtHODPla.hh"
#include "include/TArtNeutron.hh"
#include "include/TArtICF.hh"
#include "include/TArtCalibSimpleFDC0Track.hh"
#include "include/TArtNEBULAHPC.hh"
#include "include/TArtCalibRPTOFPla.hh"
#include "include/TArtCalibHODPla.hh"
#include "include/TArtRPTOFPla.hh"
#include "include/TArtCalibBDC2Track.hh"
#include "include/TArtHIMEPla.hh"
#include "include/TArtFragment.hh"
#include "include/TArtCalibDCTrack.hh"
#include "include/TArtCalibNEBULA.hh"
#include "include/TArtHODPlaPara.hh"
#include "include/TArtNeuLANDPla.hh"
#include "include/TArtCalibSAMURAI.hh"
#include "include/TArtDCHit.hh"
#include "include/TArtCalibSimpleFDC2Track.hh"
#include "include/TArtRecoSAMURAI.hh"
#include "include/TArtCalibSimpleBDC1Track.hh"
#include "include/TArtDCHitPara.hh"
#include "include/MathTools.hh"
#include "include/TArtCalibHIME.hh"
#include "include/TArtRPTOFPlaPara.hh"
#include "include/TArtCalibNeuLANDVETO.hh"
#include "include/TArtCalibFDC2Hit.hh"
#include "include/TArtCalibBDC1Track.hh"
#include "include/TArtCalibFDC1Hit.hh"
#include "include/TArtCalibNINJA.hh"
#include "include/TArtNeuLANDPlaPara.hh"
#include "include/TArtCalibPDCHit.hh"
#include "include/TArtCalibSimpleFDC1Track.hh"
#include "include/TArtCalibSimpleBDC2Track.hh"
#include "include/TArtCalibRPDCHit.hh"
#include "include/TArtRecoFragment.hh"
#include "include/TArtCalibICF.hh"
#include "include/TArtCalibBDC2Hit.hh"
#include "include/TArtCalibS1DC2Hit.hh"
#include "include/TArtCalibFDC0Track.hh"
#include "include/TArtTEDCsI.hh"
#include "include/TArtCalibS1DC1Hit.hh"
#include "include/TArtNEBULAPla.hh"
#include "include/TArtSAMURAIParameters.hh"
#include "include/TArtCalibNEBULAHPC.hh"
#include "include/TArtNEBULAHPCPara.hh"
#include "include/TArtCalibSAMURAITZero.hh"
#include "include/TArtCalibTEDCsI.hh"
#include "include/TArtRecoNeutron.hh"
#include "include/TArtCalibPDCTrack.hh"
#include "include/TArtNEBULAPlaPara.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtCalcGlobalTrack", payloadCode, "@",
"TArtCalibBDC1Hit", payloadCode, "@",
"TArtCalibBDC1Track", payloadCode, "@",
"TArtCalibBDC2Hit", payloadCode, "@",
"TArtCalibBDC2Track", payloadCode, "@",
"TArtCalibBPCHit", payloadCode, "@",
"TArtCalibDCHit", payloadCode, "@",
"TArtCalibDCTrack", payloadCode, "@",
"TArtCalibFDC0Hit", payloadCode, "@",
"TArtCalibFDC0Track", payloadCode, "@",
"TArtCalibFDC1Hit", payloadCode, "@",
"TArtCalibFDC1Track", payloadCode, "@",
"TArtCalibFDC2Hit", payloadCode, "@",
"TArtCalibFDC2Track", payloadCode, "@",
"TArtCalibHIME", payloadCode, "@",
"TArtCalibHIMEMult", payloadCode, "@",
"TArtCalibHODPla", payloadCode, "@",
"TArtCalibICF", payloadCode, "@",
"TArtCalibNEBULA", payloadCode, "@",
"TArtCalibNEBULAHPC", payloadCode, "@",
"TArtCalibNEBULAMult", payloadCode, "@",
"TArtCalibNINJA", payloadCode, "@",
"TArtCalibNeuLAND", payloadCode, "@",
"TArtCalibNeuLANDVETO", payloadCode, "@",
"TArtCalibPDCHit", payloadCode, "@",
"TArtCalibPDCTrack", payloadCode, "@",
"TArtCalibRPDCHit", payloadCode, "@",
"TArtCalibRPDCTrack", payloadCode, "@",
"TArtCalibRPTOFPla", payloadCode, "@",
"TArtCalibS1DC1Hit", payloadCode, "@",
"TArtCalibS1DC1Track", payloadCode, "@",
"TArtCalibS1DC2Hit", payloadCode, "@",
"TArtCalibS1DC2Track", payloadCode, "@",
"TArtCalibSAMURAI", payloadCode, "@",
"TArtCalibSAMURAITZero", payloadCode, "@",
"TArtCalibSimpleBDC1Track", payloadCode, "@",
"TArtCalibSimpleBDC2Track", payloadCode, "@",
"TArtCalibSimpleDCTrack", payloadCode, "@",
"TArtCalibSimpleFDC0Track", payloadCode, "@",
"TArtCalibSimpleFDC1Track", payloadCode, "@",
"TArtCalibSimpleFDC2Track", payloadCode, "@",
"TArtCalibTEDCsI", payloadCode, "@",
"TArtDCHit", payloadCode, "@",
"TArtDCHitPara", payloadCode, "@",
"TArtDCTrack", payloadCode, "@",
"TArtFragment", payloadCode, "@",
"TArtHIMEFilter", payloadCode, "@",
"TArtHIMEPla", payloadCode, "@",
"TArtHIMEPlaPara", payloadCode, "@",
"TArtHODPla", payloadCode, "@",
"TArtHODPlaPara", payloadCode, "@",
"TArtICF", payloadCode, "@",
"TArtNEBULAFilter", payloadCode, "@",
"TArtNEBULAHPC", payloadCode, "@",
"TArtNEBULAHPCPara", payloadCode, "@",
"TArtNEBULAPla", payloadCode, "@",
"TArtNEBULAPlaPara", payloadCode, "@",
"TArtNINJAPla", payloadCode, "@",
"TArtNINJAPlaPara", payloadCode, "@",
"TArtNeuLANDPla", payloadCode, "@",
"TArtNeuLANDPlaPara", payloadCode, "@",
"TArtNeutron", payloadCode, "@",
"TArtRPTOFPla", payloadCode, "@",
"TArtRPTOFPlaPara", payloadCode, "@",
"TArtRecoFragment", payloadCode, "@",
"TArtRecoNeutron", payloadCode, "@",
"TArtRecoSAMURAI", payloadCode, "@",
"TArtSAMURAIParameters", payloadCode, "@",
"TArtTEDCsI", payloadCode, "@",
"TArtTEDCsIPara", payloadCode, "@",
"TArtTZero", payloadCode, "@",
"TArtTacquilaMap", payloadCode, "@",
"TArtTacquilaPara", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anasamurai_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anasamurai_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anasamurai_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anasamurai_dict() {
  TriggerDictionaryInitialization_anasamurai_dict_Impl();
}
