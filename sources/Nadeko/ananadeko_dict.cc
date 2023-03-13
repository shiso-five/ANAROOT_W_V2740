// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ananadeko_dict
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
#include "include/TArtAlias.hh"
#include "include/TArtSimpleFunction.hh"
#include "include/TArtExec.hh"
#include "include/TArtObjLinkManager.hh"
#include "include/TArtCanvasManager.hh"
#include "include/TArtGlobal.hh"
#include "include/TArtHistManager.hh"
#include "include/TArtTreeManager.hh"

// Header files passed via #pragma extra_include

namespace {
  void TriggerDictionaryInitialization_ananadeko_dict_Impl() {
    static const char* headers[] = {
"include/TArtAlias.hh",
"include/TArtSimpleFunction.hh",
"include/TArtExec.hh",
"include/TArtObjLinkManager.hh",
"include/TArtCanvasManager.hh",
"include/TArtGlobal.hh",
"include/TArtHistManager.hh",
"include/TArtTreeManager.hh",
0
    };
    static const char* includePaths[] = {
"/opt/root/include",
"/opt/root/include/",
"/home/quser/src/anaroot/sources/Nadeko/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ananadeko_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ananadeko_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtAlias.hh"
#include "include/TArtSimpleFunction.hh"
#include "include/TArtExec.hh"
#include "include/TArtObjLinkManager.hh"
#include "include/TArtCanvasManager.hh"
#include "include/TArtGlobal.hh"
#include "include/TArtHistManager.hh"
#include "include/TArtTreeManager.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"add", payloadCode, "@",
"blow", payloadCode, "@",
"blowx", payloadCode, "@",
"blowxyz", payloadCode, "@",
"blowy", payloadCode, "@",
"blowz", payloadCode, "@",
"bnx", payloadCode, "@",
"bny", payloadCode, "@",
"cd", payloadCode, "@",
"cdb", payloadCode, "@",
"cdn", payloadCode, "@",
"centertitle", payloadCode, "@",
"chbin", payloadCode, "@",
"cpro", payloadCode, "@",
"divide", payloadCode, "@",
"drawdumb", payloadCode, "@",
"erase", payloadCode, "@",
"fetch", payloadCode, "@",
"figa", payloadCode, "@",
"fit", payloadCode, "@",
"fite", payloadCode, "@",
"fitg", payloadCode, "@",
"fitl", payloadCode, "@",
"fitp", payloadCode, "@",
"gH1", payloadCode, "@",
"gTree", payloadCode, "@",
"gethist", payloadCode, "@",
"graphtune", payloadCode, "@",
"hb", payloadCode, "@",
"hdel", payloadCode, "@",
"hhb", payloadCode, "@",
"hhn", payloadCode, "@",
"hht", payloadCode, "@",
"hhtp", payloadCode, "@",
"hid", payloadCode, "@",
"histtune", payloadCode, "@",
"hn", payloadCode, "@",
"hsta", payloadCode, "@",
"hstore", payloadCode, "@",
"ht", payloadCode, "@",
"htp", payloadCode, "@",
"lg", payloadCode, "@",
"lgx", payloadCode, "@",
"lgy", payloadCode, "@",
"lgz", payloadCode, "@",
"ln", payloadCode, "@",
"lnx", payloadCode, "@",
"lny", payloadCode, "@",
"lnz", payloadCode, "@",
"ls", payloadCode, "@",
"mami", payloadCode, "@",
"multiply", payloadCode, "@",
"pfx", payloadCode, "@",
"pfy", payloadCode, "@",
"print", payloadCode, "@",
"prx", payloadCode, "@",
"pry", payloadCode, "@",
"raisewindow", payloadCode, "@",
"readall", payloadCode, "@",
"redrawframe", payloadCode, "@",
"scale", payloadCode, "@",
"setoption", payloadCode, "@",
"sfitgx", payloadCode, "@",
"sfitgy", payloadCode, "@",
"sh", payloadCode, "@",
"shift", payloadCode, "@",
"size", payloadCode, "@",
"slfitgx", payloadCode, "@",
"slfitgy", payloadCode, "@",
"slx", payloadCode, "@",
"sly", payloadCode, "@",
"sub", payloadCode, "@",
"tb", payloadCode, "@",
"tdel", payloadCode, "@",
"tn", payloadCode, "@",
"tt", payloadCode, "@",
"ttp", payloadCode, "@",
"unzoom", payloadCode, "@",
"update", payloadCode, "@",
"wait", payloadCode, "@",
"watch", payloadCode, "@",
"wiper", payloadCode, "@",
"xfite", payloadCode, "@",
"xfitg", payloadCode, "@",
"xfitl", payloadCode, "@",
"xfitp", payloadCode, "@",
"xsta", payloadCode, "@",
"xval", payloadCode, "@",
"xysta", payloadCode, "@",
"xyval", payloadCode, "@",
"yval", payloadCode, "@",
"zone", payloadCode, "@",
"zoom", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ananadeko_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ananadeko_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ananadeko_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ananadeko_dict() {
  TriggerDictionaryInitialization_ananadeko_dict_Impl();
}
