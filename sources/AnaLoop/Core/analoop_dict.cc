// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME analoop_dict
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
#include "include/TAlEncHist.hh"
#include "include/TAlRawDataExample.hh"
#include "include/TAlEncBranch.hh"
#include "include/TArtAnaLoop.hh"
#include "include/TArtAnaLoopManager.hh"
#include "include/TArtAnaClock.hh"
#include "include/TAlEncSub.hh"
#include "include/TAlEncFactory.hh"
#include "include/TArtAnaFile.hh"
#include "include/TAlEncStop.hh"
#include "include/TAlEncFillTree.hh"
#include "include/TAlEncGate.hh"
#include "include/TAlEncPrint.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TAlEncSub(void *p);
   static void deleteArray_TAlEncSub(void *p);
   static void destruct_TAlEncSub(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSub*)
   {
      ::TAlEncSub *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSub >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSub", ::TAlEncSub::Class_Version(), "TAlEncSub.hh", 9,
                  typeid(::TAlEncSub), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSub::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSub) );
      instance.SetDelete(&delete_TAlEncSub);
      instance.SetDeleteArray(&deleteArray_TAlEncSub);
      instance.SetDestructor(&destruct_TAlEncSub);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSub*)
   {
      return GenerateInitInstanceLocal((::TAlEncSub*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlEncSub*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtValIndex(void *p = 0);
   static void *newArray_TArtValIndex(Long_t size, void *p);
   static void delete_TArtValIndex(void *p);
   static void deleteArray_TArtValIndex(void *p);
   static void destruct_TArtValIndex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtValIndex*)
   {
      ::TArtValIndex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtValIndex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtValIndex", ::TArtValIndex::Class_Version(), "TArtAnaFile.hh", 26,
                  typeid(::TArtValIndex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtValIndex::Dictionary, isa_proxy, 4,
                  sizeof(::TArtValIndex) );
      instance.SetNew(&new_TArtValIndex);
      instance.SetNewArray(&newArray_TArtValIndex);
      instance.SetDelete(&delete_TArtValIndex);
      instance.SetDeleteArray(&deleteArray_TArtValIndex);
      instance.SetDestructor(&destruct_TArtValIndex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtValIndex*)
   {
      return GenerateInitInstanceLocal((::TArtValIndex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtValIndex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtValIndexVal(void *p = 0);
   static void *newArray_TArtValIndexVal(Long_t size, void *p);
   static void delete_TArtValIndexVal(void *p);
   static void deleteArray_TArtValIndexVal(void *p);
   static void destruct_TArtValIndexVal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtValIndexVal*)
   {
      ::TArtValIndexVal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtValIndexVal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtValIndexVal", ::TArtValIndexVal::Class_Version(), "TArtAnaFile.hh", 69,
                  typeid(::TArtValIndexVal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtValIndexVal::Dictionary, isa_proxy, 4,
                  sizeof(::TArtValIndexVal) );
      instance.SetNew(&new_TArtValIndexVal);
      instance.SetNewArray(&newArray_TArtValIndexVal);
      instance.SetDelete(&delete_TArtValIndexVal);
      instance.SetDeleteArray(&deleteArray_TArtValIndexVal);
      instance.SetDestructor(&destruct_TArtValIndexVal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtValIndexVal*)
   {
      return GenerateInitInstanceLocal((::TArtValIndexVal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtValIndexVal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtValIndexValArray(void *p = 0);
   static void *newArray_TArtValIndexValArray(Long_t size, void *p);
   static void delete_TArtValIndexValArray(void *p);
   static void deleteArray_TArtValIndexValArray(void *p);
   static void destruct_TArtValIndexValArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtValIndexValArray*)
   {
      ::TArtValIndexValArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtValIndexValArray >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtValIndexValArray", ::TArtValIndexValArray::Class_Version(), "TArtAnaFile.hh", 83,
                  typeid(::TArtValIndexValArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtValIndexValArray::Dictionary, isa_proxy, 4,
                  sizeof(::TArtValIndexValArray) );
      instance.SetNew(&new_TArtValIndexValArray);
      instance.SetNewArray(&newArray_TArtValIndexValArray);
      instance.SetDelete(&delete_TArtValIndexValArray);
      instance.SetDeleteArray(&deleteArray_TArtValIndexValArray);
      instance.SetDestructor(&destruct_TArtValIndexValArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtValIndexValArray*)
   {
      return GenerateInitInstanceLocal((::TArtValIndexValArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtValIndexValArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtValMap(void *p = 0);
   static void *newArray_TArtValMap(Long_t size, void *p);
   static void delete_TArtValMap(void *p);
   static void deleteArray_TArtValMap(void *p);
   static void destruct_TArtValMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtValMap*)
   {
      ::TArtValMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtValMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtValMap", ::TArtValMap::Class_Version(), "TArtAnaFile.hh", 98,
                  typeid(::TArtValMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtValMap::Dictionary, isa_proxy, 4,
                  sizeof(::TArtValMap) );
      instance.SetNew(&new_TArtValMap);
      instance.SetNewArray(&newArray_TArtValMap);
      instance.SetDelete(&delete_TArtValMap);
      instance.SetDeleteArray(&deleteArray_TArtValMap);
      instance.SetDestructor(&destruct_TArtValMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtValMap*)
   {
      return GenerateInitInstanceLocal((::TArtValMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtValMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtAnaGate(void *p = 0);
   static void *newArray_TArtAnaGate(Long_t size, void *p);
   static void delete_TArtAnaGate(void *p);
   static void deleteArray_TArtAnaGate(void *p);
   static void destruct_TArtAnaGate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtAnaGate*)
   {
      ::TArtAnaGate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtAnaGate >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtAnaGate", ::TArtAnaGate::Class_Version(), "TArtAnaFile.hh", 125,
                  typeid(::TArtAnaGate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtAnaGate::Dictionary, isa_proxy, 4,
                  sizeof(::TArtAnaGate) );
      instance.SetNew(&new_TArtAnaGate);
      instance.SetNewArray(&newArray_TArtAnaGate);
      instance.SetDelete(&delete_TArtAnaGate);
      instance.SetDeleteArray(&deleteArray_TArtAnaGate);
      instance.SetDestructor(&destruct_TArtAnaGate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtAnaGate*)
   {
      return GenerateInitInstanceLocal((::TArtAnaGate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtAnaGate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtAnaFile(void *p);
   static void deleteArray_TArtAnaFile(void *p);
   static void destruct_TArtAnaFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtAnaFile*)
   {
      ::TArtAnaFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtAnaFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtAnaFile", ::TArtAnaFile::Class_Version(), "TArtAnaFile.hh", 230,
                  typeid(::TArtAnaFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtAnaFile::Dictionary, isa_proxy, 4,
                  sizeof(::TArtAnaFile) );
      instance.SetDelete(&delete_TArtAnaFile);
      instance.SetDeleteArray(&deleteArray_TArtAnaFile);
      instance.SetDestructor(&destruct_TArtAnaFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtAnaFile*)
   {
      return GenerateInitInstanceLocal((::TArtAnaFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtAnaFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncHist(void *p = 0);
   static void *newArray_TAlEncHist(Long_t size, void *p);
   static void delete_TAlEncHist(void *p);
   static void deleteArray_TAlEncHist(void *p);
   static void destruct_TAlEncHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncHist*)
   {
      ::TAlEncHist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncHist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncHist", ::TAlEncHist::Class_Version(), "TAlEncHist.hh", 13,
                  typeid(::TAlEncHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncHist::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncHist) );
      instance.SetNew(&new_TAlEncHist);
      instance.SetNewArray(&newArray_TAlEncHist);
      instance.SetDelete(&delete_TAlEncHist);
      instance.SetDeleteArray(&deleteArray_TAlEncHist);
      instance.SetDestructor(&destruct_TAlEncHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncHist*)
   {
      return GenerateInitInstanceLocal((::TAlEncHist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlEncHist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlRawDataExample(void *p = 0);
   static void *newArray_TAlRawDataExample(Long_t size, void *p);
   static void delete_TAlRawDataExample(void *p);
   static void deleteArray_TAlRawDataExample(void *p);
   static void destruct_TAlRawDataExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlRawDataExample*)
   {
      ::TAlRawDataExample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlRawDataExample >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlRawDataExample", ::TAlRawDataExample::Class_Version(), "TAlRawDataExample.hh", 10,
                  typeid(::TAlRawDataExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlRawDataExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlRawDataExample) );
      instance.SetNew(&new_TAlRawDataExample);
      instance.SetNewArray(&newArray_TAlRawDataExample);
      instance.SetDelete(&delete_TAlRawDataExample);
      instance.SetDeleteArray(&deleteArray_TAlRawDataExample);
      instance.SetDestructor(&destruct_TAlRawDataExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlRawDataExample*)
   {
      return GenerateInitInstanceLocal((::TAlRawDataExample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlRawDataExample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncBranch(void *p = 0);
   static void *newArray_TAlEncBranch(Long_t size, void *p);
   static void delete_TAlEncBranch(void *p);
   static void deleteArray_TAlEncBranch(void *p);
   static void destruct_TAlEncBranch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncBranch*)
   {
      ::TAlEncBranch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncBranch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncBranch", ::TAlEncBranch::Class_Version(), "TAlEncBranch.hh", 13,
                  typeid(::TAlEncBranch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncBranch::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncBranch) );
      instance.SetNew(&new_TAlEncBranch);
      instance.SetNewArray(&newArray_TAlEncBranch);
      instance.SetDelete(&delete_TAlEncBranch);
      instance.SetDeleteArray(&deleteArray_TAlEncBranch);
      instance.SetDestructor(&destruct_TAlEncBranch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncBranch*)
   {
      return GenerateInitInstanceLocal((::TAlEncBranch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlEncBranch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtAnaLoopManager*)
   {
      ::TArtAnaLoopManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtAnaLoopManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtAnaLoopManager", ::TArtAnaLoopManager::Class_Version(), "TArtAnaLoopManager.hh", 36,
                  typeid(::TArtAnaLoopManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtAnaLoopManager::Dictionary, isa_proxy, 4,
                  sizeof(::TArtAnaLoopManager) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtAnaLoopManager*)
   {
      return GenerateInitInstanceLocal((::TArtAnaLoopManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtAnaLoopStatic*)
   {
      ::TArtAnaLoopStatic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtAnaLoopStatic >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtAnaLoopStatic", ::TArtAnaLoopStatic::Class_Version(), "TArtAnaLoopManager.hh", 104,
                  typeid(::TArtAnaLoopStatic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtAnaLoopStatic::Dictionary, isa_proxy, 4,
                  sizeof(::TArtAnaLoopStatic) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtAnaLoopStatic*)
   {
      return GenerateInitInstanceLocal((::TArtAnaLoopStatic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TAlEncFactory(void *p);
   static void deleteArray_TAlEncFactory(void *p);
   static void destruct_TAlEncFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncFactory*)
   {
      ::TAlEncFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncFactory", ::TAlEncFactory::Class_Version(), "TAlEncFactory.hh", 8,
                  typeid(::TAlEncFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncFactory) );
      instance.SetDelete(&delete_TAlEncFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncFactory);
      instance.SetDestructor(&destruct_TAlEncFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncFactory*)
   {
      return GenerateInitInstanceLocal((::TAlEncFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlEncFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncStop(void *p = 0);
   static void *newArray_TAlEncStop(Long_t size, void *p);
   static void delete_TAlEncStop(void *p);
   static void deleteArray_TAlEncStop(void *p);
   static void destruct_TAlEncStop(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncStop*)
   {
      ::TAlEncStop *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncStop >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncStop", ::TAlEncStop::Class_Version(), "TAlEncStop.hh", 10,
                  typeid(::TAlEncStop), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncStop::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncStop) );
      instance.SetNew(&new_TAlEncStop);
      instance.SetNewArray(&newArray_TAlEncStop);
      instance.SetDelete(&delete_TAlEncStop);
      instance.SetDeleteArray(&deleteArray_TAlEncStop);
      instance.SetDestructor(&destruct_TAlEncStop);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncStop*)
   {
      return GenerateInitInstanceLocal((::TAlEncStop*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlEncStop*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncFillTree(void *p = 0);
   static void *newArray_TAlEncFillTree(Long_t size, void *p);
   static void delete_TAlEncFillTree(void *p);
   static void deleteArray_TAlEncFillTree(void *p);
   static void destruct_TAlEncFillTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncFillTree*)
   {
      ::TAlEncFillTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncFillTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncFillTree", ::TAlEncFillTree::Class_Version(), "TAlEncFillTree.hh", 13,
                  typeid(::TAlEncFillTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncFillTree::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncFillTree) );
      instance.SetNew(&new_TAlEncFillTree);
      instance.SetNewArray(&newArray_TAlEncFillTree);
      instance.SetDelete(&delete_TAlEncFillTree);
      instance.SetDeleteArray(&deleteArray_TAlEncFillTree);
      instance.SetDestructor(&destruct_TAlEncFillTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncFillTree*)
   {
      return GenerateInitInstanceLocal((::TAlEncFillTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlEncFillTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncGate(void *p = 0);
   static void *newArray_TAlEncGate(Long_t size, void *p);
   static void delete_TAlEncGate(void *p);
   static void deleteArray_TAlEncGate(void *p);
   static void destruct_TAlEncGate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncGate*)
   {
      ::TAlEncGate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncGate >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncGate", ::TAlEncGate::Class_Version(), "TAlEncGate.hh", 8,
                  typeid(::TAlEncGate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncGate::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncGate) );
      instance.SetNew(&new_TAlEncGate);
      instance.SetNewArray(&newArray_TAlEncGate);
      instance.SetDelete(&delete_TAlEncGate);
      instance.SetDeleteArray(&deleteArray_TAlEncGate);
      instance.SetDestructor(&destruct_TAlEncGate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncGate*)
   {
      return GenerateInitInstanceLocal((::TAlEncGate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlEncGate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncPrint(void *p = 0);
   static void *newArray_TAlEncPrint(Long_t size, void *p);
   static void delete_TAlEncPrint(void *p);
   static void deleteArray_TAlEncPrint(void *p);
   static void destruct_TAlEncPrint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncPrint*)
   {
      ::TAlEncPrint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncPrint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncPrint", ::TAlEncPrint::Class_Version(), "TAlEncPrint.hh", 11,
                  typeid(::TAlEncPrint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncPrint::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncPrint) );
      instance.SetNew(&new_TAlEncPrint);
      instance.SetNewArray(&newArray_TAlEncPrint);
      instance.SetDelete(&delete_TAlEncPrint);
      instance.SetDeleteArray(&deleteArray_TAlEncPrint);
      instance.SetDestructor(&destruct_TAlEncPrint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncPrint*)
   {
      return GenerateInitInstanceLocal((::TAlEncPrint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlEncPrint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSub::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSub::Class_Name()
{
   return "TAlEncSub";
}

//______________________________________________________________________________
const char *TAlEncSub::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSub*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSub::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSub*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSub::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSub*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSub::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSub*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtValIndex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtValIndex::Class_Name()
{
   return "TArtValIndex";
}

//______________________________________________________________________________
const char *TArtValIndex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtValIndex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtValIndex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtValIndex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtValIndexVal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtValIndexVal::Class_Name()
{
   return "TArtValIndexVal";
}

//______________________________________________________________________________
const char *TArtValIndexVal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexVal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtValIndexVal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexVal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtValIndexVal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexVal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtValIndexVal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexVal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtValIndexValArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtValIndexValArray::Class_Name()
{
   return "TArtValIndexValArray";
}

//______________________________________________________________________________
const char *TArtValIndexValArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexValArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtValIndexValArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexValArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtValIndexValArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexValArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtValIndexValArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexValArray*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtValMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtValMap::Class_Name()
{
   return "TArtValMap";
}

//______________________________________________________________________________
const char *TArtValMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtValMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtValMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtValMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtAnaGate::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtAnaGate::Class_Name()
{
   return "TArtAnaGate";
}

//______________________________________________________________________________
const char *TArtAnaGate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaGate*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtAnaGate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaGate*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtAnaGate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaGate*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtAnaGate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaGate*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtAnaFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtAnaFile::Class_Name()
{
   return "TArtAnaFile";
}

//______________________________________________________________________________
const char *TArtAnaFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtAnaFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtAnaFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtAnaFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncHist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncHist::Class_Name()
{
   return "TAlEncHist";
}

//______________________________________________________________________________
const char *TAlEncHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlRawDataExample::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlRawDataExample::Class_Name()
{
   return "TAlRawDataExample";
}

//______________________________________________________________________________
const char *TAlRawDataExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlRawDataExample*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlRawDataExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlRawDataExample*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlRawDataExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlRawDataExample*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlRawDataExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlRawDataExample*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncBranch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncBranch::Class_Name()
{
   return "TAlEncBranch";
}

//______________________________________________________________________________
const char *TAlEncBranch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncBranch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncBranch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncBranch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncBranch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncBranch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncBranch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncBranch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtAnaLoopManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtAnaLoopManager::Class_Name()
{
   return "TArtAnaLoopManager";
}

//______________________________________________________________________________
const char *TArtAnaLoopManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtAnaLoopManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtAnaLoopManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtAnaLoopManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtAnaLoopStatic::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtAnaLoopStatic::Class_Name()
{
   return "TArtAnaLoopStatic";
}

//______________________________________________________________________________
const char *TArtAnaLoopStatic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtAnaLoopStatic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtAnaLoopStatic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtAnaLoopStatic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncFactory::Class_Name()
{
   return "TAlEncFactory";
}

//______________________________________________________________________________
const char *TAlEncFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFactory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncStop::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncStop::Class_Name()
{
   return "TAlEncStop";
}

//______________________________________________________________________________
const char *TAlEncStop::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncStop*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncStop::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncStop*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncStop::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncStop*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncStop::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncStop*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncFillTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncFillTree::Class_Name()
{
   return "TAlEncFillTree";
}

//______________________________________________________________________________
const char *TAlEncFillTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFillTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncFillTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFillTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncFillTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFillTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncFillTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFillTree*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncGate::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncGate::Class_Name()
{
   return "TAlEncGate";
}

//______________________________________________________________________________
const char *TAlEncGate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGate*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncGate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGate*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncGate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGate*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncGate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGate*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncPrint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncPrint::Class_Name()
{
   return "TAlEncPrint";
}

//______________________________________________________________________________
const char *TAlEncPrint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPrint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncPrint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPrint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncPrint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPrint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncPrint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPrint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAlEncSub::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSub.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSub::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSub::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAlEncSub(void *p) {
      delete ((::TAlEncSub*)p);
   }
   static void deleteArray_TAlEncSub(void *p) {
      delete [] ((::TAlEncSub*)p);
   }
   static void destruct_TAlEncSub(void *p) {
      typedef ::TAlEncSub current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSub

//______________________________________________________________________________
void TArtValIndex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtValIndex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtValIndex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtValIndex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtValIndex(void *p) {
      return  p ? new(p) ::TArtValIndex : new ::TArtValIndex;
   }
   static void *newArray_TArtValIndex(Long_t nElements, void *p) {
      return p ? new(p) ::TArtValIndex[nElements] : new ::TArtValIndex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtValIndex(void *p) {
      delete ((::TArtValIndex*)p);
   }
   static void deleteArray_TArtValIndex(void *p) {
      delete [] ((::TArtValIndex*)p);
   }
   static void destruct_TArtValIndex(void *p) {
      typedef ::TArtValIndex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtValIndex

//______________________________________________________________________________
void TArtValIndexVal::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtValIndexVal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtValIndexVal::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtValIndexVal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtValIndexVal(void *p) {
      return  p ? new(p) ::TArtValIndexVal : new ::TArtValIndexVal;
   }
   static void *newArray_TArtValIndexVal(Long_t nElements, void *p) {
      return p ? new(p) ::TArtValIndexVal[nElements] : new ::TArtValIndexVal[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtValIndexVal(void *p) {
      delete ((::TArtValIndexVal*)p);
   }
   static void deleteArray_TArtValIndexVal(void *p) {
      delete [] ((::TArtValIndexVal*)p);
   }
   static void destruct_TArtValIndexVal(void *p) {
      typedef ::TArtValIndexVal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtValIndexVal

//______________________________________________________________________________
void TArtValIndexValArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtValIndexValArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtValIndexValArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtValIndexValArray::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtValIndexValArray(void *p) {
      return  p ? new(p) ::TArtValIndexValArray : new ::TArtValIndexValArray;
   }
   static void *newArray_TArtValIndexValArray(Long_t nElements, void *p) {
      return p ? new(p) ::TArtValIndexValArray[nElements] : new ::TArtValIndexValArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtValIndexValArray(void *p) {
      delete ((::TArtValIndexValArray*)p);
   }
   static void deleteArray_TArtValIndexValArray(void *p) {
      delete [] ((::TArtValIndexValArray*)p);
   }
   static void destruct_TArtValIndexValArray(void *p) {
      typedef ::TArtValIndexValArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtValIndexValArray

//______________________________________________________________________________
void TArtValMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtValMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtValMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtValMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtValMap(void *p) {
      return  p ? new(p) ::TArtValMap : new ::TArtValMap;
   }
   static void *newArray_TArtValMap(Long_t nElements, void *p) {
      return p ? new(p) ::TArtValMap[nElements] : new ::TArtValMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtValMap(void *p) {
      delete ((::TArtValMap*)p);
   }
   static void deleteArray_TArtValMap(void *p) {
      delete [] ((::TArtValMap*)p);
   }
   static void destruct_TArtValMap(void *p) {
      typedef ::TArtValMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtValMap

//______________________________________________________________________________
void TArtAnaGate::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtAnaGate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtAnaGate::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtAnaGate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtAnaGate(void *p) {
      return  p ? new(p) ::TArtAnaGate : new ::TArtAnaGate;
   }
   static void *newArray_TArtAnaGate(Long_t nElements, void *p) {
      return p ? new(p) ::TArtAnaGate[nElements] : new ::TArtAnaGate[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtAnaGate(void *p) {
      delete ((::TArtAnaGate*)p);
   }
   static void deleteArray_TArtAnaGate(void *p) {
      delete [] ((::TArtAnaGate*)p);
   }
   static void destruct_TArtAnaGate(void *p) {
      typedef ::TArtAnaGate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtAnaGate

//______________________________________________________________________________
void TArtAnaFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtAnaFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtAnaFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtAnaFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtAnaFile(void *p) {
      delete ((::TArtAnaFile*)p);
   }
   static void deleteArray_TArtAnaFile(void *p) {
      delete [] ((::TArtAnaFile*)p);
   }
   static void destruct_TArtAnaFile(void *p) {
      typedef ::TArtAnaFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtAnaFile

//______________________________________________________________________________
void TAlEncHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncHist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncHist(void *p) {
      return  p ? new(p) ::TAlEncHist : new ::TAlEncHist;
   }
   static void *newArray_TAlEncHist(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncHist[nElements] : new ::TAlEncHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncHist(void *p) {
      delete ((::TAlEncHist*)p);
   }
   static void deleteArray_TAlEncHist(void *p) {
      delete [] ((::TAlEncHist*)p);
   }
   static void destruct_TAlEncHist(void *p) {
      typedef ::TAlEncHist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncHist

//______________________________________________________________________________
void TAlRawDataExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlRawDataExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlRawDataExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlRawDataExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlRawDataExample(void *p) {
      return  p ? new(p) ::TAlRawDataExample : new ::TAlRawDataExample;
   }
   static void *newArray_TAlRawDataExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlRawDataExample[nElements] : new ::TAlRawDataExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlRawDataExample(void *p) {
      delete ((::TAlRawDataExample*)p);
   }
   static void deleteArray_TAlRawDataExample(void *p) {
      delete [] ((::TAlRawDataExample*)p);
   }
   static void destruct_TAlRawDataExample(void *p) {
      typedef ::TAlRawDataExample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlRawDataExample

//______________________________________________________________________________
void TAlEncBranch::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncBranch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncBranch::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncBranch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncBranch(void *p) {
      return  p ? new(p) ::TAlEncBranch : new ::TAlEncBranch;
   }
   static void *newArray_TAlEncBranch(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncBranch[nElements] : new ::TAlEncBranch[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncBranch(void *p) {
      delete ((::TAlEncBranch*)p);
   }
   static void deleteArray_TAlEncBranch(void *p) {
      delete [] ((::TAlEncBranch*)p);
   }
   static void destruct_TAlEncBranch(void *p) {
      typedef ::TAlEncBranch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncBranch

//______________________________________________________________________________
void TArtAnaLoopManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtAnaLoopManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtAnaLoopManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtAnaLoopManager::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::TArtAnaLoopManager

//______________________________________________________________________________
void TArtAnaLoopStatic::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtAnaLoopStatic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtAnaLoopStatic::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtAnaLoopStatic::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::TArtAnaLoopStatic

//______________________________________________________________________________
void TAlEncFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAlEncFactory(void *p) {
      delete ((::TAlEncFactory*)p);
   }
   static void deleteArray_TAlEncFactory(void *p) {
      delete [] ((::TAlEncFactory*)p);
   }
   static void destruct_TAlEncFactory(void *p) {
      typedef ::TAlEncFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncFactory

//______________________________________________________________________________
void TAlEncStop::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncStop.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncStop::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncStop::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncStop(void *p) {
      return  p ? new(p) ::TAlEncStop : new ::TAlEncStop;
   }
   static void *newArray_TAlEncStop(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncStop[nElements] : new ::TAlEncStop[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncStop(void *p) {
      delete ((::TAlEncStop*)p);
   }
   static void deleteArray_TAlEncStop(void *p) {
      delete [] ((::TAlEncStop*)p);
   }
   static void destruct_TAlEncStop(void *p) {
      typedef ::TAlEncStop current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncStop

//______________________________________________________________________________
void TAlEncFillTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncFillTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncFillTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncFillTree::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncFillTree(void *p) {
      return  p ? new(p) ::TAlEncFillTree : new ::TAlEncFillTree;
   }
   static void *newArray_TAlEncFillTree(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncFillTree[nElements] : new ::TAlEncFillTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncFillTree(void *p) {
      delete ((::TAlEncFillTree*)p);
   }
   static void deleteArray_TAlEncFillTree(void *p) {
      delete [] ((::TAlEncFillTree*)p);
   }
   static void destruct_TAlEncFillTree(void *p) {
      typedef ::TAlEncFillTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncFillTree

//______________________________________________________________________________
void TAlEncGate::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncGate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncGate::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncGate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncGate(void *p) {
      return  p ? new(p) ::TAlEncGate : new ::TAlEncGate;
   }
   static void *newArray_TAlEncGate(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncGate[nElements] : new ::TAlEncGate[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncGate(void *p) {
      delete ((::TAlEncGate*)p);
   }
   static void deleteArray_TAlEncGate(void *p) {
      delete [] ((::TAlEncGate*)p);
   }
   static void destruct_TAlEncGate(void *p) {
      typedef ::TAlEncGate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncGate

//______________________________________________________________________________
void TAlEncPrint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncPrint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncPrint::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncPrint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncPrint(void *p) {
      return  p ? new(p) ::TAlEncPrint : new ::TAlEncPrint;
   }
   static void *newArray_TAlEncPrint(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncPrint[nElements] : new ::TAlEncPrint[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncPrint(void *p) {
      delete ((::TAlEncPrint*)p);
   }
   static void deleteArray_TAlEncPrint(void *p) {
      delete [] ((::TAlEncPrint*)p);
   }
   static void destruct_TAlEncPrint(void *p) {
      typedef ::TAlEncPrint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncPrint

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
   static TClass *vectorlETArtValIndexValgR_Dictionary();
   static void vectorlETArtValIndexValgR_TClassManip(TClass*);
   static void *new_vectorlETArtValIndexValgR(void *p = 0);
   static void *newArray_vectorlETArtValIndexValgR(Long_t size, void *p);
   static void delete_vectorlETArtValIndexValgR(void *p);
   static void deleteArray_vectorlETArtValIndexValgR(void *p);
   static void destruct_vectorlETArtValIndexValgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtValIndexVal>*)
   {
      vector<TArtValIndexVal> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtValIndexVal>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtValIndexVal>", -2, "vector", 339,
                  typeid(vector<TArtValIndexVal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtValIndexValgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtValIndexVal>) );
      instance.SetNew(&new_vectorlETArtValIndexValgR);
      instance.SetNewArray(&newArray_vectorlETArtValIndexValgR);
      instance.SetDelete(&delete_vectorlETArtValIndexValgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtValIndexValgR);
      instance.SetDestructor(&destruct_vectorlETArtValIndexValgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtValIndexVal> >()));

      ::ROOT::AddClassAlternate("vector<TArtValIndexVal>","std::vector<TArtValIndexVal, std::allocator<TArtValIndexVal> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtValIndexVal>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtValIndexValgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtValIndexVal>*)0x0)->GetClass();
      vectorlETArtValIndexValgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtValIndexValgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtValIndexValgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtValIndexVal> : new vector<TArtValIndexVal>;
   }
   static void *newArray_vectorlETArtValIndexValgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtValIndexVal>[nElements] : new vector<TArtValIndexVal>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtValIndexValgR(void *p) {
      delete ((vector<TArtValIndexVal>*)p);
   }
   static void deleteArray_vectorlETArtValIndexValgR(void *p) {
      delete [] ((vector<TArtValIndexVal>*)p);
   }
   static void destruct_vectorlETArtValIndexValgR(void *p) {
      typedef vector<TArtValIndexVal> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtValIndexVal>

namespace ROOT {
   static TClass *vectorlETArtValIndexgR_Dictionary();
   static void vectorlETArtValIndexgR_TClassManip(TClass*);
   static void *new_vectorlETArtValIndexgR(void *p = 0);
   static void *newArray_vectorlETArtValIndexgR(Long_t size, void *p);
   static void delete_vectorlETArtValIndexgR(void *p);
   static void deleteArray_vectorlETArtValIndexgR(void *p);
   static void destruct_vectorlETArtValIndexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtValIndex>*)
   {
      vector<TArtValIndex> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtValIndex>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtValIndex>", -2, "vector", 339,
                  typeid(vector<TArtValIndex>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtValIndexgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtValIndex>) );
      instance.SetNew(&new_vectorlETArtValIndexgR);
      instance.SetNewArray(&newArray_vectorlETArtValIndexgR);
      instance.SetDelete(&delete_vectorlETArtValIndexgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtValIndexgR);
      instance.SetDestructor(&destruct_vectorlETArtValIndexgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtValIndex> >()));

      ::ROOT::AddClassAlternate("vector<TArtValIndex>","std::vector<TArtValIndex, std::allocator<TArtValIndex> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtValIndex>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtValIndexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtValIndex>*)0x0)->GetClass();
      vectorlETArtValIndexgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtValIndexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtValIndexgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtValIndex> : new vector<TArtValIndex>;
   }
   static void *newArray_vectorlETArtValIndexgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtValIndex>[nElements] : new vector<TArtValIndex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtValIndexgR(void *p) {
      delete ((vector<TArtValIndex>*)p);
   }
   static void deleteArray_vectorlETArtValIndexgR(void *p) {
      delete [] ((vector<TArtValIndex>*)p);
   }
   static void destruct_vectorlETArtValIndexgR(void *p) {
      typedef vector<TArtValIndex> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtValIndex>

namespace ROOT {
   static TClass *maplEstringcOvectorlETArtValIndexgRsPgR_Dictionary();
   static void maplEstringcOvectorlETArtValIndexgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlETArtValIndexgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlETArtValIndexgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlETArtValIndexgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlETArtValIndexgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlETArtValIndexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<TArtValIndex> >*)
   {
      map<string,vector<TArtValIndex> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<TArtValIndex> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<TArtValIndex> >", -2, "map", 100,
                  typeid(map<string,vector<TArtValIndex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlETArtValIndexgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<TArtValIndex> >) );
      instance.SetNew(&new_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<TArtValIndex> > >()));

      ::ROOT::AddClassAlternate("map<string,vector<TArtValIndex> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<TArtValIndex, std::allocator<TArtValIndex> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<TArtValIndex, std::allocator<TArtValIndex> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<TArtValIndex> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlETArtValIndexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<TArtValIndex> >*)0x0)->GetClass();
      maplEstringcOvectorlETArtValIndexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlETArtValIndexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlETArtValIndexgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<TArtValIndex> > : new map<string,vector<TArtValIndex> >;
   }
   static void *newArray_maplEstringcOvectorlETArtValIndexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<TArtValIndex> >[nElements] : new map<string,vector<TArtValIndex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlETArtValIndexgRsPgR(void *p) {
      delete ((map<string,vector<TArtValIndex> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlETArtValIndexgRsPgR(void *p) {
      delete [] ((map<string,vector<TArtValIndex> >*)p);
   }
   static void destruct_maplEstringcOvectorlETArtValIndexgRsPgR(void *p) {
      typedef map<string,vector<TArtValIndex> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<TArtValIndex> >

namespace ROOT {
   static TClass *maplEintcOvectorlETArtValIndexgRsPgR_Dictionary();
   static void maplEintcOvectorlETArtValIndexgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlETArtValIndexgRsPgR(void *p = 0);
   static void *newArray_maplEintcOvectorlETArtValIndexgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlETArtValIndexgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlETArtValIndexgRsPgR(void *p);
   static void destruct_maplEintcOvectorlETArtValIndexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<TArtValIndex> >*)
   {
      map<int,vector<TArtValIndex> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<TArtValIndex> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<TArtValIndex> >", -2, "map", 100,
                  typeid(map<int,vector<TArtValIndex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlETArtValIndexgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<TArtValIndex> >) );
      instance.SetNew(&new_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<TArtValIndex> > >()));

      ::ROOT::AddClassAlternate("map<int,vector<TArtValIndex> >","std::map<int, std::vector<TArtValIndex, std::allocator<TArtValIndex> >, std::less<int>, std::allocator<std::pair<int const, std::vector<TArtValIndex, std::allocator<TArtValIndex> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,vector<TArtValIndex> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlETArtValIndexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,vector<TArtValIndex> >*)0x0)->GetClass();
      maplEintcOvectorlETArtValIndexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlETArtValIndexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlETArtValIndexgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<TArtValIndex> > : new map<int,vector<TArtValIndex> >;
   }
   static void *newArray_maplEintcOvectorlETArtValIndexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<TArtValIndex> >[nElements] : new map<int,vector<TArtValIndex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlETArtValIndexgRsPgR(void *p) {
      delete ((map<int,vector<TArtValIndex> >*)p);
   }
   static void deleteArray_maplEintcOvectorlETArtValIndexgRsPgR(void *p) {
      delete [] ((map<int,vector<TArtValIndex> >*)p);
   }
   static void destruct_maplEintcOvectorlETArtValIndexgRsPgR(void *p) {
      typedef map<int,vector<TArtValIndex> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<TArtValIndex> >

namespace ROOT {
   static TClass *maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_Dictionary();
   static void maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p);
   static void deleteArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p);
   static void destruct_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,map<int,map<int,double> > >*)
   {
      map<int,map<int,map<int,double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,map<int,map<int,double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,map<int,map<int,double> > >", -2, "map", 100,
                  typeid(map<int,map<int,map<int,double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,map<int,map<int,double> > >) );
      instance.SetNew(&new_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.SetDelete(&delete_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,map<int,map<int,double> > > >()));

      ::ROOT::AddClassAlternate("map<int,map<int,map<int,double> > >","std::map<int, std::map<int, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > > > > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > > > > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,map<int,map<int,double> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,map<int,map<int,double> > >*)0x0)->GetClass();
      maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,map<int,map<int,double> > > : new map<int,map<int,map<int,double> > >;
   }
   static void *newArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,map<int,map<int,double> > >[nElements] : new map<int,map<int,map<int,double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p) {
      delete ((map<int,map<int,map<int,double> > >*)p);
   }
   static void deleteArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p) {
      delete [] ((map<int,map<int,map<int,double> > >*)p);
   }
   static void destruct_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p) {
      typedef map<int,map<int,map<int,double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,map<int,map<int,double> > >

namespace ROOT {
   static TClass *maplEintcOmaplEintcOdoublegRsPgR_Dictionary();
   static void maplEintcOmaplEintcOdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOmaplEintcOdoublegRsPgR(void *p = 0);
   static void *newArray_maplEintcOmaplEintcOdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEintcOmaplEintcOdoublegRsPgR(void *p);
   static void deleteArray_maplEintcOmaplEintcOdoublegRsPgR(void *p);
   static void destruct_maplEintcOmaplEintcOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,map<int,double> >*)
   {
      map<int,map<int,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,map<int,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,map<int,double> >", -2, "map", 100,
                  typeid(map<int,map<int,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOmaplEintcOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,map<int,double> >) );
      instance.SetNew(&new_maplEintcOmaplEintcOdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEintcOmaplEintcOdoublegRsPgR);
      instance.SetDelete(&delete_maplEintcOmaplEintcOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOmaplEintcOdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEintcOmaplEintcOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,map<int,double> > >()));

      ::ROOT::AddClassAlternate("map<int,map<int,double> >","std::map<int, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,map<int,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOmaplEintcOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,map<int,double> >*)0x0)->GetClass();
      maplEintcOmaplEintcOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOmaplEintcOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOmaplEintcOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,map<int,double> > : new map<int,map<int,double> >;
   }
   static void *newArray_maplEintcOmaplEintcOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,map<int,double> >[nElements] : new map<int,map<int,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOmaplEintcOdoublegRsPgR(void *p) {
      delete ((map<int,map<int,double> >*)p);
   }
   static void deleteArray_maplEintcOmaplEintcOdoublegRsPgR(void *p) {
      delete [] ((map<int,map<int,double> >*)p);
   }
   static void destruct_maplEintcOmaplEintcOdoublegRsPgR(void *p) {
      typedef map<int,map<int,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,map<int,double> >

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = 0);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 100,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));

      ::ROOT::AddClassAlternate("map<int,double>","std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,double>*)0x0)->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete ((map<int,double>*)p);
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] ((map<int,double>*)p);
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace ROOT {
   static TClass *maplEintcOTArtAnaGatemUgR_Dictionary();
   static void maplEintcOTArtAnaGatemUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtAnaGatemUgR(void *p = 0);
   static void *newArray_maplEintcOTArtAnaGatemUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtAnaGatemUgR(void *p);
   static void deleteArray_maplEintcOTArtAnaGatemUgR(void *p);
   static void destruct_maplEintcOTArtAnaGatemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtAnaGate*>*)
   {
      map<int,TArtAnaGate*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtAnaGate*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtAnaGate*>", -2, "map", 100,
                  typeid(map<int,TArtAnaGate*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtAnaGatemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtAnaGate*>) );
      instance.SetNew(&new_maplEintcOTArtAnaGatemUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtAnaGatemUgR);
      instance.SetDelete(&delete_maplEintcOTArtAnaGatemUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtAnaGatemUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtAnaGatemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtAnaGate*> >()));

      ::ROOT::AddClassAlternate("map<int,TArtAnaGate*>","std::map<int, TArtAnaGate*, std::less<int>, std::allocator<std::pair<int const, TArtAnaGate*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TArtAnaGate*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtAnaGatemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TArtAnaGate*>*)0x0)->GetClass();
      maplEintcOTArtAnaGatemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtAnaGatemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtAnaGatemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtAnaGate*> : new map<int,TArtAnaGate*>;
   }
   static void *newArray_maplEintcOTArtAnaGatemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TArtAnaGate*>[nElements] : new map<int,TArtAnaGate*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtAnaGatemUgR(void *p) {
      delete ((map<int,TArtAnaGate*>*)p);
   }
   static void deleteArray_maplEintcOTArtAnaGatemUgR(void *p) {
      delete [] ((map<int,TArtAnaGate*>*)p);
   }
   static void destruct_maplEintcOTArtAnaGatemUgR(void *p) {
      typedef map<int,TArtAnaGate*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtAnaGate*>

namespace {
  void TriggerDictionaryInitialization_analoop_dict_Impl() {
    static const char* headers[] = {
"include/TAlEncHist.hh",
"include/TAlRawDataExample.hh",
"include/TAlEncBranch.hh",
"include/TArtAnaLoop.hh",
"include/TArtAnaLoopManager.hh",
"include/TArtAnaClock.hh",
"include/TAlEncSub.hh",
"include/TAlEncFactory.hh",
"include/TArtAnaFile.hh",
"include/TAlEncStop.hh",
"include/TAlEncFillTree.hh",
"include/TAlEncGate.hh",
"include/TAlEncPrint.hh",
0
    };
    static const char* includePaths[] = {
"/opt/root/include",
"../../Core/include",
"../../Nadeko/include",
"/opt/root/include/",
"/home/quser/src/anaroot/sources/AnaLoop/Core/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "analoop_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TAlEncSub.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TAlEncSub;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TArtValIndex;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TArtValIndexVal;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TArtValIndexValArray;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TArtValMap;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TArtAnaGate;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TArtAnaFile;
class __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TAlEncHist;
class __attribute__((annotate("$clingAutoload$include/TAlRawDataExample.hh")))  TAlRawDataExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TAlEncBranch;
class __attribute__((annotate("$clingAutoload$include/TArtAnaLoopManager.hh")))  TArtAnaLoopManager;
class __attribute__((annotate("$clingAutoload$include/TArtAnaLoopManager.hh")))  TArtAnaLoopStatic;
class __attribute__((annotate("$clingAutoload$include/TAlEncFactory.hh")))  TAlEncFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncStop.hh")))  TAlEncStop;
class __attribute__((annotate("$clingAutoload$include/TAlEncFillTree.hh")))  TAlEncFillTree;
class __attribute__((annotate("$clingAutoload$include/TAlEncGate.hh")))  TAlEncGate;
class __attribute__((annotate("$clingAutoload$include/TAlEncPrint.hh")))  TAlEncPrint;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "analoop_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TAlEncHist.hh"
#include "include/TAlRawDataExample.hh"
#include "include/TAlEncBranch.hh"
#include "include/TArtAnaLoop.hh"
#include "include/TArtAnaLoopManager.hh"
#include "include/TArtAnaClock.hh"
#include "include/TAlEncSub.hh"
#include "include/TAlEncFactory.hh"
#include "include/TArtAnaFile.hh"
#include "include/TAlEncStop.hh"
#include "include/TAlEncFillTree.hh"
#include "include/TAlEncGate.hh"
#include "include/TAlEncPrint.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TAlEncBranch", payloadCode, "@",
"TAlEncFactory", payloadCode, "@",
"TAlEncFillTree", payloadCode, "@",
"TAlEncGate", payloadCode, "@",
"TAlEncHist", payloadCode, "@",
"TAlEncPrint", payloadCode, "@",
"TAlEncStop", payloadCode, "@",
"TAlEncSub", payloadCode, "@",
"TAlRawDataExample", payloadCode, "@",
"TArtAnaFile", payloadCode, "@",
"TArtAnaGate", payloadCode, "@",
"TArtAnaLoopManager", payloadCode, "@",
"TArtAnaLoopStatic", payloadCode, "@",
"TArtValIndex", payloadCode, "@",
"TArtValIndexVal", payloadCode, "@",
"TArtValIndexValArray", payloadCode, "@",
"TArtValMap", payloadCode, "@",
"book", payloadCode, "@",
"cdraw", payloadCode, "@",
"clear", payloadCode, "@",
"end", payloadCode, "@",
"hcut", payloadCode, "@",
"join", payloadCode, "@",
"lc", payloadCode, "@",
"lv", payloadCode, "@",
"next", payloadCode, "@",
"pop", payloadCode, "@",
"push", payloadCode, "@",
"spush", payloadCode, "@",
"start", payloadCode, "@",
"status", payloadCode, "@",
"stop", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("analoop_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_analoop_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_analoop_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_analoop_dict() {
  TriggerDictionaryInitialization_analoop_dict_Impl();
}
