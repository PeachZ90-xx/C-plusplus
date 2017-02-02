/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#if !defined (_DAOGETRW_H_)
#define _DAOGETRW_H_

typedef enum {
  DAOCOLKIND_IND = 0,DAOCOLKIND_STR,DAOCOLKIND_WSTR
} DAOCOLKIND;

typedef enum {
  DAO_I2 = 0,DAO_I4,DAO_R4,DAO_R8,DAO_CURRENCY,DAO_DATE,DAO_BOOL,DAO_BSTR,DAO_LPSTR,DAO_LPWSTR,DAO_BLOB,DAO_BYTES,DAO_CHAR,DAO_WCHAR,DAO_ANYVARIANT,
  DAO_BOOKMARK,DAO_BYTE,DAO_GUID,DAO_DATATYPEMAX
} DAODATATYPE;

#define DAO_NOINDICATOR 0xffffffff
#define DAO_NULL 0xffffffff
#define DAO_CANTCOERCE 0xfffffffc
#define DAO_NOMAXLENGTH 0x00000000

#define DAOROWFETCH_CALLEEALLOCATES 0x00000001
#define DAOROWFETCH_DONTADVANCE 0x00000002
#define DAOROWFETCH_FORCEREFRESH 0x00000004
#define DAOROWFETCH_BINDABSOLUTE 0x00000008
#define DAOROWFETCH_ODBCNEXT 0x00000010

#define DAOBINDING_DIRECT 0x00000001
#define DAOBINDING_VARIANT 0x00000002
#define DAOBINDING_CALLBACK 0x00000004

typedef struct {
  DWORD dwKind;
  union
  {
    LONG ind;
    LPCSTR lpstr;
    LPCWSTR lpwstr;
  };
} DAOCOLUMNID;
typedef DAOCOLUMNID *LPDAOCOLUMNID;
#ifdef __cplusplus
extern "C" {
#endif
typedef HRESULT (WINAPI *LPDAOBINDFUNC)(ULONG cb,DWORD dwUser,LPVOID *ppData);
#ifdef __cplusplus
}
#endif
#define DAOBINDINGFUNC(f) STDAPI f (ULONG cb,DWORD dwUser,LPVOID *ppData)

typedef struct {
  DAOCOLUMNID columnID;
  ULONG cbDataOffset;
  ULONG cbMaxLen;
  ULONG cbInfoOffset;
  DWORD dwBinding;
  DWORD dwDataType;
  DWORD dwUser;
} DAOCOLUMNBINDING;
typedef DAOCOLUMNBINDING *LPDAOCOLUMNBINDING;

typedef struct {
  ULONG cRowsRequested;
  DWORD dwFlags;
  LPVOID pData;
  LPVOID pVarData;
  ULONG cbVarData;
  ULONG cRowsReturned;
} DAOFETCHROWS;
typedef DAOFETCHROWS *LPDAOFETCHROWS;

#define S_BUFFERTOOSMALL MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x1000)
#define S_ENDOFCURSOR MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x1001)
#define S_SILENTCANCEL MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x1002)
#define S_RECORDDELETED MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x1003)

#define E_ROWTOOSHORT MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x1000)
#define E_BADBINDINFO MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x1001)
#define E_COLUMNUNAVAILABLE MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x1002)

#undef INTERFACE
#define INTERFACE ICDAORecordset
DECLARE_INTERFACE_(ICDAORecordset,IDispatch) {
  STDMETHOD(GetRows) (THIS_ LONG cRowsToSkip,LONG cCol,LPDAOCOLUMNBINDING prgBndCol,ULONG cbRowLen,LPDAOFETCHROWS pFetchRows) PURE;
  STDMETHOD(SetNotify) (THIS_ REFIID riid,WINBOOL fNotify);
  STDMETHOD(GetNotify) (THIS_ REFIID riid,WINBOOL *fNotify);
  STDMETHOD(OnBeforeNotify) (THIS_ REFIID riid,DWORD cat,DWORD rsn,VARIANT v1,VARIANT v2);
  STDMETHOD(OnAfterNotify) (THIS_ REFIID riid,DWORD cat,DWORD rsn,VARIANT v1,VARIANT v2,HRESULT hr);
  STDMETHOD(PutLock) (THIS_ WINBOOL f);
  STDMETHOD(GetLock) (THIS_ WINBOOL *f);
  STDMETHOD(AddGetRowsErr) (THIS_ HRESULT hr) PURE;
};

#define errVtoFetchBuffTooSmall -30028
#define errVtoEOFDuringFetch -30029
#define errVtoSilentCancel -30030
#define errVtoRecordDeleted -30031
#define errVtoRowLenTooSmall -30032
#define errVtoBadBindInfo -30033
#define errVtoColumnMissing -30034
#endif
