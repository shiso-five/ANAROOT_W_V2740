// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME analoopexample_dict
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
#include "include/TAlSAMURAIHODExample.hh"
#include "include/TAlGeExample.hh"
#include "include/TAlBigRIPSExample.hh"
#include "include/TAlDALIExample.hh"
#include "include/TAlWINDSExample.hh"
#include "include/TAlSAMURAIExample.hh"
#include "include/TAlSAMURAIDCExample.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TAlSAMURAIHODExample(void *p = 0);
   static void *newArray_TAlSAMURAIHODExample(Long_t size, void *p);
   static void delete_TAlSAMURAIHODExample(void *p);
   static void deleteArray_TAlSAMURAIHODExample(void *p);
   static void destruct_TAlSAMURAIHODExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlSAMURAIHODExample*)
   {
      ::TAlSAMURAIHODExample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlSAMURAIHODExample >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlSAMURAIHODExample", ::TAlSAMURAIHODExample::Class_Version(), "TAlSAMURAIHODExample.hh", 13,
                  typeid(::TAlSAMURAIHODExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlSAMURAIHODExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlSAMURAIHODExample) );
      instance.SetNew(&new_TAlSAMURAIHODExample);
      instance.SetNewArray(&newArray_TAlSAMURAIHODExample);
      instance.SetDelete(&delete_TAlSAMURAIHODExample);
      instance.SetDeleteArray(&deleteArray_TAlSAMURAIHODExample);
      instance.SetDestructor(&destruct_TAlSAMURAIHODExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlSAMURAIHODExample*)
   {
      return GenerateInitInstanceLocal((::TAlSAMURAIHODExample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlSAMURAIHODExample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlGeExample(void *p = 0);
   static void *newArray_TAlGeExample(Long_t size, void *p);
   static void delete_TAlGeExample(void *p);
   static void deleteArray_TAlGeExample(void *p);
   static void destruct_TAlGeExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlGeExample*)
   {
      ::TAlGeExample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlGeExample >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlGeExample", ::TAlGeExample::Class_Version(), "TAlGeExample.hh", 14,
                  typeid(::TAlGeExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlGeExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlGeExample) );
      instance.SetNew(&new_TAlGeExample);
      instance.SetNewArray(&newArray_TAlGeExample);
      instance.SetDelete(&delete_TAlGeExample);
      instance.SetDeleteArray(&deleteArray_TAlGeExample);
      instance.SetDestructor(&destruct_TAlGeExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlGeExample*)
   {
      return GenerateInitInstanceLocal((::TAlGeExample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlGeExample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlBigRIPSExample(void *p = 0);
   static void *newArray_TAlBigRIPSExample(Long_t size, void *p);
   static void delete_TAlBigRIPSExample(void *p);
   static void deleteArray_TAlBigRIPSExample(void *p);
   static void destruct_TAlBigRIPSExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlBigRIPSExample*)
   {
      ::TAlBigRIPSExample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlBigRIPSExample >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlBigRIPSExample", ::TAlBigRIPSExample::Class_Version(), "TAlBigRIPSExample.hh", 13,
                  typeid(::TAlBigRIPSExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlBigRIPSExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlBigRIPSExample) );
      instance.SetNew(&new_TAlBigRIPSExample);
      instance.SetNewArray(&newArray_TAlBigRIPSExample);
      instance.SetDelete(&delete_TAlBigRIPSExample);
      instance.SetDeleteArray(&deleteArray_TAlBigRIPSExample);
      instance.SetDestructor(&destruct_TAlBigRIPSExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlBigRIPSExample*)
   {
      return GenerateInitInstanceLocal((::TAlBigRIPSExample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlBigRIPSExample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlDALIExample(void *p = 0);
   static void *newArray_TAlDALIExample(Long_t size, void *p);
   static void delete_TAlDALIExample(void *p);
   static void deleteArray_TAlDALIExample(void *p);
   static void destruct_TAlDALIExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlDALIExample*)
   {
      ::TAlDALIExample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlDALIExample >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlDALIExample", ::TAlDALIExample::Class_Version(), "TAlDALIExample.hh", 14,
                  typeid(::TAlDALIExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlDALIExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlDALIExample) );
      instance.SetNew(&new_TAlDALIExample);
      instance.SetNewArray(&newArray_TAlDALIExample);
      instance.SetDelete(&delete_TAlDALIExample);
      instance.SetDeleteArray(&deleteArray_TAlDALIExample);
      instance.SetDestructor(&destruct_TAlDALIExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlDALIExample*)
   {
      return GenerateInitInstanceLocal((::TAlDALIExample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlDALIExample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlWINDSExample(void *p = 0);
   static void *newArray_TAlWINDSExample(Long_t size, void *p);
   static void delete_TAlWINDSExample(void *p);
   static void deleteArray_TAlWINDSExample(void *p);
   static void destruct_TAlWINDSExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlWINDSExample*)
   {
      ::TAlWINDSExample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlWINDSExample >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlWINDSExample", ::TAlWINDSExample::Class_Version(), "TAlWINDSExample.hh", 13,
                  typeid(::TAlWINDSExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlWINDSExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlWINDSExample) );
      instance.SetNew(&new_TAlWINDSExample);
      instance.SetNewArray(&newArray_TAlWINDSExample);
      instance.SetDelete(&delete_TAlWINDSExample);
      instance.SetDeleteArray(&deleteArray_TAlWINDSExample);
      instance.SetDestructor(&destruct_TAlWINDSExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlWINDSExample*)
   {
      return GenerateInitInstanceLocal((::TAlWINDSExample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlWINDSExample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlSAMURAIExample(void *p = 0);
   static void *newArray_TAlSAMURAIExample(Long_t size, void *p);
   static void delete_TAlSAMURAIExample(void *p);
   static void deleteArray_TAlSAMURAIExample(void *p);
   static void destruct_TAlSAMURAIExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlSAMURAIExample*)
   {
      ::TAlSAMURAIExample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlSAMURAIExample >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlSAMURAIExample", ::TAlSAMURAIExample::Class_Version(), "TAlSAMURAIExample.hh", 21,
                  typeid(::TAlSAMURAIExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlSAMURAIExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlSAMURAIExample) );
      instance.SetNew(&new_TAlSAMURAIExample);
      instance.SetNewArray(&newArray_TAlSAMURAIExample);
      instance.SetDelete(&delete_TAlSAMURAIExample);
      instance.SetDeleteArray(&deleteArray_TAlSAMURAIExample);
      instance.SetDestructor(&destruct_TAlSAMURAIExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlSAMURAIExample*)
   {
      return GenerateInitInstanceLocal((::TAlSAMURAIExample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlSAMURAIExample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlSAMURAIDCExample(void *p = 0);
   static void *newArray_TAlSAMURAIDCExample(Long_t size, void *p);
   static void delete_TAlSAMURAIDCExample(void *p);
   static void deleteArray_TAlSAMURAIDCExample(void *p);
   static void destruct_TAlSAMURAIDCExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlSAMURAIDCExample*)
   {
      ::TAlSAMURAIDCExample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlSAMURAIDCExample >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TAlSAMURAIDCExample", ::TAlSAMURAIDCExample::Class_Version(), "TAlSAMURAIDCExample.hh", 14,
                  typeid(::TAlSAMURAIDCExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlSAMURAIDCExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlSAMURAIDCExample) );
      instance.SetNew(&new_TAlSAMURAIDCExample);
      instance.SetNewArray(&newArray_TAlSAMURAIDCExample);
      instance.SetDelete(&delete_TAlSAMURAIDCExample);
      instance.SetDeleteArray(&deleteArray_TAlSAMURAIDCExample);
      instance.SetDestructor(&destruct_TAlSAMURAIDCExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlSAMURAIDCExample*)
   {
      return GenerateInitInstanceLocal((::TAlSAMURAIDCExample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAlSAMURAIDCExample*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAlSAMURAIHODExample::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlSAMURAIHODExample::Class_Name()
{
   return "TAlSAMURAIHODExample";
}

//______________________________________________________________________________
const char *TAlSAMURAIHODExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIHODExample*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlSAMURAIHODExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIHODExample*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlSAMURAIHODExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIHODExample*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlSAMURAIHODExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIHODExample*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlGeExample::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlGeExample::Class_Name()
{
   return "TAlGeExample";
}

//______________________________________________________________________________
const char *TAlGeExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlGeExample*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlGeExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlGeExample*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlGeExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlGeExample*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlGeExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlGeExample*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlBigRIPSExample::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlBigRIPSExample::Class_Name()
{
   return "TAlBigRIPSExample";
}

//______________________________________________________________________________
const char *TAlBigRIPSExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlBigRIPSExample*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlBigRIPSExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlBigRIPSExample*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlBigRIPSExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlBigRIPSExample*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlBigRIPSExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlBigRIPSExample*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlDALIExample::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlDALIExample::Class_Name()
{
   return "TAlDALIExample";
}

//______________________________________________________________________________
const char *TAlDALIExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlDALIExample*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlDALIExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlDALIExample*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlDALIExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlDALIExample*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlDALIExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlDALIExample*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlWINDSExample::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlWINDSExample::Class_Name()
{
   return "TAlWINDSExample";
}

//______________________________________________________________________________
const char *TAlWINDSExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlWINDSExample*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlWINDSExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlWINDSExample*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlWINDSExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlWINDSExample*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlWINDSExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlWINDSExample*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlSAMURAIExample::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlSAMURAIExample::Class_Name()
{
   return "TAlSAMURAIExample";
}

//______________________________________________________________________________
const char *TAlSAMURAIExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIExample*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlSAMURAIExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIExample*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlSAMURAIExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIExample*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlSAMURAIExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIExample*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlSAMURAIDCExample::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlSAMURAIDCExample::Class_Name()
{
   return "TAlSAMURAIDCExample";
}

//______________________________________________________________________________
const char *TAlSAMURAIDCExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIDCExample*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TAlSAMURAIDCExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIDCExample*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlSAMURAIDCExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIDCExample*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlSAMURAIDCExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlSAMURAIDCExample*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAlSAMURAIHODExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlSAMURAIHODExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlSAMURAIHODExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlSAMURAIHODExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlSAMURAIHODExample(void *p) {
      return  p ? new(p) ::TAlSAMURAIHODExample : new ::TAlSAMURAIHODExample;
   }
   static void *newArray_TAlSAMURAIHODExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlSAMURAIHODExample[nElements] : new ::TAlSAMURAIHODExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlSAMURAIHODExample(void *p) {
      delete ((::TAlSAMURAIHODExample*)p);
   }
   static void deleteArray_TAlSAMURAIHODExample(void *p) {
      delete [] ((::TAlSAMURAIHODExample*)p);
   }
   static void destruct_TAlSAMURAIHODExample(void *p) {
      typedef ::TAlSAMURAIHODExample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlSAMURAIHODExample

//______________________________________________________________________________
void TAlGeExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlGeExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlGeExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlGeExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlGeExample(void *p) {
      return  p ? new(p) ::TAlGeExample : new ::TAlGeExample;
   }
   static void *newArray_TAlGeExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlGeExample[nElements] : new ::TAlGeExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlGeExample(void *p) {
      delete ((::TAlGeExample*)p);
   }
   static void deleteArray_TAlGeExample(void *p) {
      delete [] ((::TAlGeExample*)p);
   }
   static void destruct_TAlGeExample(void *p) {
      typedef ::TAlGeExample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlGeExample

//______________________________________________________________________________
void TAlBigRIPSExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlBigRIPSExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlBigRIPSExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlBigRIPSExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlBigRIPSExample(void *p) {
      return  p ? new(p) ::TAlBigRIPSExample : new ::TAlBigRIPSExample;
   }
   static void *newArray_TAlBigRIPSExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlBigRIPSExample[nElements] : new ::TAlBigRIPSExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlBigRIPSExample(void *p) {
      delete ((::TAlBigRIPSExample*)p);
   }
   static void deleteArray_TAlBigRIPSExample(void *p) {
      delete [] ((::TAlBigRIPSExample*)p);
   }
   static void destruct_TAlBigRIPSExample(void *p) {
      typedef ::TAlBigRIPSExample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlBigRIPSExample

//______________________________________________________________________________
void TAlDALIExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlDALIExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlDALIExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlDALIExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlDALIExample(void *p) {
      return  p ? new(p) ::TAlDALIExample : new ::TAlDALIExample;
   }
   static void *newArray_TAlDALIExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlDALIExample[nElements] : new ::TAlDALIExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlDALIExample(void *p) {
      delete ((::TAlDALIExample*)p);
   }
   static void deleteArray_TAlDALIExample(void *p) {
      delete [] ((::TAlDALIExample*)p);
   }
   static void destruct_TAlDALIExample(void *p) {
      typedef ::TAlDALIExample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlDALIExample

//______________________________________________________________________________
void TAlWINDSExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlWINDSExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlWINDSExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlWINDSExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlWINDSExample(void *p) {
      return  p ? new(p) ::TAlWINDSExample : new ::TAlWINDSExample;
   }
   static void *newArray_TAlWINDSExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlWINDSExample[nElements] : new ::TAlWINDSExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlWINDSExample(void *p) {
      delete ((::TAlWINDSExample*)p);
   }
   static void deleteArray_TAlWINDSExample(void *p) {
      delete [] ((::TAlWINDSExample*)p);
   }
   static void destruct_TAlWINDSExample(void *p) {
      typedef ::TAlWINDSExample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlWINDSExample

//______________________________________________________________________________
void TAlSAMURAIExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlSAMURAIExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlSAMURAIExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlSAMURAIExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlSAMURAIExample(void *p) {
      return  p ? new(p) ::TAlSAMURAIExample : new ::TAlSAMURAIExample;
   }
   static void *newArray_TAlSAMURAIExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlSAMURAIExample[nElements] : new ::TAlSAMURAIExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlSAMURAIExample(void *p) {
      delete ((::TAlSAMURAIExample*)p);
   }
   static void deleteArray_TAlSAMURAIExample(void *p) {
      delete [] ((::TAlSAMURAIExample*)p);
   }
   static void destruct_TAlSAMURAIExample(void *p) {
      typedef ::TAlSAMURAIExample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlSAMURAIExample

//______________________________________________________________________________
void TAlSAMURAIDCExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlSAMURAIDCExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlSAMURAIDCExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlSAMURAIDCExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlSAMURAIDCExample(void *p) {
      return  p ? new(p) ::TAlSAMURAIDCExample : new ::TAlSAMURAIDCExample;
   }
   static void *newArray_TAlSAMURAIDCExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlSAMURAIDCExample[nElements] : new ::TAlSAMURAIDCExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlSAMURAIDCExample(void *p) {
      delete ((::TAlSAMURAIDCExample*)p);
   }
   static void deleteArray_TAlSAMURAIDCExample(void *p) {
      delete [] ((::TAlSAMURAIDCExample*)p);
   }
   static void destruct_TAlSAMURAIDCExample(void *p) {
      typedef ::TAlSAMURAIDCExample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TAlSAMURAIDCExample

namespace {
  void TriggerDictionaryInitialization_analoopexample_dict_Impl() {
    static const char* headers[] = {
"include/TAlSAMURAIHODExample.hh",
"include/TAlGeExample.hh",
"include/TAlBigRIPSExample.hh",
"include/TAlDALIExample.hh",
"include/TAlWINDSExample.hh",
"include/TAlSAMURAIExample.hh",
"include/TAlSAMURAIDCExample.hh",
0
    };
    static const char* includePaths[] = {
"/opt/root/include",
"../Core/include",
"../../Core/include",
"../../Nadeko/include",
"../../Reconstruction/WINDS/include",
"../../Reconstruction/DALI/include",
"../../Reconstruction/MINOS/include",
"../../Reconstruction/BigRIPS/include",
"../../Reconstruction/CATANA/include",
"../../Reconstruction/SILICONS/include",
"../../Reconstruction/SAMURAI/include",
"../../Reconstruction/ESPRI/include",
"/opt/root/include/",
"/home/quser/src/anaroot/sources/AnaLoop/Example/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "analoopexample_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TAlSAMURAIHODExample.hh")))  TAlSAMURAIHODExample;
class __attribute__((annotate("$clingAutoload$include/TAlGeExample.hh")))  TAlGeExample;
class __attribute__((annotate("$clingAutoload$include/TAlBigRIPSExample.hh")))  TAlBigRIPSExample;
class __attribute__((annotate("$clingAutoload$include/TAlDALIExample.hh")))  TAlDALIExample;
class __attribute__((annotate("$clingAutoload$include/TAlWINDSExample.hh")))  TAlWINDSExample;
class __attribute__((annotate("$clingAutoload$include/TAlSAMURAIExample.hh")))  TAlSAMURAIExample;
class __attribute__((annotate("$clingAutoload$include/TAlSAMURAIDCExample.hh")))  TAlSAMURAIDCExample;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "analoopexample_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TAlSAMURAIHODExample.hh"
#include "include/TAlGeExample.hh"
#include "include/TAlBigRIPSExample.hh"
#include "include/TAlDALIExample.hh"
#include "include/TAlWINDSExample.hh"
#include "include/TAlSAMURAIExample.hh"
#include "include/TAlSAMURAIDCExample.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TAlBigRIPSExample", payloadCode, "@",
"TAlDALIExample", payloadCode, "@",
"TAlGeExample", payloadCode, "@",
"TAlSAMURAIDCExample", payloadCode, "@",
"TAlSAMURAIExample", payloadCode, "@",
"TAlSAMURAIHODExample", payloadCode, "@",
"TAlWINDSExample", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("analoopexample_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_analoopexample_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_analoopexample_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_analoopexample_dict() {
  TriggerDictionaryInitialization_analoopexample_dict_Impl();
}
