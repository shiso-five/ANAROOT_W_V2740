// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anadali_dict
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
#include "include/TArtDALINaIPara.hh"
#include "include/TArtDALIParameters.hh"
#include "include/TArtCalibDALI.hh"
#include "include/TArtDALINaI.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TArtDALINaIPara(void *p = 0);
   static void *newArray_TArtDALINaIPara(Long_t size, void *p);
   static void delete_TArtDALINaIPara(void *p);
   static void deleteArray_TArtDALINaIPara(void *p);
   static void destruct_TArtDALINaIPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDALINaIPara*)
   {
      ::TArtDALINaIPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtDALINaIPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtDALINaIPara", ::TArtDALINaIPara::Class_Version(), "TArtDALINaIPara.hh", 9,
                  typeid(::TArtDALINaIPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtDALINaIPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtDALINaIPara) );
      instance.SetNew(&new_TArtDALINaIPara);
      instance.SetNewArray(&newArray_TArtDALINaIPara);
      instance.SetDelete(&delete_TArtDALINaIPara);
      instance.SetDeleteArray(&deleteArray_TArtDALINaIPara);
      instance.SetDestructor(&destruct_TArtDALINaIPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDALINaIPara*)
   {
      return GenerateInitInstanceLocal((::TArtDALINaIPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtDALINaIPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtDALIParameters(void *p = 0);
   static void *newArray_TArtDALIParameters(Long_t size, void *p);
   static void delete_TArtDALIParameters(void *p);
   static void deleteArray_TArtDALIParameters(void *p);
   static void destruct_TArtDALIParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDALIParameters*)
   {
      ::TArtDALIParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtDALIParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtDALIParameters", ::TArtDALIParameters::Class_Version(), "TArtDALIParameters.hh", 12,
                  typeid(::TArtDALIParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtDALIParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtDALIParameters) );
      instance.SetNew(&new_TArtDALIParameters);
      instance.SetNewArray(&newArray_TArtDALIParameters);
      instance.SetDelete(&delete_TArtDALIParameters);
      instance.SetDeleteArray(&deleteArray_TArtDALIParameters);
      instance.SetDestructor(&destruct_TArtDALIParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDALIParameters*)
   {
      return GenerateInitInstanceLocal((::TArtDALIParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtDALIParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibDALI(void *p = 0);
   static void *newArray_TArtCalibDALI(Long_t size, void *p);
   static void delete_TArtCalibDALI(void *p);
   static void deleteArray_TArtCalibDALI(void *p);
   static void destruct_TArtCalibDALI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibDALI*)
   {
      ::TArtCalibDALI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibDALI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibDALI", ::TArtCalibDALI::Class_Version(), "TArtCalibDALI.hh", 19,
                  typeid(::TArtCalibDALI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibDALI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibDALI) );
      instance.SetNew(&new_TArtCalibDALI);
      instance.SetNewArray(&newArray_TArtCalibDALI);
      instance.SetDelete(&delete_TArtCalibDALI);
      instance.SetDeleteArray(&deleteArray_TArtCalibDALI);
      instance.SetDestructor(&destruct_TArtCalibDALI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibDALI*)
   {
      return GenerateInitInstanceLocal((::TArtCalibDALI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibDALI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtDALINaI(void *p = 0);
   static void *newArray_TArtDALINaI(Long_t size, void *p);
   static void delete_TArtDALINaI(void *p);
   static void deleteArray_TArtDALINaI(void *p);
   static void destruct_TArtDALINaI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDALINaI*)
   {
      ::TArtDALINaI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtDALINaI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtDALINaI", ::TArtDALINaI::Class_Version(), "TArtDALINaI.hh", 6,
                  typeid(::TArtDALINaI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtDALINaI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtDALINaI) );
      instance.SetNew(&new_TArtDALINaI);
      instance.SetNewArray(&newArray_TArtDALINaI);
      instance.SetDelete(&delete_TArtDALINaI);
      instance.SetDeleteArray(&deleteArray_TArtDALINaI);
      instance.SetDestructor(&destruct_TArtDALINaI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDALINaI*)
   {
      return GenerateInitInstanceLocal((::TArtDALINaI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtDALINaI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtDALINaIPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtDALINaIPara::Class_Name()
{
   return "TArtDALINaIPara";
}

//______________________________________________________________________________
const char *TArtDALINaIPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDALINaIPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtDALINaIPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDALINaIPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtDALINaIPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDALINaIPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtDALINaIPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDALINaIPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtDALIParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtDALIParameters::Class_Name()
{
   return "TArtDALIParameters";
}

//______________________________________________________________________________
const char *TArtDALIParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDALIParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtDALIParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDALIParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtDALIParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDALIParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtDALIParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDALIParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibDALI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibDALI::Class_Name()
{
   return "TArtCalibDALI";
}

//______________________________________________________________________________
const char *TArtCalibDALI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDALI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibDALI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDALI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibDALI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDALI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibDALI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibDALI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtDALINaI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtDALINaI::Class_Name()
{
   return "TArtDALINaI";
}

//______________________________________________________________________________
const char *TArtDALINaI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDALINaI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtDALINaI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDALINaI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtDALINaI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDALINaI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtDALINaI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDALINaI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtDALINaIPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtDALINaIPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtDALINaIPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtDALINaIPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtDALINaIPara(void *p) {
      return  p ? new(p) ::TArtDALINaIPara : new ::TArtDALINaIPara;
   }
   static void *newArray_TArtDALINaIPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtDALINaIPara[nElements] : new ::TArtDALINaIPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtDALINaIPara(void *p) {
      delete ((::TArtDALINaIPara*)p);
   }
   static void deleteArray_TArtDALINaIPara(void *p) {
      delete [] ((::TArtDALINaIPara*)p);
   }
   static void destruct_TArtDALINaIPara(void *p) {
      typedef ::TArtDALINaIPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtDALINaIPara

//______________________________________________________________________________
void TArtDALIParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtDALIParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtDALIParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtDALIParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtDALIParameters(void *p) {
      return  p ? new(p) ::TArtDALIParameters : new ::TArtDALIParameters;
   }
   static void *newArray_TArtDALIParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtDALIParameters[nElements] : new ::TArtDALIParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtDALIParameters(void *p) {
      delete ((::TArtDALIParameters*)p);
   }
   static void deleteArray_TArtDALIParameters(void *p) {
      delete [] ((::TArtDALIParameters*)p);
   }
   static void destruct_TArtDALIParameters(void *p) {
      typedef ::TArtDALIParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtDALIParameters

//______________________________________________________________________________
void TArtCalibDALI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibDALI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibDALI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibDALI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibDALI(void *p) {
      return  p ? new(p) ::TArtCalibDALI : new ::TArtCalibDALI;
   }
   static void *newArray_TArtCalibDALI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibDALI[nElements] : new ::TArtCalibDALI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibDALI(void *p) {
      delete ((::TArtCalibDALI*)p);
   }
   static void deleteArray_TArtCalibDALI(void *p) {
      delete [] ((::TArtCalibDALI*)p);
   }
   static void destruct_TArtCalibDALI(void *p) {
      typedef ::TArtCalibDALI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibDALI

//______________________________________________________________________________
void TArtDALINaI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtDALINaI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtDALINaI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtDALINaI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtDALINaI(void *p) {
      return  p ? new(p) ::TArtDALINaI : new ::TArtDALINaI;
   }
   static void *newArray_TArtDALINaI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtDALINaI[nElements] : new ::TArtDALINaI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtDALINaI(void *p) {
      delete ((::TArtDALINaI*)p);
   }
   static void deleteArray_TArtDALINaI(void *p) {
      delete [] ((::TArtDALINaI*)p);
   }
   static void destruct_TArtDALINaI(void *p) {
      typedef ::TArtDALINaI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtDALINaI

namespace ROOT {
   static TClass *vectorlETArtDALINaIParamUgR_Dictionary();
   static void vectorlETArtDALINaIParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtDALINaIParamUgR(void *p = 0);
   static void *newArray_vectorlETArtDALINaIParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtDALINaIParamUgR(void *p);
   static void deleteArray_vectorlETArtDALINaIParamUgR(void *p);
   static void destruct_vectorlETArtDALINaIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtDALINaIPara*>*)
   {
      vector<TArtDALINaIPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtDALINaIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtDALINaIPara*>", -2, "vector", 339,
                  typeid(vector<TArtDALINaIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtDALINaIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtDALINaIPara*>) );
      instance.SetNew(&new_vectorlETArtDALINaIParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtDALINaIParamUgR);
      instance.SetDelete(&delete_vectorlETArtDALINaIParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtDALINaIParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtDALINaIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtDALINaIPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtDALINaIPara*>","std::vector<TArtDALINaIPara*, std::allocator<TArtDALINaIPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtDALINaIPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtDALINaIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtDALINaIPara*>*)0x0)->GetClass();
      vectorlETArtDALINaIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtDALINaIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtDALINaIParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtDALINaIPara*> : new vector<TArtDALINaIPara*>;
   }
   static void *newArray_vectorlETArtDALINaIParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtDALINaIPara*>[nElements] : new vector<TArtDALINaIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtDALINaIParamUgR(void *p) {
      delete ((vector<TArtDALINaIPara*>*)p);
   }
   static void deleteArray_vectorlETArtDALINaIParamUgR(void *p) {
      delete [] ((vector<TArtDALINaIPara*>*)p);
   }
   static void destruct_vectorlETArtDALINaIParamUgR(void *p) {
      typedef vector<TArtDALINaIPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtDALINaIPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtDALINaIParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtDALINaIParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtDALINaIParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtDALINaIParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtDALINaIParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtDALINaIParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtDALINaIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtDALINaIPara*>*)
   {
      map<TArtRIDFMap,TArtDALINaIPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtDALINaIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtDALINaIPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtDALINaIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtDALINaIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtDALINaIPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtDALINaIParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtDALINaIParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtDALINaIParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtDALINaIParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtDALINaIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtDALINaIPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtDALINaIPara*>","std::map<TArtRIDFMap, TArtDALINaIPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtDALINaIPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtDALINaIPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtDALINaIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtDALINaIPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtDALINaIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtDALINaIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtDALINaIParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtDALINaIPara*> : new map<TArtRIDFMap,TArtDALINaIPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtDALINaIParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtDALINaIPara*>[nElements] : new map<TArtRIDFMap,TArtDALINaIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtDALINaIParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtDALINaIPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtDALINaIParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtDALINaIPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtDALINaIParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtDALINaIPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtDALINaIPara*>

namespace {
  void TriggerDictionaryInitialization_anadali_dict_Impl() {
    static const char* headers[] = {
"include/TArtDALINaIPara.hh",
"include/TArtDALIParameters.hh",
"include/TArtCalibDALI.hh",
"include/TArtDALINaI.hh",
0
    };
    static const char* includePaths[] = {
"/opt/root/include",
"../../Core/include",
"../../Reconstruction/BigRIPS/include",
"../../Reconstruction/SAMURAI/include",
"/opt/root/include/",
"/home/quser/src/anaroot/sources/Reconstruction/DALI/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anadali_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TArtDALINaIPara.hh")))  TArtDALINaIPara;
class __attribute__((annotate("$clingAutoload$include/TArtDALIParameters.hh")))  TArtDALIParameters;
class __attribute__((annotate("$clingAutoload$include/TArtCalibDALI.hh")))  TArtCalibDALI;
class __attribute__((annotate("$clingAutoload$include/TArtDALINaI.hh")))  TArtDALINaI;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anadali_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtDALINaIPara.hh"
#include "include/TArtDALIParameters.hh"
#include "include/TArtCalibDALI.hh"
#include "include/TArtDALINaI.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtCalibDALI", payloadCode, "@",
"TArtDALINaI", payloadCode, "@",
"TArtDALINaIPara", payloadCode, "@",
"TArtDALIParameters", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anadali_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anadali_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anadali_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anadali_dict() {
  TriggerDictionaryInitialization_anadali_dict_Impl();
}
