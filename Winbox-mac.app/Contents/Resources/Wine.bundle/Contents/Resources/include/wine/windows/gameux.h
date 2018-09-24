/*** Autogenerated by WIDL 1.8.2 from gameux.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __gameux_h__
#define __gameux_h__

/* Forward declarations */

#ifndef __IGameExplorer_FWD_DEFINED__
#define __IGameExplorer_FWD_DEFINED__
typedef interface IGameExplorer IGameExplorer;
#ifdef __cplusplus
interface IGameExplorer;
#endif /* __cplusplus */
#endif

#ifndef __IGameStatistics_FWD_DEFINED__
#define __IGameStatistics_FWD_DEFINED__
typedef interface IGameStatistics IGameStatistics;
#ifdef __cplusplus
interface IGameStatistics;
#endif /* __cplusplus */
#endif

#ifndef __IGameStatisticsMgr_FWD_DEFINED__
#define __IGameStatisticsMgr_FWD_DEFINED__
typedef interface IGameStatisticsMgr IGameStatisticsMgr;
#ifdef __cplusplus
interface IGameStatisticsMgr;
#endif /* __cplusplus */
#endif

#ifndef __IGameExplorer2_FWD_DEFINED__
#define __IGameExplorer2_FWD_DEFINED__
typedef interface IGameExplorer2 IGameExplorer2;
#ifdef __cplusplus
interface IGameExplorer2;
#endif /* __cplusplus */
#endif

#ifndef __GameExplorer_FWD_DEFINED__
#define __GameExplorer_FWD_DEFINED__
#ifdef __cplusplus
typedef class GameExplorer GameExplorer;
#else
typedef struct GameExplorer GameExplorer;
#endif /* defined __cplusplus */
#endif /* defined __GameExplorer_FWD_DEFINED__ */

#ifndef __GameStatistics_FWD_DEFINED__
#define __GameStatistics_FWD_DEFINED__
#ifdef __cplusplus
typedef class GameStatistics GameStatistics;
#else
typedef struct GameStatistics GameStatistics;
#endif /* defined __cplusplus */
#endif /* defined __GameStatistics_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <shobjidl.h>

#ifdef __cplusplus
extern "C" {
#endif


DEFINE_GUID(LIBID_gameuxLib, 0x4f48a59c, 0x942d, 0x4f3c, 0x83,0xc9, 0x4e,0xff,0xe8,0x4e,0x49,0x59);

#define ID_GDF_XML __GDF_XML
#define ID_GDF_THUMBNAIL __GDF_THUMBNAIL
#define ID_ICON_ICO __ICON_ICO
#if defined(__GNUC__)
#define ID_GDF_XML_STR (const WCHAR[]){'_','_','G','D','F','_','X','M','L',0}
#define ID_GDF_THUMBNAIL_STR (const WCHAR[]){'_','_','G','D','F','_','T','H','U','M','B','N','A','I','L',0}
#elif defined(_MSC_VER)
#define ID_GDF_XML_STR L"__GDF_XML"
#define ID_GDF_THUMBNAIL_STR L"__GDF_THUMBNAIL"
#endif
typedef enum __WIDL_gameux_generated_name_00000021 {
    GIS_NOT_INSTALLED = 1,
    GIS_CURRENT_USER = 2,
    GIS_ALL_USERS = 3
} GAME_INSTALL_SCOPE;
typedef enum __WIDL_gameux_generated_name_00000022 {
    GAMESTATS_OPEN_OPENORCREATE = 0,
    GAMESTATS_OPEN_OPENONLY = 1
} GAMESTATS_OPEN_TYPE;
typedef enum __WIDL_gameux_generated_name_00000023 {
    GAMESTATS_OPEN_CREATED = 0,
    GAMESTATS_OPEN_OPENED = 1
} GAMESTATS_OPEN_RESULT;
/*****************************************************************************
 * IGameExplorer interface
 */
#ifndef __IGameExplorer_INTERFACE_DEFINED__
#define __IGameExplorer_INTERFACE_DEFINED__

DEFINE_GUID(IID_IGameExplorer, 0xe7b2fb72, 0xd728, 0x49b3, 0xa5,0xf2, 0x18,0xeb,0xf5,0xf1,0x34,0x9e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e7b2fb72-d728-49b3-a5f2-18ebf5f1349e")
IGameExplorer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AddGame(
        BSTR sGDFBinaryPath,
        BSTR sInstallDirectory,
        GAME_INSTALL_SCOPE installScope,
        GUID *pguidInstanceID) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveGame(
        GUID instanceID) = 0;

    virtual HRESULT STDMETHODCALLTYPE UpdateGame(
        GUID instanceID) = 0;

    virtual HRESULT STDMETHODCALLTYPE VerifyAccess(
        BSTR sGDFBinaryPath,
        BOOL *pHasAccess) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IGameExplorer, 0xe7b2fb72, 0xd728, 0x49b3, 0xa5,0xf2, 0x18,0xeb,0xf5,0xf1,0x34,0x9e)
#endif
#else
typedef struct IGameExplorerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGameExplorer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGameExplorer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGameExplorer *This);

    /*** IGameExplorer methods ***/
    HRESULT (STDMETHODCALLTYPE *AddGame)(
        IGameExplorer *This,
        BSTR sGDFBinaryPath,
        BSTR sInstallDirectory,
        GAME_INSTALL_SCOPE installScope,
        GUID *pguidInstanceID);

    HRESULT (STDMETHODCALLTYPE *RemoveGame)(
        IGameExplorer *This,
        GUID instanceID);

    HRESULT (STDMETHODCALLTYPE *UpdateGame)(
        IGameExplorer *This,
        GUID instanceID);

    HRESULT (STDMETHODCALLTYPE *VerifyAccess)(
        IGameExplorer *This,
        BSTR sGDFBinaryPath,
        BOOL *pHasAccess);

    END_INTERFACE
} IGameExplorerVtbl;

interface IGameExplorer {
    CONST_VTBL IGameExplorerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IGameExplorer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IGameExplorer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IGameExplorer_Release(This) (This)->lpVtbl->Release(This)
/*** IGameExplorer methods ***/
#define IGameExplorer_AddGame(This,sGDFBinaryPath,sInstallDirectory,installScope,pguidInstanceID) (This)->lpVtbl->AddGame(This,sGDFBinaryPath,sInstallDirectory,installScope,pguidInstanceID)
#define IGameExplorer_RemoveGame(This,instanceID) (This)->lpVtbl->RemoveGame(This,instanceID)
#define IGameExplorer_UpdateGame(This,instanceID) (This)->lpVtbl->UpdateGame(This,instanceID)
#define IGameExplorer_VerifyAccess(This,sGDFBinaryPath,pHasAccess) (This)->lpVtbl->VerifyAccess(This,sGDFBinaryPath,pHasAccess)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IGameExplorer_QueryInterface(IGameExplorer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IGameExplorer_AddRef(IGameExplorer* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IGameExplorer_Release(IGameExplorer* This) {
    return This->lpVtbl->Release(This);
}
/*** IGameExplorer methods ***/
static FORCEINLINE HRESULT IGameExplorer_AddGame(IGameExplorer* This,BSTR sGDFBinaryPath,BSTR sInstallDirectory,GAME_INSTALL_SCOPE installScope,GUID *pguidInstanceID) {
    return This->lpVtbl->AddGame(This,sGDFBinaryPath,sInstallDirectory,installScope,pguidInstanceID);
}
static FORCEINLINE HRESULT IGameExplorer_RemoveGame(IGameExplorer* This,GUID instanceID) {
    return This->lpVtbl->RemoveGame(This,instanceID);
}
static FORCEINLINE HRESULT IGameExplorer_UpdateGame(IGameExplorer* This,GUID instanceID) {
    return This->lpVtbl->UpdateGame(This,instanceID);
}
static FORCEINLINE HRESULT IGameExplorer_VerifyAccess(IGameExplorer* This,BSTR sGDFBinaryPath,BOOL *pHasAccess) {
    return This->lpVtbl->VerifyAccess(This,sGDFBinaryPath,pHasAccess);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IGameExplorer_AddGame_Proxy(
    IGameExplorer* This,
    BSTR sGDFBinaryPath,
    BSTR sInstallDirectory,
    GAME_INSTALL_SCOPE installScope,
    GUID *pguidInstanceID);
void __RPC_STUB IGameExplorer_AddGame_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameExplorer_RemoveGame_Proxy(
    IGameExplorer* This,
    GUID instanceID);
void __RPC_STUB IGameExplorer_RemoveGame_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameExplorer_UpdateGame_Proxy(
    IGameExplorer* This,
    GUID instanceID);
void __RPC_STUB IGameExplorer_UpdateGame_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameExplorer_VerifyAccess_Proxy(
    IGameExplorer* This,
    BSTR sGDFBinaryPath,
    BOOL *pHasAccess);
void __RPC_STUB IGameExplorer_VerifyAccess_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IGameExplorer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IGameStatistics interface
 */
#ifndef __IGameStatistics_INTERFACE_DEFINED__
#define __IGameStatistics_INTERFACE_DEFINED__

DEFINE_GUID(IID_IGameStatistics, 0x3887c9ca, 0x04a0, 0x42ae, 0xbc,0x4c, 0x5f,0xa6,0xc7,0x72,0x11,0x45);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3887c9ca-04a0-42ae-bc4c-5fa6c7721145")
IGameStatistics : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetMaxCategoryLength(
        UINT *cch) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxNameLength(
        UINT *cch) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxValueLength(
        UINT *cch) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxCategories(
        WORD *pMax) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxStatsPerCategory(
        WORD *pMax) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetCategoryTitle(
        WORD categoryIndex,
        LPCWSTR title) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCategoryTitle(
        WORD categoryIndex,
        LPWSTR *pTitle) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStatistic(
        WORD categoryIndex,
        WORD statIndex,
        LPWSTR *pName,
        LPWSTR *pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStatistic(
        WORD categoryIndex,
        WORD statIndex,
        LPCWSTR name,
        LPCWSTR value) = 0;

    virtual HRESULT STDMETHODCALLTYPE Save(
        BOOL trackChanges) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetLastPlayedCategory(
        UINT categoryIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLastPlayedCategory(
        UINT *pCategoryIndex) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IGameStatistics, 0x3887c9ca, 0x04a0, 0x42ae, 0xbc,0x4c, 0x5f,0xa6,0xc7,0x72,0x11,0x45)
#endif
#else
typedef struct IGameStatisticsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGameStatistics *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGameStatistics *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGameStatistics *This);

    /*** IGameStatistics methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMaxCategoryLength)(
        IGameStatistics *This,
        UINT *cch);

    HRESULT (STDMETHODCALLTYPE *GetMaxNameLength)(
        IGameStatistics *This,
        UINT *cch);

    HRESULT (STDMETHODCALLTYPE *GetMaxValueLength)(
        IGameStatistics *This,
        UINT *cch);

    HRESULT (STDMETHODCALLTYPE *GetMaxCategories)(
        IGameStatistics *This,
        WORD *pMax);

    HRESULT (STDMETHODCALLTYPE *GetMaxStatsPerCategory)(
        IGameStatistics *This,
        WORD *pMax);

    HRESULT (STDMETHODCALLTYPE *SetCategoryTitle)(
        IGameStatistics *This,
        WORD categoryIndex,
        LPCWSTR title);

    HRESULT (STDMETHODCALLTYPE *GetCategoryTitle)(
        IGameStatistics *This,
        WORD categoryIndex,
        LPWSTR *pTitle);

    HRESULT (STDMETHODCALLTYPE *GetStatistic)(
        IGameStatistics *This,
        WORD categoryIndex,
        WORD statIndex,
        LPWSTR *pName,
        LPWSTR *pValue);

    HRESULT (STDMETHODCALLTYPE *SetStatistic)(
        IGameStatistics *This,
        WORD categoryIndex,
        WORD statIndex,
        LPCWSTR name,
        LPCWSTR value);

    HRESULT (STDMETHODCALLTYPE *Save)(
        IGameStatistics *This,
        BOOL trackChanges);

    HRESULT (STDMETHODCALLTYPE *SetLastPlayedCategory)(
        IGameStatistics *This,
        UINT categoryIndex);

    HRESULT (STDMETHODCALLTYPE *GetLastPlayedCategory)(
        IGameStatistics *This,
        UINT *pCategoryIndex);

    END_INTERFACE
} IGameStatisticsVtbl;

interface IGameStatistics {
    CONST_VTBL IGameStatisticsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IGameStatistics_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IGameStatistics_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IGameStatistics_Release(This) (This)->lpVtbl->Release(This)
/*** IGameStatistics methods ***/
#define IGameStatistics_GetMaxCategoryLength(This,cch) (This)->lpVtbl->GetMaxCategoryLength(This,cch)
#define IGameStatistics_GetMaxNameLength(This,cch) (This)->lpVtbl->GetMaxNameLength(This,cch)
#define IGameStatistics_GetMaxValueLength(This,cch) (This)->lpVtbl->GetMaxValueLength(This,cch)
#define IGameStatistics_GetMaxCategories(This,pMax) (This)->lpVtbl->GetMaxCategories(This,pMax)
#define IGameStatistics_GetMaxStatsPerCategory(This,pMax) (This)->lpVtbl->GetMaxStatsPerCategory(This,pMax)
#define IGameStatistics_SetCategoryTitle(This,categoryIndex,title) (This)->lpVtbl->SetCategoryTitle(This,categoryIndex,title)
#define IGameStatistics_GetCategoryTitle(This,categoryIndex,pTitle) (This)->lpVtbl->GetCategoryTitle(This,categoryIndex,pTitle)
#define IGameStatistics_GetStatistic(This,categoryIndex,statIndex,pName,pValue) (This)->lpVtbl->GetStatistic(This,categoryIndex,statIndex,pName,pValue)
#define IGameStatistics_SetStatistic(This,categoryIndex,statIndex,name,value) (This)->lpVtbl->SetStatistic(This,categoryIndex,statIndex,name,value)
#define IGameStatistics_Save(This,trackChanges) (This)->lpVtbl->Save(This,trackChanges)
#define IGameStatistics_SetLastPlayedCategory(This,categoryIndex) (This)->lpVtbl->SetLastPlayedCategory(This,categoryIndex)
#define IGameStatistics_GetLastPlayedCategory(This,pCategoryIndex) (This)->lpVtbl->GetLastPlayedCategory(This,pCategoryIndex)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IGameStatistics_QueryInterface(IGameStatistics* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IGameStatistics_AddRef(IGameStatistics* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IGameStatistics_Release(IGameStatistics* This) {
    return This->lpVtbl->Release(This);
}
/*** IGameStatistics methods ***/
static FORCEINLINE HRESULT IGameStatistics_GetMaxCategoryLength(IGameStatistics* This,UINT *cch) {
    return This->lpVtbl->GetMaxCategoryLength(This,cch);
}
static FORCEINLINE HRESULT IGameStatistics_GetMaxNameLength(IGameStatistics* This,UINT *cch) {
    return This->lpVtbl->GetMaxNameLength(This,cch);
}
static FORCEINLINE HRESULT IGameStatistics_GetMaxValueLength(IGameStatistics* This,UINT *cch) {
    return This->lpVtbl->GetMaxValueLength(This,cch);
}
static FORCEINLINE HRESULT IGameStatistics_GetMaxCategories(IGameStatistics* This,WORD *pMax) {
    return This->lpVtbl->GetMaxCategories(This,pMax);
}
static FORCEINLINE HRESULT IGameStatistics_GetMaxStatsPerCategory(IGameStatistics* This,WORD *pMax) {
    return This->lpVtbl->GetMaxStatsPerCategory(This,pMax);
}
static FORCEINLINE HRESULT IGameStatistics_SetCategoryTitle(IGameStatistics* This,WORD categoryIndex,LPCWSTR title) {
    return This->lpVtbl->SetCategoryTitle(This,categoryIndex,title);
}
static FORCEINLINE HRESULT IGameStatistics_GetCategoryTitle(IGameStatistics* This,WORD categoryIndex,LPWSTR *pTitle) {
    return This->lpVtbl->GetCategoryTitle(This,categoryIndex,pTitle);
}
static FORCEINLINE HRESULT IGameStatistics_GetStatistic(IGameStatistics* This,WORD categoryIndex,WORD statIndex,LPWSTR *pName,LPWSTR *pValue) {
    return This->lpVtbl->GetStatistic(This,categoryIndex,statIndex,pName,pValue);
}
static FORCEINLINE HRESULT IGameStatistics_SetStatistic(IGameStatistics* This,WORD categoryIndex,WORD statIndex,LPCWSTR name,LPCWSTR value) {
    return This->lpVtbl->SetStatistic(This,categoryIndex,statIndex,name,value);
}
static FORCEINLINE HRESULT IGameStatistics_Save(IGameStatistics* This,BOOL trackChanges) {
    return This->lpVtbl->Save(This,trackChanges);
}
static FORCEINLINE HRESULT IGameStatistics_SetLastPlayedCategory(IGameStatistics* This,UINT categoryIndex) {
    return This->lpVtbl->SetLastPlayedCategory(This,categoryIndex);
}
static FORCEINLINE HRESULT IGameStatistics_GetLastPlayedCategory(IGameStatistics* This,UINT *pCategoryIndex) {
    return This->lpVtbl->GetLastPlayedCategory(This,pCategoryIndex);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IGameStatistics_GetMaxCategoryLength_Proxy(
    IGameStatistics* This,
    UINT *cch);
void __RPC_STUB IGameStatistics_GetMaxCategoryLength_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_GetMaxNameLength_Proxy(
    IGameStatistics* This,
    UINT *cch);
void __RPC_STUB IGameStatistics_GetMaxNameLength_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_GetMaxValueLength_Proxy(
    IGameStatistics* This,
    UINT *cch);
void __RPC_STUB IGameStatistics_GetMaxValueLength_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_GetMaxCategories_Proxy(
    IGameStatistics* This,
    WORD *pMax);
void __RPC_STUB IGameStatistics_GetMaxCategories_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_GetMaxStatsPerCategory_Proxy(
    IGameStatistics* This,
    WORD *pMax);
void __RPC_STUB IGameStatistics_GetMaxStatsPerCategory_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_SetCategoryTitle_Proxy(
    IGameStatistics* This,
    WORD categoryIndex,
    LPCWSTR title);
void __RPC_STUB IGameStatistics_SetCategoryTitle_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_GetCategoryTitle_Proxy(
    IGameStatistics* This,
    WORD categoryIndex,
    LPWSTR *pTitle);
void __RPC_STUB IGameStatistics_GetCategoryTitle_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_GetStatistic_Proxy(
    IGameStatistics* This,
    WORD categoryIndex,
    WORD statIndex,
    LPWSTR *pName,
    LPWSTR *pValue);
void __RPC_STUB IGameStatistics_GetStatistic_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_SetStatistic_Proxy(
    IGameStatistics* This,
    WORD categoryIndex,
    WORD statIndex,
    LPCWSTR name,
    LPCWSTR value);
void __RPC_STUB IGameStatistics_SetStatistic_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_Save_Proxy(
    IGameStatistics* This,
    BOOL trackChanges);
void __RPC_STUB IGameStatistics_Save_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_SetLastPlayedCategory_Proxy(
    IGameStatistics* This,
    UINT categoryIndex);
void __RPC_STUB IGameStatistics_SetLastPlayedCategory_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatistics_GetLastPlayedCategory_Proxy(
    IGameStatistics* This,
    UINT *pCategoryIndex);
void __RPC_STUB IGameStatistics_GetLastPlayedCategory_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IGameStatistics_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IGameStatisticsMgr interface
 */
#ifndef __IGameStatisticsMgr_INTERFACE_DEFINED__
#define __IGameStatisticsMgr_INTERFACE_DEFINED__

DEFINE_GUID(IID_IGameStatisticsMgr, 0xaff3ea11, 0xe70e, 0x407d, 0x95,0xdd, 0x35,0xe6,0x12,0xc4,0x1c,0xe2);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("aff3ea11-e70e-407d-95dd-35e612c41ce2")
IGameStatisticsMgr : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetGameStatistics(
        LPCWSTR GDFBinaryPath,
        GAMESTATS_OPEN_TYPE openType,
        GAMESTATS_OPEN_RESULT *pOpenResult,
        IGameStatistics **ppiStats) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveGameStatistics(
        LPCWSTR GDFBinaryPath) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IGameStatisticsMgr, 0xaff3ea11, 0xe70e, 0x407d, 0x95,0xdd, 0x35,0xe6,0x12,0xc4,0x1c,0xe2)
#endif
#else
typedef struct IGameStatisticsMgrVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGameStatisticsMgr *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGameStatisticsMgr *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGameStatisticsMgr *This);

    /*** IGameStatisticsMgr methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGameStatistics)(
        IGameStatisticsMgr *This,
        LPCWSTR GDFBinaryPath,
        GAMESTATS_OPEN_TYPE openType,
        GAMESTATS_OPEN_RESULT *pOpenResult,
        IGameStatistics **ppiStats);

    HRESULT (STDMETHODCALLTYPE *RemoveGameStatistics)(
        IGameStatisticsMgr *This,
        LPCWSTR GDFBinaryPath);

    END_INTERFACE
} IGameStatisticsMgrVtbl;

interface IGameStatisticsMgr {
    CONST_VTBL IGameStatisticsMgrVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IGameStatisticsMgr_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IGameStatisticsMgr_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IGameStatisticsMgr_Release(This) (This)->lpVtbl->Release(This)
/*** IGameStatisticsMgr methods ***/
#define IGameStatisticsMgr_GetGameStatistics(This,GDFBinaryPath,openType,pOpenResult,ppiStats) (This)->lpVtbl->GetGameStatistics(This,GDFBinaryPath,openType,pOpenResult,ppiStats)
#define IGameStatisticsMgr_RemoveGameStatistics(This,GDFBinaryPath) (This)->lpVtbl->RemoveGameStatistics(This,GDFBinaryPath)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IGameStatisticsMgr_QueryInterface(IGameStatisticsMgr* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IGameStatisticsMgr_AddRef(IGameStatisticsMgr* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IGameStatisticsMgr_Release(IGameStatisticsMgr* This) {
    return This->lpVtbl->Release(This);
}
/*** IGameStatisticsMgr methods ***/
static FORCEINLINE HRESULT IGameStatisticsMgr_GetGameStatistics(IGameStatisticsMgr* This,LPCWSTR GDFBinaryPath,GAMESTATS_OPEN_TYPE openType,GAMESTATS_OPEN_RESULT *pOpenResult,IGameStatistics **ppiStats) {
    return This->lpVtbl->GetGameStatistics(This,GDFBinaryPath,openType,pOpenResult,ppiStats);
}
static FORCEINLINE HRESULT IGameStatisticsMgr_RemoveGameStatistics(IGameStatisticsMgr* This,LPCWSTR GDFBinaryPath) {
    return This->lpVtbl->RemoveGameStatistics(This,GDFBinaryPath);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IGameStatisticsMgr_GetGameStatistics_Proxy(
    IGameStatisticsMgr* This,
    LPCWSTR GDFBinaryPath,
    GAMESTATS_OPEN_TYPE openType,
    GAMESTATS_OPEN_RESULT *pOpenResult,
    IGameStatistics **ppiStats);
void __RPC_STUB IGameStatisticsMgr_GetGameStatistics_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameStatisticsMgr_RemoveGameStatistics_Proxy(
    IGameStatisticsMgr* This,
    LPCWSTR GDFBinaryPath);
void __RPC_STUB IGameStatisticsMgr_RemoveGameStatistics_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IGameStatisticsMgr_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IGameExplorer2 interface
 */
#ifndef __IGameExplorer2_INTERFACE_DEFINED__
#define __IGameExplorer2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IGameExplorer2, 0x86874aa7, 0xa1ed, 0x450d, 0xa7,0xeb, 0xb8,0x9e,0x20,0xb2,0xff,0xf3);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("86874aa7-a1ed-450d-a7eb-b89e20b2fff3")
IGameExplorer2 : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE InstallGame(
        LPCWSTR binaryGDFPath,
        LPCWSTR installDirectory,
        GAME_INSTALL_SCOPE installScope) = 0;

    virtual HRESULT STDMETHODCALLTYPE UninstallGame(
        LPCWSTR binaryGDFPath) = 0;

    virtual HRESULT STDMETHODCALLTYPE CheckAccess(
        LPCWSTR binaryGDFPath,
        BOOL *pHasAccess) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IGameExplorer2, 0x86874aa7, 0xa1ed, 0x450d, 0xa7,0xeb, 0xb8,0x9e,0x20,0xb2,0xff,0xf3)
#endif
#else
typedef struct IGameExplorer2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGameExplorer2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGameExplorer2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGameExplorer2 *This);

    /*** IGameExplorer2 methods ***/
    HRESULT (STDMETHODCALLTYPE *InstallGame)(
        IGameExplorer2 *This,
        LPCWSTR binaryGDFPath,
        LPCWSTR installDirectory,
        GAME_INSTALL_SCOPE installScope);

    HRESULT (STDMETHODCALLTYPE *UninstallGame)(
        IGameExplorer2 *This,
        LPCWSTR binaryGDFPath);

    HRESULT (STDMETHODCALLTYPE *CheckAccess)(
        IGameExplorer2 *This,
        LPCWSTR binaryGDFPath,
        BOOL *pHasAccess);

    END_INTERFACE
} IGameExplorer2Vtbl;

interface IGameExplorer2 {
    CONST_VTBL IGameExplorer2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IGameExplorer2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IGameExplorer2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IGameExplorer2_Release(This) (This)->lpVtbl->Release(This)
/*** IGameExplorer2 methods ***/
#define IGameExplorer2_InstallGame(This,binaryGDFPath,installDirectory,installScope) (This)->lpVtbl->InstallGame(This,binaryGDFPath,installDirectory,installScope)
#define IGameExplorer2_UninstallGame(This,binaryGDFPath) (This)->lpVtbl->UninstallGame(This,binaryGDFPath)
#define IGameExplorer2_CheckAccess(This,binaryGDFPath,pHasAccess) (This)->lpVtbl->CheckAccess(This,binaryGDFPath,pHasAccess)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IGameExplorer2_QueryInterface(IGameExplorer2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IGameExplorer2_AddRef(IGameExplorer2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IGameExplorer2_Release(IGameExplorer2* This) {
    return This->lpVtbl->Release(This);
}
/*** IGameExplorer2 methods ***/
static FORCEINLINE HRESULT IGameExplorer2_InstallGame(IGameExplorer2* This,LPCWSTR binaryGDFPath,LPCWSTR installDirectory,GAME_INSTALL_SCOPE installScope) {
    return This->lpVtbl->InstallGame(This,binaryGDFPath,installDirectory,installScope);
}
static FORCEINLINE HRESULT IGameExplorer2_UninstallGame(IGameExplorer2* This,LPCWSTR binaryGDFPath) {
    return This->lpVtbl->UninstallGame(This,binaryGDFPath);
}
static FORCEINLINE HRESULT IGameExplorer2_CheckAccess(IGameExplorer2* This,LPCWSTR binaryGDFPath,BOOL *pHasAccess) {
    return This->lpVtbl->CheckAccess(This,binaryGDFPath,pHasAccess);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IGameExplorer2_InstallGame_Proxy(
    IGameExplorer2* This,
    LPCWSTR binaryGDFPath,
    LPCWSTR installDirectory,
    GAME_INSTALL_SCOPE installScope);
void __RPC_STUB IGameExplorer2_InstallGame_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameExplorer2_UninstallGame_Proxy(
    IGameExplorer2* This,
    LPCWSTR binaryGDFPath);
void __RPC_STUB IGameExplorer2_UninstallGame_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGameExplorer2_CheckAccess_Proxy(
    IGameExplorer2* This,
    LPCWSTR binaryGDFPath,
    BOOL *pHasAccess);
void __RPC_STUB IGameExplorer2_CheckAccess_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IGameExplorer2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * GameExplorer coclass
 */

DEFINE_GUID(CLSID_GameExplorer, 0x9a5ea990, 0x3034, 0x4d6f, 0x91,0x28, 0x01,0xf3,0xc6,0x10,0x22,0xbc);

#ifdef __cplusplus
class DECLSPEC_UUID("9a5ea990-3034-4d6f-9128-01f3c61022bc") GameExplorer;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(GameExplorer, 0x9a5ea990, 0x3034, 0x4d6f, 0x91,0x28, 0x01,0xf3,0xc6,0x10,0x22,0xbc)
#endif
#endif

/*****************************************************************************
 * GameStatistics coclass
 */

DEFINE_GUID(CLSID_GameStatistics, 0xdbc85a2c, 0xc0dc, 0x4961, 0xb6,0xe2, 0xd2,0x8b,0x62,0xc1,0x1a,0xd4);

#ifdef __cplusplus
class DECLSPEC_UUID("dbc85a2c-c0dc-4961-b6e2-d28b62c11ad4") GameStatistics;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(GameStatistics, 0xdbc85a2c, 0xc0dc, 0x4961, 0xb6,0xe2, 0xd2,0x8b,0x62,0xc1,0x1a,0xd4)
#endif
#endif

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __gameux_h__ */