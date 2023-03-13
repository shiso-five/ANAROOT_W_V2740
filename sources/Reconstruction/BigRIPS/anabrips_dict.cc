// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anabrips_dict
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
#include "include/TArtCalibTKE.hh"
#include "include/TArtOptMatrix.hh"
#include "include/TArtIC.hh"
#include "include/TArtFocalPlane.hh"
#include "include/TArtCalibSi.hh"
#include "include/TArtRecoRIPS.hh"
#include "include/TArtCalibPID.hh"
#include "include/TArtPPACPara.hh"
#include "include/TArtFocalPlanePara.hh"
#include "include/TArtCalibGe.hh"
#include "include/TArtCalibPPAC.hh"
#include "include/TArtSi.hh"
#include "include/TArtBigRIPSParameters.hh"
#include "include/TArtRIPS.hh"
#include "include/TArtICPara.hh"
#include "include/TArtCalibIC.hh"
#include "include/TArtSiPara.hh"
#include "include/TArtCalibFocalPlane.hh"
#include "include/TArtPlasticPara.hh"
#include "include/TArtCalibCoin.hh"
#include "include/TArtCalibPlastic.hh"
#include "include/TArtTOF.hh"
#include "include/TArtRecoBeam.hh"
#include "include/TArtRIPSPara.hh"
#include "include/TArtTKEPara.hh"
#include "include/TArtPPAC.hh"
#include "include/TArtTKE.hh"
#include "include/TArtRecoTOF.hh"
#include "include/TArtGe.hh"
#include "include/TArtBeam.hh"
#include "include/TArtRecoPID.hh"
#include "include/TArtBeamPara.hh"
#include "include/TArtTOFPara.hh"
#include "include/TArtGePara.hh"
#include "include/TArtPlastic.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TArtCalibTKE(void *p = 0);
   static void *newArray_TArtCalibTKE(Long_t size, void *p);
   static void delete_TArtCalibTKE(void *p);
   static void deleteArray_TArtCalibTKE(void *p);
   static void destruct_TArtCalibTKE(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibTKE*)
   {
      ::TArtCalibTKE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibTKE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibTKE", ::TArtCalibTKE::Class_Version(), "TArtCalibTKE.hh", 17,
                  typeid(::TArtCalibTKE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibTKE::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibTKE) );
      instance.SetNew(&new_TArtCalibTKE);
      instance.SetNewArray(&newArray_TArtCalibTKE);
      instance.SetDelete(&delete_TArtCalibTKE);
      instance.SetDeleteArray(&deleteArray_TArtCalibTKE);
      instance.SetDestructor(&destruct_TArtCalibTKE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibTKE*)
   {
      return GenerateInitInstanceLocal((::TArtCalibTKE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibTKE*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtIC(void *p = 0);
   static void *newArray_TArtIC(Long_t size, void *p);
   static void delete_TArtIC(void *p);
   static void deleteArray_TArtIC(void *p);
   static void destruct_TArtIC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtIC*)
   {
      ::TArtIC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtIC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtIC", ::TArtIC::Class_Version(), "TArtIC.hh", 10,
                  typeid(::TArtIC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtIC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtIC) );
      instance.SetNew(&new_TArtIC);
      instance.SetNewArray(&newArray_TArtIC);
      instance.SetDelete(&delete_TArtIC);
      instance.SetDeleteArray(&deleteArray_TArtIC);
      instance.SetDestructor(&destruct_TArtIC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtIC*)
   {
      return GenerateInitInstanceLocal((::TArtIC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtIC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtFocalPlane(void *p = 0);
   static void *newArray_TArtFocalPlane(Long_t size, void *p);
   static void delete_TArtFocalPlane(void *p);
   static void deleteArray_TArtFocalPlane(void *p);
   static void destruct_TArtFocalPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtFocalPlane*)
   {
      ::TArtFocalPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtFocalPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtFocalPlane", ::TArtFocalPlane::Class_Version(), "TArtFocalPlane.hh", 8,
                  typeid(::TArtFocalPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtFocalPlane::Dictionary, isa_proxy, 4,
                  sizeof(::TArtFocalPlane) );
      instance.SetNew(&new_TArtFocalPlane);
      instance.SetNewArray(&newArray_TArtFocalPlane);
      instance.SetDelete(&delete_TArtFocalPlane);
      instance.SetDeleteArray(&deleteArray_TArtFocalPlane);
      instance.SetDestructor(&destruct_TArtFocalPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtFocalPlane*)
   {
      return GenerateInitInstanceLocal((::TArtFocalPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtFocalPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibSi(void *p = 0);
   static void *newArray_TArtCalibSi(Long_t size, void *p);
   static void delete_TArtCalibSi(void *p);
   static void deleteArray_TArtCalibSi(void *p);
   static void destruct_TArtCalibSi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSi*)
   {
      ::TArtCalibSi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSi", ::TArtCalibSi::Class_Version(), "TArtCalibSi.hh", 17,
                  typeid(::TArtCalibSi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSi::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSi) );
      instance.SetNew(&new_TArtCalibSi);
      instance.SetNewArray(&newArray_TArtCalibSi);
      instance.SetDelete(&delete_TArtCalibSi);
      instance.SetDeleteArray(&deleteArray_TArtCalibSi);
      instance.SetDestructor(&destruct_TArtCalibSi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSi*)
   {
      return GenerateInitInstanceLocal((::TArtCalibSi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibSi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRecoRIPS(void *p = 0);
   static void *newArray_TArtRecoRIPS(Long_t size, void *p);
   static void delete_TArtRecoRIPS(void *p);
   static void deleteArray_TArtRecoRIPS(void *p);
   static void destruct_TArtRecoRIPS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRecoRIPS*)
   {
      ::TArtRecoRIPS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRecoRIPS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRecoRIPS", ::TArtRecoRIPS::Class_Version(), "TArtRecoRIPS.hh", 19,
                  typeid(::TArtRecoRIPS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRecoRIPS::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRecoRIPS) );
      instance.SetNew(&new_TArtRecoRIPS);
      instance.SetNewArray(&newArray_TArtRecoRIPS);
      instance.SetDelete(&delete_TArtRecoRIPS);
      instance.SetDeleteArray(&deleteArray_TArtRecoRIPS);
      instance.SetDestructor(&destruct_TArtRecoRIPS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRecoRIPS*)
   {
      return GenerateInitInstanceLocal((::TArtRecoRIPS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRecoRIPS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibPID(void *p = 0);
   static void *newArray_TArtCalibPID(Long_t size, void *p);
   static void delete_TArtCalibPID(void *p);
   static void deleteArray_TArtCalibPID(void *p);
   static void destruct_TArtCalibPID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibPID*)
   {
      ::TArtCalibPID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibPID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibPID", ::TArtCalibPID::Class_Version(), "TArtCalibPID.hh", 21,
                  typeid(::TArtCalibPID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibPID::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibPID) );
      instance.SetNew(&new_TArtCalibPID);
      instance.SetNewArray(&newArray_TArtCalibPID);
      instance.SetDelete(&delete_TArtCalibPID);
      instance.SetDeleteArray(&deleteArray_TArtCalibPID);
      instance.SetDestructor(&destruct_TArtCalibPID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibPID*)
   {
      return GenerateInitInstanceLocal((::TArtCalibPID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibPID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtPPAC(void *p = 0);
   static void *newArray_TArtPPAC(Long_t size, void *p);
   static void delete_TArtPPAC(void *p);
   static void deleteArray_TArtPPAC(void *p);
   static void destruct_TArtPPAC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtPPAC*)
   {
      ::TArtPPAC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtPPAC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtPPAC", ::TArtPPAC::Class_Version(), "TArtPPAC.hh", 6,
                  typeid(::TArtPPAC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtPPAC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtPPAC) );
      instance.SetNew(&new_TArtPPAC);
      instance.SetNewArray(&newArray_TArtPPAC);
      instance.SetDelete(&delete_TArtPPAC);
      instance.SetDeleteArray(&deleteArray_TArtPPAC);
      instance.SetDestructor(&destruct_TArtPPAC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtPPAC*)
   {
      return GenerateInitInstanceLocal((::TArtPPAC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtPPAC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtPPACPara(void *p = 0);
   static void *newArray_TArtPPACPara(Long_t size, void *p);
   static void delete_TArtPPACPara(void *p);
   static void deleteArray_TArtPPACPara(void *p);
   static void destruct_TArtPPACPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtPPACPara*)
   {
      ::TArtPPACPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtPPACPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtPPACPara", ::TArtPPACPara::Class_Version(), "TArtPPACPara.hh", 12,
                  typeid(::TArtPPACPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtPPACPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtPPACPara) );
      instance.SetNew(&new_TArtPPACPara);
      instance.SetNewArray(&newArray_TArtPPACPara);
      instance.SetDelete(&delete_TArtPPACPara);
      instance.SetDeleteArray(&deleteArray_TArtPPACPara);
      instance.SetDestructor(&destruct_TArtPPACPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtPPACPara*)
   {
      return GenerateInitInstanceLocal((::TArtPPACPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtPPACPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtFocalPlanePara(void *p = 0);
   static void *newArray_TArtFocalPlanePara(Long_t size, void *p);
   static void delete_TArtFocalPlanePara(void *p);
   static void deleteArray_TArtFocalPlanePara(void *p);
   static void destruct_TArtFocalPlanePara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtFocalPlanePara*)
   {
      ::TArtFocalPlanePara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtFocalPlanePara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtFocalPlanePara", ::TArtFocalPlanePara::Class_Version(), "TArtFocalPlanePara.hh", 6,
                  typeid(::TArtFocalPlanePara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtFocalPlanePara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtFocalPlanePara) );
      instance.SetNew(&new_TArtFocalPlanePara);
      instance.SetNewArray(&newArray_TArtFocalPlanePara);
      instance.SetDelete(&delete_TArtFocalPlanePara);
      instance.SetDeleteArray(&deleteArray_TArtFocalPlanePara);
      instance.SetDestructor(&destruct_TArtFocalPlanePara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtFocalPlanePara*)
   {
      return GenerateInitInstanceLocal((::TArtFocalPlanePara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtFocalPlanePara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibGe(void *p = 0);
   static void *newArray_TArtCalibGe(Long_t size, void *p);
   static void delete_TArtCalibGe(void *p);
   static void deleteArray_TArtCalibGe(void *p);
   static void destruct_TArtCalibGe(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibGe*)
   {
      ::TArtCalibGe *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibGe >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibGe", ::TArtCalibGe::Class_Version(), "TArtCalibGe.hh", 17,
                  typeid(::TArtCalibGe), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibGe::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibGe) );
      instance.SetNew(&new_TArtCalibGe);
      instance.SetNewArray(&newArray_TArtCalibGe);
      instance.SetDelete(&delete_TArtCalibGe);
      instance.SetDeleteArray(&deleteArray_TArtCalibGe);
      instance.SetDestructor(&destruct_TArtCalibGe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibGe*)
   {
      return GenerateInitInstanceLocal((::TArtCalibGe*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibGe*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibPPAC(void *p = 0);
   static void *newArray_TArtCalibPPAC(Long_t size, void *p);
   static void delete_TArtCalibPPAC(void *p);
   static void deleteArray_TArtCalibPPAC(void *p);
   static void destruct_TArtCalibPPAC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibPPAC*)
   {
      ::TArtCalibPPAC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibPPAC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibPPAC", ::TArtCalibPPAC::Class_Version(), "TArtCalibPPAC.hh", 19,
                  typeid(::TArtCalibPPAC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibPPAC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibPPAC) );
      instance.SetNew(&new_TArtCalibPPAC);
      instance.SetNewArray(&newArray_TArtCalibPPAC);
      instance.SetDelete(&delete_TArtCalibPPAC);
      instance.SetDeleteArray(&deleteArray_TArtCalibPPAC);
      instance.SetDestructor(&destruct_TArtCalibPPAC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibPPAC*)
   {
      return GenerateInitInstanceLocal((::TArtCalibPPAC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibPPAC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtSi(void *p = 0);
   static void *newArray_TArtSi(Long_t size, void *p);
   static void delete_TArtSi(void *p);
   static void deleteArray_TArtSi(void *p);
   static void destruct_TArtSi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSi*)
   {
      ::TArtSi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtSi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtSi", ::TArtSi::Class_Version(), "TArtSi.hh", 7,
                  typeid(::TArtSi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtSi::Dictionary, isa_proxy, 4,
                  sizeof(::TArtSi) );
      instance.SetNew(&new_TArtSi);
      instance.SetNewArray(&newArray_TArtSi);
      instance.SetDelete(&delete_TArtSi);
      instance.SetDeleteArray(&deleteArray_TArtSi);
      instance.SetDestructor(&destruct_TArtSi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSi*)
   {
      return GenerateInitInstanceLocal((::TArtSi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtSi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtBigRIPSParameters(void *p = 0);
   static void *newArray_TArtBigRIPSParameters(Long_t size, void *p);
   static void delete_TArtBigRIPSParameters(void *p);
   static void deleteArray_TArtBigRIPSParameters(void *p);
   static void destruct_TArtBigRIPSParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtBigRIPSParameters*)
   {
      ::TArtBigRIPSParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtBigRIPSParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtBigRIPSParameters", ::TArtBigRIPSParameters::Class_Version(), "TArtBigRIPSParameters.hh", 23,
                  typeid(::TArtBigRIPSParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtBigRIPSParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtBigRIPSParameters) );
      instance.SetNew(&new_TArtBigRIPSParameters);
      instance.SetNewArray(&newArray_TArtBigRIPSParameters);
      instance.SetDelete(&delete_TArtBigRIPSParameters);
      instance.SetDeleteArray(&deleteArray_TArtBigRIPSParameters);
      instance.SetDestructor(&destruct_TArtBigRIPSParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtBigRIPSParameters*)
   {
      return GenerateInitInstanceLocal((::TArtBigRIPSParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtBigRIPSParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRIPS(void *p = 0);
   static void *newArray_TArtRIPS(Long_t size, void *p);
   static void delete_TArtRIPS(void *p);
   static void deleteArray_TArtRIPS(void *p);
   static void destruct_TArtRIPS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRIPS*)
   {
      ::TArtRIPS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRIPS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRIPS", ::TArtRIPS::Class_Version(), "TArtRIPS.hh", 7,
                  typeid(::TArtRIPS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRIPS::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRIPS) );
      instance.SetNew(&new_TArtRIPS);
      instance.SetNewArray(&newArray_TArtRIPS);
      instance.SetDelete(&delete_TArtRIPS);
      instance.SetDeleteArray(&deleteArray_TArtRIPS);
      instance.SetDestructor(&destruct_TArtRIPS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRIPS*)
   {
      return GenerateInitInstanceLocal((::TArtRIPS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRIPS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtICPara(void *p = 0);
   static void *newArray_TArtICPara(Long_t size, void *p);
   static void delete_TArtICPara(void *p);
   static void deleteArray_TArtICPara(void *p);
   static void destruct_TArtICPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtICPara*)
   {
      ::TArtICPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtICPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtICPara", ::TArtICPara::Class_Version(), "TArtICPara.hh", 12,
                  typeid(::TArtICPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtICPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtICPara) );
      instance.SetNew(&new_TArtICPara);
      instance.SetNewArray(&newArray_TArtICPara);
      instance.SetDelete(&delete_TArtICPara);
      instance.SetDeleteArray(&deleteArray_TArtICPara);
      instance.SetDestructor(&destruct_TArtICPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtICPara*)
   {
      return GenerateInitInstanceLocal((::TArtICPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtICPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibIC(void *p = 0);
   static void *newArray_TArtCalibIC(Long_t size, void *p);
   static void delete_TArtCalibIC(void *p);
   static void deleteArray_TArtCalibIC(void *p);
   static void destruct_TArtCalibIC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibIC*)
   {
      ::TArtCalibIC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibIC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibIC", ::TArtCalibIC::Class_Version(), "TArtCalibIC.hh", 19,
                  typeid(::TArtCalibIC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibIC::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibIC) );
      instance.SetNew(&new_TArtCalibIC);
      instance.SetNewArray(&newArray_TArtCalibIC);
      instance.SetDelete(&delete_TArtCalibIC);
      instance.SetDeleteArray(&deleteArray_TArtCalibIC);
      instance.SetDestructor(&destruct_TArtCalibIC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibIC*)
   {
      return GenerateInitInstanceLocal((::TArtCalibIC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibIC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtSiPara(void *p = 0);
   static void *newArray_TArtSiPara(Long_t size, void *p);
   static void delete_TArtSiPara(void *p);
   static void deleteArray_TArtSiPara(void *p);
   static void destruct_TArtSiPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSiPara*)
   {
      ::TArtSiPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtSiPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtSiPara", ::TArtSiPara::Class_Version(), "TArtSiPara.hh", 12,
                  typeid(::TArtSiPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtSiPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtSiPara) );
      instance.SetNew(&new_TArtSiPara);
      instance.SetNewArray(&newArray_TArtSiPara);
      instance.SetDelete(&delete_TArtSiPara);
      instance.SetDeleteArray(&deleteArray_TArtSiPara);
      instance.SetDestructor(&destruct_TArtSiPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSiPara*)
   {
      return GenerateInitInstanceLocal((::TArtSiPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtSiPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibFocalPlane(void *p = 0);
   static void *newArray_TArtCalibFocalPlane(Long_t size, void *p);
   static void delete_TArtCalibFocalPlane(void *p);
   static void deleteArray_TArtCalibFocalPlane(void *p);
   static void destruct_TArtCalibFocalPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibFocalPlane*)
   {
      ::TArtCalibFocalPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibFocalPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibFocalPlane", ::TArtCalibFocalPlane::Class_Version(), "TArtCalibFocalPlane.hh", 19,
                  typeid(::TArtCalibFocalPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibFocalPlane::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibFocalPlane) );
      instance.SetNew(&new_TArtCalibFocalPlane);
      instance.SetNewArray(&newArray_TArtCalibFocalPlane);
      instance.SetDelete(&delete_TArtCalibFocalPlane);
      instance.SetDeleteArray(&deleteArray_TArtCalibFocalPlane);
      instance.SetDestructor(&destruct_TArtCalibFocalPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibFocalPlane*)
   {
      return GenerateInitInstanceLocal((::TArtCalibFocalPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibFocalPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtPlastic(void *p = 0);
   static void *newArray_TArtPlastic(Long_t size, void *p);
   static void delete_TArtPlastic(void *p);
   static void deleteArray_TArtPlastic(void *p);
   static void destruct_TArtPlastic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtPlastic*)
   {
      ::TArtPlastic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtPlastic >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtPlastic", ::TArtPlastic::Class_Version(), "TArtPlastic.hh", 8,
                  typeid(::TArtPlastic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtPlastic::Dictionary, isa_proxy, 4,
                  sizeof(::TArtPlastic) );
      instance.SetNew(&new_TArtPlastic);
      instance.SetNewArray(&newArray_TArtPlastic);
      instance.SetDelete(&delete_TArtPlastic);
      instance.SetDeleteArray(&deleteArray_TArtPlastic);
      instance.SetDestructor(&destruct_TArtPlastic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtPlastic*)
   {
      return GenerateInitInstanceLocal((::TArtPlastic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtPlastic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtPlasticPara(void *p = 0);
   static void *newArray_TArtPlasticPara(Long_t size, void *p);
   static void delete_TArtPlasticPara(void *p);
   static void deleteArray_TArtPlasticPara(void *p);
   static void destruct_TArtPlasticPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtPlasticPara*)
   {
      ::TArtPlasticPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtPlasticPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtPlasticPara", ::TArtPlasticPara::Class_Version(), "TArtPlasticPara.hh", 12,
                  typeid(::TArtPlasticPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtPlasticPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtPlasticPara) );
      instance.SetNew(&new_TArtPlasticPara);
      instance.SetNewArray(&newArray_TArtPlasticPara);
      instance.SetDelete(&delete_TArtPlasticPara);
      instance.SetDeleteArray(&deleteArray_TArtPlasticPara);
      instance.SetDestructor(&destruct_TArtPlasticPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtPlasticPara*)
   {
      return GenerateInitInstanceLocal((::TArtPlasticPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtPlasticPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibCoin(void *p = 0);
   static void *newArray_TArtCalibCoin(Long_t size, void *p);
   static void delete_TArtCalibCoin(void *p);
   static void deleteArray_TArtCalibCoin(void *p);
   static void destruct_TArtCalibCoin(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibCoin*)
   {
      ::TArtCalibCoin *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibCoin >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibCoin", ::TArtCalibCoin::Class_Version(), "TArtCalibCoin.hh", 12,
                  typeid(::TArtCalibCoin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibCoin::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibCoin) );
      instance.SetNew(&new_TArtCalibCoin);
      instance.SetNewArray(&newArray_TArtCalibCoin);
      instance.SetDelete(&delete_TArtCalibCoin);
      instance.SetDeleteArray(&deleteArray_TArtCalibCoin);
      instance.SetDestructor(&destruct_TArtCalibCoin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibCoin*)
   {
      return GenerateInitInstanceLocal((::TArtCalibCoin*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibCoin*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibPlastic(void *p = 0);
   static void *newArray_TArtCalibPlastic(Long_t size, void *p);
   static void delete_TArtCalibPlastic(void *p);
   static void deleteArray_TArtCalibPlastic(void *p);
   static void destruct_TArtCalibPlastic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibPlastic*)
   {
      ::TArtCalibPlastic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibPlastic >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibPlastic", ::TArtCalibPlastic::Class_Version(), "TArtCalibPlastic.hh", 18,
                  typeid(::TArtCalibPlastic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibPlastic::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibPlastic) );
      instance.SetNew(&new_TArtCalibPlastic);
      instance.SetNewArray(&newArray_TArtCalibPlastic);
      instance.SetDelete(&delete_TArtCalibPlastic);
      instance.SetDeleteArray(&deleteArray_TArtCalibPlastic);
      instance.SetDestructor(&destruct_TArtCalibPlastic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibPlastic*)
   {
      return GenerateInitInstanceLocal((::TArtCalibPlastic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibPlastic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTOF(void *p = 0);
   static void *newArray_TArtTOF(Long_t size, void *p);
   static void delete_TArtTOF(void *p);
   static void deleteArray_TArtTOF(void *p);
   static void destruct_TArtTOF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTOF*)
   {
      ::TArtTOF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTOF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTOF", ::TArtTOF::Class_Version(), "TArtTOF.hh", 7,
                  typeid(::TArtTOF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTOF::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTOF) );
      instance.SetNew(&new_TArtTOF);
      instance.SetNewArray(&newArray_TArtTOF);
      instance.SetDelete(&delete_TArtTOF);
      instance.SetDeleteArray(&deleteArray_TArtTOF);
      instance.SetDestructor(&destruct_TArtTOF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTOF*)
   {
      return GenerateInitInstanceLocal((::TArtTOF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTOF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRecoBeam(void *p = 0);
   static void *newArray_TArtRecoBeam(Long_t size, void *p);
   static void delete_TArtRecoBeam(void *p);
   static void deleteArray_TArtRecoBeam(void *p);
   static void destruct_TArtRecoBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRecoBeam*)
   {
      ::TArtRecoBeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRecoBeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRecoBeam", ::TArtRecoBeam::Class_Version(), "TArtRecoBeam.hh", 19,
                  typeid(::TArtRecoBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRecoBeam::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRecoBeam) );
      instance.SetNew(&new_TArtRecoBeam);
      instance.SetNewArray(&newArray_TArtRecoBeam);
      instance.SetDelete(&delete_TArtRecoBeam);
      instance.SetDeleteArray(&deleteArray_TArtRecoBeam);
      instance.SetDestructor(&destruct_TArtRecoBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRecoBeam*)
   {
      return GenerateInitInstanceLocal((::TArtRecoBeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRecoBeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRIPSPara(void *p = 0);
   static void *newArray_TArtRIPSPara(Long_t size, void *p);
   static void delete_TArtRIPSPara(void *p);
   static void deleteArray_TArtRIPSPara(void *p);
   static void destruct_TArtRIPSPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRIPSPara*)
   {
      ::TArtRIPSPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRIPSPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRIPSPara", ::TArtRIPSPara::Class_Version(), "TArtRIPSPara.hh", 8,
                  typeid(::TArtRIPSPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRIPSPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRIPSPara) );
      instance.SetNew(&new_TArtRIPSPara);
      instance.SetNewArray(&newArray_TArtRIPSPara);
      instance.SetDelete(&delete_TArtRIPSPara);
      instance.SetDeleteArray(&deleteArray_TArtRIPSPara);
      instance.SetDestructor(&destruct_TArtRIPSPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRIPSPara*)
   {
      return GenerateInitInstanceLocal((::TArtRIPSPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRIPSPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTKE(void *p = 0);
   static void *newArray_TArtTKE(Long_t size, void *p);
   static void delete_TArtTKE(void *p);
   static void deleteArray_TArtTKE(void *p);
   static void destruct_TArtTKE(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTKE*)
   {
      ::TArtTKE *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTKE >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTKE", ::TArtTKE::Class_Version(), "TArtTKE.hh", 9,
                  typeid(::TArtTKE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTKE::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTKE) );
      instance.SetNew(&new_TArtTKE);
      instance.SetNewArray(&newArray_TArtTKE);
      instance.SetDelete(&delete_TArtTKE);
      instance.SetDeleteArray(&deleteArray_TArtTKE);
      instance.SetDestructor(&destruct_TArtTKE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTKE*)
   {
      return GenerateInitInstanceLocal((::TArtTKE*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTKE*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTKEPara(void *p = 0);
   static void *newArray_TArtTKEPara(Long_t size, void *p);
   static void delete_TArtTKEPara(void *p);
   static void deleteArray_TArtTKEPara(void *p);
   static void destruct_TArtTKEPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTKEPara*)
   {
      ::TArtTKEPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTKEPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTKEPara", ::TArtTKEPara::Class_Version(), "TArtTKEPara.hh", 12,
                  typeid(::TArtTKEPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTKEPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTKEPara) );
      instance.SetNew(&new_TArtTKEPara);
      instance.SetNewArray(&newArray_TArtTKEPara);
      instance.SetDelete(&delete_TArtTKEPara);
      instance.SetDeleteArray(&deleteArray_TArtTKEPara);
      instance.SetDestructor(&destruct_TArtTKEPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTKEPara*)
   {
      return GenerateInitInstanceLocal((::TArtTKEPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTKEPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRecoTOF(void *p = 0);
   static void *newArray_TArtRecoTOF(Long_t size, void *p);
   static void delete_TArtRecoTOF(void *p);
   static void deleteArray_TArtRecoTOF(void *p);
   static void destruct_TArtRecoTOF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRecoTOF*)
   {
      ::TArtRecoTOF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRecoTOF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRecoTOF", ::TArtRecoTOF::Class_Version(), "TArtRecoTOF.hh", 17,
                  typeid(::TArtRecoTOF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRecoTOF::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRecoTOF) );
      instance.SetNew(&new_TArtRecoTOF);
      instance.SetNewArray(&newArray_TArtRecoTOF);
      instance.SetDelete(&delete_TArtRecoTOF);
      instance.SetDeleteArray(&deleteArray_TArtRecoTOF);
      instance.SetDestructor(&destruct_TArtRecoTOF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRecoTOF*)
   {
      return GenerateInitInstanceLocal((::TArtRecoTOF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRecoTOF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtGe(void *p = 0);
   static void *newArray_TArtGe(Long_t size, void *p);
   static void delete_TArtGe(void *p);
   static void deleteArray_TArtGe(void *p);
   static void destruct_TArtGe(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtGe*)
   {
      ::TArtGe *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtGe >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtGe", ::TArtGe::Class_Version(), "TArtGe.hh", 6,
                  typeid(::TArtGe), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtGe::Dictionary, isa_proxy, 4,
                  sizeof(::TArtGe) );
      instance.SetNew(&new_TArtGe);
      instance.SetNewArray(&newArray_TArtGe);
      instance.SetDelete(&delete_TArtGe);
      instance.SetDeleteArray(&deleteArray_TArtGe);
      instance.SetDestructor(&destruct_TArtGe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtGe*)
   {
      return GenerateInitInstanceLocal((::TArtGe*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtGe*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtBeam(void *p = 0);
   static void *newArray_TArtBeam(Long_t size, void *p);
   static void delete_TArtBeam(void *p);
   static void deleteArray_TArtBeam(void *p);
   static void destruct_TArtBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtBeam*)
   {
      ::TArtBeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtBeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtBeam", ::TArtBeam::Class_Version(), "TArtBeam.hh", 8,
                  typeid(::TArtBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtBeam::Dictionary, isa_proxy, 4,
                  sizeof(::TArtBeam) );
      instance.SetNew(&new_TArtBeam);
      instance.SetNewArray(&newArray_TArtBeam);
      instance.SetDelete(&delete_TArtBeam);
      instance.SetDeleteArray(&deleteArray_TArtBeam);
      instance.SetDestructor(&destruct_TArtBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtBeam*)
   {
      return GenerateInitInstanceLocal((::TArtBeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtBeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRecoPID(void *p = 0);
   static void *newArray_TArtRecoPID(Long_t size, void *p);
   static void delete_TArtRecoPID(void *p);
   static void deleteArray_TArtRecoPID(void *p);
   static void destruct_TArtRecoPID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRecoPID*)
   {
      ::TArtRecoPID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRecoPID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRecoPID", ::TArtRecoPID::Class_Version(), "TArtRecoPID.hh", 22,
                  typeid(::TArtRecoPID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRecoPID::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRecoPID) );
      instance.SetNew(&new_TArtRecoPID);
      instance.SetNewArray(&newArray_TArtRecoPID);
      instance.SetDelete(&delete_TArtRecoPID);
      instance.SetDeleteArray(&deleteArray_TArtRecoPID);
      instance.SetDestructor(&destruct_TArtRecoPID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRecoPID*)
   {
      return GenerateInitInstanceLocal((::TArtRecoPID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtRecoPID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtTOFPara(void *p = 0);
   static void *newArray_TArtTOFPara(Long_t size, void *p);
   static void delete_TArtTOFPara(void *p);
   static void deleteArray_TArtTOFPara(void *p);
   static void destruct_TArtTOFPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtTOFPara*)
   {
      ::TArtTOFPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtTOFPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtTOFPara", ::TArtTOFPara::Class_Version(), "TArtTOFPara.hh", 6,
                  typeid(::TArtTOFPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtTOFPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtTOFPara) );
      instance.SetNew(&new_TArtTOFPara);
      instance.SetNewArray(&newArray_TArtTOFPara);
      instance.SetDelete(&delete_TArtTOFPara);
      instance.SetDeleteArray(&deleteArray_TArtTOFPara);
      instance.SetDestructor(&destruct_TArtTOFPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtTOFPara*)
   {
      return GenerateInitInstanceLocal((::TArtTOFPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtTOFPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtBeamPara(void *p = 0);
   static void *newArray_TArtBeamPara(Long_t size, void *p);
   static void delete_TArtBeamPara(void *p);
   static void deleteArray_TArtBeamPara(void *p);
   static void destruct_TArtBeamPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtBeamPara*)
   {
      ::TArtBeamPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtBeamPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtBeamPara", ::TArtBeamPara::Class_Version(), "TArtBeamPara.hh", 10,
                  typeid(::TArtBeamPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtBeamPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtBeamPara) );
      instance.SetNew(&new_TArtBeamPara);
      instance.SetNewArray(&newArray_TArtBeamPara);
      instance.SetDelete(&delete_TArtBeamPara);
      instance.SetDeleteArray(&deleteArray_TArtBeamPara);
      instance.SetDestructor(&destruct_TArtBeamPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtBeamPara*)
   {
      return GenerateInitInstanceLocal((::TArtBeamPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtBeamPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtGePara(void *p = 0);
   static void *newArray_TArtGePara(Long_t size, void *p);
   static void delete_TArtGePara(void *p);
   static void deleteArray_TArtGePara(void *p);
   static void destruct_TArtGePara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtGePara*)
   {
      ::TArtGePara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtGePara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtGePara", ::TArtGePara::Class_Version(), "TArtGePara.hh", 12,
                  typeid(::TArtGePara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtGePara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtGePara) );
      instance.SetNew(&new_TArtGePara);
      instance.SetNewArray(&newArray_TArtGePara);
      instance.SetDelete(&delete_TArtGePara);
      instance.SetDeleteArray(&deleteArray_TArtGePara);
      instance.SetDestructor(&destruct_TArtGePara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtGePara*)
   {
      return GenerateInitInstanceLocal((::TArtGePara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtGePara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibTKE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibTKE::Class_Name()
{
   return "TArtCalibTKE";
}

//______________________________________________________________________________
const char *TArtCalibTKE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTKE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibTKE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTKE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibTKE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTKE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibTKE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibTKE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtIC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtIC::Class_Name()
{
   return "TArtIC";
}

//______________________________________________________________________________
const char *TArtIC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtIC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtIC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtIC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtIC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtIC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtIC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtIC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtFocalPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtFocalPlane::Class_Name()
{
   return "TArtFocalPlane";
}

//______________________________________________________________________________
const char *TArtFocalPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFocalPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtFocalPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFocalPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtFocalPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFocalPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtFocalPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFocalPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSi::Class_Name()
{
   return "TArtCalibSi";
}

//______________________________________________________________________________
const char *TArtCalibSi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRecoRIPS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRecoRIPS::Class_Name()
{
   return "TArtRecoRIPS";
}

//______________________________________________________________________________
const char *TArtRecoRIPS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoRIPS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRecoRIPS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoRIPS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRecoRIPS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoRIPS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRecoRIPS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoRIPS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibPID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibPID::Class_Name()
{
   return "TArtCalibPID";
}

//______________________________________________________________________________
const char *TArtCalibPID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibPID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibPID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibPID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPID*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtPPAC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtPPAC::Class_Name()
{
   return "TArtPPAC";
}

//______________________________________________________________________________
const char *TArtPPAC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPPAC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtPPAC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPPAC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtPPAC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPPAC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtPPAC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPPAC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtPPACPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtPPACPara::Class_Name()
{
   return "TArtPPACPara";
}

//______________________________________________________________________________
const char *TArtPPACPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPPACPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtPPACPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPPACPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtPPACPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPPACPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtPPACPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPPACPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtFocalPlanePara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtFocalPlanePara::Class_Name()
{
   return "TArtFocalPlanePara";
}

//______________________________________________________________________________
const char *TArtFocalPlanePara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFocalPlanePara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtFocalPlanePara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtFocalPlanePara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtFocalPlanePara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFocalPlanePara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtFocalPlanePara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtFocalPlanePara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibGe::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibGe::Class_Name()
{
   return "TArtCalibGe";
}

//______________________________________________________________________________
const char *TArtCalibGe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibGe*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibGe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibGe*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibGe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibGe*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibGe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibGe*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibPPAC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibPPAC::Class_Name()
{
   return "TArtCalibPPAC";
}

//______________________________________________________________________________
const char *TArtCalibPPAC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPPAC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibPPAC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPPAC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibPPAC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPPAC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibPPAC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPPAC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtSi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtSi::Class_Name()
{
   return "TArtSi";
}

//______________________________________________________________________________
const char *TArtSi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtSi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtSi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtSi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtBigRIPSParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtBigRIPSParameters::Class_Name()
{
   return "TArtBigRIPSParameters";
}

//______________________________________________________________________________
const char *TArtBigRIPSParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBigRIPSParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtBigRIPSParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBigRIPSParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtBigRIPSParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBigRIPSParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtBigRIPSParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBigRIPSParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRIPS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRIPS::Class_Name()
{
   return "TArtRIPS";
}

//______________________________________________________________________________
const char *TArtRIPS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRIPS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRIPS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRIPS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRIPS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRIPS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRIPS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRIPS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtICPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtICPara::Class_Name()
{
   return "TArtICPara";
}

//______________________________________________________________________________
const char *TArtICPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtICPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtICPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtICPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtICPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtICPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtICPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtICPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibIC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibIC::Class_Name()
{
   return "TArtCalibIC";
}

//______________________________________________________________________________
const char *TArtCalibIC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibIC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibIC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibIC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibIC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibIC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibIC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibIC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtSiPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtSiPara::Class_Name()
{
   return "TArtSiPara";
}

//______________________________________________________________________________
const char *TArtSiPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSiPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtSiPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSiPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtSiPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSiPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtSiPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSiPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibFocalPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibFocalPlane::Class_Name()
{
   return "TArtCalibFocalPlane";
}

//______________________________________________________________________________
const char *TArtCalibFocalPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFocalPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibFocalPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFocalPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibFocalPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFocalPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibFocalPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibFocalPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtPlastic::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtPlastic::Class_Name()
{
   return "TArtPlastic";
}

//______________________________________________________________________________
const char *TArtPlastic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPlastic*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtPlastic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPlastic*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtPlastic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPlastic*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtPlastic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPlastic*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtPlasticPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtPlasticPara::Class_Name()
{
   return "TArtPlasticPara";
}

//______________________________________________________________________________
const char *TArtPlasticPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPlasticPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtPlasticPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtPlasticPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtPlasticPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPlasticPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtPlasticPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtPlasticPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibCoin::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibCoin::Class_Name()
{
   return "TArtCalibCoin";
}

//______________________________________________________________________________
const char *TArtCalibCoin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCoin*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibCoin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCoin*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibCoin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCoin*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibCoin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCoin*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibPlastic::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibPlastic::Class_Name()
{
   return "TArtCalibPlastic";
}

//______________________________________________________________________________
const char *TArtCalibPlastic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPlastic*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibPlastic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPlastic*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibPlastic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPlastic*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibPlastic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibPlastic*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTOF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTOF::Class_Name()
{
   return "TArtTOF";
}

//______________________________________________________________________________
const char *TArtTOF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTOF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTOF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTOF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTOF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTOF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTOF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTOF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRecoBeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRecoBeam::Class_Name()
{
   return "TArtRecoBeam";
}

//______________________________________________________________________________
const char *TArtRecoBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoBeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRecoBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoBeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRecoBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoBeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRecoBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoBeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRIPSPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRIPSPara::Class_Name()
{
   return "TArtRIPSPara";
}

//______________________________________________________________________________
const char *TArtRIPSPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRIPSPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRIPSPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRIPSPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRIPSPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRIPSPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRIPSPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRIPSPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTKE::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTKE::Class_Name()
{
   return "TArtTKE";
}

//______________________________________________________________________________
const char *TArtTKE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTKE*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTKE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTKE*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTKE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTKE*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTKE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTKE*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTKEPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTKEPara::Class_Name()
{
   return "TArtTKEPara";
}

//______________________________________________________________________________
const char *TArtTKEPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTKEPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTKEPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTKEPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTKEPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTKEPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTKEPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTKEPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRecoTOF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRecoTOF::Class_Name()
{
   return "TArtRecoTOF";
}

//______________________________________________________________________________
const char *TArtRecoTOF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoTOF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRecoTOF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoTOF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRecoTOF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoTOF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRecoTOF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoTOF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtGe::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtGe::Class_Name()
{
   return "TArtGe";
}

//______________________________________________________________________________
const char *TArtGe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtGe*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtGe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtGe*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtGe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtGe*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtGe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtGe*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtBeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtBeam::Class_Name()
{
   return "TArtBeam";
}

//______________________________________________________________________________
const char *TArtBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRecoPID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRecoPID::Class_Name()
{
   return "TArtRecoPID";
}

//______________________________________________________________________________
const char *TArtRecoPID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoPID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRecoPID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoPID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRecoPID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoPID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRecoPID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRecoPID*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtTOFPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtTOFPara::Class_Name()
{
   return "TArtTOFPara";
}

//______________________________________________________________________________
const char *TArtTOFPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTOFPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtTOFPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtTOFPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtTOFPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTOFPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtTOFPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtTOFPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtBeamPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtBeamPara::Class_Name()
{
   return "TArtBeamPara";
}

//______________________________________________________________________________
const char *TArtBeamPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBeamPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtBeamPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtBeamPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtBeamPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBeamPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtBeamPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtBeamPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtGePara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtGePara::Class_Name()
{
   return "TArtGePara";
}

//______________________________________________________________________________
const char *TArtGePara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtGePara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtGePara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtGePara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtGePara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtGePara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtGePara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtGePara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtCalibTKE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibTKE.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibTKE::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibTKE::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibTKE(void *p) {
      return  p ? new(p) ::TArtCalibTKE : new ::TArtCalibTKE;
   }
   static void *newArray_TArtCalibTKE(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibTKE[nElements] : new ::TArtCalibTKE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibTKE(void *p) {
      delete ((::TArtCalibTKE*)p);
   }
   static void deleteArray_TArtCalibTKE(void *p) {
      delete [] ((::TArtCalibTKE*)p);
   }
   static void destruct_TArtCalibTKE(void *p) {
      typedef ::TArtCalibTKE current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibTKE

//______________________________________________________________________________
void TArtIC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtIC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtIC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtIC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtIC(void *p) {
      return  p ? new(p) ::TArtIC : new ::TArtIC;
   }
   static void *newArray_TArtIC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtIC[nElements] : new ::TArtIC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtIC(void *p) {
      delete ((::TArtIC*)p);
   }
   static void deleteArray_TArtIC(void *p) {
      delete [] ((::TArtIC*)p);
   }
   static void destruct_TArtIC(void *p) {
      typedef ::TArtIC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtIC

//______________________________________________________________________________
void TArtFocalPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtFocalPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtFocalPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtFocalPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtFocalPlane(void *p) {
      return  p ? new(p) ::TArtFocalPlane : new ::TArtFocalPlane;
   }
   static void *newArray_TArtFocalPlane(Long_t nElements, void *p) {
      return p ? new(p) ::TArtFocalPlane[nElements] : new ::TArtFocalPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtFocalPlane(void *p) {
      delete ((::TArtFocalPlane*)p);
   }
   static void deleteArray_TArtFocalPlane(void *p) {
      delete [] ((::TArtFocalPlane*)p);
   }
   static void destruct_TArtFocalPlane(void *p) {
      typedef ::TArtFocalPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtFocalPlane

//______________________________________________________________________________
void TArtCalibSi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSi(void *p) {
      return  p ? new(p) ::TArtCalibSi : new ::TArtCalibSi;
   }
   static void *newArray_TArtCalibSi(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSi[nElements] : new ::TArtCalibSi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSi(void *p) {
      delete ((::TArtCalibSi*)p);
   }
   static void deleteArray_TArtCalibSi(void *p) {
      delete [] ((::TArtCalibSi*)p);
   }
   static void destruct_TArtCalibSi(void *p) {
      typedef ::TArtCalibSi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSi

//______________________________________________________________________________
void TArtRecoRIPS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRecoRIPS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRecoRIPS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRecoRIPS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRecoRIPS(void *p) {
      return  p ? new(p) ::TArtRecoRIPS : new ::TArtRecoRIPS;
   }
   static void *newArray_TArtRecoRIPS(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRecoRIPS[nElements] : new ::TArtRecoRIPS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRecoRIPS(void *p) {
      delete ((::TArtRecoRIPS*)p);
   }
   static void deleteArray_TArtRecoRIPS(void *p) {
      delete [] ((::TArtRecoRIPS*)p);
   }
   static void destruct_TArtRecoRIPS(void *p) {
      typedef ::TArtRecoRIPS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRecoRIPS

//______________________________________________________________________________
void TArtCalibPID::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibPID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibPID::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibPID::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibPID(void *p) {
      return  p ? new(p) ::TArtCalibPID : new ::TArtCalibPID;
   }
   static void *newArray_TArtCalibPID(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibPID[nElements] : new ::TArtCalibPID[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibPID(void *p) {
      delete ((::TArtCalibPID*)p);
   }
   static void deleteArray_TArtCalibPID(void *p) {
      delete [] ((::TArtCalibPID*)p);
   }
   static void destruct_TArtCalibPID(void *p) {
      typedef ::TArtCalibPID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibPID

//______________________________________________________________________________
void TArtPPAC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtPPAC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtPPAC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtPPAC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtPPAC(void *p) {
      return  p ? new(p) ::TArtPPAC : new ::TArtPPAC;
   }
   static void *newArray_TArtPPAC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtPPAC[nElements] : new ::TArtPPAC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtPPAC(void *p) {
      delete ((::TArtPPAC*)p);
   }
   static void deleteArray_TArtPPAC(void *p) {
      delete [] ((::TArtPPAC*)p);
   }
   static void destruct_TArtPPAC(void *p) {
      typedef ::TArtPPAC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtPPAC

//______________________________________________________________________________
void TArtPPACPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtPPACPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtPPACPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtPPACPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtPPACPara(void *p) {
      return  p ? new(p) ::TArtPPACPara : new ::TArtPPACPara;
   }
   static void *newArray_TArtPPACPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtPPACPara[nElements] : new ::TArtPPACPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtPPACPara(void *p) {
      delete ((::TArtPPACPara*)p);
   }
   static void deleteArray_TArtPPACPara(void *p) {
      delete [] ((::TArtPPACPara*)p);
   }
   static void destruct_TArtPPACPara(void *p) {
      typedef ::TArtPPACPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtPPACPara

//______________________________________________________________________________
void TArtFocalPlanePara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtFocalPlanePara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtFocalPlanePara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtFocalPlanePara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtFocalPlanePara(void *p) {
      return  p ? new(p) ::TArtFocalPlanePara : new ::TArtFocalPlanePara;
   }
   static void *newArray_TArtFocalPlanePara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtFocalPlanePara[nElements] : new ::TArtFocalPlanePara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtFocalPlanePara(void *p) {
      delete ((::TArtFocalPlanePara*)p);
   }
   static void deleteArray_TArtFocalPlanePara(void *p) {
      delete [] ((::TArtFocalPlanePara*)p);
   }
   static void destruct_TArtFocalPlanePara(void *p) {
      typedef ::TArtFocalPlanePara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtFocalPlanePara

//______________________________________________________________________________
void TArtCalibGe::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibGe.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibGe::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibGe::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibGe(void *p) {
      return  p ? new(p) ::TArtCalibGe : new ::TArtCalibGe;
   }
   static void *newArray_TArtCalibGe(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibGe[nElements] : new ::TArtCalibGe[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibGe(void *p) {
      delete ((::TArtCalibGe*)p);
   }
   static void deleteArray_TArtCalibGe(void *p) {
      delete [] ((::TArtCalibGe*)p);
   }
   static void destruct_TArtCalibGe(void *p) {
      typedef ::TArtCalibGe current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibGe

//______________________________________________________________________________
void TArtCalibPPAC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibPPAC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibPPAC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibPPAC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibPPAC(void *p) {
      return  p ? new(p) ::TArtCalibPPAC : new ::TArtCalibPPAC;
   }
   static void *newArray_TArtCalibPPAC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibPPAC[nElements] : new ::TArtCalibPPAC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibPPAC(void *p) {
      delete ((::TArtCalibPPAC*)p);
   }
   static void deleteArray_TArtCalibPPAC(void *p) {
      delete [] ((::TArtCalibPPAC*)p);
   }
   static void destruct_TArtCalibPPAC(void *p) {
      typedef ::TArtCalibPPAC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibPPAC

//______________________________________________________________________________
void TArtSi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtSi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtSi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtSi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtSi(void *p) {
      return  p ? new(p) ::TArtSi : new ::TArtSi;
   }
   static void *newArray_TArtSi(Long_t nElements, void *p) {
      return p ? new(p) ::TArtSi[nElements] : new ::TArtSi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtSi(void *p) {
      delete ((::TArtSi*)p);
   }
   static void deleteArray_TArtSi(void *p) {
      delete [] ((::TArtSi*)p);
   }
   static void destruct_TArtSi(void *p) {
      typedef ::TArtSi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtSi

//______________________________________________________________________________
void TArtBigRIPSParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtBigRIPSParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtBigRIPSParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtBigRIPSParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtBigRIPSParameters(void *p) {
      return  p ? new(p) ::TArtBigRIPSParameters : new ::TArtBigRIPSParameters;
   }
   static void *newArray_TArtBigRIPSParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtBigRIPSParameters[nElements] : new ::TArtBigRIPSParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtBigRIPSParameters(void *p) {
      delete ((::TArtBigRIPSParameters*)p);
   }
   static void deleteArray_TArtBigRIPSParameters(void *p) {
      delete [] ((::TArtBigRIPSParameters*)p);
   }
   static void destruct_TArtBigRIPSParameters(void *p) {
      typedef ::TArtBigRIPSParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtBigRIPSParameters

//______________________________________________________________________________
void TArtRIPS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRIPS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRIPS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRIPS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRIPS(void *p) {
      return  p ? new(p) ::TArtRIPS : new ::TArtRIPS;
   }
   static void *newArray_TArtRIPS(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRIPS[nElements] : new ::TArtRIPS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRIPS(void *p) {
      delete ((::TArtRIPS*)p);
   }
   static void deleteArray_TArtRIPS(void *p) {
      delete [] ((::TArtRIPS*)p);
   }
   static void destruct_TArtRIPS(void *p) {
      typedef ::TArtRIPS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRIPS

//______________________________________________________________________________
void TArtICPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtICPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtICPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtICPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtICPara(void *p) {
      return  p ? new(p) ::TArtICPara : new ::TArtICPara;
   }
   static void *newArray_TArtICPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtICPara[nElements] : new ::TArtICPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtICPara(void *p) {
      delete ((::TArtICPara*)p);
   }
   static void deleteArray_TArtICPara(void *p) {
      delete [] ((::TArtICPara*)p);
   }
   static void destruct_TArtICPara(void *p) {
      typedef ::TArtICPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtICPara

//______________________________________________________________________________
void TArtCalibIC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibIC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibIC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibIC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibIC(void *p) {
      return  p ? new(p) ::TArtCalibIC : new ::TArtCalibIC;
   }
   static void *newArray_TArtCalibIC(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibIC[nElements] : new ::TArtCalibIC[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibIC(void *p) {
      delete ((::TArtCalibIC*)p);
   }
   static void deleteArray_TArtCalibIC(void *p) {
      delete [] ((::TArtCalibIC*)p);
   }
   static void destruct_TArtCalibIC(void *p) {
      typedef ::TArtCalibIC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibIC

//______________________________________________________________________________
void TArtSiPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtSiPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtSiPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtSiPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtSiPara(void *p) {
      return  p ? new(p) ::TArtSiPara : new ::TArtSiPara;
   }
   static void *newArray_TArtSiPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtSiPara[nElements] : new ::TArtSiPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtSiPara(void *p) {
      delete ((::TArtSiPara*)p);
   }
   static void deleteArray_TArtSiPara(void *p) {
      delete [] ((::TArtSiPara*)p);
   }
   static void destruct_TArtSiPara(void *p) {
      typedef ::TArtSiPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtSiPara

//______________________________________________________________________________
void TArtCalibFocalPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibFocalPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibFocalPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibFocalPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibFocalPlane(void *p) {
      return  p ? new(p) ::TArtCalibFocalPlane : new ::TArtCalibFocalPlane;
   }
   static void *newArray_TArtCalibFocalPlane(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibFocalPlane[nElements] : new ::TArtCalibFocalPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibFocalPlane(void *p) {
      delete ((::TArtCalibFocalPlane*)p);
   }
   static void deleteArray_TArtCalibFocalPlane(void *p) {
      delete [] ((::TArtCalibFocalPlane*)p);
   }
   static void destruct_TArtCalibFocalPlane(void *p) {
      typedef ::TArtCalibFocalPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibFocalPlane

//______________________________________________________________________________
void TArtPlastic::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtPlastic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtPlastic::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtPlastic::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtPlastic(void *p) {
      return  p ? new(p) ::TArtPlastic : new ::TArtPlastic;
   }
   static void *newArray_TArtPlastic(Long_t nElements, void *p) {
      return p ? new(p) ::TArtPlastic[nElements] : new ::TArtPlastic[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtPlastic(void *p) {
      delete ((::TArtPlastic*)p);
   }
   static void deleteArray_TArtPlastic(void *p) {
      delete [] ((::TArtPlastic*)p);
   }
   static void destruct_TArtPlastic(void *p) {
      typedef ::TArtPlastic current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtPlastic

//______________________________________________________________________________
void TArtPlasticPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtPlasticPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtPlasticPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtPlasticPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtPlasticPara(void *p) {
      return  p ? new(p) ::TArtPlasticPara : new ::TArtPlasticPara;
   }
   static void *newArray_TArtPlasticPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtPlasticPara[nElements] : new ::TArtPlasticPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtPlasticPara(void *p) {
      delete ((::TArtPlasticPara*)p);
   }
   static void deleteArray_TArtPlasticPara(void *p) {
      delete [] ((::TArtPlasticPara*)p);
   }
   static void destruct_TArtPlasticPara(void *p) {
      typedef ::TArtPlasticPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtPlasticPara

//______________________________________________________________________________
void TArtCalibCoin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibCoin.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibCoin::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibCoin::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibCoin(void *p) {
      return  p ? new(p) ::TArtCalibCoin : new ::TArtCalibCoin;
   }
   static void *newArray_TArtCalibCoin(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibCoin[nElements] : new ::TArtCalibCoin[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibCoin(void *p) {
      delete ((::TArtCalibCoin*)p);
   }
   static void deleteArray_TArtCalibCoin(void *p) {
      delete [] ((::TArtCalibCoin*)p);
   }
   static void destruct_TArtCalibCoin(void *p) {
      typedef ::TArtCalibCoin current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibCoin

//______________________________________________________________________________
void TArtCalibPlastic::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibPlastic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibPlastic::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibPlastic::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibPlastic(void *p) {
      return  p ? new(p) ::TArtCalibPlastic : new ::TArtCalibPlastic;
   }
   static void *newArray_TArtCalibPlastic(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibPlastic[nElements] : new ::TArtCalibPlastic[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibPlastic(void *p) {
      delete ((::TArtCalibPlastic*)p);
   }
   static void deleteArray_TArtCalibPlastic(void *p) {
      delete [] ((::TArtCalibPlastic*)p);
   }
   static void destruct_TArtCalibPlastic(void *p) {
      typedef ::TArtCalibPlastic current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibPlastic

//______________________________________________________________________________
void TArtTOF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTOF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTOF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTOF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTOF(void *p) {
      return  p ? new(p) ::TArtTOF : new ::TArtTOF;
   }
   static void *newArray_TArtTOF(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTOF[nElements] : new ::TArtTOF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTOF(void *p) {
      delete ((::TArtTOF*)p);
   }
   static void deleteArray_TArtTOF(void *p) {
      delete [] ((::TArtTOF*)p);
   }
   static void destruct_TArtTOF(void *p) {
      typedef ::TArtTOF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTOF

//______________________________________________________________________________
void TArtRecoBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRecoBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRecoBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRecoBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRecoBeam(void *p) {
      return  p ? new(p) ::TArtRecoBeam : new ::TArtRecoBeam;
   }
   static void *newArray_TArtRecoBeam(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRecoBeam[nElements] : new ::TArtRecoBeam[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRecoBeam(void *p) {
      delete ((::TArtRecoBeam*)p);
   }
   static void deleteArray_TArtRecoBeam(void *p) {
      delete [] ((::TArtRecoBeam*)p);
   }
   static void destruct_TArtRecoBeam(void *p) {
      typedef ::TArtRecoBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRecoBeam

//______________________________________________________________________________
void TArtRIPSPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRIPSPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRIPSPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRIPSPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRIPSPara(void *p) {
      return  p ? new(p) ::TArtRIPSPara : new ::TArtRIPSPara;
   }
   static void *newArray_TArtRIPSPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRIPSPara[nElements] : new ::TArtRIPSPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRIPSPara(void *p) {
      delete ((::TArtRIPSPara*)p);
   }
   static void deleteArray_TArtRIPSPara(void *p) {
      delete [] ((::TArtRIPSPara*)p);
   }
   static void destruct_TArtRIPSPara(void *p) {
      typedef ::TArtRIPSPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRIPSPara

//______________________________________________________________________________
void TArtTKE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTKE.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTKE::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTKE::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTKE(void *p) {
      return  p ? new(p) ::TArtTKE : new ::TArtTKE;
   }
   static void *newArray_TArtTKE(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTKE[nElements] : new ::TArtTKE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTKE(void *p) {
      delete ((::TArtTKE*)p);
   }
   static void deleteArray_TArtTKE(void *p) {
      delete [] ((::TArtTKE*)p);
   }
   static void destruct_TArtTKE(void *p) {
      typedef ::TArtTKE current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTKE

//______________________________________________________________________________
void TArtTKEPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTKEPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTKEPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTKEPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTKEPara(void *p) {
      return  p ? new(p) ::TArtTKEPara : new ::TArtTKEPara;
   }
   static void *newArray_TArtTKEPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTKEPara[nElements] : new ::TArtTKEPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTKEPara(void *p) {
      delete ((::TArtTKEPara*)p);
   }
   static void deleteArray_TArtTKEPara(void *p) {
      delete [] ((::TArtTKEPara*)p);
   }
   static void destruct_TArtTKEPara(void *p) {
      typedef ::TArtTKEPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTKEPara

//______________________________________________________________________________
void TArtRecoTOF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRecoTOF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRecoTOF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRecoTOF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRecoTOF(void *p) {
      return  p ? new(p) ::TArtRecoTOF : new ::TArtRecoTOF;
   }
   static void *newArray_TArtRecoTOF(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRecoTOF[nElements] : new ::TArtRecoTOF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRecoTOF(void *p) {
      delete ((::TArtRecoTOF*)p);
   }
   static void deleteArray_TArtRecoTOF(void *p) {
      delete [] ((::TArtRecoTOF*)p);
   }
   static void destruct_TArtRecoTOF(void *p) {
      typedef ::TArtRecoTOF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRecoTOF

//______________________________________________________________________________
void TArtGe::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtGe.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtGe::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtGe::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtGe(void *p) {
      return  p ? new(p) ::TArtGe : new ::TArtGe;
   }
   static void *newArray_TArtGe(Long_t nElements, void *p) {
      return p ? new(p) ::TArtGe[nElements] : new ::TArtGe[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtGe(void *p) {
      delete ((::TArtGe*)p);
   }
   static void deleteArray_TArtGe(void *p) {
      delete [] ((::TArtGe*)p);
   }
   static void destruct_TArtGe(void *p) {
      typedef ::TArtGe current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtGe

//______________________________________________________________________________
void TArtBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtBeam(void *p) {
      return  p ? new(p) ::TArtBeam : new ::TArtBeam;
   }
   static void *newArray_TArtBeam(Long_t nElements, void *p) {
      return p ? new(p) ::TArtBeam[nElements] : new ::TArtBeam[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtBeam(void *p) {
      delete ((::TArtBeam*)p);
   }
   static void deleteArray_TArtBeam(void *p) {
      delete [] ((::TArtBeam*)p);
   }
   static void destruct_TArtBeam(void *p) {
      typedef ::TArtBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtBeam

//______________________________________________________________________________
void TArtRecoPID::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRecoPID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRecoPID::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRecoPID::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRecoPID(void *p) {
      return  p ? new(p) ::TArtRecoPID : new ::TArtRecoPID;
   }
   static void *newArray_TArtRecoPID(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRecoPID[nElements] : new ::TArtRecoPID[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRecoPID(void *p) {
      delete ((::TArtRecoPID*)p);
   }
   static void deleteArray_TArtRecoPID(void *p) {
      delete [] ((::TArtRecoPID*)p);
   }
   static void destruct_TArtRecoPID(void *p) {
      typedef ::TArtRecoPID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtRecoPID

//______________________________________________________________________________
void TArtTOFPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtTOFPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtTOFPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtTOFPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtTOFPara(void *p) {
      return  p ? new(p) ::TArtTOFPara : new ::TArtTOFPara;
   }
   static void *newArray_TArtTOFPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtTOFPara[nElements] : new ::TArtTOFPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtTOFPara(void *p) {
      delete ((::TArtTOFPara*)p);
   }
   static void deleteArray_TArtTOFPara(void *p) {
      delete [] ((::TArtTOFPara*)p);
   }
   static void destruct_TArtTOFPara(void *p) {
      typedef ::TArtTOFPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtTOFPara

//______________________________________________________________________________
void TArtBeamPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtBeamPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtBeamPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtBeamPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtBeamPara(void *p) {
      return  p ? new(p) ::TArtBeamPara : new ::TArtBeamPara;
   }
   static void *newArray_TArtBeamPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtBeamPara[nElements] : new ::TArtBeamPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtBeamPara(void *p) {
      delete ((::TArtBeamPara*)p);
   }
   static void deleteArray_TArtBeamPara(void *p) {
      delete [] ((::TArtBeamPara*)p);
   }
   static void destruct_TArtBeamPara(void *p) {
      typedef ::TArtBeamPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtBeamPara

//______________________________________________________________________________
void TArtGePara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtGePara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtGePara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtGePara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtGePara(void *p) {
      return  p ? new(p) ::TArtGePara : new ::TArtGePara;
   }
   static void *newArray_TArtGePara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtGePara[nElements] : new ::TArtGePara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtGePara(void *p) {
      delete ((::TArtGePara*)p);
   }
   static void deleteArray_TArtGePara(void *p) {
      delete [] ((::TArtGePara*)p);
   }
   static void destruct_TArtGePara(void *p) {
      typedef ::TArtGePara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtGePara

namespace ROOT {
   static TClass *vectorlEvectorlETArtPPACmUgRmUgR_Dictionary();
   static void vectorlEvectorlETArtPPACmUgRmUgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETArtPPACmUgRmUgR(void *p = 0);
   static void *newArray_vectorlEvectorlETArtPPACmUgRmUgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETArtPPACmUgRmUgR(void *p);
   static void deleteArray_vectorlEvectorlETArtPPACmUgRmUgR(void *p);
   static void destruct_vectorlEvectorlETArtPPACmUgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TArtPPAC*>*>*)
   {
      vector<vector<TArtPPAC*>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TArtPPAC*>*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TArtPPAC*>*>", -2, "vector", 339,
                  typeid(vector<vector<TArtPPAC*>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETArtPPACmUgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TArtPPAC*>*>) );
      instance.SetNew(&new_vectorlEvectorlETArtPPACmUgRmUgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETArtPPACmUgRmUgR);
      instance.SetDelete(&delete_vectorlEvectorlETArtPPACmUgRmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETArtPPACmUgRmUgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETArtPPACmUgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TArtPPAC*>*> >()));

      ::ROOT::AddClassAlternate("vector<vector<TArtPPAC*>*>","std::vector<std::vector<TArtPPAC*, std::allocator<TArtPPAC*> >*, std::allocator<std::vector<TArtPPAC*, std::allocator<TArtPPAC*> >*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TArtPPAC*>*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETArtPPACmUgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TArtPPAC*>*>*)0x0)->GetClass();
      vectorlEvectorlETArtPPACmUgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETArtPPACmUgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETArtPPACmUgRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TArtPPAC*>*> : new vector<vector<TArtPPAC*>*>;
   }
   static void *newArray_vectorlEvectorlETArtPPACmUgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TArtPPAC*>*>[nElements] : new vector<vector<TArtPPAC*>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETArtPPACmUgRmUgR(void *p) {
      delete ((vector<vector<TArtPPAC*>*>*)p);
   }
   static void deleteArray_vectorlEvectorlETArtPPACmUgRmUgR(void *p) {
      delete [] ((vector<vector<TArtPPAC*>*>*)p);
   }
   static void destruct_vectorlEvectorlETArtPPACmUgRmUgR(void *p) {
      typedef vector<vector<TArtPPAC*>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TArtPPAC*>*>

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
   static TClass *vectorlETArtTOFmUgR_Dictionary();
   static void vectorlETArtTOFmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtTOFmUgR(void *p = 0);
   static void *newArray_vectorlETArtTOFmUgR(Long_t size, void *p);
   static void delete_vectorlETArtTOFmUgR(void *p);
   static void deleteArray_vectorlETArtTOFmUgR(void *p);
   static void destruct_vectorlETArtTOFmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtTOF*>*)
   {
      vector<TArtTOF*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtTOF*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtTOF*>", -2, "vector", 339,
                  typeid(vector<TArtTOF*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtTOFmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtTOF*>) );
      instance.SetNew(&new_vectorlETArtTOFmUgR);
      instance.SetNewArray(&newArray_vectorlETArtTOFmUgR);
      instance.SetDelete(&delete_vectorlETArtTOFmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtTOFmUgR);
      instance.SetDestructor(&destruct_vectorlETArtTOFmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtTOF*> >()));

      ::ROOT::AddClassAlternate("vector<TArtTOF*>","std::vector<TArtTOF*, std::allocator<TArtTOF*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtTOF*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtTOFmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtTOF*>*)0x0)->GetClass();
      vectorlETArtTOFmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtTOFmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtTOFmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtTOF*> : new vector<TArtTOF*>;
   }
   static void *newArray_vectorlETArtTOFmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtTOF*>[nElements] : new vector<TArtTOF*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtTOFmUgR(void *p) {
      delete ((vector<TArtTOF*>*)p);
   }
   static void deleteArray_vectorlETArtTOFmUgR(void *p) {
      delete [] ((vector<TArtTOF*>*)p);
   }
   static void destruct_vectorlETArtTOFmUgR(void *p) {
      typedef vector<TArtTOF*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtTOF*>

namespace ROOT {
   static TClass *vectorlETArtTKEParamUgR_Dictionary();
   static void vectorlETArtTKEParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtTKEParamUgR(void *p = 0);
   static void *newArray_vectorlETArtTKEParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtTKEParamUgR(void *p);
   static void deleteArray_vectorlETArtTKEParamUgR(void *p);
   static void destruct_vectorlETArtTKEParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtTKEPara*>*)
   {
      vector<TArtTKEPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtTKEPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtTKEPara*>", -2, "vector", 339,
                  typeid(vector<TArtTKEPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtTKEParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtTKEPara*>) );
      instance.SetNew(&new_vectorlETArtTKEParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtTKEParamUgR);
      instance.SetDelete(&delete_vectorlETArtTKEParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtTKEParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtTKEParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtTKEPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtTKEPara*>","std::vector<TArtTKEPara*, std::allocator<TArtTKEPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtTKEPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtTKEParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtTKEPara*>*)0x0)->GetClass();
      vectorlETArtTKEParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtTKEParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtTKEParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtTKEPara*> : new vector<TArtTKEPara*>;
   }
   static void *newArray_vectorlETArtTKEParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtTKEPara*>[nElements] : new vector<TArtTKEPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtTKEParamUgR(void *p) {
      delete ((vector<TArtTKEPara*>*)p);
   }
   static void deleteArray_vectorlETArtTKEParamUgR(void *p) {
      delete [] ((vector<TArtTKEPara*>*)p);
   }
   static void destruct_vectorlETArtTKEParamUgR(void *p) {
      typedef vector<TArtTKEPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtTKEPara*>

namespace ROOT {
   static TClass *vectorlETArtSiParamUgR_Dictionary();
   static void vectorlETArtSiParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtSiParamUgR(void *p = 0);
   static void *newArray_vectorlETArtSiParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtSiParamUgR(void *p);
   static void deleteArray_vectorlETArtSiParamUgR(void *p);
   static void destruct_vectorlETArtSiParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtSiPara*>*)
   {
      vector<TArtSiPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtSiPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtSiPara*>", -2, "vector", 339,
                  typeid(vector<TArtSiPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtSiParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtSiPara*>) );
      instance.SetNew(&new_vectorlETArtSiParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtSiParamUgR);
      instance.SetDelete(&delete_vectorlETArtSiParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtSiParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtSiParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtSiPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtSiPara*>","std::vector<TArtSiPara*, std::allocator<TArtSiPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtSiPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtSiParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtSiPara*>*)0x0)->GetClass();
      vectorlETArtSiParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtSiParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtSiParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtSiPara*> : new vector<TArtSiPara*>;
   }
   static void *newArray_vectorlETArtSiParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtSiPara*>[nElements] : new vector<TArtSiPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtSiParamUgR(void *p) {
      delete ((vector<TArtSiPara*>*)p);
   }
   static void deleteArray_vectorlETArtSiParamUgR(void *p) {
      delete [] ((vector<TArtSiPara*>*)p);
   }
   static void destruct_vectorlETArtSiParamUgR(void *p) {
      typedef vector<TArtSiPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtSiPara*>

namespace ROOT {
   static TClass *vectorlETArtRIPSmUgR_Dictionary();
   static void vectorlETArtRIPSmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtRIPSmUgR(void *p = 0);
   static void *newArray_vectorlETArtRIPSmUgR(Long_t size, void *p);
   static void delete_vectorlETArtRIPSmUgR(void *p);
   static void deleteArray_vectorlETArtRIPSmUgR(void *p);
   static void destruct_vectorlETArtRIPSmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtRIPS*>*)
   {
      vector<TArtRIPS*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtRIPS*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtRIPS*>", -2, "vector", 339,
                  typeid(vector<TArtRIPS*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtRIPSmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtRIPS*>) );
      instance.SetNew(&new_vectorlETArtRIPSmUgR);
      instance.SetNewArray(&newArray_vectorlETArtRIPSmUgR);
      instance.SetDelete(&delete_vectorlETArtRIPSmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtRIPSmUgR);
      instance.SetDestructor(&destruct_vectorlETArtRIPSmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtRIPS*> >()));

      ::ROOT::AddClassAlternate("vector<TArtRIPS*>","std::vector<TArtRIPS*, std::allocator<TArtRIPS*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtRIPS*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtRIPSmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtRIPS*>*)0x0)->GetClass();
      vectorlETArtRIPSmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtRIPSmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtRIPSmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtRIPS*> : new vector<TArtRIPS*>;
   }
   static void *newArray_vectorlETArtRIPSmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtRIPS*>[nElements] : new vector<TArtRIPS*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtRIPSmUgR(void *p) {
      delete ((vector<TArtRIPS*>*)p);
   }
   static void deleteArray_vectorlETArtRIPSmUgR(void *p) {
      delete [] ((vector<TArtRIPS*>*)p);
   }
   static void destruct_vectorlETArtRIPSmUgR(void *p) {
      typedef vector<TArtRIPS*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtRIPS*>

namespace ROOT {
   static TClass *vectorlETArtPlasticParamUgR_Dictionary();
   static void vectorlETArtPlasticParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtPlasticParamUgR(void *p = 0);
   static void *newArray_vectorlETArtPlasticParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtPlasticParamUgR(void *p);
   static void deleteArray_vectorlETArtPlasticParamUgR(void *p);
   static void destruct_vectorlETArtPlasticParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtPlasticPara*>*)
   {
      vector<TArtPlasticPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtPlasticPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtPlasticPara*>", -2, "vector", 339,
                  typeid(vector<TArtPlasticPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtPlasticParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtPlasticPara*>) );
      instance.SetNew(&new_vectorlETArtPlasticParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtPlasticParamUgR);
      instance.SetDelete(&delete_vectorlETArtPlasticParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtPlasticParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtPlasticParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtPlasticPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtPlasticPara*>","std::vector<TArtPlasticPara*, std::allocator<TArtPlasticPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtPlasticPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtPlasticParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtPlasticPara*>*)0x0)->GetClass();
      vectorlETArtPlasticParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtPlasticParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtPlasticParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtPlasticPara*> : new vector<TArtPlasticPara*>;
   }
   static void *newArray_vectorlETArtPlasticParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtPlasticPara*>[nElements] : new vector<TArtPlasticPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtPlasticParamUgR(void *p) {
      delete ((vector<TArtPlasticPara*>*)p);
   }
   static void deleteArray_vectorlETArtPlasticParamUgR(void *p) {
      delete [] ((vector<TArtPlasticPara*>*)p);
   }
   static void destruct_vectorlETArtPlasticParamUgR(void *p) {
      typedef vector<TArtPlasticPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtPlasticPara*>

namespace ROOT {
   static TClass *vectorlETArtPlasticmUgR_Dictionary();
   static void vectorlETArtPlasticmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtPlasticmUgR(void *p = 0);
   static void *newArray_vectorlETArtPlasticmUgR(Long_t size, void *p);
   static void delete_vectorlETArtPlasticmUgR(void *p);
   static void deleteArray_vectorlETArtPlasticmUgR(void *p);
   static void destruct_vectorlETArtPlasticmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtPlastic*>*)
   {
      vector<TArtPlastic*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtPlastic*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtPlastic*>", -2, "vector", 339,
                  typeid(vector<TArtPlastic*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtPlasticmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtPlastic*>) );
      instance.SetNew(&new_vectorlETArtPlasticmUgR);
      instance.SetNewArray(&newArray_vectorlETArtPlasticmUgR);
      instance.SetDelete(&delete_vectorlETArtPlasticmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtPlasticmUgR);
      instance.SetDestructor(&destruct_vectorlETArtPlasticmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtPlastic*> >()));

      ::ROOT::AddClassAlternate("vector<TArtPlastic*>","std::vector<TArtPlastic*, std::allocator<TArtPlastic*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtPlastic*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtPlasticmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtPlastic*>*)0x0)->GetClass();
      vectorlETArtPlasticmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtPlasticmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtPlasticmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtPlastic*> : new vector<TArtPlastic*>;
   }
   static void *newArray_vectorlETArtPlasticmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtPlastic*>[nElements] : new vector<TArtPlastic*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtPlasticmUgR(void *p) {
      delete ((vector<TArtPlastic*>*)p);
   }
   static void deleteArray_vectorlETArtPlasticmUgR(void *p) {
      delete [] ((vector<TArtPlastic*>*)p);
   }
   static void destruct_vectorlETArtPlasticmUgR(void *p) {
      typedef vector<TArtPlastic*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtPlastic*>

namespace ROOT {
   static TClass *vectorlETArtPPACParamUgR_Dictionary();
   static void vectorlETArtPPACParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtPPACParamUgR(void *p = 0);
   static void *newArray_vectorlETArtPPACParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtPPACParamUgR(void *p);
   static void deleteArray_vectorlETArtPPACParamUgR(void *p);
   static void destruct_vectorlETArtPPACParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtPPACPara*>*)
   {
      vector<TArtPPACPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtPPACPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtPPACPara*>", -2, "vector", 339,
                  typeid(vector<TArtPPACPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtPPACParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtPPACPara*>) );
      instance.SetNew(&new_vectorlETArtPPACParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtPPACParamUgR);
      instance.SetDelete(&delete_vectorlETArtPPACParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtPPACParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtPPACParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtPPACPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtPPACPara*>","std::vector<TArtPPACPara*, std::allocator<TArtPPACPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtPPACPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtPPACParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtPPACPara*>*)0x0)->GetClass();
      vectorlETArtPPACParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtPPACParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtPPACParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtPPACPara*> : new vector<TArtPPACPara*>;
   }
   static void *newArray_vectorlETArtPPACParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtPPACPara*>[nElements] : new vector<TArtPPACPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtPPACParamUgR(void *p) {
      delete ((vector<TArtPPACPara*>*)p);
   }
   static void deleteArray_vectorlETArtPPACParamUgR(void *p) {
      delete [] ((vector<TArtPPACPara*>*)p);
   }
   static void destruct_vectorlETArtPPACParamUgR(void *p) {
      typedef vector<TArtPPACPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtPPACPara*>

namespace ROOT {
   static TClass *vectorlETArtICParamUgR_Dictionary();
   static void vectorlETArtICParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtICParamUgR(void *p = 0);
   static void *newArray_vectorlETArtICParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtICParamUgR(void *p);
   static void deleteArray_vectorlETArtICParamUgR(void *p);
   static void destruct_vectorlETArtICParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtICPara*>*)
   {
      vector<TArtICPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtICPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtICPara*>", -2, "vector", 339,
                  typeid(vector<TArtICPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtICParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtICPara*>) );
      instance.SetNew(&new_vectorlETArtICParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtICParamUgR);
      instance.SetDelete(&delete_vectorlETArtICParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtICParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtICParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtICPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtICPara*>","std::vector<TArtICPara*, std::allocator<TArtICPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtICPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtICParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtICPara*>*)0x0)->GetClass();
      vectorlETArtICParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtICParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtICParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtICPara*> : new vector<TArtICPara*>;
   }
   static void *newArray_vectorlETArtICParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtICPara*>[nElements] : new vector<TArtICPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtICParamUgR(void *p) {
      delete ((vector<TArtICPara*>*)p);
   }
   static void deleteArray_vectorlETArtICParamUgR(void *p) {
      delete [] ((vector<TArtICPara*>*)p);
   }
   static void destruct_vectorlETArtICParamUgR(void *p) {
      typedef vector<TArtICPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtICPara*>

namespace ROOT {
   static TClass *vectorlETArtICmUgR_Dictionary();
   static void vectorlETArtICmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtICmUgR(void *p = 0);
   static void *newArray_vectorlETArtICmUgR(Long_t size, void *p);
   static void delete_vectorlETArtICmUgR(void *p);
   static void deleteArray_vectorlETArtICmUgR(void *p);
   static void destruct_vectorlETArtICmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtIC*>*)
   {
      vector<TArtIC*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtIC*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtIC*>", -2, "vector", 339,
                  typeid(vector<TArtIC*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtICmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtIC*>) );
      instance.SetNew(&new_vectorlETArtICmUgR);
      instance.SetNewArray(&newArray_vectorlETArtICmUgR);
      instance.SetDelete(&delete_vectorlETArtICmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtICmUgR);
      instance.SetDestructor(&destruct_vectorlETArtICmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtIC*> >()));

      ::ROOT::AddClassAlternate("vector<TArtIC*>","std::vector<TArtIC*, std::allocator<TArtIC*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtIC*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtICmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtIC*>*)0x0)->GetClass();
      vectorlETArtICmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtICmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtICmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtIC*> : new vector<TArtIC*>;
   }
   static void *newArray_vectorlETArtICmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtIC*>[nElements] : new vector<TArtIC*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtICmUgR(void *p) {
      delete ((vector<TArtIC*>*)p);
   }
   static void deleteArray_vectorlETArtICmUgR(void *p) {
      delete [] ((vector<TArtIC*>*)p);
   }
   static void destruct_vectorlETArtICmUgR(void *p) {
      typedef vector<TArtIC*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtIC*>

namespace ROOT {
   static TClass *vectorlETArtGeParamUgR_Dictionary();
   static void vectorlETArtGeParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtGeParamUgR(void *p = 0);
   static void *newArray_vectorlETArtGeParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtGeParamUgR(void *p);
   static void deleteArray_vectorlETArtGeParamUgR(void *p);
   static void destruct_vectorlETArtGeParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtGePara*>*)
   {
      vector<TArtGePara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtGePara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtGePara*>", -2, "vector", 339,
                  typeid(vector<TArtGePara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtGeParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtGePara*>) );
      instance.SetNew(&new_vectorlETArtGeParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtGeParamUgR);
      instance.SetDelete(&delete_vectorlETArtGeParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtGeParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtGeParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtGePara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtGePara*>","std::vector<TArtGePara*, std::allocator<TArtGePara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtGePara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtGeParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtGePara*>*)0x0)->GetClass();
      vectorlETArtGeParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtGeParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtGeParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtGePara*> : new vector<TArtGePara*>;
   }
   static void *newArray_vectorlETArtGeParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtGePara*>[nElements] : new vector<TArtGePara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtGeParamUgR(void *p) {
      delete ((vector<TArtGePara*>*)p);
   }
   static void deleteArray_vectorlETArtGeParamUgR(void *p) {
      delete [] ((vector<TArtGePara*>*)p);
   }
   static void destruct_vectorlETArtGeParamUgR(void *p) {
      typedef vector<TArtGePara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtGePara*>

namespace ROOT {
   static TClass *vectorlETArtFocalPlanemUgR_Dictionary();
   static void vectorlETArtFocalPlanemUgR_TClassManip(TClass*);
   static void *new_vectorlETArtFocalPlanemUgR(void *p = 0);
   static void *newArray_vectorlETArtFocalPlanemUgR(Long_t size, void *p);
   static void delete_vectorlETArtFocalPlanemUgR(void *p);
   static void deleteArray_vectorlETArtFocalPlanemUgR(void *p);
   static void destruct_vectorlETArtFocalPlanemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtFocalPlane*>*)
   {
      vector<TArtFocalPlane*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtFocalPlane*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtFocalPlane*>", -2, "vector", 339,
                  typeid(vector<TArtFocalPlane*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtFocalPlanemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtFocalPlane*>) );
      instance.SetNew(&new_vectorlETArtFocalPlanemUgR);
      instance.SetNewArray(&newArray_vectorlETArtFocalPlanemUgR);
      instance.SetDelete(&delete_vectorlETArtFocalPlanemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtFocalPlanemUgR);
      instance.SetDestructor(&destruct_vectorlETArtFocalPlanemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtFocalPlane*> >()));

      ::ROOT::AddClassAlternate("vector<TArtFocalPlane*>","std::vector<TArtFocalPlane*, std::allocator<TArtFocalPlane*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtFocalPlane*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtFocalPlanemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtFocalPlane*>*)0x0)->GetClass();
      vectorlETArtFocalPlanemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtFocalPlanemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtFocalPlanemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtFocalPlane*> : new vector<TArtFocalPlane*>;
   }
   static void *newArray_vectorlETArtFocalPlanemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtFocalPlane*>[nElements] : new vector<TArtFocalPlane*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtFocalPlanemUgR(void *p) {
      delete ((vector<TArtFocalPlane*>*)p);
   }
   static void deleteArray_vectorlETArtFocalPlanemUgR(void *p) {
      delete [] ((vector<TArtFocalPlane*>*)p);
   }
   static void destruct_vectorlETArtFocalPlanemUgR(void *p) {
      typedef vector<TArtFocalPlane*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtFocalPlane*>

namespace ROOT {
   static TClass *vectorlETArtBigRIPSParameterscLcLDipolegR_Dictionary();
   static void vectorlETArtBigRIPSParameterscLcLDipolegR_TClassManip(TClass*);
   static void *new_vectorlETArtBigRIPSParameterscLcLDipolegR(void *p = 0);
   static void *newArray_vectorlETArtBigRIPSParameterscLcLDipolegR(Long_t size, void *p);
   static void delete_vectorlETArtBigRIPSParameterscLcLDipolegR(void *p);
   static void deleteArray_vectorlETArtBigRIPSParameterscLcLDipolegR(void *p);
   static void destruct_vectorlETArtBigRIPSParameterscLcLDipolegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtBigRIPSParameters::Dipole>*)
   {
      vector<TArtBigRIPSParameters::Dipole> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtBigRIPSParameters::Dipole>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtBigRIPSParameters::Dipole>", -2, "vector", 339,
                  typeid(vector<TArtBigRIPSParameters::Dipole>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtBigRIPSParameterscLcLDipolegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtBigRIPSParameters::Dipole>) );
      instance.SetNew(&new_vectorlETArtBigRIPSParameterscLcLDipolegR);
      instance.SetNewArray(&newArray_vectorlETArtBigRIPSParameterscLcLDipolegR);
      instance.SetDelete(&delete_vectorlETArtBigRIPSParameterscLcLDipolegR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtBigRIPSParameterscLcLDipolegR);
      instance.SetDestructor(&destruct_vectorlETArtBigRIPSParameterscLcLDipolegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtBigRIPSParameters::Dipole> >()));

      ::ROOT::AddClassAlternate("vector<TArtBigRIPSParameters::Dipole>","std::vector<TArtBigRIPSParameters::Dipole, std::allocator<TArtBigRIPSParameters::Dipole> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtBigRIPSParameters::Dipole>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtBigRIPSParameterscLcLDipolegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtBigRIPSParameters::Dipole>*)0x0)->GetClass();
      vectorlETArtBigRIPSParameterscLcLDipolegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtBigRIPSParameterscLcLDipolegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtBigRIPSParameterscLcLDipolegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtBigRIPSParameters::Dipole> : new vector<TArtBigRIPSParameters::Dipole>;
   }
   static void *newArray_vectorlETArtBigRIPSParameterscLcLDipolegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtBigRIPSParameters::Dipole>[nElements] : new vector<TArtBigRIPSParameters::Dipole>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtBigRIPSParameterscLcLDipolegR(void *p) {
      delete ((vector<TArtBigRIPSParameters::Dipole>*)p);
   }
   static void deleteArray_vectorlETArtBigRIPSParameterscLcLDipolegR(void *p) {
      delete [] ((vector<TArtBigRIPSParameters::Dipole>*)p);
   }
   static void destruct_vectorlETArtBigRIPSParameterscLcLDipolegR(void *p) {
      typedef vector<TArtBigRIPSParameters::Dipole> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtBigRIPSParameters::Dipole>

namespace ROOT {
   static TClass *maplEintcOTArtFocalPlaneParamUgR_Dictionary();
   static void maplEintcOTArtFocalPlaneParamUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtFocalPlaneParamUgR(void *p = 0);
   static void *newArray_maplEintcOTArtFocalPlaneParamUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtFocalPlaneParamUgR(void *p);
   static void deleteArray_maplEintcOTArtFocalPlaneParamUgR(void *p);
   static void destruct_maplEintcOTArtFocalPlaneParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtFocalPlanePara*>*)
   {
      map<int,TArtFocalPlanePara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtFocalPlanePara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtFocalPlanePara*>", -2, "map", 100,
                  typeid(map<int,TArtFocalPlanePara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtFocalPlaneParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtFocalPlanePara*>) );
      instance.SetNew(&new_maplEintcOTArtFocalPlaneParamUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtFocalPlaneParamUgR);
      instance.SetDelete(&delete_maplEintcOTArtFocalPlaneParamUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtFocalPlaneParamUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtFocalPlaneParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtFocalPlanePara*> >()));

      ::ROOT::AddClassAlternate("map<int,TArtFocalPlanePara*>","std::map<int, TArtFocalPlanePara*, std::less<int>, std::allocator<std::pair<int const, TArtFocalPlanePara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TArtFocalPlanePara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtFocalPlaneParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TArtFocalPlanePara*>*)0x0)->GetClass();
      maplEintcOTArtFocalPlaneParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtFocalPlaneParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtFocalPlaneParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtFocalPlanePara*> : new map<int,TArtFocalPlanePara*>;
   }
   static void *newArray_maplEintcOTArtFocalPlaneParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtFocalPlanePara*>[nElements] : new map<int,TArtFocalPlanePara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtFocalPlaneParamUgR(void *p) {
      delete ((map<int,TArtFocalPlanePara*>*)p);
   }
   static void deleteArray_maplEintcOTArtFocalPlaneParamUgR(void *p) {
      delete [] ((map<int,TArtFocalPlanePara*>*)p);
   }
   static void destruct_maplEintcOTArtFocalPlaneParamUgR(void *p) {
      typedef map<int,TArtFocalPlanePara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtFocalPlanePara*>

namespace ROOT {
   static TClass *maplETStringcOTArtPlasticParamUgR_Dictionary();
   static void maplETStringcOTArtPlasticParamUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTArtPlasticParamUgR(void *p = 0);
   static void *newArray_maplETStringcOTArtPlasticParamUgR(Long_t size, void *p);
   static void delete_maplETStringcOTArtPlasticParamUgR(void *p);
   static void deleteArray_maplETStringcOTArtPlasticParamUgR(void *p);
   static void destruct_maplETStringcOTArtPlasticParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TArtPlasticPara*>*)
   {
      map<TString,TArtPlasticPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TArtPlasticPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TArtPlasticPara*>", -2, "map", 100,
                  typeid(map<TString,TArtPlasticPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTArtPlasticParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TArtPlasticPara*>) );
      instance.SetNew(&new_maplETStringcOTArtPlasticParamUgR);
      instance.SetNewArray(&newArray_maplETStringcOTArtPlasticParamUgR);
      instance.SetDelete(&delete_maplETStringcOTArtPlasticParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTArtPlasticParamUgR);
      instance.SetDestructor(&destruct_maplETStringcOTArtPlasticParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TArtPlasticPara*> >()));

      ::ROOT::AddClassAlternate("map<TString,TArtPlasticPara*>","std::map<TString, TArtPlasticPara*, std::less<TString>, std::allocator<std::pair<TString const, TArtPlasticPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TArtPlasticPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTArtPlasticParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TArtPlasticPara*>*)0x0)->GetClass();
      maplETStringcOTArtPlasticParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTArtPlasticParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTArtPlasticParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TArtPlasticPara*> : new map<TString,TArtPlasticPara*>;
   }
   static void *newArray_maplETStringcOTArtPlasticParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TArtPlasticPara*>[nElements] : new map<TString,TArtPlasticPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTArtPlasticParamUgR(void *p) {
      delete ((map<TString,TArtPlasticPara*>*)p);
   }
   static void deleteArray_maplETStringcOTArtPlasticParamUgR(void *p) {
      delete [] ((map<TString,TArtPlasticPara*>*)p);
   }
   static void destruct_maplETStringcOTArtPlasticParamUgR(void *p) {
      typedef map<TString,TArtPlasticPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TArtPlasticPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOintgR_Dictionary();
   static void maplETArtRIDFMapcOintgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOintgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOintgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOintgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOintgR(void *p);
   static void destruct_maplETArtRIDFMapcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,int>*)
   {
      map<TArtRIDFMap,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,int>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,int>) );
      instance.SetNew(&new_maplETArtRIDFMapcOintgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOintgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOintgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOintgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,int> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,int>","std::map<TArtRIDFMap, int, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,int>*)0x0)->GetClass();
      maplETArtRIDFMapcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,int> : new map<TArtRIDFMap,int>;
   }
   static void *newArray_maplETArtRIDFMapcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,int>[nElements] : new map<TArtRIDFMap,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOintgR(void *p) {
      delete ((map<TArtRIDFMap,int>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOintgR(void *p) {
      delete [] ((map<TArtRIDFMap,int>*)p);
   }
   static void destruct_maplETArtRIDFMapcOintgR(void *p) {
      typedef map<TArtRIDFMap,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,int>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtTKEParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtTKEParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtTKEParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtTKEParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtTKEParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtTKEParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtTKEParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtTKEPara*>*)
   {
      map<TArtRIDFMap,TArtTKEPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtTKEPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtTKEPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtTKEPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtTKEParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtTKEPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtTKEParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtTKEParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtTKEParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtTKEParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtTKEParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtTKEPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtTKEPara*>","std::map<TArtRIDFMap, TArtTKEPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtTKEPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtTKEPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtTKEParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtTKEPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtTKEParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtTKEParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtTKEParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtTKEPara*> : new map<TArtRIDFMap,TArtTKEPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtTKEParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtTKEPara*>[nElements] : new map<TArtRIDFMap,TArtTKEPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtTKEParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtTKEPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtTKEParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtTKEPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtTKEParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtTKEPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtTKEPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtSiParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtSiParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtSiParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtSiParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtSiParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtSiParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtSiParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtSiPara*>*)
   {
      map<TArtRIDFMap,TArtSiPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtSiPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtSiPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtSiPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtSiParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtSiPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtSiParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtSiParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtSiParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtSiParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtSiParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtSiPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtSiPara*>","std::map<TArtRIDFMap, TArtSiPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtSiPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtSiPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtSiParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtSiPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtSiParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtSiParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtSiParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtSiPara*> : new map<TArtRIDFMap,TArtSiPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtSiParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtSiPara*>[nElements] : new map<TArtRIDFMap,TArtSiPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtSiParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtSiPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtSiParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtSiPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtSiParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtSiPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtSiPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtPlasticParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtPlasticParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtPlasticParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtPlasticParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtPlasticParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtPlasticParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtPlasticParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtPlasticPara*>*)
   {
      map<TArtRIDFMap,TArtPlasticPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtPlasticPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtPlasticPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtPlasticPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtPlasticParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtPlasticPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtPlasticParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtPlasticParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtPlasticParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtPlasticParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtPlasticParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtPlasticPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtPlasticPara*>","std::map<TArtRIDFMap, TArtPlasticPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtPlasticPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtPlasticPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtPlasticParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtPlasticPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtPlasticParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtPlasticParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtPlasticParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtPlasticPara*> : new map<TArtRIDFMap,TArtPlasticPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtPlasticParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtPlasticPara*>[nElements] : new map<TArtRIDFMap,TArtPlasticPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtPlasticParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtPlasticPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtPlasticParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtPlasticPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtPlasticParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtPlasticPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtPlasticPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtPPACParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtPPACParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtPPACParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtPPACParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtPPACParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtPPACParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtPPACParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtPPACPara*>*)
   {
      map<TArtRIDFMap,TArtPPACPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtPPACPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtPPACPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtPPACPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtPPACParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtPPACPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtPPACParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtPPACParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtPPACParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtPPACParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtPPACParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtPPACPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtPPACPara*>","std::map<TArtRIDFMap, TArtPPACPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtPPACPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtPPACPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtPPACParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtPPACPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtPPACParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtPPACParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtPPACParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtPPACPara*> : new map<TArtRIDFMap,TArtPPACPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtPPACParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtPPACPara*>[nElements] : new map<TArtRIDFMap,TArtPPACPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtPPACParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtPPACPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtPPACParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtPPACPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtPPACParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtPPACPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtPPACPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtICParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtICParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtICParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtICParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtICParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtICParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtICParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtICPara*>*)
   {
      map<TArtRIDFMap,TArtICPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtICPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtICPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtICPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtICParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtICPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtICParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtICParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtICParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtICParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtICParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtICPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtICPara*>","std::map<TArtRIDFMap, TArtICPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtICPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtICPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtICParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtICPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtICParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtICParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtICParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtICPara*> : new map<TArtRIDFMap,TArtICPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtICParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtICPara*>[nElements] : new map<TArtRIDFMap,TArtICPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtICParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtICPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtICParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtICPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtICParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtICPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtICPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtGeParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtGeParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtGeParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtGeParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtGeParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtGeParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtGeParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtGePara*>*)
   {
      map<TArtRIDFMap,TArtGePara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtGePara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtGePara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtGePara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtGeParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtGePara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtGeParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtGeParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtGeParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtGeParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtGeParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtGePara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtGePara*>","std::map<TArtRIDFMap, TArtGePara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtGePara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtGePara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtGeParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtGePara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtGeParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtGeParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtGeParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtGePara*> : new map<TArtRIDFMap,TArtGePara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtGeParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtGePara*>[nElements] : new map<TArtRIDFMap,TArtGePara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtGeParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtGePara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtGeParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtGePara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtGeParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtGePara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtGePara*>

namespace {
  void TriggerDictionaryInitialization_anabrips_dict_Impl() {
    static const char* headers[] = {
"include/TArtCalibTKE.hh",
"include/TArtOptMatrix.hh",
"include/TArtIC.hh",
"include/TArtFocalPlane.hh",
"include/TArtCalibSi.hh",
"include/TArtRecoRIPS.hh",
"include/TArtCalibPID.hh",
"include/TArtPPACPara.hh",
"include/TArtFocalPlanePara.hh",
"include/TArtCalibGe.hh",
"include/TArtCalibPPAC.hh",
"include/TArtSi.hh",
"include/TArtBigRIPSParameters.hh",
"include/TArtRIPS.hh",
"include/TArtICPara.hh",
"include/TArtCalibIC.hh",
"include/TArtSiPara.hh",
"include/TArtCalibFocalPlane.hh",
"include/TArtPlasticPara.hh",
"include/TArtCalibCoin.hh",
"include/TArtCalibPlastic.hh",
"include/TArtTOF.hh",
"include/TArtRecoBeam.hh",
"include/TArtRIPSPara.hh",
"include/TArtTKEPara.hh",
"include/TArtPPAC.hh",
"include/TArtTKE.hh",
"include/TArtRecoTOF.hh",
"include/TArtGe.hh",
"include/TArtBeam.hh",
"include/TArtRecoPID.hh",
"include/TArtBeamPara.hh",
"include/TArtTOFPara.hh",
"include/TArtGePara.hh",
"include/TArtPlastic.hh",
0
    };
    static const char* includePaths[] = {
"/opt/root/include",
"../../Core/include",
"/opt/root/include/",
"/home/quser/src/anaroot/sources/Reconstruction/BigRIPS/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anabrips_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TArtCalibTKE.hh")))  TArtCalibTKE;
class __attribute__((annotate("$clingAutoload$include/TArtIC.hh")))  TArtIC;
class __attribute__((annotate("$clingAutoload$include/TArtFocalPlane.hh")))  TArtFocalPlane;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSi.hh")))  TArtCalibSi;
class __attribute__((annotate("$clingAutoload$include/TArtRecoRIPS.hh")))  TArtRecoRIPS;
class __attribute__((annotate("$clingAutoload$include/TArtCalibPID.hh")))  TArtCalibPID;
class __attribute__((annotate("$clingAutoload$TArtPPAC.hh")))  __attribute__((annotate("$clingAutoload$include/TArtPPACPara.hh")))  TArtPPAC;
class __attribute__((annotate("$clingAutoload$include/TArtPPACPara.hh")))  TArtPPACPara;
class __attribute__((annotate("$clingAutoload$include/TArtFocalPlanePara.hh")))  TArtFocalPlanePara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibGe.hh")))  TArtCalibGe;
class __attribute__((annotate("$clingAutoload$include/TArtCalibPPAC.hh")))  TArtCalibPPAC;
class __attribute__((annotate("$clingAutoload$include/TArtSi.hh")))  TArtSi;
class __attribute__((annotate("$clingAutoload$include/TArtBigRIPSParameters.hh")))  TArtBigRIPSParameters;
class __attribute__((annotate("$clingAutoload$include/TArtRIPS.hh")))  TArtRIPS;
class __attribute__((annotate("$clingAutoload$include/TArtICPara.hh")))  TArtICPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibIC.hh")))  TArtCalibIC;
class __attribute__((annotate("$clingAutoload$include/TArtSiPara.hh")))  TArtSiPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibFocalPlane.hh")))  TArtCalibFocalPlane;
class __attribute__((annotate("$clingAutoload$TArtPlastic.hh")))  __attribute__((annotate("$clingAutoload$include/TArtPlasticPara.hh")))  TArtPlastic;
class __attribute__((annotate("$clingAutoload$include/TArtPlasticPara.hh")))  TArtPlasticPara;
class __attribute__((annotate("$clingAutoload$include/TArtCalibCoin.hh")))  TArtCalibCoin;
class __attribute__((annotate("$clingAutoload$include/TArtCalibPlastic.hh")))  TArtCalibPlastic;
class __attribute__((annotate("$clingAutoload$include/TArtTOF.hh")))  TArtTOF;
class __attribute__((annotate("$clingAutoload$include/TArtRecoBeam.hh")))  TArtRecoBeam;
class __attribute__((annotate("$clingAutoload$include/TArtRIPSPara.hh")))  TArtRIPSPara;
class __attribute__((annotate("$clingAutoload$TArtTKE.hh")))  __attribute__((annotate("$clingAutoload$include/TArtTKEPara.hh")))  TArtTKE;
class __attribute__((annotate("$clingAutoload$include/TArtTKEPara.hh")))  TArtTKEPara;
class __attribute__((annotate("$clingAutoload$include/TArtRecoTOF.hh")))  TArtRecoTOF;
class __attribute__((annotate("$clingAutoload$include/TArtGe.hh")))  TArtGe;
class __attribute__((annotate("$clingAutoload$include/TArtBeam.hh")))  TArtBeam;
class __attribute__((annotate("$clingAutoload$include/TArtRecoPID.hh")))  TArtRecoPID;
class __attribute__((annotate("$clingAutoload$TArtTOFPara.hh")))  __attribute__((annotate("$clingAutoload$include/TArtBeamPara.hh")))  TArtTOFPara;
class __attribute__((annotate("$clingAutoload$include/TArtBeamPara.hh")))  TArtBeamPara;
class __attribute__((annotate("$clingAutoload$include/TArtGePara.hh")))  TArtGePara;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anabrips_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtCalibTKE.hh"
#include "include/TArtOptMatrix.hh"
#include "include/TArtIC.hh"
#include "include/TArtFocalPlane.hh"
#include "include/TArtCalibSi.hh"
#include "include/TArtRecoRIPS.hh"
#include "include/TArtCalibPID.hh"
#include "include/TArtPPACPara.hh"
#include "include/TArtFocalPlanePara.hh"
#include "include/TArtCalibGe.hh"
#include "include/TArtCalibPPAC.hh"
#include "include/TArtSi.hh"
#include "include/TArtBigRIPSParameters.hh"
#include "include/TArtRIPS.hh"
#include "include/TArtICPara.hh"
#include "include/TArtCalibIC.hh"
#include "include/TArtSiPara.hh"
#include "include/TArtCalibFocalPlane.hh"
#include "include/TArtPlasticPara.hh"
#include "include/TArtCalibCoin.hh"
#include "include/TArtCalibPlastic.hh"
#include "include/TArtTOF.hh"
#include "include/TArtRecoBeam.hh"
#include "include/TArtRIPSPara.hh"
#include "include/TArtTKEPara.hh"
#include "include/TArtPPAC.hh"
#include "include/TArtTKE.hh"
#include "include/TArtRecoTOF.hh"
#include "include/TArtGe.hh"
#include "include/TArtBeam.hh"
#include "include/TArtRecoPID.hh"
#include "include/TArtBeamPara.hh"
#include "include/TArtTOFPara.hh"
#include "include/TArtGePara.hh"
#include "include/TArtPlastic.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtBeam", payloadCode, "@",
"TArtBeamPara", payloadCode, "@",
"TArtBigRIPSParameters", payloadCode, "@",
"TArtCalibCoin", payloadCode, "@",
"TArtCalibFocalPlane", payloadCode, "@",
"TArtCalibGe", payloadCode, "@",
"TArtCalibIC", payloadCode, "@",
"TArtCalibPID", payloadCode, "@",
"TArtCalibPPAC", payloadCode, "@",
"TArtCalibPlastic", payloadCode, "@",
"TArtCalibSi", payloadCode, "@",
"TArtCalibTKE", payloadCode, "@",
"TArtFocalPlane", payloadCode, "@",
"TArtFocalPlanePara", payloadCode, "@",
"TArtGe", payloadCode, "@",
"TArtGePara", payloadCode, "@",
"TArtIC", payloadCode, "@",
"TArtICPara", payloadCode, "@",
"TArtPPAC", payloadCode, "@",
"TArtPPACPara", payloadCode, "@",
"TArtPlastic", payloadCode, "@",
"TArtPlasticPara", payloadCode, "@",
"TArtRIPS", payloadCode, "@",
"TArtRIPSPara", payloadCode, "@",
"TArtRecoBeam", payloadCode, "@",
"TArtRecoPID", payloadCode, "@",
"TArtRecoRIPS", payloadCode, "@",
"TArtRecoTOF", payloadCode, "@",
"TArtSi", payloadCode, "@",
"TArtSiPara", payloadCode, "@",
"TArtTKE", payloadCode, "@",
"TArtTKEPara", payloadCode, "@",
"TArtTOF", payloadCode, "@",
"TArtTOFPara", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anabrips_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anabrips_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anabrips_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anabrips_dict() {
  TriggerDictionaryInitialization_anabrips_dict_Impl();
}
