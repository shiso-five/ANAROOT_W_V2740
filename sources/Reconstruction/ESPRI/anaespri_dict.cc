// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anaespri_dict
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
#include "include/TArtRNaIPara.hh"
#include "include/TArtCalibDia.hh"
#include "include/TArtDia.hh"
#include "include/TArtTDCHit.hh"
#include "include/TArtTDCHitPara.hh"
#include "include/TArtRDC.hh"
#include "include/TArtUserParameters.hh"
#include "include/TArtESPRIParameters.hh"
#include "include/TArtCalibRDC.hh"
#include "include/TArtCalibBDC.hh"
#include "include/TArtBDC.hh"
#include "include/TArtCalibPlas.hh"
#include "include/TArtBLD.hh"
#include "include/TArtFADCPara.hh"
#include "include/TArtCalibFADC.hh"
#include "include/TArtFADC.hh"
#include "include/TArtCalibBLD.hh"
#include "include/TArtCalibRNaI.hh"
#include "include/TArtRNaI.hh"
#include "include/TArtCalibTDCHit.hh"
#include "include/TArtPlas.hh"
#include "include/TArtPlasPara.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TArtRNaIPara(void *p = 0);
   static void *newArray_TArtRNaIPara(Long_t size, void *p);
   static void delete_TArtRNaIPara(void *p);
   static void deleteArray_TArtRNaIPara(void *p);
   static void destruct_TArtRNaIPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRNaIPara*)
   {
      ::TArtRNaIPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRNaIPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRNaIPara", ::TArtRNaIPara::Class_Version(), "TArtRNaIPara.hh", 9,
                  typeid(::TArtRNaIPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRNaIPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRNaIPara) );
      instance.SetNew(&new_TArtRNaIPara);
      instance.SetNewArray(&newArray_TArtRNaIPara);
      instance.SetDelete(&delete_TArtRNaIPara);
      instance.SetDeleteArray(&deleteArray_TArtRNaIPara);
      instance.SetDestructor(&destruct_TArtRNaIPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRNaIPara*)
   {
      return GenerateInitInstanceLocal((::TArtRNaIPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRNaIPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibDia(void *p = 0);
   static void *newArray_TArtCalibDia(Long_t size, void *p);
   static void delete_TArtCalibDia(void *p);
   static void deleteArray_TArtCalibDia(void *p);
   static void destruct_TArtCalibDia(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibDia*)
   {
      ::TArtCalibDia *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibDia >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibDia", ::TArtCalibDia::Class_Version(), "TArtCalibDia.hh", 15,
                  typeid(::TArtCalibDia), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibDia::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibDia) );
      instance.SetNew(&new_TArtCalibDia);
      instance.SetNewArray(&newArray_TArtCalibDia);
      instance.SetDelete(&delete_TArtCalibDia);
      instance.SetDeleteArray(&deleteArray_TArtCalibDia);
      instance.SetDestructor(&destruct_TArtCalibDia);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibDia*)
   {
      return GenerateInitInstanceLocal((::TArtCalibDia*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibDia*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtDia(void *p = 0);
   static void *newArray_TArtDia(Long_t size, void *p);
   static void delete_TArtDia(void *p);
   static void deleteArray_TArtDia(void *p);
   static void destruct_TArtDia(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDia*)
   {
      ::TArtDia *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtDia >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtDia", ::TArtDia::Class_Version(), "TArtDia.hh", 6,
                  typeid(::TArtDia), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtDia::Dictionary, isa_proxy, 4,
                  sizeof(::TArtDia) );
      instance.SetNew(&new_TArtDia);
      instance.SetNewArray(&newArray_TArtDia);
      instance.SetDelete(&delete_TArtDia);
      instance.SetDeleteArray(&deleteArray_TArtDia);
      instance.SetDestructor(&destruct_TArtDia);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDia*)
   {
      return GenerateInitInstanceLocal((::TArtDia*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtDia*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTDCHit(void *p = 0);
   static void *newArray_TArtTDCHit(Long_t size, void *p);
   static void delete_TArtTDCHit(void *p);
   static void deleteArray_TArtTDCHit(void *p);
   static void destruct_TArtTDCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTDCHit*)
   {
      ::TArtTDCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTDCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTDCHit", ::TArtTDCHit::Class_Version(), "TArtTDCHit.hh", 6,
                  typeid(::TArtTDCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTDCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTDCHit) );
      instance.SetNew(&new_TArtTDCHit);
      instance.SetNewArray(&newArray_TArtTDCHit);
      instance.SetDelete(&delete_TArtTDCHit);
      instance.SetDeleteArray(&deleteArray_TArtTDCHit);
      instance.SetDestructor(&destruct_TArtTDCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTDCHit*)
   {
      return GenerateInitInstanceLocal((::TArtTDCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTDCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTDCHitPara(void *p = 0);
   static void *newArray_TArtTDCHitPara(Long_t size, void *p);
   static void delete_TArtTDCHitPara(void *p);
   static void deleteArray_TArtTDCHitPara(void *p);
   static void destruct_TArtTDCHitPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTDCHitPara*)
   {
      ::TArtTDCHitPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTDCHitPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTDCHitPara", ::TArtTDCHitPara::Class_Version(), "TArtTDCHitPara.hh", 10,
                  typeid(::TArtTDCHitPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTDCHitPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTDCHitPara) );
      instance.SetNew(&new_TArtTDCHitPara);
      instance.SetNewArray(&newArray_TArtTDCHitPara);
      instance.SetDelete(&delete_TArtTDCHitPara);
      instance.SetDeleteArray(&deleteArray_TArtTDCHitPara);
      instance.SetDestructor(&destruct_TArtTDCHitPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTDCHitPara*)
   {
      return GenerateInitInstanceLocal((::TArtTDCHitPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTDCHitPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRDC(void *p = 0);
   static void *newArray_TArtRDC(Long_t size, void *p);
   static void delete_TArtRDC(void *p);
   static void deleteArray_TArtRDC(void *p);
   static void destruct_TArtRDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRDC*)
   {
      ::TArtRDC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRDC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRDC", ::TArtRDC::Class_Version(), "TArtRDC.hh", 6,
                  typeid(::TArtRDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRDC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRDC) );
      instance.SetNew(&new_TArtRDC);
      instance.SetNewArray(&newArray_TArtRDC);
      instance.SetDelete(&delete_TArtRDC);
      instance.SetDeleteArray(&deleteArray_TArtRDC);
      instance.SetDestructor(&destruct_TArtRDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRDC*)
   {
      return GenerateInitInstanceLocal((::TArtRDC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRDC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtUserParameters(void *p = 0);
   static void *newArray_TArtUserParameters(Long_t size, void *p);
   static void delete_TArtUserParameters(void *p);
   static void deleteArray_TArtUserParameters(void *p);
   static void destruct_TArtUserParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtUserParameters*)
   {
      ::TArtUserParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtUserParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtUserParameters", ::TArtUserParameters::Class_Version(), "TArtUserParameters.hh", 12,
                  typeid(::TArtUserParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtUserParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtUserParameters) );
      instance.SetNew(&new_TArtUserParameters);
      instance.SetNewArray(&newArray_TArtUserParameters);
      instance.SetDelete(&delete_TArtUserParameters);
      instance.SetDeleteArray(&deleteArray_TArtUserParameters);
      instance.SetDestructor(&destruct_TArtUserParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtUserParameters*)
   {
      return GenerateInitInstanceLocal((::TArtUserParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtUserParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtESPRIParameters(void *p = 0);
   static void *newArray_TArtESPRIParameters(Long_t size, void *p);
   static void delete_TArtESPRIParameters(void *p);
   static void deleteArray_TArtESPRIParameters(void *p);
   static void destruct_TArtESPRIParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtESPRIParameters*)
   {
      ::TArtESPRIParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtESPRIParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtESPRIParameters", ::TArtESPRIParameters::Class_Version(), "TArtESPRIParameters.hh", 16,
                  typeid(::TArtESPRIParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtESPRIParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtESPRIParameters) );
      instance.SetNew(&new_TArtESPRIParameters);
      instance.SetNewArray(&newArray_TArtESPRIParameters);
      instance.SetDelete(&delete_TArtESPRIParameters);
      instance.SetDeleteArray(&deleteArray_TArtESPRIParameters);
      instance.SetDestructor(&destruct_TArtESPRIParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtESPRIParameters*)
   {
      return GenerateInitInstanceLocal((::TArtESPRIParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtESPRIParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibRDC(void *p = 0);
   static void *newArray_TArtCalibRDC(Long_t size, void *p);
   static void delete_TArtCalibRDC(void *p);
   static void deleteArray_TArtCalibRDC(void *p);
   static void destruct_TArtCalibRDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibRDC*)
   {
      ::TArtCalibRDC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibRDC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibRDC", ::TArtCalibRDC::Class_Version(), "TArtCalibRDC.hh", 16,
                  typeid(::TArtCalibRDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibRDC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibRDC) );
      instance.SetNew(&new_TArtCalibRDC);
      instance.SetNewArray(&newArray_TArtCalibRDC);
      instance.SetDelete(&delete_TArtCalibRDC);
      instance.SetDeleteArray(&deleteArray_TArtCalibRDC);
      instance.SetDestructor(&destruct_TArtCalibRDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibRDC*)
   {
      return GenerateInitInstanceLocal((::TArtCalibRDC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibRDC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibBDC(void *p = 0);
   static void *newArray_TArtCalibBDC(Long_t size, void *p);
   static void delete_TArtCalibBDC(void *p);
   static void deleteArray_TArtCalibBDC(void *p);
   static void destruct_TArtCalibBDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibBDC*)
   {
      ::TArtCalibBDC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibBDC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibBDC", ::TArtCalibBDC::Class_Version(), "TArtCalibBDC.hh", 16,
                  typeid(::TArtCalibBDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibBDC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibBDC) );
      instance.SetNew(&new_TArtCalibBDC);
      instance.SetNewArray(&newArray_TArtCalibBDC);
      instance.SetDelete(&delete_TArtCalibBDC);
      instance.SetDeleteArray(&deleteArray_TArtCalibBDC);
      instance.SetDestructor(&destruct_TArtCalibBDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibBDC*)
   {
      return GenerateInitInstanceLocal((::TArtCalibBDC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibBDC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtBDC(void *p = 0);
   static void *newArray_TArtBDC(Long_t size, void *p);
   static void delete_TArtBDC(void *p);
   static void deleteArray_TArtBDC(void *p);
   static void destruct_TArtBDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtBDC*)
   {
      ::TArtBDC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtBDC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtBDC", ::TArtBDC::Class_Version(), "TArtBDC.hh", 6,
                  typeid(::TArtBDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtBDC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtBDC) );
      instance.SetNew(&new_TArtBDC);
      instance.SetNewArray(&newArray_TArtBDC);
      instance.SetDelete(&delete_TArtBDC);
      instance.SetDeleteArray(&deleteArray_TArtBDC);
      instance.SetDestructor(&destruct_TArtBDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtBDC*)
   {
      return GenerateInitInstanceLocal((::TArtBDC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtBDC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibPlas(void *p = 0);
   static void *newArray_TArtCalibPlas(Long_t size, void *p);
   static void delete_TArtCalibPlas(void *p);
   static void deleteArray_TArtCalibPlas(void *p);
   static void destruct_TArtCalibPlas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibPlas*)
   {
      ::TArtCalibPlas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibPlas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibPlas", ::TArtCalibPlas::Class_Version(), "TArtCalibPlas.hh", 17,
                  typeid(::TArtCalibPlas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibPlas::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibPlas) );
      instance.SetNew(&new_TArtCalibPlas);
      instance.SetNewArray(&newArray_TArtCalibPlas);
      instance.SetDelete(&delete_TArtCalibPlas);
      instance.SetDeleteArray(&deleteArray_TArtCalibPlas);
      instance.SetDestructor(&destruct_TArtCalibPlas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibPlas*)
   {
      return GenerateInitInstanceLocal((::TArtCalibPlas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibPlas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtBLD(void *p = 0);
   static void *newArray_TArtBLD(Long_t size, void *p);
   static void delete_TArtBLD(void *p);
   static void deleteArray_TArtBLD(void *p);
   static void destruct_TArtBLD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtBLD*)
   {
      ::TArtBLD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtBLD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtBLD", ::TArtBLD::Class_Version(), "TArtBLD.hh", 6,
                  typeid(::TArtBLD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtBLD::Dictionary, isa_proxy, 4,
                  sizeof(::TArtBLD) );
      instance.SetNew(&new_TArtBLD);
      instance.SetNewArray(&newArray_TArtBLD);
      instance.SetDelete(&delete_TArtBLD);
      instance.SetDeleteArray(&deleteArray_TArtBLD);
      instance.SetDestructor(&destruct_TArtBLD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtBLD*)
   {
      return GenerateInitInstanceLocal((::TArtBLD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtBLD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtFADCPara(void *p = 0);
   static void *newArray_TArtFADCPara(Long_t size, void *p);
   static void delete_TArtFADCPara(void *p);
   static void deleteArray_TArtFADCPara(void *p);
   static void destruct_TArtFADCPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtFADCPara*)
   {
      ::TArtFADCPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtFADCPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtFADCPara", ::TArtFADCPara::Class_Version(), "TArtFADCPara.hh", 10,
                  typeid(::TArtFADCPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtFADCPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtFADCPara) );
      instance.SetNew(&new_TArtFADCPara);
      instance.SetNewArray(&newArray_TArtFADCPara);
      instance.SetDelete(&delete_TArtFADCPara);
      instance.SetDeleteArray(&deleteArray_TArtFADCPara);
      instance.SetDestructor(&destruct_TArtFADCPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtFADCPara*)
   {
      return GenerateInitInstanceLocal((::TArtFADCPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtFADCPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibFADC(void *p = 0);
   static void *newArray_TArtCalibFADC(Long_t size, void *p);
   static void delete_TArtCalibFADC(void *p);
   static void deleteArray_TArtCalibFADC(void *p);
   static void destruct_TArtCalibFADC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibFADC*)
   {
      ::TArtCalibFADC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibFADC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibFADC", ::TArtCalibFADC::Class_Version(), "TArtCalibFADC.hh", 18,
                  typeid(::TArtCalibFADC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibFADC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibFADC) );
      instance.SetNew(&new_TArtCalibFADC);
      instance.SetNewArray(&newArray_TArtCalibFADC);
      instance.SetDelete(&delete_TArtCalibFADC);
      instance.SetDeleteArray(&deleteArray_TArtCalibFADC);
      instance.SetDestructor(&destruct_TArtCalibFADC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibFADC*)
   {
      return GenerateInitInstanceLocal((::TArtCalibFADC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibFADC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtFADC(void *p = 0);
   static void *newArray_TArtFADC(Long_t size, void *p);
   static void delete_TArtFADC(void *p);
   static void deleteArray_TArtFADC(void *p);
   static void destruct_TArtFADC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtFADC*)
   {
      ::TArtFADC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtFADC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtFADC", ::TArtFADC::Class_Version(), "TArtFADC.hh", 6,
                  typeid(::TArtFADC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtFADC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtFADC) );
      instance.SetNew(&new_TArtFADC);
      instance.SetNewArray(&newArray_TArtFADC);
      instance.SetDelete(&delete_TArtFADC);
      instance.SetDeleteArray(&deleteArray_TArtFADC);
      instance.SetDestructor(&destruct_TArtFADC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtFADC*)
   {
      return GenerateInitInstanceLocal((::TArtFADC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtFADC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibBLD(void *p = 0);
   static void *newArray_TArtCalibBLD(Long_t size, void *p);
   static void delete_TArtCalibBLD(void *p);
   static void deleteArray_TArtCalibBLD(void *p);
   static void destruct_TArtCalibBLD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibBLD*)
   {
      ::TArtCalibBLD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibBLD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibBLD", ::TArtCalibBLD::Class_Version(), "TArtCalibBLD.hh", 16,
                  typeid(::TArtCalibBLD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibBLD::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibBLD) );
      instance.SetNew(&new_TArtCalibBLD);
      instance.SetNewArray(&newArray_TArtCalibBLD);
      instance.SetDelete(&delete_TArtCalibBLD);
      instance.SetDeleteArray(&deleteArray_TArtCalibBLD);
      instance.SetDestructor(&destruct_TArtCalibBLD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibBLD*)
   {
      return GenerateInitInstanceLocal((::TArtCalibBLD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibBLD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibRNaI(void *p = 0);
   static void *newArray_TArtCalibRNaI(Long_t size, void *p);
   static void delete_TArtCalibRNaI(void *p);
   static void deleteArray_TArtCalibRNaI(void *p);
   static void destruct_TArtCalibRNaI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibRNaI*)
   {
      ::TArtCalibRNaI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibRNaI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibRNaI", ::TArtCalibRNaI::Class_Version(), "TArtCalibRNaI.hh", 17,
                  typeid(::TArtCalibRNaI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibRNaI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibRNaI) );
      instance.SetNew(&new_TArtCalibRNaI);
      instance.SetNewArray(&newArray_TArtCalibRNaI);
      instance.SetDelete(&delete_TArtCalibRNaI);
      instance.SetDeleteArray(&deleteArray_TArtCalibRNaI);
      instance.SetDestructor(&destruct_TArtCalibRNaI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibRNaI*)
   {
      return GenerateInitInstanceLocal((::TArtCalibRNaI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibRNaI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRNaI(void *p = 0);
   static void *newArray_TArtRNaI(Long_t size, void *p);
   static void delete_TArtRNaI(void *p);
   static void deleteArray_TArtRNaI(void *p);
   static void destruct_TArtRNaI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRNaI*)
   {
      ::TArtRNaI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRNaI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRNaI", ::TArtRNaI::Class_Version(), "TArtRNaI.hh", 6,
                  typeid(::TArtRNaI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRNaI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRNaI) );
      instance.SetNew(&new_TArtRNaI);
      instance.SetNewArray(&newArray_TArtRNaI);
      instance.SetDelete(&delete_TArtRNaI);
      instance.SetDeleteArray(&deleteArray_TArtRNaI);
      instance.SetDestructor(&destruct_TArtRNaI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRNaI*)
   {
      return GenerateInitInstanceLocal((::TArtRNaI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRNaI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibTDCHit(void *p = 0);
   static void *newArray_TArtCalibTDCHit(Long_t size, void *p);
   static void delete_TArtCalibTDCHit(void *p);
   static void deleteArray_TArtCalibTDCHit(void *p);
   static void destruct_TArtCalibTDCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibTDCHit*)
   {
      ::TArtCalibTDCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibTDCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibTDCHit", ::TArtCalibTDCHit::Class_Version(), "TArtCalibTDCHit.hh", 17,
                  typeid(::TArtCalibTDCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibTDCHit::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibTDCHit) );
      instance.SetNew(&new_TArtCalibTDCHit);
      instance.SetNewArray(&newArray_TArtCalibTDCHit);
      instance.SetDelete(&delete_TArtCalibTDCHit);
      instance.SetDeleteArray(&deleteArray_TArtCalibTDCHit);
      instance.SetDestructor(&destruct_TArtCalibTDCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibTDCHit*)
   {
      return GenerateInitInstanceLocal((::TArtCalibTDCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibTDCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtPlas(void *p = 0);
   static void *newArray_TArtPlas(Long_t size, void *p);
   static void delete_TArtPlas(void *p);
   static void deleteArray_TArtPlas(void *p);
   static void destruct_TArtPlas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtPlas*)
   {
      ::TArtPlas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtPlas >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtPlas", ::TArtPlas::Class_Version(), "TArtPlas.hh", 6,
                  typeid(::TArtPlas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtPlas::Dictionary, isa_proxy, 4,
                  sizeof(::TArtPlas) );
      instance.SetNew(&new_TArtPlas);
      instance.SetNewArray(&newArray_TArtPlas);
      instance.SetDelete(&delete_TArtPlas);
      instance.SetDeleteArray(&deleteArray_TArtPlas);
      instance.SetDestructor(&destruct_TArtPlas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtPlas*)
   {
      return GenerateInitInstanceLocal((::TArtPlas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtPlas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtPlasPara(void *p = 0);
   static void *newArray_TArtPlasPara(Long_t size, void *p);
   static void delete_TArtPlasPara(void *p);
   static void deleteArray_TArtPlasPara(void *p);
   static void destruct_TArtPlasPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtPlasPara*)
   {
      ::TArtPlasPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtPlasPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtPlasPara", ::TArtPlasPara::Class_Version(), "TArtPlasPara.hh", 9,
                  typeid(::TArtPlasPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtPlasPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtPlasPara) );
      instance.SetNew(&new_TArtPlasPara);
      instance.SetNewArray(&newArray_TArtPlasPara);
      instance.SetDelete(&delete_TArtPlasPara);
      instance.SetDeleteArray(&deleteArray_TArtPlasPara);
      instance.SetDestructor(&destruct_TArtPlasPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtPlasPara*)
   {
      return GenerateInitInstanceLocal((::TArtPlasPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtPlasPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtRNaIPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRNaIPara::Class_Name()
{
   return "TArtRNaIPara";
}

//______________________________________________________________________________
const char *TArtRNaIPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRNaIPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRNaIPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRNaIPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRNaIPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRNaIPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRNaIPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRNaIPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibDia::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibDia::Class_Name()
{
   return "TArtCalibDia";
}

//______________________________________________________________________________
const char *TArtCalibDia::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDia*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibDia::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDia*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibDia::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDia*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibDia::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDia*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtDia::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtDia::Class_Name()
{
   return "TArtDia";
}

//______________________________________________________________________________
const char *TArtDia::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDia*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtDia::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDia*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtDia::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDia*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtDia::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDia*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTDCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTDCHit::Class_Name()
{
   return "TArtTDCHit";
}

//______________________________________________________________________________
const char *TArtTDCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTDCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTDCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTDCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTDCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTDCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTDCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTDCHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTDCHitPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTDCHitPara::Class_Name()
{
   return "TArtTDCHitPara";
}

//______________________________________________________________________________
const char *TArtTDCHitPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTDCHitPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTDCHitPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTDCHitPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTDCHitPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTDCHitPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTDCHitPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTDCHitPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRDC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRDC::Class_Name()
{
   return "TArtRDC";
}

//______________________________________________________________________________
const char *TArtRDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRDC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRDC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRDC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRDC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtUserParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtUserParameters::Class_Name()
{
   return "TArtUserParameters";
}

//______________________________________________________________________________
const char *TArtUserParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtUserParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtUserParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtUserParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtUserParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtUserParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtUserParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtUserParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtESPRIParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtESPRIParameters::Class_Name()
{
   return "TArtESPRIParameters";
}

//______________________________________________________________________________
const char *TArtESPRIParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtESPRIParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtESPRIParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtESPRIParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtESPRIParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtESPRIParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtESPRIParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtESPRIParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibRDC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibRDC::Class_Name()
{
   return "TArtCalibRDC";
}

//______________________________________________________________________________
const char *TArtCalibRDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRDC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibRDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRDC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibRDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRDC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibRDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRDC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibBDC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibBDC::Class_Name()
{
   return "TArtCalibBDC";
}

//______________________________________________________________________________
const char *TArtCalibBDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibBDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibBDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibBDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBDC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtBDC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtBDC::Class_Name()
{
   return "TArtBDC";
}

//______________________________________________________________________________
const char *TArtBDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBDC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtBDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBDC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtBDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBDC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtBDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBDC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibPlas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibPlas::Class_Name()
{
   return "TArtCalibPlas";
}

//______________________________________________________________________________
const char *TArtCalibPlas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPlas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibPlas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPlas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibPlas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPlas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibPlas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPlas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtBLD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtBLD::Class_Name()
{
   return "TArtBLD";
}

//______________________________________________________________________________
const char *TArtBLD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBLD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtBLD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBLD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtBLD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBLD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtBLD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBLD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtFADCPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtFADCPara::Class_Name()
{
   return "TArtFADCPara";
}

//______________________________________________________________________________
const char *TArtFADCPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFADCPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtFADCPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFADCPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtFADCPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFADCPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtFADCPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFADCPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibFADC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibFADC::Class_Name()
{
   return "TArtCalibFADC";
}

//______________________________________________________________________________
const char *TArtCalibFADC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFADC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibFADC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFADC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibFADC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFADC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibFADC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFADC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtFADC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtFADC::Class_Name()
{
   return "TArtFADC";
}

//______________________________________________________________________________
const char *TArtFADC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFADC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtFADC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFADC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtFADC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFADC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtFADC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFADC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibBLD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibBLD::Class_Name()
{
   return "TArtCalibBLD";
}

//______________________________________________________________________________
const char *TArtCalibBLD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBLD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibBLD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBLD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibBLD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBLD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibBLD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibBLD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibRNaI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibRNaI::Class_Name()
{
   return "TArtCalibRNaI";
}

//______________________________________________________________________________
const char *TArtCalibRNaI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRNaI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibRNaI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRNaI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibRNaI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRNaI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibRNaI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibRNaI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRNaI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRNaI::Class_Name()
{
   return "TArtRNaI";
}

//______________________________________________________________________________
const char *TArtRNaI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRNaI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRNaI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRNaI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRNaI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRNaI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRNaI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRNaI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibTDCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibTDCHit::Class_Name()
{
   return "TArtCalibTDCHit";
}

//______________________________________________________________________________
const char *TArtCalibTDCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTDCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibTDCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTDCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibTDCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTDCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibTDCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTDCHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtPlas::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtPlas::Class_Name()
{
   return "TArtPlas";
}

//______________________________________________________________________________
const char *TArtPlas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPlas*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtPlas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPlas*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtPlas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPlas*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtPlas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPlas*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtPlasPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtPlasPara::Class_Name()
{
   return "TArtPlasPara";
}

//______________________________________________________________________________
const char *TArtPlasPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPlasPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtPlasPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPlasPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtPlasPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPlasPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtPlasPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPlasPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtRNaIPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRNaIPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRNaIPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRNaIPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRNaIPara(void *p) {
      return  p ? new(p) ::TArtRNaIPara : new ::TArtRNaIPara;
   }
   static void *newArray_TArtRNaIPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRNaIPara[nElements] : new ::TArtRNaIPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRNaIPara(void *p) {
      delete ((::TArtRNaIPara*)p);
   }
   static void deleteArray_TArtRNaIPara(void *p) {
      delete [] ((::TArtRNaIPara*)p);
   }
   static void destruct_TArtRNaIPara(void *p) {
      typedef ::TArtRNaIPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRNaIPara

//______________________________________________________________________________
void TArtCalibDia::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibDia.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibDia::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibDia::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibDia(void *p) {
      return  p ? new(p) ::TArtCalibDia : new ::TArtCalibDia;
   }
   static void *newArray_TArtCalibDia(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibDia[nElements] : new ::TArtCalibDia[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibDia(void *p) {
      delete ((::TArtCalibDia*)p);
   }
   static void deleteArray_TArtCalibDia(void *p) {
      delete [] ((::TArtCalibDia*)p);
   }
   static void destruct_TArtCalibDia(void *p) {
      typedef ::TArtCalibDia current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibDia

//______________________________________________________________________________
void TArtDia::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtDia.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtDia::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtDia::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtDia(void *p) {
      return  p ? new(p) ::TArtDia : new ::TArtDia;
   }
   static void *newArray_TArtDia(Long_t nElements, void *p) {
      return p ? new(p) ::TArtDia[nElements] : new ::TArtDia[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtDia(void *p) {
      delete ((::TArtDia*)p);
   }
   static void deleteArray_TArtDia(void *p) {
      delete [] ((::TArtDia*)p);
   }
   static void destruct_TArtDia(void *p) {
      typedef ::TArtDia current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtDia

//______________________________________________________________________________
void TArtTDCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTDCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTDCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTDCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTDCHit(void *p) {
      return  p ? new(p) ::TArtTDCHit : new ::TArtTDCHit;
   }
   static void *newArray_TArtTDCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTDCHit[nElements] : new ::TArtTDCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTDCHit(void *p) {
      delete ((::TArtTDCHit*)p);
   }
   static void deleteArray_TArtTDCHit(void *p) {
      delete [] ((::TArtTDCHit*)p);
   }
   static void destruct_TArtTDCHit(void *p) {
      typedef ::TArtTDCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTDCHit

//______________________________________________________________________________
void TArtTDCHitPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTDCHitPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTDCHitPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTDCHitPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTDCHitPara(void *p) {
      return  p ? new(p) ::TArtTDCHitPara : new ::TArtTDCHitPara;
   }
   static void *newArray_TArtTDCHitPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTDCHitPara[nElements] : new ::TArtTDCHitPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTDCHitPara(void *p) {
      delete ((::TArtTDCHitPara*)p);
   }
   static void deleteArray_TArtTDCHitPara(void *p) {
      delete [] ((::TArtTDCHitPara*)p);
   }
   static void destruct_TArtTDCHitPara(void *p) {
      typedef ::TArtTDCHitPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTDCHitPara

//______________________________________________________________________________
void TArtRDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRDC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRDC(void *p) {
      return  p ? new(p) ::TArtRDC : new ::TArtRDC;
   }
   static void *newArray_TArtRDC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRDC[nElements] : new ::TArtRDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRDC(void *p) {
      delete ((::TArtRDC*)p);
   }
   static void deleteArray_TArtRDC(void *p) {
      delete [] ((::TArtRDC*)p);
   }
   static void destruct_TArtRDC(void *p) {
      typedef ::TArtRDC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRDC

//______________________________________________________________________________
void TArtUserParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtUserParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtUserParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtUserParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtUserParameters(void *p) {
      return  p ? new(p) ::TArtUserParameters : new ::TArtUserParameters;
   }
   static void *newArray_TArtUserParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtUserParameters[nElements] : new ::TArtUserParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtUserParameters(void *p) {
      delete ((::TArtUserParameters*)p);
   }
   static void deleteArray_TArtUserParameters(void *p) {
      delete [] ((::TArtUserParameters*)p);
   }
   static void destruct_TArtUserParameters(void *p) {
      typedef ::TArtUserParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtUserParameters

//______________________________________________________________________________
void TArtESPRIParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtESPRIParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtESPRIParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtESPRIParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtESPRIParameters(void *p) {
      return  p ? new(p) ::TArtESPRIParameters : new ::TArtESPRIParameters;
   }
   static void *newArray_TArtESPRIParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtESPRIParameters[nElements] : new ::TArtESPRIParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtESPRIParameters(void *p) {
      delete ((::TArtESPRIParameters*)p);
   }
   static void deleteArray_TArtESPRIParameters(void *p) {
      delete [] ((::TArtESPRIParameters*)p);
   }
   static void destruct_TArtESPRIParameters(void *p) {
      typedef ::TArtESPRIParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtESPRIParameters

//______________________________________________________________________________
void TArtCalibRDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibRDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibRDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibRDC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibRDC(void *p) {
      return  p ? new(p) ::TArtCalibRDC : new ::TArtCalibRDC;
   }
   static void *newArray_TArtCalibRDC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibRDC[nElements] : new ::TArtCalibRDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibRDC(void *p) {
      delete ((::TArtCalibRDC*)p);
   }
   static void deleteArray_TArtCalibRDC(void *p) {
      delete [] ((::TArtCalibRDC*)p);
   }
   static void destruct_TArtCalibRDC(void *p) {
      typedef ::TArtCalibRDC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibRDC

//______________________________________________________________________________
void TArtCalibBDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibBDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibBDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibBDC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibBDC(void *p) {
      return  p ? new(p) ::TArtCalibBDC : new ::TArtCalibBDC;
   }
   static void *newArray_TArtCalibBDC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibBDC[nElements] : new ::TArtCalibBDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibBDC(void *p) {
      delete ((::TArtCalibBDC*)p);
   }
   static void deleteArray_TArtCalibBDC(void *p) {
      delete [] ((::TArtCalibBDC*)p);
   }
   static void destruct_TArtCalibBDC(void *p) {
      typedef ::TArtCalibBDC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibBDC

//______________________________________________________________________________
void TArtBDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtBDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtBDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtBDC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtBDC(void *p) {
      return  p ? new(p) ::TArtBDC : new ::TArtBDC;
   }
   static void *newArray_TArtBDC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtBDC[nElements] : new ::TArtBDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtBDC(void *p) {
      delete ((::TArtBDC*)p);
   }
   static void deleteArray_TArtBDC(void *p) {
      delete [] ((::TArtBDC*)p);
   }
   static void destruct_TArtBDC(void *p) {
      typedef ::TArtBDC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtBDC

//______________________________________________________________________________
void TArtCalibPlas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibPlas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibPlas::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibPlas::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibPlas(void *p) {
      return  p ? new(p) ::TArtCalibPlas : new ::TArtCalibPlas;
   }
   static void *newArray_TArtCalibPlas(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibPlas[nElements] : new ::TArtCalibPlas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibPlas(void *p) {
      delete ((::TArtCalibPlas*)p);
   }
   static void deleteArray_TArtCalibPlas(void *p) {
      delete [] ((::TArtCalibPlas*)p);
   }
   static void destruct_TArtCalibPlas(void *p) {
      typedef ::TArtCalibPlas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibPlas

//______________________________________________________________________________
void TArtBLD::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtBLD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtBLD::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtBLD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtBLD(void *p) {
      return  p ? new(p) ::TArtBLD : new ::TArtBLD;
   }
   static void *newArray_TArtBLD(Long_t nElements, void *p) {
      return p ? new(p) ::TArtBLD[nElements] : new ::TArtBLD[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtBLD(void *p) {
      delete ((::TArtBLD*)p);
   }
   static void deleteArray_TArtBLD(void *p) {
      delete [] ((::TArtBLD*)p);
   }
   static void destruct_TArtBLD(void *p) {
      typedef ::TArtBLD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtBLD

//______________________________________________________________________________
void TArtFADCPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtFADCPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtFADCPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtFADCPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtFADCPara(void *p) {
      return  p ? new(p) ::TArtFADCPara : new ::TArtFADCPara;
   }
   static void *newArray_TArtFADCPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtFADCPara[nElements] : new ::TArtFADCPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtFADCPara(void *p) {
      delete ((::TArtFADCPara*)p);
   }
   static void deleteArray_TArtFADCPara(void *p) {
      delete [] ((::TArtFADCPara*)p);
   }
   static void destruct_TArtFADCPara(void *p) {
      typedef ::TArtFADCPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtFADCPara

//______________________________________________________________________________
void TArtCalibFADC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibFADC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibFADC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibFADC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibFADC(void *p) {
      return  p ? new(p) ::TArtCalibFADC : new ::TArtCalibFADC;
   }
   static void *newArray_TArtCalibFADC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibFADC[nElements] : new ::TArtCalibFADC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibFADC(void *p) {
      delete ((::TArtCalibFADC*)p);
   }
   static void deleteArray_TArtCalibFADC(void *p) {
      delete [] ((::TArtCalibFADC*)p);
   }
   static void destruct_TArtCalibFADC(void *p) {
      typedef ::TArtCalibFADC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibFADC

//______________________________________________________________________________
void TArtFADC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtFADC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtFADC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtFADC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtFADC(void *p) {
      return  p ? new(p) ::TArtFADC : new ::TArtFADC;
   }
   static void *newArray_TArtFADC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtFADC[nElements] : new ::TArtFADC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtFADC(void *p) {
      delete ((::TArtFADC*)p);
   }
   static void deleteArray_TArtFADC(void *p) {
      delete [] ((::TArtFADC*)p);
   }
   static void destruct_TArtFADC(void *p) {
      typedef ::TArtFADC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtFADC

//______________________________________________________________________________
void TArtCalibBLD::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibBLD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibBLD::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibBLD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibBLD(void *p) {
      return  p ? new(p) ::TArtCalibBLD : new ::TArtCalibBLD;
   }
   static void *newArray_TArtCalibBLD(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibBLD[nElements] : new ::TArtCalibBLD[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibBLD(void *p) {
      delete ((::TArtCalibBLD*)p);
   }
   static void deleteArray_TArtCalibBLD(void *p) {
      delete [] ((::TArtCalibBLD*)p);
   }
   static void destruct_TArtCalibBLD(void *p) {
      typedef ::TArtCalibBLD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibBLD

//______________________________________________________________________________
void TArtCalibRNaI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibRNaI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibRNaI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibRNaI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibRNaI(void *p) {
      return  p ? new(p) ::TArtCalibRNaI : new ::TArtCalibRNaI;
   }
   static void *newArray_TArtCalibRNaI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibRNaI[nElements] : new ::TArtCalibRNaI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibRNaI(void *p) {
      delete ((::TArtCalibRNaI*)p);
   }
   static void deleteArray_TArtCalibRNaI(void *p) {
      delete [] ((::TArtCalibRNaI*)p);
   }
   static void destruct_TArtCalibRNaI(void *p) {
      typedef ::TArtCalibRNaI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibRNaI

//______________________________________________________________________________
void TArtRNaI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRNaI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRNaI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRNaI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRNaI(void *p) {
      return  p ? new(p) ::TArtRNaI : new ::TArtRNaI;
   }
   static void *newArray_TArtRNaI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRNaI[nElements] : new ::TArtRNaI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRNaI(void *p) {
      delete ((::TArtRNaI*)p);
   }
   static void deleteArray_TArtRNaI(void *p) {
      delete [] ((::TArtRNaI*)p);
   }
   static void destruct_TArtRNaI(void *p) {
      typedef ::TArtRNaI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRNaI

//______________________________________________________________________________
void TArtCalibTDCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibTDCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibTDCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibTDCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibTDCHit(void *p) {
      return  p ? new(p) ::TArtCalibTDCHit : new ::TArtCalibTDCHit;
   }
   static void *newArray_TArtCalibTDCHit(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibTDCHit[nElements] : new ::TArtCalibTDCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibTDCHit(void *p) {
      delete ((::TArtCalibTDCHit*)p);
   }
   static void deleteArray_TArtCalibTDCHit(void *p) {
      delete [] ((::TArtCalibTDCHit*)p);
   }
   static void destruct_TArtCalibTDCHit(void *p) {
      typedef ::TArtCalibTDCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibTDCHit

//______________________________________________________________________________
void TArtPlas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtPlas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtPlas::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtPlas::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtPlas(void *p) {
      return  p ? new(p) ::TArtPlas : new ::TArtPlas;
   }
   static void *newArray_TArtPlas(Long_t nElements, void *p) {
      return p ? new(p) ::TArtPlas[nElements] : new ::TArtPlas[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtPlas(void *p) {
      delete ((::TArtPlas*)p);
   }
   static void deleteArray_TArtPlas(void *p) {
      delete [] ((::TArtPlas*)p);
   }
   static void destruct_TArtPlas(void *p) {
      typedef ::TArtPlas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtPlas

//______________________________________________________________________________
void TArtPlasPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtPlasPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtPlasPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtPlasPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtPlasPara(void *p) {
      return  p ? new(p) ::TArtPlasPara : new ::TArtPlasPara;
   }
   static void *newArray_TArtPlasPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtPlasPara[nElements] : new ::TArtPlasPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtPlasPara(void *p) {
      delete ((::TArtPlasPara*)p);
   }
   static void deleteArray_TArtPlasPara(void *p) {
      delete [] ((::TArtPlasPara*)p);
   }
   static void destruct_TArtPlasPara(void *p) {
      typedef ::TArtPlasPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtPlasPara

namespace ROOT {
   static TClass *vectorlETArtTDCHitParamUgR_Dictionary();
   static void vectorlETArtTDCHitParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtTDCHitParamUgR(void *p = 0);
   static void *newArray_vectorlETArtTDCHitParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtTDCHitParamUgR(void *p);
   static void deleteArray_vectorlETArtTDCHitParamUgR(void *p);
   static void destruct_vectorlETArtTDCHitParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtTDCHitPara*>*)
   {
      vector<TArtTDCHitPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtTDCHitPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtTDCHitPara*>", -2, "vector", 339,
                  typeid(vector<TArtTDCHitPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtTDCHitParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtTDCHitPara*>) );
      instance.SetNew(&new_vectorlETArtTDCHitParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtTDCHitParamUgR);
      instance.SetDelete(&delete_vectorlETArtTDCHitParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtTDCHitParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtTDCHitParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtTDCHitPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtTDCHitPara*>","std::vector<TArtTDCHitPara*, std::allocator<TArtTDCHitPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtTDCHitPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtTDCHitParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtTDCHitPara*>*)0x0)->GetClass();
      vectorlETArtTDCHitParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtTDCHitParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtTDCHitParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtTDCHitPara*> : new vector<TArtTDCHitPara*>;
   }
   static void *newArray_vectorlETArtTDCHitParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtTDCHitPara*>[nElements] : new vector<TArtTDCHitPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtTDCHitParamUgR(void *p) {
      delete ((vector<TArtTDCHitPara*>*)p);
   }
   static void deleteArray_vectorlETArtTDCHitParamUgR(void *p) {
      delete [] ((vector<TArtTDCHitPara*>*)p);
   }
   static void destruct_vectorlETArtTDCHitParamUgR(void *p) {
      typedef vector<TArtTDCHitPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtTDCHitPara*>

namespace ROOT {
   static TClass *vectorlETArtRNaIParamUgR_Dictionary();
   static void vectorlETArtRNaIParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtRNaIParamUgR(void *p = 0);
   static void *newArray_vectorlETArtRNaIParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtRNaIParamUgR(void *p);
   static void deleteArray_vectorlETArtRNaIParamUgR(void *p);
   static void destruct_vectorlETArtRNaIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtRNaIPara*>*)
   {
      vector<TArtRNaIPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtRNaIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtRNaIPara*>", -2, "vector", 339,
                  typeid(vector<TArtRNaIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtRNaIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtRNaIPara*>) );
      instance.SetNew(&new_vectorlETArtRNaIParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtRNaIParamUgR);
      instance.SetDelete(&delete_vectorlETArtRNaIParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtRNaIParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtRNaIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtRNaIPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtRNaIPara*>","std::vector<TArtRNaIPara*, std::allocator<TArtRNaIPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtRNaIPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtRNaIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtRNaIPara*>*)0x0)->GetClass();
      vectorlETArtRNaIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtRNaIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtRNaIParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtRNaIPara*> : new vector<TArtRNaIPara*>;
   }
   static void *newArray_vectorlETArtRNaIParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtRNaIPara*>[nElements] : new vector<TArtRNaIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtRNaIParamUgR(void *p) {
      delete ((vector<TArtRNaIPara*>*)p);
   }
   static void deleteArray_vectorlETArtRNaIParamUgR(void *p) {
      delete [] ((vector<TArtRNaIPara*>*)p);
   }
   static void destruct_vectorlETArtRNaIParamUgR(void *p) {
      typedef vector<TArtRNaIPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtRNaIPara*>

namespace ROOT {
   static TClass *vectorlETArtPlasParamUgR_Dictionary();
   static void vectorlETArtPlasParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtPlasParamUgR(void *p = 0);
   static void *newArray_vectorlETArtPlasParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtPlasParamUgR(void *p);
   static void deleteArray_vectorlETArtPlasParamUgR(void *p);
   static void destruct_vectorlETArtPlasParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtPlasPara*>*)
   {
      vector<TArtPlasPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtPlasPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtPlasPara*>", -2, "vector", 339,
                  typeid(vector<TArtPlasPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtPlasParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtPlasPara*>) );
      instance.SetNew(&new_vectorlETArtPlasParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtPlasParamUgR);
      instance.SetDelete(&delete_vectorlETArtPlasParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtPlasParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtPlasParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtPlasPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtPlasPara*>","std::vector<TArtPlasPara*, std::allocator<TArtPlasPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtPlasPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtPlasParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtPlasPara*>*)0x0)->GetClass();
      vectorlETArtPlasParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtPlasParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtPlasParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtPlasPara*> : new vector<TArtPlasPara*>;
   }
   static void *newArray_vectorlETArtPlasParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtPlasPara*>[nElements] : new vector<TArtPlasPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtPlasParamUgR(void *p) {
      delete ((vector<TArtPlasPara*>*)p);
   }
   static void deleteArray_vectorlETArtPlasParamUgR(void *p) {
      delete [] ((vector<TArtPlasPara*>*)p);
   }
   static void destruct_vectorlETArtPlasParamUgR(void *p) {
      typedef vector<TArtPlasPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtPlasPara*>

namespace ROOT {
   static TClass *vectorlETArtFADCParamUgR_Dictionary();
   static void vectorlETArtFADCParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtFADCParamUgR(void *p = 0);
   static void *newArray_vectorlETArtFADCParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtFADCParamUgR(void *p);
   static void deleteArray_vectorlETArtFADCParamUgR(void *p);
   static void destruct_vectorlETArtFADCParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtFADCPara*>*)
   {
      vector<TArtFADCPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtFADCPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtFADCPara*>", -2, "vector", 339,
                  typeid(vector<TArtFADCPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtFADCParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtFADCPara*>) );
      instance.SetNew(&new_vectorlETArtFADCParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtFADCParamUgR);
      instance.SetDelete(&delete_vectorlETArtFADCParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtFADCParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtFADCParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtFADCPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtFADCPara*>","std::vector<TArtFADCPara*, std::allocator<TArtFADCPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtFADCPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtFADCParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtFADCPara*>*)0x0)->GetClass();
      vectorlETArtFADCParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtFADCParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtFADCParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtFADCPara*> : new vector<TArtFADCPara*>;
   }
   static void *newArray_vectorlETArtFADCParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtFADCPara*>[nElements] : new vector<TArtFADCPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtFADCParamUgR(void *p) {
      delete ((vector<TArtFADCPara*>*)p);
   }
   static void deleteArray_vectorlETArtFADCParamUgR(void *p) {
      delete [] ((vector<TArtFADCPara*>*)p);
   }
   static void destruct_vectorlETArtFADCParamUgR(void *p) {
      typedef vector<TArtFADCPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtFADCPara*>

namespace ROOT {
   static TClass *maplETStringcOintgR_Dictionary();
   static void maplETStringcOintgR_TClassManip(TClass*);
   static void *new_maplETStringcOintgR(void *p = 0);
   static void *newArray_maplETStringcOintgR(Long_t size, void *p);
   static void delete_maplETStringcOintgR(void *p);
   static void deleteArray_maplETStringcOintgR(void *p);
   static void destruct_maplETStringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,int>*)
   {
      map<TString,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,int>", -2, "map", 100,
                  typeid(map<TString,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,int>) );
      instance.SetNew(&new_maplETStringcOintgR);
      instance.SetNewArray(&newArray_maplETStringcOintgR);
      instance.SetDelete(&delete_maplETStringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOintgR);
      instance.SetDestructor(&destruct_maplETStringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,int> >()));

      ::ROOT::AddClassAlternate("map<TString,int>","std::map<TString, int, std::less<TString>, std::allocator<std::pair<TString const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,int>*)0x0)->GetClass();
      maplETStringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int> : new map<TString,int>;
   }
   static void *newArray_maplETStringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int>[nElements] : new map<TString,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOintgR(void *p) {
      delete ((map<TString,int>*)p);
   }
   static void deleteArray_maplETStringcOintgR(void *p) {
      delete [] ((map<TString,int>*)p);
   }
   static void destruct_maplETStringcOintgR(void *p) {
      typedef map<TString,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,int>

namespace ROOT {
   static TClass *maplETStringcOdoublegR_Dictionary();
   static void maplETStringcOdoublegR_TClassManip(TClass*);
   static void *new_maplETStringcOdoublegR(void *p = 0);
   static void *newArray_maplETStringcOdoublegR(Long_t size, void *p);
   static void delete_maplETStringcOdoublegR(void *p);
   static void deleteArray_maplETStringcOdoublegR(void *p);
   static void destruct_maplETStringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,double>*)
   {
      map<TString,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,double>", -2, "map", 100,
                  typeid(map<TString,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,double>) );
      instance.SetNew(&new_maplETStringcOdoublegR);
      instance.SetNewArray(&newArray_maplETStringcOdoublegR);
      instance.SetDelete(&delete_maplETStringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOdoublegR);
      instance.SetDestructor(&destruct_maplETStringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,double> >()));

      ::ROOT::AddClassAlternate("map<TString,double>","std::map<TString, double, std::less<TString>, std::allocator<std::pair<TString const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,double>*)0x0)->GetClass();
      maplETStringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,double> : new map<TString,double>;
   }
   static void *newArray_maplETStringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,double>[nElements] : new map<TString,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOdoublegR(void *p) {
      delete ((map<TString,double>*)p);
   }
   static void deleteArray_maplETStringcOdoublegR(void *p) {
      delete [] ((map<TString,double>*)p);
   }
   static void destruct_maplETStringcOdoublegR(void *p) {
      typedef map<TString,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,double>

namespace ROOT {
   static TClass *maplETStringcOTStringgR_Dictionary();
   static void maplETStringcOTStringgR_TClassManip(TClass*);
   static void *new_maplETStringcOTStringgR(void *p = 0);
   static void *newArray_maplETStringcOTStringgR(Long_t size, void *p);
   static void delete_maplETStringcOTStringgR(void *p);
   static void deleteArray_maplETStringcOTStringgR(void *p);
   static void destruct_maplETStringcOTStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TString>*)
   {
      map<TString,TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TString>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TString>", -2, "map", 100,
                  typeid(map<TString,TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTStringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TString>) );
      instance.SetNew(&new_maplETStringcOTStringgR);
      instance.SetNewArray(&newArray_maplETStringcOTStringgR);
      instance.SetDelete(&delete_maplETStringcOTStringgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTStringgR);
      instance.SetDestructor(&destruct_maplETStringcOTStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TString> >()));

      ::ROOT::AddClassAlternate("map<TString,TString>","std::map<TString, TString, std::less<TString>, std::allocator<std::pair<TString const, TString> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TString>*)0x0)->GetClass();
      maplETStringcOTStringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TString> : new map<TString,TString>;
   }
   static void *newArray_maplETStringcOTStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TString>[nElements] : new map<TString,TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTStringgR(void *p) {
      delete ((map<TString,TString>*)p);
   }
   static void deleteArray_maplETStringcOTStringgR(void *p) {
      delete [] ((map<TString,TString>*)p);
   }
   static void destruct_maplETStringcOTStringgR(void *p) {
      typedef map<TString,TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TString>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtTDCHitParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtTDCHitParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtTDCHitParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtTDCHitParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtTDCHitParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtTDCHitParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtTDCHitParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtTDCHitPara*>*)
   {
      map<TArtRIDFMap,TArtTDCHitPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtTDCHitPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtTDCHitPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtTDCHitPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtTDCHitParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtTDCHitPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtTDCHitParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtTDCHitParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtTDCHitParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtTDCHitParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtTDCHitParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtTDCHitPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtTDCHitPara*>","std::map<TArtRIDFMap, TArtTDCHitPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtTDCHitPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtTDCHitPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtTDCHitParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtTDCHitPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtTDCHitParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtTDCHitParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtTDCHitParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtTDCHitPara*> : new map<TArtRIDFMap,TArtTDCHitPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtTDCHitParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtTDCHitPara*>[nElements] : new map<TArtRIDFMap,TArtTDCHitPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtTDCHitParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtTDCHitPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtTDCHitParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtTDCHitPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtTDCHitParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtTDCHitPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtTDCHitPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtRNaIParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtRNaIParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtRNaIParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtRNaIParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtRNaIParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtRNaIParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtRNaIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtRNaIPara*>*)
   {
      map<TArtRIDFMap,TArtRNaIPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtRNaIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtRNaIPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtRNaIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtRNaIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtRNaIPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtRNaIParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtRNaIParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtRNaIParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtRNaIParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtRNaIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtRNaIPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtRNaIPara*>","std::map<TArtRIDFMap, TArtRNaIPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtRNaIPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtRNaIPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtRNaIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtRNaIPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtRNaIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtRNaIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtRNaIParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtRNaIPara*> : new map<TArtRIDFMap,TArtRNaIPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtRNaIParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtRNaIPara*>[nElements] : new map<TArtRIDFMap,TArtRNaIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtRNaIParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtRNaIPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtRNaIParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtRNaIPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtRNaIParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtRNaIPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtRNaIPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtPlasParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtPlasParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtPlasParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtPlasParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtPlasParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtPlasParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtPlasParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtPlasPara*>*)
   {
      map<TArtRIDFMap,TArtPlasPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtPlasPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtPlasPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtPlasPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtPlasParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtPlasPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtPlasParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtPlasParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtPlasParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtPlasParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtPlasParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtPlasPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtPlasPara*>","std::map<TArtRIDFMap, TArtPlasPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtPlasPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtPlasPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtPlasParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtPlasPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtPlasParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtPlasParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtPlasParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtPlasPara*> : new map<TArtRIDFMap,TArtPlasPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtPlasParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtPlasPara*>[nElements] : new map<TArtRIDFMap,TArtPlasPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtPlasParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtPlasPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtPlasParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtPlasPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtPlasParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtPlasPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtPlasPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtFADCParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtFADCParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtFADCParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtFADCParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtFADCParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtFADCParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtFADCParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtFADCPara*>*)
   {
      map<TArtRIDFMap,TArtFADCPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtFADCPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtFADCPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtFADCPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtFADCParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtFADCPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtFADCParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtFADCParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtFADCParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtFADCParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtFADCParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtFADCPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtFADCPara*>","std::map<TArtRIDFMap, TArtFADCPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtFADCPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtFADCPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtFADCParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtFADCPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtFADCParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtFADCParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtFADCParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtFADCPara*> : new map<TArtRIDFMap,TArtFADCPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtFADCParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtFADCPara*>[nElements] : new map<TArtRIDFMap,TArtFADCPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtFADCParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtFADCPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtFADCParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtFADCPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtFADCParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtFADCPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtFADCPara*>

namespace {
  void TriggerDictionaryInitialization_anaespri_dict_Impl() {
    static const char* headers[] = {
"include/TArtRNaIPara.hh",
"include/TArtCalibDia.hh",
"include/TArtDia.hh",
"include/TArtTDCHit.hh",
"include/TArtTDCHitPara.hh",
"include/TArtRDC.hh",
"include/TArtUserParameters.hh",
"include/TArtESPRIParameters.hh",
"include/TArtCalibRDC.hh",
"include/TArtCalibBDC.hh",
"include/TArtBDC.hh",
"include/TArtCalibPlas.hh",
"include/TArtBLD.hh",
"include/TArtFADCPara.hh",
"include/TArtCalibFADC.hh",
"include/TArtFADC.hh",
"include/TArtCalibBLD.hh",
"include/TArtCalibRNaI.hh",
"include/TArtRNaI.hh",
"include/TArtCalibTDCHit.hh",
"include/TArtPlas.hh",
"include/TArtPlasPara.hh",
0
    };
    static const char* includePaths[] = {
"/opt/root/include",
"../../Core/include",
"/opt/root/include/",
"/home/quser/src/anaroot/sources/Reconstruction/ESPRI/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anaespri_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TArtRNaIPara.hh")))  TArtRNaIPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibDia.hh")))  TArtCalibDia;
class __attribute__((annotate("$clingAutoload$include/TArtDia.hh")))  TArtDia;
class __attribute__((annotate("$clingAutoload$include/TArtTDCHit.hh")))  TArtTDCHit;
class __attribute__((annotate("$clingAutoload$include/TArtTDCHitPara.hh")))  TArtTDCHitPara;
class __attribute__((annotate("$clingAutoload$include/TArtRDC.hh")))  TArtRDC;
class __attribute__((annotate("$clingAutoload$include/TArtUserParameters.hh")))  TArtUserParameters;
class __attribute__((annotate("$clingAutoload$include/TArtESPRIParameters.hh")))  TArtESPRIParameters;
class __attribute__((annotate("$clingAutoload$include/TArtCalibRDC.hh")))  TArtCalibRDC;
class __attribute__((annotate("$clingAutoload$include/TArtCalibBDC.hh")))  TArtCalibBDC;
class __attribute__((annotate("$clingAutoload$include/TArtBDC.hh")))  TArtBDC;
class __attribute__((annotate("$clingAutoload$include/TArtCalibPlas.hh")))  TArtCalibPlas;
class __attribute__((annotate("$clingAutoload$include/TArtBLD.hh")))  TArtBLD;
class __attribute__((annotate("$clingAutoload$include/TArtFADCPara.hh")))  TArtFADCPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibFADC.hh")))  TArtCalibFADC;
class __attribute__((annotate("$clingAutoload$include/TArtFADC.hh")))  TArtFADC;
class __attribute__((annotate("$clingAutoload$include/TArtCalibBLD.hh")))  TArtCalibBLD;
class __attribute__((annotate("$clingAutoload$include/TArtCalibRNaI.hh")))  TArtCalibRNaI;
class __attribute__((annotate("$clingAutoload$include/TArtRNaI.hh")))  TArtRNaI;
class __attribute__((annotate("$clingAutoload$include/TArtCalibTDCHit.hh")))  TArtCalibTDCHit;
class __attribute__((annotate("$clingAutoload$include/TArtPlas.hh")))  TArtPlas;
class __attribute__((annotate("$clingAutoload$include/TArtPlasPara.hh")))  TArtPlasPara;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anaespri_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtRNaIPara.hh"
#include "include/TArtCalibDia.hh"
#include "include/TArtDia.hh"
#include "include/TArtTDCHit.hh"
#include "include/TArtTDCHitPara.hh"
#include "include/TArtRDC.hh"
#include "include/TArtUserParameters.hh"
#include "include/TArtESPRIParameters.hh"
#include "include/TArtCalibRDC.hh"
#include "include/TArtCalibBDC.hh"
#include "include/TArtBDC.hh"
#include "include/TArtCalibPlas.hh"
#include "include/TArtBLD.hh"
#include "include/TArtFADCPara.hh"
#include "include/TArtCalibFADC.hh"
#include "include/TArtFADC.hh"
#include "include/TArtCalibBLD.hh"
#include "include/TArtCalibRNaI.hh"
#include "include/TArtRNaI.hh"
#include "include/TArtCalibTDCHit.hh"
#include "include/TArtPlas.hh"
#include "include/TArtPlasPara.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtBDC", payloadCode, "@",
"TArtBLD", payloadCode, "@",
"TArtCalibBDC", payloadCode, "@",
"TArtCalibBLD", payloadCode, "@",
"TArtCalibDia", payloadCode, "@",
"TArtCalibFADC", payloadCode, "@",
"TArtCalibPlas", payloadCode, "@",
"TArtCalibRDC", payloadCode, "@",
"TArtCalibRNaI", payloadCode, "@",
"TArtCalibTDCHit", payloadCode, "@",
"TArtDia", payloadCode, "@",
"TArtESPRIParameters", payloadCode, "@",
"TArtFADC", payloadCode, "@",
"TArtFADCPara", payloadCode, "@",
"TArtPlas", payloadCode, "@",
"TArtPlasPara", payloadCode, "@",
"TArtRDC", payloadCode, "@",
"TArtRNaI", payloadCode, "@",
"TArtRNaIPara", payloadCode, "@",
"TArtTDCHit", payloadCode, "@",
"TArtTDCHitPara", payloadCode, "@",
"TArtUserParameters", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anaespri_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anaespri_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anaespri_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anaespri_dict() {
  TriggerDictionaryInitialization_anaespri_dict_Impl();
}
