// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anacatana_dict
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
#include "include/TArtCalibCATANA.hh"
#include "include/TArtCATANACsI.hh"
#include "include/TArtCATANACsIPara.hh"
#include "include/TArtCATANAParameters.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TArtCalibCATANA(void *p = 0);
   static void *newArray_TArtCalibCATANA(Long_t size, void *p);
   static void delete_TArtCalibCATANA(void *p);
   static void deleteArray_TArtCalibCATANA(void *p);
   static void destruct_TArtCalibCATANA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibCATANA*)
   {
      ::TArtCalibCATANA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibCATANA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibCATANA", ::TArtCalibCATANA::Class_Version(), "TArtCalibCATANA.hh", 17,
                  typeid(::TArtCalibCATANA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibCATANA::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibCATANA) );
      instance.SetNew(&new_TArtCalibCATANA);
      instance.SetNewArray(&newArray_TArtCalibCATANA);
      instance.SetDelete(&delete_TArtCalibCATANA);
      instance.SetDeleteArray(&deleteArray_TArtCalibCATANA);
      instance.SetDestructor(&destruct_TArtCalibCATANA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibCATANA*)
   {
      return GenerateInitInstanceLocal((::TArtCalibCATANA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCalibCATANA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCATANACsI(void *p = 0);
   static void *newArray_TArtCATANACsI(Long_t size, void *p);
   static void delete_TArtCATANACsI(void *p);
   static void deleteArray_TArtCATANACsI(void *p);
   static void destruct_TArtCATANACsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCATANACsI*)
   {
      ::TArtCATANACsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCATANACsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCATANACsI", ::TArtCATANACsI::Class_Version(), "TArtCATANACsI.hh", 6,
                  typeid(::TArtCATANACsI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCATANACsI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCATANACsI) );
      instance.SetNew(&new_TArtCATANACsI);
      instance.SetNewArray(&newArray_TArtCATANACsI);
      instance.SetDelete(&delete_TArtCATANACsI);
      instance.SetDeleteArray(&deleteArray_TArtCATANACsI);
      instance.SetDestructor(&destruct_TArtCATANACsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCATANACsI*)
   {
      return GenerateInitInstanceLocal((::TArtCATANACsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCATANACsI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCATANACsIPara(void *p = 0);
   static void *newArray_TArtCATANACsIPara(Long_t size, void *p);
   static void delete_TArtCATANACsIPara(void *p);
   static void deleteArray_TArtCATANACsIPara(void *p);
   static void destruct_TArtCATANACsIPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCATANACsIPara*)
   {
      ::TArtCATANACsIPara *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCATANACsIPara >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCATANACsIPara", ::TArtCATANACsIPara::Class_Version(), "TArtCATANACsIPara.hh", 9,
                  typeid(::TArtCATANACsIPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCATANACsIPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCATANACsIPara) );
      instance.SetNew(&new_TArtCATANACsIPara);
      instance.SetNewArray(&newArray_TArtCATANACsIPara);
      instance.SetDelete(&delete_TArtCATANACsIPara);
      instance.SetDeleteArray(&deleteArray_TArtCATANACsIPara);
      instance.SetDestructor(&destruct_TArtCATANACsIPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCATANACsIPara*)
   {
      return GenerateInitInstanceLocal((::TArtCATANACsIPara*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCATANAParameters(void *p = 0);
   static void *newArray_TArtCATANAParameters(Long_t size, void *p);
   static void delete_TArtCATANAParameters(void *p);
   static void deleteArray_TArtCATANAParameters(void *p);
   static void destruct_TArtCATANAParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCATANAParameters*)
   {
      ::TArtCATANAParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCATANAParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCATANAParameters", ::TArtCATANAParameters::Class_Version(), "TArtCATANAParameters.hh", 13,
                  typeid(::TArtCATANAParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCATANAParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCATANAParameters) );
      instance.SetNew(&new_TArtCATANAParameters);
      instance.SetNewArray(&newArray_TArtCATANAParameters);
      instance.SetDelete(&delete_TArtCATANAParameters);
      instance.SetDeleteArray(&deleteArray_TArtCATANAParameters);
      instance.SetDestructor(&destruct_TArtCATANAParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCATANAParameters*)
   {
      return GenerateInitInstanceLocal((::TArtCATANAParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TArtCATANAParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibCATANA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibCATANA::Class_Name()
{
   return "TArtCalibCATANA";
}

//______________________________________________________________________________
const char *TArtCalibCATANA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCATANA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibCATANA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCATANA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibCATANA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCATANA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibCATANA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCATANA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCATANACsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCATANACsI::Class_Name()
{
   return "TArtCATANACsI";
}

//______________________________________________________________________________
const char *TArtCATANACsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCATANACsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCATANACsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCATANACsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCATANACsIPara::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCATANACsIPara::Class_Name()
{
   return "TArtCATANACsIPara";
}

//______________________________________________________________________________
const char *TArtCATANACsIPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCATANACsIPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCATANACsIPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCATANACsIPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCATANAParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCATANAParameters::Class_Name()
{
   return "TArtCATANAParameters";
}

//______________________________________________________________________________
const char *TArtCATANAParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANAParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCATANAParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANAParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCATANAParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANAParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCATANAParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANAParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtCalibCATANA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibCATANA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibCATANA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibCATANA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibCATANA(void *p) {
      return  p ? new(p) ::TArtCalibCATANA : new ::TArtCalibCATANA;
   }
   static void *newArray_TArtCalibCATANA(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibCATANA[nElements] : new ::TArtCalibCATANA[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibCATANA(void *p) {
      delete ((::TArtCalibCATANA*)p);
   }
   static void deleteArray_TArtCalibCATANA(void *p) {
      delete [] ((::TArtCalibCATANA*)p);
   }
   static void destruct_TArtCalibCATANA(void *p) {
      typedef ::TArtCalibCATANA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibCATANA

//______________________________________________________________________________
void TArtCATANACsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCATANACsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCATANACsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCATANACsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCATANACsI(void *p) {
      return  p ? new(p) ::TArtCATANACsI : new ::TArtCATANACsI;
   }
   static void *newArray_TArtCATANACsI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCATANACsI[nElements] : new ::TArtCATANACsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCATANACsI(void *p) {
      delete ((::TArtCATANACsI*)p);
   }
   static void deleteArray_TArtCATANACsI(void *p) {
      delete [] ((::TArtCATANACsI*)p);
   }
   static void destruct_TArtCATANACsI(void *p) {
      typedef ::TArtCATANACsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCATANACsI

//______________________________________________________________________________
void TArtCATANACsIPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCATANACsIPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCATANACsIPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCATANACsIPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCATANACsIPara(void *p) {
      return  p ? new(p) ::TArtCATANACsIPara : new ::TArtCATANACsIPara;
   }
   static void *newArray_TArtCATANACsIPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCATANACsIPara[nElements] : new ::TArtCATANACsIPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCATANACsIPara(void *p) {
      delete ((::TArtCATANACsIPara*)p);
   }
   static void deleteArray_TArtCATANACsIPara(void *p) {
      delete [] ((::TArtCATANACsIPara*)p);
   }
   static void destruct_TArtCATANACsIPara(void *p) {
      typedef ::TArtCATANACsIPara current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCATANACsIPara

//______________________________________________________________________________
void TArtCATANAParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCATANAParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCATANAParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCATANAParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCATANAParameters(void *p) {
      return  p ? new(p) ::TArtCATANAParameters : new ::TArtCATANAParameters;
   }
   static void *newArray_TArtCATANAParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCATANAParameters[nElements] : new ::TArtCATANAParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCATANAParameters(void *p) {
      delete ((::TArtCATANAParameters*)p);
   }
   static void deleteArray_TArtCATANAParameters(void *p) {
      delete [] ((::TArtCATANAParameters*)p);
   }
   static void destruct_TArtCATANAParameters(void *p) {
      typedef ::TArtCATANAParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TArtCATANAParameters

namespace ROOT {
   static TClass *vectorlETArtCATANACsIParamUgR_Dictionary();
   static void vectorlETArtCATANACsIParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtCATANACsIParamUgR(void *p = 0);
   static void *newArray_vectorlETArtCATANACsIParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtCATANACsIParamUgR(void *p);
   static void deleteArray_vectorlETArtCATANACsIParamUgR(void *p);
   static void destruct_vectorlETArtCATANACsIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtCATANACsIPara*>*)
   {
      vector<TArtCATANACsIPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtCATANACsIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtCATANACsIPara*>", -2, "vector", 339,
                  typeid(vector<TArtCATANACsIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtCATANACsIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtCATANACsIPara*>) );
      instance.SetNew(&new_vectorlETArtCATANACsIParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtCATANACsIParamUgR);
      instance.SetDelete(&delete_vectorlETArtCATANACsIParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtCATANACsIParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtCATANACsIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtCATANACsIPara*> >()));

      ::ROOT::AddClassAlternate("vector<TArtCATANACsIPara*>","std::vector<TArtCATANACsIPara*, std::allocator<TArtCATANACsIPara*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TArtCATANACsIPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtCATANACsIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TArtCATANACsIPara*>*)0x0)->GetClass();
      vectorlETArtCATANACsIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtCATANACsIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtCATANACsIParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtCATANACsIPara*> : new vector<TArtCATANACsIPara*>;
   }
   static void *newArray_vectorlETArtCATANACsIParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TArtCATANACsIPara*>[nElements] : new vector<TArtCATANACsIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtCATANACsIParamUgR(void *p) {
      delete ((vector<TArtCATANACsIPara*>*)p);
   }
   static void deleteArray_vectorlETArtCATANACsIParamUgR(void *p) {
      delete [] ((vector<TArtCATANACsIPara*>*)p);
   }
   static void destruct_vectorlETArtCATANACsIParamUgR(void *p) {
      typedef vector<TArtCATANACsIPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TArtCATANACsIPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtCATANACsIParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtCATANACsIParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p = 0);
   static void *newArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtCATANACsIPara*>*)
   {
      map<TArtRIDFMap,TArtCATANACsIPara*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtCATANACsIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtCATANACsIPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtCATANACsIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtCATANACsIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtCATANACsIPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtCATANACsIPara*> >()));

      ::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtCATANACsIPara*>","std::map<TArtRIDFMap, TArtCATANACsIPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtCATANACsIPara*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtCATANACsIPara*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtCATANACsIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TArtRIDFMap,TArtCATANACsIPara*>*)0x0)->GetClass();
      maplETArtRIDFMapcOTArtCATANACsIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtCATANACsIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtCATANACsIPara*> : new map<TArtRIDFMap,TArtCATANACsIPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TArtRIDFMap,TArtCATANACsIPara*>[nElements] : new map<TArtRIDFMap,TArtCATANACsIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p) {
      delete ((map<TArtRIDFMap,TArtCATANACsIPara*>*)p);
   }
   static void deleteArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p) {
      delete [] ((map<TArtRIDFMap,TArtCATANACsIPara*>*)p);
   }
   static void destruct_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtCATANACsIPara*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtCATANACsIPara*>

namespace {
  void TriggerDictionaryInitialization_anacatana_dict_Impl() {
    static const char* headers[] = {
"include/TArtCalibCATANA.hh",
"include/TArtCATANACsI.hh",
"include/TArtCATANACsIPara.hh",
"include/TArtCATANAParameters.hh",
0
    };
    static const char* includePaths[] = {
"/opt/root/include",
"../../Core/include",
"../../Reconstruction/BigRIPS/include",
"../../Reconstruction/SAMURAI/include",
"/opt/root/include/",
"/home/quser/src/anaroot/sources/Reconstruction/CATANA/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anacatana_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TArtCalibCATANA.hh")))  TArtCalibCATANA;
class __attribute__((annotate("$clingAutoload$include/TArtCATANACsI.hh")))  TArtCATANACsI;
class __attribute__((annotate("$clingAutoload$include/TArtCATANACsIPara.hh")))  TArtCATANACsIPara;
class __attribute__((annotate("$clingAutoload$include/TArtCATANAParameters.hh")))  TArtCATANAParameters;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anacatana_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtCalibCATANA.hh"
#include "include/TArtCATANACsI.hh"
#include "include/TArtCATANACsIPara.hh"
#include "include/TArtCATANAParameters.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtCATANACsI", payloadCode, "@",
"TArtCATANACsIPara", payloadCode, "@",
"TArtCATANAParameters", payloadCode, "@",
"TArtCalibCATANA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anacatana_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anacatana_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anacatana_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anacatana_dict() {
  TriggerDictionaryInitialization_anacatana_dict_Impl();
}
