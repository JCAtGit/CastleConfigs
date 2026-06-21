typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float16
float2
typedef pointer32 ImageBaseOffset32;

typedef pointer64 ImageBaseOffset64;

typedef long long    int16;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef int    sdword;
typedef long long    sqword;
typedef short    sword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    uint16;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef unsigned short    wchar16;
typedef void *HANDLE;

typedef HANDLE HTHEME;

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef int BOOL;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef longlong LONG_PTR;

typedef BOOL (*UILANGUAGE_ENUMPROCW)(LPWSTR, LONG_PTR);

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef union _union_552 _union_552, *P_union_552;

typedef void *LPVOID;

typedef ulonglong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_553 _struct_553, *P_struct_553;

struct _struct_553 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_552 {
    DWORD dwOemId;
    struct _struct_553 s;
};

struct _SYSTEM_INFO {
    union _union_552 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef struct _SECURITY_ATTRIBUTES SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_540 _union_540, *P_union_540;

typedef struct _struct_541 _struct_541, *P_struct_541;

typedef void *PVOID;

struct _struct_541 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_540 {
    struct _struct_541 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_540 u;
    HANDLE hEvent;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef long LONG;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef uchar BYTE;

typedef BYTE *PBYTE;

typedef ulong ULONG;

typedef DWORD (*PFE_EXPORT_FUNC)(PBYTE, PVOID, ULONG);

typedef struct _BY_HANDLE_FILE_INFORMATION _BY_HANDLE_FILE_INFORMATION, *P_BY_HANDLE_FILE_INFORMATION;

struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
};

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _MEMORYSTATUSEX _MEMORYSTATUSEX, *P_MEMORYSTATUSEX;

typedef ULONGLONG DWORDLONG;

struct _MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
};

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _MEMORYSTATUSEX *LPMEMORYSTATUSEX;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

struct _RTL_CONDITION_VARIABLE {
    PVOID Ptr;
};

typedef struct _BY_HANDLE_FILE_INFORMATION *LPBY_HANDLE_FILE_INFORMATION;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef ULONG *PULONG;

typedef DWORD (*PFE_IMPORT_FUNC)(PBYTE, PVOID, PULONG);

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef PRTL_CRITICAL_SECTION PCRITICAL_SECTION;

typedef struct IBindCtx IBindCtx, *PIBindCtx;

typedef struct IBindCtxVtbl IBindCtxVtbl, *PIBindCtxVtbl;

typedef long HRESULT;

typedef struct _GUID _GUID, *P_GUID;

typedef struct _GUID GUID;

typedef GUID IID;


// WARNING! conflicting data type names: /wtypes.h/ULONG - /WinDef.h/ULONG

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct tagBIND_OPTS tagBIND_OPTS, *PtagBIND_OPTS;

typedef struct tagBIND_OPTS BIND_OPTS;

typedef struct IRunningObjectTable IRunningObjectTable, *PIRunningObjectTable;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

typedef struct IEnumString IEnumString, *PIEnumString;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl, *PIRunningObjectTableVtbl;

typedef struct IMoniker IMoniker, *PIMoniker;

typedef struct IEnumMoniker IEnumMoniker, *PIEnumMoniker;

typedef struct IEnumStringVtbl IEnumStringVtbl, *PIEnumStringVtbl;

typedef struct IMonikerVtbl IMonikerVtbl, *PIMonikerVtbl;

typedef GUID CLSID;

typedef struct IStream IStream, *PIStream;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct IEnumMonikerVtbl IEnumMonikerVtbl, *PIEnumMonikerVtbl;

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct IStreamVtbl {
    HRESULT (*QueryInterface)(struct IStream *, IID *, void **);
    ULONG (*AddRef)(struct IStream *);
    ULONG (*Release)(struct IStream *);
    HRESULT (*Read)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Write)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Seek)(struct IStream *, LARGE_INTEGER, DWORD, ULARGE_INTEGER *);
    HRESULT (*SetSize)(struct IStream *, ULARGE_INTEGER);
    HRESULT (*CopyTo)(struct IStream *, struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER *, ULARGE_INTEGER *);
    HRESULT (*Commit)(struct IStream *, DWORD);
    HRESULT (*Revert)(struct IStream *);
    HRESULT (*LockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct IStream *, STATSTG *, DWORD);
    HRESULT (*Clone)(struct IStream *, struct IStream **);
};

struct IEnumStringVtbl {
    HRESULT (*QueryInterface)(struct IEnumString *, IID *, void **);
    ULONG (*AddRef)(struct IEnumString *);
    ULONG (*Release)(struct IEnumString *);
    HRESULT (*Next)(struct IEnumString *, ULONG, LPOLESTR *, ULONG *);
    HRESULT (*Skip)(struct IEnumString *, ULONG);
    HRESULT (*Reset)(struct IEnumString *);
    HRESULT (*Clone)(struct IEnumString *, struct IEnumString **);
};

struct IStream {
    struct IStreamVtbl *lpVtbl;
};

struct IMonikerVtbl {
    HRESULT (*QueryInterface)(struct IMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IMoniker *);
    ULONG (*Release)(struct IMoniker *);
    HRESULT (*GetClassID)(struct IMoniker *, CLSID *);
    HRESULT (*IsDirty)(struct IMoniker *);
    HRESULT (*Load)(struct IMoniker *, struct IStream *);
    HRESULT (*Save)(struct IMoniker *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IMoniker *, ULARGE_INTEGER *);
    HRESULT (*BindToObject)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*BindToStorage)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*Reduce)(struct IMoniker *, struct IBindCtx *, DWORD, struct IMoniker **, struct IMoniker **);
    HRESULT (*ComposeWith)(struct IMoniker *, struct IMoniker *, BOOL, struct IMoniker **);
    HRESULT (*Enum)(struct IMoniker *, BOOL, struct IEnumMoniker **);
    HRESULT (*IsEqual)(struct IMoniker *, struct IMoniker *);
    HRESULT (*Hash)(struct IMoniker *, DWORD *);
    HRESULT (*IsRunning)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, struct IMoniker *);
    HRESULT (*GetTimeOfLastChange)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, FILETIME *);
    HRESULT (*Inverse)(struct IMoniker *, struct IMoniker **);
    HRESULT (*CommonPrefixWith)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*RelativePathTo)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*GetDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR *);
    HRESULT (*ParseDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*IsSystemMoniker)(struct IMoniker *, DWORD *);
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

struct IMoniker {
    struct IMonikerVtbl *lpVtbl;
};

struct IEnumString {
    struct IEnumStringVtbl *lpVtbl;
};

struct IEnumMonikerVtbl {
    HRESULT (*QueryInterface)(struct IEnumMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IEnumMoniker *);
    ULONG (*Release)(struct IEnumMoniker *);
    HRESULT (*Next)(struct IEnumMoniker *, ULONG, struct IMoniker **, ULONG *);
    HRESULT (*Skip)(struct IEnumMoniker *, ULONG);
    HRESULT (*Reset)(struct IEnumMoniker *);
    HRESULT (*Clone)(struct IEnumMoniker *, struct IEnumMoniker **);
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

struct IRunningObjectTable {
    struct IRunningObjectTableVtbl *lpVtbl;
};

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

struct IBindCtx {
    struct IBindCtxVtbl *lpVtbl;
};

struct IBindCtxVtbl {
    HRESULT (*QueryInterface)(struct IBindCtx *, IID *, void **);
    ULONG (*AddRef)(struct IBindCtx *);
    ULONG (*Release)(struct IBindCtx *);
    HRESULT (*RegisterObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*RevokeObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*ReleaseBoundObjects)(struct IBindCtx *);
    HRESULT (*SetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetRunningObjectTable)(struct IBindCtx *, struct IRunningObjectTable **);
    HRESULT (*RegisterObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown *);
    HRESULT (*GetObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown **);
    HRESULT (*EnumObjectParam)(struct IBindCtx *, struct IEnumString **);
    HRESULT (*RevokeObjectParam)(struct IBindCtx *, LPOLESTR);
};

struct IEnumMoniker {
    struct IEnumMonikerVtbl *lpVtbl;
};

struct IRunningObjectTableVtbl {
    HRESULT (*QueryInterface)(struct IRunningObjectTable *, IID *, void **);
    ULONG (*AddRef)(struct IRunningObjectTable *);
    ULONG (*Release)(struct IRunningObjectTable *);
    HRESULT (*Register)(struct IRunningObjectTable *, DWORD, struct IUnknown *, struct IMoniker *, DWORD *);
    HRESULT (*Revoke)(struct IRunningObjectTable *, DWORD);
    HRESULT (*IsRunning)(struct IRunningObjectTable *, struct IMoniker *);
    HRESULT (*GetObjectA)(struct IRunningObjectTable *, struct IMoniker *, struct IUnknown **);
    HRESULT (*NoteChangeTime)(struct IRunningObjectTable *, DWORD, FILETIME *);
    HRESULT (*GetTimeOfLastChange)(struct IRunningObjectTable *, struct IMoniker *, FILETIME *);
    HRESULT (*EnumRunning)(struct IRunningObjectTable *, struct IEnumMoniker **);
};

struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
};

typedef struct tagSOLE_AUTHENTICATION_SERVICE tagSOLE_AUTHENTICATION_SERVICE, *PtagSOLE_AUTHENTICATION_SERVICE;

struct tagSOLE_AUTHENTICATION_SERVICE {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    OLECHAR *pPrincipalName;
    HRESULT hr;
};

typedef struct tagSOLE_AUTHENTICATION_SERVICE SOLE_AUTHENTICATION_SERVICE;

typedef struct _DISPATCHER_CONTEXT _DISPATCHER_CONTEXT, *P_DISPATCHER_CONTEXT;

struct _DISPATCHER_CONTEXT {
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef uchar boolean;

typedef boolean BOOLEAN;

typedef struct _WINTRUST_DATA _WINTRUST_DATA, *P_WINTRUST_DATA;

typedef union _union_5394 _union_5394, *P_union_5394;

typedef struct WINTRUST_FILE_INFO_ WINTRUST_FILE_INFO_, *PWINTRUST_FILE_INFO_;

typedef struct WINTRUST_CATALOG_INFO_ WINTRUST_CATALOG_INFO_, *PWINTRUST_CATALOG_INFO_;

typedef struct WINTRUST_BLOB_INFO_ WINTRUST_BLOB_INFO_, *PWINTRUST_BLOB_INFO_;

typedef struct WINTRUST_SGNR_INFO_ WINTRUST_SGNR_INFO_, *PWINTRUST_SGNR_INFO_;

typedef struct WINTRUST_CERT_INFO_ WINTRUST_CERT_INFO_, *PWINTRUST_CERT_INFO_;

typedef WCHAR *LPCWSTR;

typedef struct _CTL_CONTEXT _CTL_CONTEXT, *P_CTL_CONTEXT;

typedef struct _CTL_CONTEXT CTL_CONTEXT;

typedef CTL_CONTEXT *PCCTL_CONTEXT;

typedef struct _CMSG_SIGNER_INFO _CMSG_SIGNER_INFO, *P_CMSG_SIGNER_INFO;

typedef struct _CMSG_SIGNER_INFO CMSG_SIGNER_INFO;

typedef void *HCERTSTORE;

typedef struct _CERT_CONTEXT _CERT_CONTEXT, *P_CERT_CONTEXT;

typedef struct _CERT_CONTEXT CERT_CONTEXT;

typedef struct _CTL_INFO _CTL_INFO, *P_CTL_INFO;

typedef struct _CTL_INFO *PCTL_INFO;

typedef void *HCRYPTMSG;

typedef struct _CRYPTOAPI_BLOB _CRYPTOAPI_BLOB, *P_CRYPTOAPI_BLOB;

typedef struct _CRYPTOAPI_BLOB CERT_NAME_BLOB;

typedef struct _CRYPTOAPI_BLOB CRYPT_INTEGER_BLOB;

typedef struct _CRYPT_ALGORITHM_IDENTIFIER _CRYPT_ALGORITHM_IDENTIFIER, *P_CRYPT_ALGORITHM_IDENTIFIER;

typedef struct _CRYPT_ALGORITHM_IDENTIFIER CRYPT_ALGORITHM_IDENTIFIER;

typedef struct _CRYPTOAPI_BLOB CRYPT_DATA_BLOB;

typedef struct _CRYPT_ATTRIBUTES _CRYPT_ATTRIBUTES, *P_CRYPT_ATTRIBUTES;

typedef struct _CRYPT_ATTRIBUTES CRYPT_ATTRIBUTES;

typedef struct _CERT_INFO _CERT_INFO, *P_CERT_INFO;

typedef struct _CERT_INFO *PCERT_INFO;

typedef struct _CTL_USAGE _CTL_USAGE, *P_CTL_USAGE;

typedef struct _CTL_USAGE CTL_USAGE;

typedef struct _CTL_ENTRY _CTL_ENTRY, *P_CTL_ENTRY;

typedef struct _CTL_ENTRY *PCTL_ENTRY;

typedef struct _CERT_EXTENSION _CERT_EXTENSION, *P_CERT_EXTENSION;

typedef struct _CERT_EXTENSION *PCERT_EXTENSION;

typedef struct _CRYPTOAPI_BLOB CRYPT_OBJID_BLOB;

typedef struct _CRYPT_ATTRIBUTE _CRYPT_ATTRIBUTE, *P_CRYPT_ATTRIBUTE;

typedef struct _CRYPT_ATTRIBUTE *PCRYPT_ATTRIBUTE;

typedef struct _CERT_PUBLIC_KEY_INFO _CERT_PUBLIC_KEY_INFO, *P_CERT_PUBLIC_KEY_INFO;

typedef struct _CERT_PUBLIC_KEY_INFO CERT_PUBLIC_KEY_INFO;

typedef struct _CRYPT_BIT_BLOB _CRYPT_BIT_BLOB, *P_CRYPT_BIT_BLOB;

typedef struct _CRYPT_BIT_BLOB CRYPT_BIT_BLOB;

typedef struct _CRYPTOAPI_BLOB *PCRYPT_ATTR_BLOB;

struct _CRYPTOAPI_BLOB {
    DWORD cbData;
    BYTE *pbData;
};

struct _CRYPT_ALGORITHM_IDENTIFIER {
    LPSTR pszObjId;
    CRYPT_OBJID_BLOB Parameters;
};

struct _CRYPT_BIT_BLOB {
    DWORD cbData;
    BYTE *pbData;
    DWORD cUnusedBits;
};

struct _CERT_PUBLIC_KEY_INFO {
    CRYPT_ALGORITHM_IDENTIFIER Algorithm;
    CRYPT_BIT_BLOB PublicKey;
};

struct _CERT_INFO {
    DWORD dwVersion;
    CRYPT_INTEGER_BLOB SerialNumber;
    CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
    CERT_NAME_BLOB Issuer;
    FILETIME NotBefore;
    FILETIME NotAfter;
    CERT_NAME_BLOB Subject;
    CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
    CRYPT_BIT_BLOB IssuerUniqueId;
    CRYPT_BIT_BLOB SubjectUniqueId;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
};

union _union_5394 {
    struct WINTRUST_FILE_INFO_ *pFile;
    struct WINTRUST_CATALOG_INFO_ *pCatalog;
    struct WINTRUST_BLOB_INFO_ *pBlob;
    struct WINTRUST_SGNR_INFO_ *pSgnr;
    struct WINTRUST_CERT_INFO_ *pCert;
};

struct _WINTRUST_DATA {
    DWORD cbStruct;
    LPVOID pPolicyCallbackData;
    LPVOID pSIPClientData;
    DWORD dwUIChoice;
    DWORD fdwRevocationChecks;
    DWORD dwUnionChoice;
    union _union_5394 field6_0x28;
    DWORD dwStateAction;
    HANDLE hWVTStateData;
    WCHAR *pwszURLReference;
    DWORD dwProvFlags;
    DWORD dwUIContext;
};

struct WINTRUST_FILE_INFO_ {
    DWORD cbStruct;
    LPCWSTR pcwszFilePath;
    HANDLE hFile;
    GUID *pgKnownSubject;
};

struct _CRYPT_ATTRIBUTES {
    DWORD cAttr;
    PCRYPT_ATTRIBUTE rgAttr;
};

struct _CMSG_SIGNER_INFO {
    DWORD dwVersion;
    CERT_NAME_BLOB Issuer;
    CRYPT_INTEGER_BLOB SerialNumber;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
    CRYPT_DATA_BLOB EncryptedHash;
    CRYPT_ATTRIBUTES AuthAttrs;
    CRYPT_ATTRIBUTES UnauthAttrs;
};

struct _CTL_USAGE {
    DWORD cUsageIdentifier;
    LPSTR *rgpszUsageIdentifier;
};

struct WINTRUST_CATALOG_INFO_ {
    DWORD cbStruct;
    DWORD dwCatalogVersion;
    LPCWSTR pcwszCatalogFilePath;
    LPCWSTR pcwszMemberTag;
    LPCWSTR pcwszMemberFilePath;
    HANDLE hMemberFile;
    BYTE *pbCalculatedFileHash;
    DWORD cbCalculatedFileHash;
    PCCTL_CONTEXT pcCatalogContext;
};

struct _CTL_CONTEXT {
    DWORD dwMsgAndCertEncodingType;
    BYTE *pbCtlEncoded;
    DWORD cbCtlEncoded;
    PCTL_INFO pCtlInfo;
    HCERTSTORE hCertStore;
    HCRYPTMSG hCryptMsg;
    BYTE *pbCtlContent;
    DWORD cbCtlContent;
};

struct WINTRUST_CERT_INFO_ {
    DWORD cbStruct;
    LPCWSTR pcwszDisplayName;
    CERT_CONTEXT *psCertContext;
    DWORD chStores;
    HCERTSTORE *pahStores;
    DWORD dwFlags;
    FILETIME *psftVerifyAsOf;
};

struct _CERT_EXTENSION {
    LPSTR pszObjId;
    BOOL fCritical;
    CRYPT_OBJID_BLOB Value;
};

struct WINTRUST_SGNR_INFO_ {
    DWORD cbStruct;
    LPCWSTR pcwszDisplayName;
    CMSG_SIGNER_INFO *psSignerInfo;
    DWORD chStores;
    HCERTSTORE *pahStores;
};

struct _CRYPT_ATTRIBUTE {
    LPSTR pszObjId;
    DWORD cValue;
    PCRYPT_ATTR_BLOB rgValue;
};

struct _CTL_ENTRY {
    CRYPT_DATA_BLOB SubjectIdentifier;
    DWORD cAttribute;
    PCRYPT_ATTRIBUTE rgAttribute;
};

struct _CERT_CONTEXT {
    DWORD dwCertEncodingType;
    BYTE *pbCertEncoded;
    DWORD cbCertEncoded;
    PCERT_INFO pCertInfo;
    HCERTSTORE hCertStore;
};

struct _CTL_INFO {
    DWORD dwVersion;
    CTL_USAGE SubjectUsage;
    CRYPT_DATA_BLOB ListIdentifier;
    CRYPT_INTEGER_BLOB SequenceNumber;
    FILETIME ThisUpdate;
    FILETIME NextUpdate;
    CRYPT_ALGORITHM_IDENTIFIER SubjectAlgorithm;
    DWORD cCTLEntry;
    PCTL_ENTRY rgCTLEntry;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
};

struct WINTRUST_BLOB_INFO_ {
    DWORD cbStruct;
    GUID gSubject;
    LPCWSTR pcwszDisplayName;
    DWORD cbMemObject;
    BYTE *pbMemObject;
    DWORD cbMemSignedMsg;
    BYTE *pbMemSignedMsg;
};

typedef struct _WINTRUST_DATA WINTRUST_DATA;

typedef struct _SETJMP_FLOAT128 _SETJMP_FLOAT128, *P_SETJMP_FLOAT128;

typedef struct _SETJMP_FLOAT128 SETJMP_FLOAT128;

typedef SETJMP_FLOAT128 _JBTYPE;

struct _SETJMP_FLOAT128 {
    ulonglong Part[2];
};

typedef longlong fpos_t;

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef char *va_list;

typedef struct _stat64 _stat64, *P_stat64;

typedef uint _dev_t;

typedef ushort _ino_t;

typedef longlong __time64_t;

struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    ushort st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    longlong st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
};

typedef ushort wint_t;

typedef ulonglong size_t;

typedef int errno_t;

typedef size_t rsize_t;

typedef longlong intptr_t;

typedef ushort wctype_t;

typedef struct _SHChangeNotifyEntry _SHChangeNotifyEntry, *P_SHChangeNotifyEntry;

typedef struct _SHChangeNotifyEntry SHChangeNotifyEntry;

typedef struct _ITEMIDLIST _ITEMIDLIST, *P_ITEMIDLIST;

typedef struct _ITEMIDLIST ITEMIDLIST;

typedef ITEMIDLIST *LPCITEMIDLIST;

typedef struct _SHITEMID _SHITEMID, *P_SHITEMID;

typedef struct _SHITEMID SHITEMID;

typedef ushort USHORT;

struct _SHITEMID {
    USHORT cb;
    BYTE abID[1];
};

struct _ITEMIDLIST {
    SHITEMID mkid;
};

struct _SHChangeNotifyEntry {
    LPCITEMIDLIST pidl;
    BOOL fRecursive;
};

typedef PVOID HDEVINFO;

typedef struct _SP_DEVICE_INTERFACE_DATA _SP_DEVICE_INTERFACE_DATA, *P_SP_DEVICE_INTERFACE_DATA;

struct _SP_DEVICE_INTERFACE_DATA {
    DWORD cbSize;
    GUID InterfaceClassGuid;
    DWORD Flags;
    ULONG_PTR Reserved;
};

typedef struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A _SP_DEVICE_INTERFACE_DETAIL_DATA_A, *P_SP_DEVICE_INTERFACE_DETAIL_DATA_A;

struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A {
    DWORD cbSize;
    CHAR DevicePath[1];
};

typedef struct _SP_CLASSINSTALL_HEADER _SP_CLASSINSTALL_HEADER, *P_SP_CLASSINSTALL_HEADER;

typedef uint UINT;

typedef UINT DI_FUNCTION;

struct _SP_CLASSINSTALL_HEADER {
    DWORD cbSize;
    DI_FUNCTION InstallFunction;
};

typedef struct _SP_DEVINFO_DATA _SP_DEVINFO_DATA, *P_SP_DEVINFO_DATA;

struct _SP_DEVINFO_DATA {
    DWORD cbSize;
    GUID ClassGuid;
    DWORD DevInst;
    ULONG_PTR Reserved;
};

typedef struct _SP_CLASSINSTALL_HEADER *PSP_CLASSINSTALL_HEADER;

typedef struct _SP_DEVICE_INTERFACE_DATA *PSP_DEVICE_INTERFACE_DATA;

typedef struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A *PSP_DEVICE_INTERFACE_DETAIL_DATA_A;

typedef struct _SP_DEVINFO_DATA *PSP_DEVINFO_DATA;

typedef struct _BP_PAINTPARAMS _BP_PAINTPARAMS, *P_BP_PAINTPARAMS;

typedef struct _BP_PAINTPARAMS BP_PAINTPARAMS;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

typedef struct _BLENDFUNCTION _BLENDFUNCTION, *P_BLENDFUNCTION;

typedef struct _BLENDFUNCTION BLENDFUNCTION;

struct _BP_PAINTPARAMS {
    DWORD cbSize;
    DWORD dwFlags;
    RECT *prcExclude;
    BLENDFUNCTION *pBlendFunction;
};

struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef enum _BP_BUFFERFORMAT {
    BPBF_COMPATIBLEBITMAP=0,
    BPBF_DIB=1,
    BPBF_TOPDOWNDIB=2,
    BPBF_TOPDOWNMONODIB=3
} _BP_BUFFERFORMAT;

typedef enum _BP_BUFFERFORMAT BP_BUFFERFORMAT;

typedef enum THEMESIZE {
    TS_MIN=0,
    TS_TRUE=1,
    TS_DRAW=2
} THEMESIZE;

typedef HANDLE HANIMATIONBUFFER;

typedef struct _DTTOPTS _DTTOPTS, *P_DTTOPTS;

typedef struct _DTTOPTS DTTOPTS;

typedef DWORD COLORREF;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef struct tagRECT *LPRECT;

typedef LONG_PTR LPARAM;

typedef int (*DTT_CALLBACK_PROC)(HDC, LPWSTR, int, LPRECT, UINT, LPARAM);

struct tagPOINT {
    LONG x;
    LONG y;
};

struct HDC__ {
    int unused;
};

struct _DTTOPTS {
    DWORD dwSize;
    DWORD dwFlags;
    COLORREF crText;
    COLORREF crBorder;
    COLORREF crShadow;
    int iTextShadowType;
    POINT ptShadowOffset;
    int iBorderSize;
    int iFontPropId;
    int iColorPropId;
    int iStateId;
    BOOL fApplyOverlay;
    int iGlowSize;
    DTT_CALLBACK_PROC pfnDrawTextCallback;
    LPARAM lParam;
};

typedef struct _BP_ANIMATIONPARAMS _BP_ANIMATIONPARAMS, *P_BP_ANIMATIONPARAMS;

typedef enum _BP_ANIMATIONSTYLE {
    BPAS_NONE=0,
    BPAS_LINEAR=1,
    BPAS_CUBIC=2,
    BPAS_SINE=3
} _BP_ANIMATIONSTYLE;

typedef enum _BP_ANIMATIONSTYLE BP_ANIMATIONSTYLE;

struct _BP_ANIMATIONPARAMS {
    DWORD cbSize;
    DWORD dwFlags;
    BP_ANIMATIONSTYLE style;
    DWORD dwDuration;
};

typedef struct _BP_ANIMATIONPARAMS BP_ANIMATIONPARAMS;

typedef ITEMIDLIST *LPITEMIDLIST;

typedef struct tagWINDOWINFO tagWINDOWINFO, *PtagWINDOWINFO;

typedef struct tagWINDOWINFO *PWINDOWINFO;

typedef WORD ATOM;

struct tagWINDOWINFO {
    DWORD cbSize;
    RECT rcWindow;
    RECT rcClient;
    DWORD dwStyle;
    DWORD dwExStyle;
    DWORD dwWindowStatus;
    UINT cxWindowBorders;
    UINT cyWindowBorders;
    ATOM atomWindowType;
    WORD wCreatorVersion;
};

typedef struct tagCHANGEFILTERSTRUCT tagCHANGEFILTERSTRUCT, *PtagCHANGEFILTERSTRUCT;

typedef struct tagCHANGEFILTERSTRUCT *PCHANGEFILTERSTRUCT;

struct tagCHANGEFILTERSTRUCT {
    DWORD cbSize;
    DWORD ExtStatus;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG *LPMSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef ulonglong UINT_PTR;

typedef UINT_PTR WPARAM;

struct HWND__ {
    int unused;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct _ICONINFO _ICONINFO, *P_ICONINFO;

typedef struct _ICONINFO ICONINFO;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

struct HBITMAP__ {
    int unused;
};

struct _ICONINFO {
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
};

typedef struct tagHARDWAREINPUT tagHARDWAREINPUT, *PtagHARDWAREINPUT;

typedef struct tagHARDWAREINPUT HARDWAREINPUT;

struct tagHARDWAREINPUT {
    DWORD uMsg;
    WORD wParamL;
    WORD wParamH;
};

typedef LONG_PTR LRESULT;

typedef LRESULT (*HOOKPROC)(int, WPARAM, LPARAM);

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef union _union_881 _union_881, *P_union_881;

typedef struct tagMOUSEINPUT tagMOUSEINPUT, *PtagMOUSEINPUT;

typedef struct tagMOUSEINPUT MOUSEINPUT;

typedef struct tagKEYBDINPUT tagKEYBDINPUT, *PtagKEYBDINPUT;

typedef struct tagKEYBDINPUT KEYBDINPUT;

struct tagMOUSEINPUT {
    LONG dx;
    LONG dy;
    DWORD mouseData;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
};

struct tagKEYBDINPUT {
    WORD wVk;
    WORD wScan;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
};

union _union_881 {
    MOUSEINPUT mi;
    KEYBDINPUT ki;
    HARDWAREINPUT hi;
};

typedef struct DLGTEMPLATE *LPCDLGTEMPLATEW;

typedef struct tagINPUT tagINPUT, *PtagINPUT;

typedef struct tagINPUT *LPINPUT;

struct tagINPUT {
    DWORD type;
    union _union_881 field1_0x8;
};

typedef struct FLASHWINFO FLASHWINFO, *PFLASHWINFO;

struct FLASHWINFO {
    UINT cbSize;
    HWND hwnd;
    DWORD dwFlags;
    UINT uCount;
    DWORD dwTimeout;
};

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct tagDRAWTEXTPARAMS tagDRAWTEXTPARAMS, *PtagDRAWTEXTPARAMS;

struct tagDRAWTEXTPARAMS {
    UINT cbSize;
    int iTabLength;
    int iLeftMargin;
    int iRightMargin;
    UINT uiLengthDrawn;
};

typedef BOOL (*WNDENUMPROC)(HWND, LPARAM);

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct tagTPMPARAMS tagTPMPARAMS, *PtagTPMPARAMS;

typedef struct tagTPMPARAMS TPMPARAMS;

typedef TPMPARAMS *LPTPMPARAMS;

struct tagTPMPARAMS {
    UINT cbSize;
    RECT rcExclude;
};

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

typedef struct tagMSG MSG;

typedef ICONINFO *PICONINFO;

typedef struct tagDRAWTEXTPARAMS *LPDRAWTEXTPARAMS;

typedef struct HWINEVENTHOOK__ HWINEVENTHOOK__, *PHWINEVENTHOOK__;

typedef struct HWINEVENTHOOK__ *HWINEVENTHOOK;

typedef void (*WINEVENTPROC)(HWINEVENTHOOK, DWORD, HWND, LONG, LONG, DWORD, DWORD);

struct HWINEVENTHOOK__ {
    int unused;
};

typedef longlong INT_PTR;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
};

typedef struct tagLOGFONTA LOGFONTA;

typedef struct tagTEXTMETRICA tagTEXTMETRICA, *PtagTEXTMETRICA;

typedef struct tagTEXTMETRICA TEXTMETRICA;

typedef int (*OLDFONTENUMPROCA)(LOGFONTA *, TEXTMETRICA *, DWORD, LPARAM);

struct tagTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef OLDFONTENUMPROCA FONTENUMPROCA;

typedef struct tagLOGFONTW tagLOGFONTW, *PtagLOGFONTW;

typedef struct tagLOGFONTW LOGFONTW;

struct tagLOGFONTW {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[32];
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct tagLOGFONTA *LPLOGFONTA;

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef struct tagTEXTMETRICW tagTEXTMETRICW, *PtagTEXTMETRICW;

struct tagTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef struct tagTEXTMETRICW *LPTEXTMETRICW;

typedef dword uint32_t;

typedef word uint16_t;

typedef dword UINT32;

typedef uchar uint8_t;

typedef sdword int32_t;

typedef sword INT16;

typedef ushort VARTYPE;

typedef dword bb__aliased_uint32_t;

typedef int INT;

typedef longlong ptrdiff_t;

typedef uchar UINT8;

typedef double DOUBLE;

typedef float2 _Float16;

typedef longlong ssize_t;

typedef char smallint;

typedef char dchar_t;

typedef qword uint64_t;

typedef ushort _mode_t;

typedef uchar UCHAR;

typedef qword ULONG64;


// WARNING! conflicting data type names: /DWARF/DWORD - /WinDef.h/DWORD

typedef short VARIANT_BOOL;

typedef float FLOAT;

typedef bool _Bool;

typedef char _TCHAR;


// WARNING! conflicting data type names: /DWARF/LONG - /winnt.h/LONG

typedef char cdio_utf8_t;

typedef char udf_dstring;


// WARNING! conflicting data type names: /DWARF/ULONG - /WinDef.h/ULONG

typedef undefined complex long double[32];

typedef int WINBOOL;


// WARNING! conflicting data type names: /DWARF/DWORD64 - /basetsd.h/DWORD64

typedef ulonglong uintmax_t;

typedef char int8_t;

typedef char achar_t;

typedef int16 __int128;

typedef sqword off64_t;

typedef float2 __bf16;

typedef undefined complex double[16];

typedef uint FSE_DTable;

typedef word bb__aliased_uint16_t;

typedef float16 _Float128;

typedef short SHORT;

typedef dword complex _Float16;

typedef int errcode_t;

typedef sqword int64_t;

typedef undefined complex _Float128[32];


// WARNING! conflicting data type names: /DWARF/__time64_t - /crtdefs.h/__time64_t

typedef uint ALG_ID;

typedef ulonglong uintptr_t;

typedef qword complex float;

typedef double DATE;

typedef uint crc16_t;

typedef longlong _pid_t;

typedef word UINT16;

typedef sqword _off64_t;

typedef sword int16_t;

typedef struct anon_struct_16_2_4999deb0 anon_struct_16_2_4999deb0, *Panon_struct_16_2_4999deb0;

struct anon_struct_16_2_4999deb0 {
    char *url;
    uint64_t timestamp;
};

typedef struct ext2_inline_data ext2_inline_data, *Pext2_inline_data;

typedef struct struct_ext2_filsys struct_ext2_filsys, *Pstruct_ext2_filsys;

typedef struct struct_ext2_filsys *ext2_filsys.conflict;

typedef uint32_t __u32;

typedef __u32 ext2_ino_t;

typedef __u32 blk_t;

typedef struct ext2_inode ext2_inode, *Pext2_inode;

typedef uint64_t __u64;

typedef __u64 blk64_t;

typedef struct blk_alloc_ctx blk_alloc_ctx, *Pblk_alloc_ctx;

typedef struct struct_ext2_filsys *ext2_filsys;

typedef struct struct_io_channel struct_io_channel, *Pstruct_io_channel;

typedef struct struct_io_channel *io_channel;

typedef struct ext2_super_block ext2_super_block, *Pext2_super_block;

typedef __u32 dgrp_t;

typedef struct opaque_ext2_group_desc opaque_ext2_group_desc, *Popaque_ext2_group_desc;

typedef struct ext2fs_struct_generic_bitmap_base ext2fs_struct_generic_bitmap_base, *Pext2fs_struct_generic_bitmap_base;

typedef struct ext2fs_struct_generic_bitmap_base *ext2fs_inode_bitmap;

typedef struct ext2fs_struct_generic_bitmap_base *ext2fs_block_bitmap;

typedef uint16_t __u16;

typedef union anon_union_4_2_b8acc1ea_for_osd1 anon_union_4_2_b8acc1ea_for_osd1, *Panon_union_4_2_b8acc1ea_for_osd1;

typedef union anon_union_12_2_b8acc20a_for_osd2 anon_union_12_2_b8acc20a_for_osd2, *Panon_union_12_2_b8acc20a_for_osd2;

typedef struct ext2_struct_u32_list ext2_struct_u32_list, *Pext2_struct_u32_list;

typedef struct ext2_struct_u32_list *ext2_badblocks_list;

typedef struct ext2_struct_dblist ext2_struct_dblist, *Pext2_struct_dblist;

typedef struct ext2_struct_dblist *ext2_dblist;

typedef struct ext2_image_hdr ext2_image_hdr, *Pext2_image_hdr;

typedef __time64_t time_t;

typedef struct ext2_inode_cache ext2_inode_cache, *Pext2_inode_cache;

typedef struct ext2fs_progress_ops ext2fs_progress_ops, *Pext2fs_progress_ops;

typedef struct ext2fs_numeric_progress_struct ext2fs_numeric_progress_struct, *Pext2fs_numeric_progress_struct;

typedef struct ext2fs_hashmap ext2fs_hashmap, *Pext2fs_hashmap;

typedef struct ext2fs_nls_table ext2fs_nls_table, *Pext2fs_nls_table;

typedef struct struct_io_manager struct_io_manager, *Pstruct_io_manager;

typedef struct struct_io_stats struct_io_stats, *Pstruct_io_stats;

typedef struct struct_io_stats *io_stats;

typedef struct struct_io_manager *io_manager;

typedef int16_t __s16;

typedef uint8_t __u8;

typedef __u32 __le32;

typedef __u16 __le16;

typedef struct anon_struct_4_1_fae3994f_for_linux1 anon_struct_4_1_fae3994f_for_linux1, *Panon_struct_4_1_fae3994f_for_linux1;

typedef struct anon_struct_4_1_75be1865_for_hurd1 anon_struct_4_1_75be1865_for_hurd1, *Panon_struct_4_1_75be1865_for_hurd1;

typedef struct anon_struct_12_6_73d015af_for_linux2 anon_struct_12_6_73d015af_for_linux2, *Panon_struct_12_6_73d015af_for_linux2;

typedef struct anon_struct_12_6_f53bc94e_for_hurd2 anon_struct_12_6_f53bc94e_for_hurd2, *Panon_struct_12_6_f53bc94e_for_hurd2;

typedef struct ext2_db_entry2 ext2_db_entry2, *Pext2_db_entry2;

typedef struct ext2_inode_cache_ent ext2_inode_cache_ent, *Pext2_inode_cache_ent;

typedef struct ext2fs_hashmap_entry ext2fs_hashmap_entry, *Pext2fs_hashmap_entry;

typedef struct ext2fs_nls_ops ext2fs_nls_ops, *Pext2fs_nls_ops;

typedef int64_t __s64;

typedef __s64 e2_blkcnt_t;

struct ext2fs_numeric_progress_struct {
    __u64 max;
    int log_max;
    int skip_progress;
};

struct anon_struct_12_6_73d015af_for_linux2 {
    __u16 l_i_blocks_hi;
    __u16 l_i_file_acl_high;
    __u16 l_i_uid_high;
    __u16 l_i_gid_high;
    __u16 l_i_checksum_lo;
    __u16 l_i_reserved;
};

struct ext2fs_struct_generic_bitmap_base {
    errcode_t magic;
    ext2_filsys fs;
};

struct ext2fs_nls_table {
    int version;
    struct ext2fs_nls_ops *ops;
};

struct ext2_db_entry2 {
    ext2_ino_t ino;
    blk64_t blk;
    e2_blkcnt_t blockcnt;
};

struct ext2_super_block {
    __u32 s_inodes_count;
    __u32 s_blocks_count;
    __u32 s_r_blocks_count;
    __u32 s_free_blocks_count;
    __u32 s_free_inodes_count;
    __u32 s_first_data_block;
    __u32 s_log_block_size;
    __u32 s_log_cluster_size;
    __u32 s_blocks_per_group;
    __u32 s_clusters_per_group;
    __u32 s_inodes_per_group;
    __u32 s_mtime;
    __u32 s_wtime;
    __u16 s_mnt_count;
    __s16 s_max_mnt_count;
    __u16 s_magic;
    __u16 s_state;
    __u16 s_errors;
    __u16 s_minor_rev_level;
    __u32 s_lastcheck;
    __u32 s_checkinterval;
    __u32 s_creator_os;
    __u32 s_rev_level;
    __u16 s_def_resuid;
    __u16 s_def_resgid;
    __u32 s_first_ino;
    __u16 s_inode_size;
    __u16 s_block_group_nr;
    __u32 s_feature_compat;
    __u32 s_feature_incompat;
    __u32 s_feature_ro_compat;
    __u8 s_uuid[16];
    __u8 s_volume_name[16];
    __u8 s_last_mounted[64];
    __u32 s_algorithm_usage_bitmap;
    __u8 s_prealloc_blocks;
    __u8 s_prealloc_dir_blocks;
    __u16 s_reserved_gdt_blocks;
    __u8 s_journal_uuid[16];
    __u32 s_journal_inum;
    __u32 s_journal_dev;
    __u32 s_last_orphan;
    __u32 s_hash_seed[4];
    __u8 s_def_hash_version;
    __u8 s_jnl_backup_type;
    __u16 s_desc_size;
    __u32 s_default_mount_opts;
    __u32 s_first_meta_bg;
    __u32 s_mkfs_time;
    __u32 s_jnl_blocks[17];
    __u32 s_blocks_count_hi;
    __u32 s_r_blocks_count_hi;
    __u32 s_free_blocks_hi;
    __u16 s_min_extra_isize;
    __u16 s_want_extra_isize;
    __u32 s_flags;
    __u16 s_raid_stride;
    __u16 s_mmp_update_interval;
    __u64 s_mmp_block;
    __u32 s_raid_stripe_width;
    __u8 s_log_groups_per_flex;
    __u8 s_checksum_type;
    __u8 s_encryption_level;
    __u8 s_reserved_pad;
    __u64 s_kbytes_written;
    __u32 s_snapshot_inum;
    __u32 s_snapshot_id;
    __u64 s_snapshot_r_blocks_count;
    __u32 s_snapshot_list;
    __u32 s_error_count;
    __u32 s_first_error_time;
    __u32 s_first_error_ino;
    __u64 s_first_error_block;
    __u8 s_first_error_func[32];
    __u32 s_first_error_line;
    __u32 s_last_error_time;
    __u32 s_last_error_ino;
    __u32 s_last_error_line;
    __u64 s_last_error_block;
    __u8 s_last_error_func[32];
    __u8 s_mount_opts[64];
    __u32 s_usr_quota_inum;
    __u32 s_grp_quota_inum;
    __u32 s_overhead_clusters;
    __u32 s_backup_bgs[2];
    __u8 s_encrypt_algos[4];
    __u8 s_encrypt_pw_salt[16];
    __le32 s_lpf_ino;
    __le32 s_prj_quota_inum;
    __le32 s_checksum_seed;
    __u8 s_wtime_hi;
    __u8 s_mtime_hi;
    __u8 s_mkfs_time_hi;
    __u8 s_lastcheck_hi;
    __u8 s_first_error_time_hi;
    __u8 s_last_error_time_hi;
    __u8 s_first_error_errcode;
    __u8 s_last_error_errcode;
    __le16 s_encoding;
    __le16 s_encoding_flags;
    __le32 s_reserved[95];
    __u32 s_checksum;
};

struct ext2_image_hdr {
    __u32 magic_number;
    char magic_descriptor[16];
    char fs_hostname[64];
    char fs_netaddr[32];
    __u32 fs_netaddr_type;
    __u32 fs_device;
    char fs_device_name[64];
    char fs_uuid[16];
    __u32 fs_blocksize;
    __u32 fs_reserved[8];
    __u32 image_device;
    __u32 image_inode;
    __u32 image_time;
    __u32 image_reserved[8];
    __u32 offset_super;
    __u32 offset_inode;
    __u32 offset_inodemap;
    __u32 offset_blockmap;
    __u32 offset_reserved[8];
};

struct ext2fs_nls_ops {
    int (*casefold)(struct ext2fs_nls_table *, uchar *, size_t, uchar *, size_t);
};

struct ext2fs_progress_ops {
    void (*init)(ext2_filsys, struct ext2fs_numeric_progress_struct *, char *, __u64);
    void (*update)(ext2_filsys, struct ext2fs_numeric_progress_struct *, __u64);
    void (*close)(ext2_filsys, struct ext2fs_numeric_progress_struct *, char *);
};

struct anon_struct_4_1_fae3994f_for_linux1 {
    __u32 l_i_version;
};

struct anon_struct_12_6_f53bc94e_for_hurd2 {
    __u8 h_i_frag;
    __u8 h_i_fsize;
    __u16 h_i_mode_high;
    __u16 h_i_uid_high;
    __u16 h_i_gid_high;
    __u32 h_i_author;
};

union anon_union_12_2_b8acc20a_for_osd2 {
    struct anon_struct_12_6_73d015af_for_linux2 linux2;
    struct anon_struct_12_6_f53bc94e_for_hurd2 hurd2;
};

struct struct_io_manager {
    errcode_t magic;
    char *name;
    errcode_t (*open)(char *, int, io_channel *);
    errcode_t (*close)(io_channel);
    errcode_t (*set_blksize)(io_channel, int);
    errcode_t (*read_blk)(io_channel, ulong, int, void *);
    errcode_t (*write_blk)(io_channel, ulong, int, void *);
    errcode_t (*flush)(io_channel);
    errcode_t (*write_byte)(io_channel, ulong, int, void *);
    errcode_t (*set_option)(io_channel, char *, char *);
    errcode_t (*get_stats)(io_channel, io_stats *);
    errcode_t (*read_blk64)(io_channel, ulonglong, int, void *);
    errcode_t (*write_blk64)(io_channel, ulonglong, int, void *);
    errcode_t (*discard)(io_channel, ulonglong, ulonglong);
    errcode_t (*cache_readahead)(io_channel, ulonglong, ulonglong);
    errcode_t (*zeroout)(io_channel, ulonglong, ulonglong);
    long reserved[14];
};

struct ext2_inode_cache {
    void *buffer;
    blk64_t buffer_blk;
    int cache_last;
    uint cache_size;
    int refcount;
    struct ext2_inode_cache_ent *cache;
};

struct ext2_struct_u32_list {
    int magic;
    int num;
    int size;
    __u32 *list;
    int badblocks_flags;
};

struct anon_struct_4_1_75be1865_for_hurd1 {
    __u32 h_i_translator;
};

struct opaque_ext2_group_desc {
};

struct struct_ext2_filsys {
    errcode_t magic;
    io_channel io;
    int flags;
    char *device_name;
    struct ext2_super_block *super;
    uint blocksize;
    int fragsize;
    dgrp_t group_desc_count;
    ulong desc_blocks;
    struct opaque_ext2_group_desc *group_desc;
    uint inode_blocks_per_group;
    ext2fs_inode_bitmap inode_map;
    ext2fs_block_bitmap block_map;
    errcode_t (*get_blocks)(ext2_filsys.conflict, ext2_ino_t, blk_t *);
    errcode_t (*check_directory)(ext2_filsys.conflict, ext2_ino_t);
    errcode_t (*write_bitmaps)(ext2_filsys.conflict);
    errcode_t (*read_inode)(ext2_filsys.conflict, ext2_ino_t, struct ext2_inode *);
    errcode_t (*write_inode)(ext2_filsys.conflict, ext2_ino_t, struct ext2_inode *);
    ext2_badblocks_list badblocks;
    ext2_dblist dblist;
    __u32 stride;
    struct ext2_super_block *orig_super;
    struct ext2_image_hdr *image_header;
    __u32 umask;
    time_t now;
    int cluster_ratio_bits;
    __u16 default_bitmap_type;
    __u16 pad;
    __u32 reserved[5];
    void *priv_data;
    struct ext2_inode_cache *icache;
    io_channel image_io;
    errcode_t (*get_alloc_block)(ext2_filsys.conflict, blk64_t, blk64_t *);
    errcode_t (*get_alloc_block2)(ext2_filsys.conflict, blk64_t, blk64_t *, struct blk_alloc_ctx *);
    void (*block_alloc_stats)(ext2_filsys.conflict, blk64_t, int);
    void *mmp_buf;
    void *mmp_cmp;
    int mmp_fd;
    long mmp_last_written;
    struct ext2fs_progress_ops *progress_ops;
    __u32 csum_seed;
    io_channel journal_io;
    char *journal_name;
    errcode_t (*new_range)(ext2_filsys.conflict, int, blk64_t, blk64_t, blk64_t *, blk64_t *);
    void (*block_alloc_stats_range)(ext2_filsys.conflict, blk64_t, blk_t, int);
    struct ext2fs_hashmap *block_sha_map;
    struct ext2fs_nls_table *encoding;
};

struct ext2_struct_dblist {
    int magic;
    ext2_filsys fs;
    ulonglong size;
    ulonglong count;
    int sorted;
    struct ext2_db_entry2 *list;
};

struct ext2fs_hashmap_entry {
    void *data;
    void *key;
    size_t key_len;
    struct ext2fs_hashmap_entry *next;
    struct ext2fs_hashmap_entry *list_next;
    struct ext2fs_hashmap_entry *list_prev;
};

struct ext2_inode_cache_ent {
    ext2_ino_t ino;
    struct ext2_inode *inode;
};

struct ext2_inline_data {
    ext2_filsys fs;
    ext2_ino_t ino;
    size_t ea_size;
    void *ea_data;
};

struct ext2fs_hashmap {
    uint32_t size;
    uint32_t (*hash)(void *, size_t);
    void (*free)(void *);
    struct ext2fs_hashmap_entry *first;
    struct ext2fs_hashmap_entry *last;
    struct ext2fs_hashmap_entry *entries[0];
};

struct blk_alloc_ctx {
    ext2_ino_t ino;
    struct ext2_inode *inode;
    blk64_t lblk;
    int flags;
};

union anon_union_4_2_b8acc1ea_for_osd1 {
    struct anon_struct_4_1_fae3994f_for_linux1 linux1;
    struct anon_struct_4_1_75be1865_for_hurd1 hurd1;
};

struct ext2_inode {
    __u16 i_mode;
    __u16 i_uid;
    __u32 i_size;
    __u32 i_atime;
    __u32 i_ctime;
    __u32 i_mtime;
    __u32 i_dtime;
    __u16 i_gid;
    __u16 i_links_count;
    __u32 i_blocks;
    __u32 i_flags;
    union anon_union_4_2_b8acc1ea_for_osd1 osd1;
    __u32 i_block[15];
    __u32 i_generation;
    __u32 i_file_acl;
    __u32 i_size_high;
    __u32 i_faddr;
    union anon_union_12_2_b8acc20a_for_osd2 osd2;
};

struct struct_io_channel {
    errcode_t magic;
    io_manager manager;
    char *name;
    int block_size;
    errcode_t (*read_error)(io_channel, ulong, int, void *, size_t, int, errcode_t);
    errcode_t (*write_error)(io_channel, ulong, int, void *, size_t, int, errcode_t);
    int refcount;
    int flags;
    long reserved[14];
    void *private_data;
    void *app_data;
    int align;
};

struct struct_io_stats {
    int num_fields;
    int reserved;
    ulonglong bytes_read;
    ulonglong bytes_written;
};

typedef struct wim_dentry wim_dentry, *Pwim_dentry;

typedef struct wim_inode wim_inode, *Pwim_inode;

typedef struct avl_tree_node avl_tree_node, *Pavl_tree_node;

typedef struct hlist_node hlist_node, *Phlist_node;

typedef uint16_t le16;

typedef le16 utf16lechar;

typedef uint16_t u16;

typedef union anon_union_16_2_03a53316_for_wim_dentry_12 anon_union_16_2_03a53316_for_wim_dentry_12, *Panon_union_16_2_03a53316_for_wim_dentry_12;

typedef wchar_t tchar;

typedef struct list_head.conflict list_head.conflict, *Plist_head.conflict;

typedef struct wim_inode_stream wim_inode_stream, *Pwim_inode_stream;

typedef uint32_t u32;

typedef struct hlist_head hlist_head, *Phlist_head;

typedef struct wim_inode_extra wim_inode_extra, *Pwim_inode_extra;

typedef uint64_t u64;

typedef int32_t s32;

typedef union anon_union_8_3_2c5e39c5_for_wim_inode_20 anon_union_8_3_2c5e39c5_for_wim_inode_20, *Panon_union_8_3_2c5e39c5_for_wim_inode_20;

typedef union anon_union_24_2_8e4338b2_for_wim_inode_stream_1 anon_union_24_2_8e4338b2_for_wim_inode_stream_1, *Panon_union_24_2_8e4338b2_for_wim_inode_stream_1;

typedef uint8_t u8;

typedef struct anon_struct_8_1_596955bb_for_anon_union_8_3_2c5e39c5_for_wim_inode_20_1 anon_struct_8_1_596955bb_for_anon_union_8_3_2c5e39c5_for_wim_inode_20_1, *Panon_struct_8_1_596955bb_for_anon_union_8_3_2c5e39c5_for_wim_inode_20_1;

typedef struct blob_descriptor blob_descriptor, *Pblob_descriptor;

typedef union anon_union_24_3_76a9f428_for_blob_descriptor_2 anon_union_24_3_76a9f428_for_blob_descriptor_2, *Panon_union_24_3_76a9f428_for_blob_descriptor_2;

typedef union anon_union_32_2_ecfd7102_for_blob_descriptor_13 anon_union_32_2_ecfd7102_for_blob_descriptor_13, *Panon_union_32_2_ecfd7102_for_blob_descriptor_13;

typedef union anon_union_64_2_ecfd7102_for_blob_descriptor_14 anon_union_64_2_ecfd7102_for_blob_descriptor_14, *Panon_union_64_2_ecfd7102_for_blob_descriptor_14;

typedef union anon_union_16_3_01931894_for_blob_descriptor_15 anon_union_16_3_01931894_for_blob_descriptor_15, *Panon_union_16_3_01931894_for_blob_descriptor_15;

typedef struct anon_struct_16_2_99275dc8_for_anon_union_24_3_76a9f428_for_blob_descriptor_2_2 anon_struct_16_2_99275dc8_for_anon_union_24_3_76a9f428_for_blob_descriptor_2_2, *Panon_struct_16_2_99275dc8_for_anon_union_24_3_76a9f428_for_blob_descriptor_2_2;

typedef struct anon_struct_32_3_25d4c2e6_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_0 anon_struct_32_3_25d4c2e6_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_0, *Panon_struct_32_3_25d4c2e6_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_0;

typedef struct anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1 anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1, *Panon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1;

typedef struct anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0 anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0, *Panon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0;

typedef union anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1 anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1, *Panon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1;

typedef struct wim_resource_descriptor wim_resource_descriptor, *Pwim_resource_descriptor;

typedef union anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0 anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0, *Panon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0;

typedef union anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0 anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0, *Panon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0;

typedef union anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2 anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2, *Panon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2;

typedef struct blob_extraction_target blob_extraction_target, *Pblob_extraction_target;

typedef struct anon_struct_16_2_f537b39f_for_anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1_1 anon_struct_16_2_f537b39f_for_anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1_1, *Panon_struct_16_2_f537b39f_for_anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1_1;

typedef struct WIMStruct WIMStruct, *PWIMStruct;

typedef struct anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0 anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0, *Panon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0;

typedef struct anon_struct_24_3_4ea1c0db_for_anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0_1 anon_struct_24_3_4ea1c0db_for_anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0_1, *Panon_struct_24_3_4ea1c0db_for_anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0_1;

typedef struct wim_reshdr wim_reshdr, *Pwim_reshdr;

typedef struct anon_struct_16_2_ca14de23_for_anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2_1 anon_struct_16_2_ca14de23_for_anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2_1, *Panon_struct_16_2_ca14de23_for_anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2_1;

typedef struct wim_header wim_header, *Pwim_header;

typedef struct wim_image_metadata wim_image_metadata, *Pwim_image_metadata;

typedef struct wim_xml_info wim_xml_info, *Pwim_xml_info;

typedef struct blob_table blob_table, *Pblob_table;

typedef struct filedes filedes, *Pfiledes;

typedef struct wimlib_decompressor wimlib_decompressor, *Pwimlib_decompressor;

typedef enum wimlib_progress_status {
    WIMLIB_PROGRESS_STATUS_CONTINUE=0,
    WIMLIB_PROGRESS_STATUS_ABORT=1
} wimlib_progress_status;

typedef enum wimlib_progress_msg {
    WIMLIB_PROGRESS_MSG_EXTRACT_IMAGE_BEGIN=0,
    WIMLIB_PROGRESS_MSG_EXTRACT_TREE_BEGIN=1,
    WIMLIB_PROGRESS_MSG_EXTRACT_FILE_STRUCTURE=3,
    WIMLIB_PROGRESS_MSG_EXTRACT_STREAMS=4,
    WIMLIB_PROGRESS_MSG_EXTRACT_SPWM_PART_BEGIN=5,
    WIMLIB_PROGRESS_MSG_EXTRACT_METADATA=6,
    WIMLIB_PROGRESS_MSG_EXTRACT_IMAGE_END=7,
    WIMLIB_PROGRESS_MSG_EXTRACT_TREE_END=8,
    WIMLIB_PROGRESS_MSG_SCAN_BEGIN=9,
    WIMLIB_PROGRESS_MSG_SCAN_DENTRY=10,
    WIMLIB_PROGRESS_MSG_SCAN_END=11,
    WIMLIB_PROGRESS_MSG_WRITE_STREAMS=12,
    WIMLIB_PROGRESS_MSG_WRITE_METADATA_BEGIN=13,
    WIMLIB_PROGRESS_MSG_WRITE_METADATA_END=14,
    WIMLIB_PROGRESS_MSG_RENAME=15,
    WIMLIB_PROGRESS_MSG_VERIFY_INTEGRITY=16,
    WIMLIB_PROGRESS_MSG_CALC_INTEGRITY=17,
    WIMLIB_PROGRESS_MSG_SPLIT_BEGIN_PART=19,
    WIMLIB_PROGRESS_MSG_SPLIT_END_PART=20,
    WIMLIB_PROGRESS_MSG_UPDATE_BEGIN_COMMAND=21,
    WIMLIB_PROGRESS_MSG_UPDATE_END_COMMAND=22,
    WIMLIB_PROGRESS_MSG_REPLACE_FILE_IN_WIM=23,
    WIMLIB_PROGRESS_MSG_WIMBOOT_EXCLUDE=24,
    WIMLIB_PROGRESS_MSG_UNMOUNT_BEGIN=25,
    WIMLIB_PROGRESS_MSG_DONE_WITH_FILE=26,
    WIMLIB_PROGRESS_MSG_BEGIN_VERIFY_IMAGE=27,
    WIMLIB_PROGRESS_MSG_END_VERIFY_IMAGE=28,
    WIMLIB_PROGRESS_MSG_VERIFY_STREAMS=29,
    WIMLIB_PROGRESS_MSG_TEST_FILE_EXCLUSION=30,
    WIMLIB_PROGRESS_MSG_HANDLE_ERROR=31
} wimlib_progress_msg;

typedef union wimlib_progress_info wimlib_progress_info, *Pwimlib_progress_info;

typedef wimlib_progress_status (*wimlib_progress_func_t)(enum wimlib_progress_msg, union wimlib_progress_info *, void *);

typedef union anon_union_8_2_d8d1805f_for_anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0_0 anon_union_8_2_d8d1805f_for_anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0_0, *Panon_union_8_2_d8d1805f_for_anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0_0;

typedef struct wim_security_data wim_security_data, *Pwim_security_data;

typedef struct xml_node xml_node, *Pxml_node;

typedef union anon_union_8_3_97ac088e_for_filedes_0 anon_union_8_3_97ac088e_for_filedes_0, *Panon_union_8_3_97ac088e_for_filedes_0;

typedef union anon_union_8_2_4928384f_for_filedes_4 anon_union_8_2_4928384f_for_filedes_4, *Panon_union_8_2_4928384f_for_filedes_4;

typedef struct decompressor_ops decompressor_ops, *Pdecompressor_ops;

typedef struct wimlib_progress_info_write_streams wimlib_progress_info_write_streams, *Pwimlib_progress_info_write_streams;

typedef struct wimlib_progress_info_scan wimlib_progress_info_scan, *Pwimlib_progress_info_scan;

typedef struct wimlib_progress_info_extract wimlib_progress_info_extract, *Pwimlib_progress_info_extract;

typedef struct wimlib_progress_info_rename wimlib_progress_info_rename, *Pwimlib_progress_info_rename;

typedef struct wimlib_progress_info_update wimlib_progress_info_update, *Pwimlib_progress_info_update;

typedef struct wimlib_progress_info_integrity wimlib_progress_info_integrity, *Pwimlib_progress_info_integrity;

typedef struct wimlib_progress_info_split wimlib_progress_info_split, *Pwimlib_progress_info_split;

typedef struct wimlib_progress_info_replace wimlib_progress_info_replace, *Pwimlib_progress_info_replace;

typedef struct wimlib_progress_info_wimboot_exclude wimlib_progress_info_wimboot_exclude, *Pwimlib_progress_info_wimboot_exclude;

typedef struct wimlib_progress_info_unmount wimlib_progress_info_unmount, *Pwimlib_progress_info_unmount;

typedef struct wimlib_progress_info_done_with_file wimlib_progress_info_done_with_file, *Pwimlib_progress_info_done_with_file;

typedef struct wimlib_progress_info_verify_image wimlib_progress_info_verify_image, *Pwimlib_progress_info_verify_image;

typedef struct wimlib_progress_info_verify_streams wimlib_progress_info_verify_streams, *Pwimlib_progress_info_verify_streams;

typedef struct wimlib_progress_info_test_file_exclusion wimlib_progress_info_test_file_exclusion, *Pwimlib_progress_info_test_file_exclusion;

typedef struct wimlib_progress_info_handle_error wimlib_progress_info_handle_error, *Pwimlib_progress_info_handle_error;

typedef struct windows_file windows_file, *Pwindows_file;

typedef enum xml_node_type {
    XML_ELEMENT_NODE=0,
    XML_TEXT_NODE=1,
    XML_ATTRIBUTE_NODE=2
} xml_node_type;

typedef struct _iso9660_s _iso9660_s, *P_iso9660_s;

typedef struct _iso9660_s iso9660_t;

typedef struct udf_s udf_s, *Pudf_s;

typedef struct udf_s udf_t;

typedef struct udf_dirent_s udf_dirent_s, *Pudf_dirent_s;

typedef struct udf_dirent_s udf_dirent_t;

typedef struct iso9660_stat_s iso9660_stat_s, *Piso9660_stat_s;

typedef struct iso9660_stat_s iso9660_stat_t;

typedef wchar_t wimlib_tchar;

typedef enum anon_enum_32 {
    BLED_COMPRESSION_NONE=0,
    D2D1_INTERPOLATION_MODE_DEFINITION_NEAREST_NEIGHBOR=0,
    ICBTAG_FILE_TYPE_UNDEF=0,
    ICBTAG_FLAG_AD_SHORT=0,
    LZMA_IS_MATCH=0,
    LZMA_LEN_CHOICE=0,
    SEQ_INDEX_COUNT=0,
    SEQ_STREAM_HEADER=0,
    UNLINK_DENTRY=0,
    WIMLIB_SCAN_DENTRY_OK=0,
    dliNoteStartProcessing=0,
    dliStartProcessing=0,
    no_argument=0,
    BLED_COMPRESSION_ZIP=1,
    D2D1_INTERPOLATION_MODE_DEFINITION_LINEAR=1,
    FPF_COMPRESSED=1,
    HUF_flags_bmi2=1,
    ICBTAG_FILE_TYPE_USE=1,
    ICBTAG_FLAG_AD_LONG=1,
    LINK_DENTRY=1,
    LZMA_LEN_CHOICE_2=1,
    SEQ_BLOCK_START=1,
    SEQ_INDEX_UNPADDED=1,
    TAGID_PRI_VOL=1,
    UDF_FILE_HIDDEN=1,
    VSS_VOLSNAP_ATTR_PERSISTENT=1,
    WIMLIB_SCAN_DENTRY_EXCLUDED=1,
    XA_PERM_RSYS=1,
    _STAT_FILE=1,
    dliNotePreLoadLibrary=1,
    required_argument=1,
    BLED_COMPRESSION_LZW=2,
    CHANGE_FILE_NAME=2,
    D2D1_INTERPOLATION_MODE_DEFINITION_CUBIC=2,
    HUF_flags_optimalDepth=2,
    ICBTAG_FILE_TYPE_PIE=2,
    ICBTAG_FLAG_AD_EXTENDED=2,
    LZMA_LEN_LOW=2,
    LZMA_MATCH_MIN_LEN=2,
    SEQ_BLOCK_HEADER=2,
    SEQ_INDEX_UNCOMPRESSED=2,
    TAGID_ANCHOR=2,
    UDF_FILE_DIRECTORY=2,
    VSS_VOLSNAP_ATTR_NO_AUTORECOVERY=2,
    WIMLIB_SCAN_DENTRY_UNSUPPORTED=2,
    _STAT_DIR=2,
    dliNotePreGetProcAddress=2,
    optional_argument=2,
    BLED_COMPRESSION_GZIP=3,
    CHANGE_SHORT_NAME=3,
    D2D1_INTERPOLATION_MODE_DEFINITION_MULTI_SAMPLE_LINEAR=3,
    ICBTAG_FILE_TYPE_IE=3,
    ICBTAG_FLAG_AD_IN_ICB=3,
    LZMA_LEN_NUM_LOW_BITS=3,
    LZMA_LEN_NUM_MID_BITS=3,
    SEQ_BLOCK_UNCOMPRESS=3,
    TAGID_VOL=3,
    WIMLIB_SCAN_DENTRY_FIXED_SYMLINK=3,
    dliFailLoadLib=3,
    BCJ_X86=4,
    BLED_COMPRESSION_LZMA=4,
    CDIO_MMC_HW_REVISION_LEN=4,
    D2D1_INTERPOLATION_MODE_DEFINITION_ANISOTROPIC=4,
    HUF_flags_preferRepeat=4,
    ICBTAG_FILE_TYPE_DIRECTORY=4,
    LZMA_NUM_ALIGN_BITS=4,
    LZMA_NUM_LEN_TO_POS_STATES=4,
    LZMA_NUM_POS_BITS_MAX=4,
    LZMA_START_POS_MODEL_INDEX=4,
    SEQ_BLOCK_PADDING=4,
    TAGID_IMP_VOL=4,
    UDF_FILE_DELETED=4,
    VSS_VOLSNAP_ATTR_CLIENT_ACCESSIBLE=4,
    WIMLIB_SCAN_DENTRY_NOT_FIXED_SYMLINK=4,
    XA_PERM_XSYS=4,
    dliFailGetProc=4,
    BCJ_POWERPC=5,
    BLED_COMPRESSION_BZIP2=5,
    D2D1_INTERPOLATION_MODE_DEFINITION_HIGH_QUALITY_CUBIC=5,
    ICBTAG_FILE_TYPE_REGULAR=5,
    SEQ_BLOCK_CHECK=5,
    TAGID_PARTITION=5,
    VSD_STD_ID_SIZE=5,
    dliNoteEndProcessing=5,
    BCJ_IA64=6,
    BLED_COMPRESSION_XZ=6,
    D2D1_INTERPOLATION_MODE_DEFINITION_FANT=6,
    ICBTAG_FILE_TYPE_BLOCK=6,
    LZMA_NUM_POS_SLOT_BITS=6,
    SEQ_INDEX=6,
    TAGID_LOGVOL=6,
    BCJ_ARM=7,
    BLED_COMPRESSION_7ZIP=7,
    D2D1_INTERPOLATION_MODE_DEFINITION_MIPMAP_LINEAR=7,
    ICBTAG_FILE_TYPE_CHAR=7,
    ICBTAG_FLAG_AD_MASK=7,
    LZMA_NUM_LIT_STATES=7,
    SEQ_INDEX_PADDING=7,
    TAGID_UNALLOC_SPACE=7,
    BCJ_ARMTHUMB=8,
    BLED_COMPRESSION_VTSI=8,
    CDIO_MMC_HW_VENDOR_LEN=8,
    HUF_flags_suspectUncompressible=8,
    ICBTAG_FILE_TYPE_EA=8,
    ICBTAG_FLAG_SORTED=8,
    LZMA_LEN_NUM_HIGH_BITS=8,
    SEQ_INDEX_CRC32=8,
    TAGID_TERM=8,
    UDF_FILE_PARENT=8,
    VSS_VOLSNAP_ATTR_NO_AUTO_RELEASE=8,
    BCJ_SPARC=9,
    BLED_COMPRESSION_ZSTD=9,
    ICBTAG_FILE_TYPE_FIFO=9,
    SEQ_STREAM_FOOTER=9,
    TAGID_LOGVOL_INTEGRITY=9,
    BLED_COMPRESSION_MAX=10,
    ICBTAG_FILE_TYPE_SOCKET=10,
    ICBTAG_FILE_TYPE_TE=11,
    ICBTAG_FILE_TYPE_SYMLINK=12,
    LZMA_NUM_STATES=12,
    ICBTAG_FILE_TYPE_STREAMDIR=13,
    LZMA_END_POS_MODEL_INDEX=14,
    BMAX=16,
    CDIO_MMC_HW_MODEL_LEN=16,
    HUF_flags_disableAsm=16,
    ICBTAG_FLAG_NONRELOCATABLE=16,
    UDF_FILE_METADATA=16,
    VSS_VOLSNAP_ATTR_NO_WRITERS=16,
    XA_PERM_RUSR=16,
    UDF_REGID_ID_SIZE=23,
    HOURS_PER_DAY=24,
    HUF_flags_disableFast=32,
    ICBTAG_FLAG_ARCHIVE=32,
    UDF_VOLID_SIZE=32,
    VSS_VOLSNAP_ATTR_TRANSPORTABLE=32,
    UDF_FID_SIZE=38,
    SECS_PER_MINUTE=60,
    ICBTAG_FLAG_SETUID=64,
    VSS_VOLSNAP_ATTR_NOT_SURFACED=64,
    XA_PERM_XUSR=64,
    MAX_YEAR_SECONDS=69,
    XZ_MAGIC2a=90,
    ICBTAG_FLAG_SETGID=128,
    LZMA_NUM_FULL_DISTANCES=128,
    UDF_VOLSET_ID_SIZE=128,
    VSS_VOLSNAP_ATTR_NOT_TRANSACTED=128,
    LZMA_LEN_MID=130,
    LZMA_IS_REP=192,
    LZMA_IS_REP_G0=204,
    LZMA_IS_REP_G1=216,
    LZMA_IS_REP_G2=228,
    LZMA_IS_REP_0_LONG=240,
    ICBTAG_FLAG_STICKY=256,
    TAGID_FSD=256,
    XA_PERM_RGRP=256,
    TAGID_FID=257,
    LZMA_LEN_HIGH=258,
    TAGID_AED=258,
    TAGID_IE=259,
    TAGID_TE=260,
    TAGID_FILE_ENTRY=261,
    TAGID_EAHD=262,
    TAGID_USE=263,
    TAGID_SBD=264,
    TAGID_PIE=265,
    TAGID_EFE=266,
    XA_PERM_ALL_READ=273,
    N_MAX=288,
    DAYS_PER_YEAR=365,
    LZMA_POS_SLOT=432,
    ICBTAG_FLAG_CONTIGUOUS=512,
    LZMA_NUM_LEN_PROBS=514,
    LZMA_SPEC_POS=688,
    LZMA_LIT_SIZE=768,
    LZMA_ALIGN=802,
    LZMA_LEN_CODER=818,
    ICBTAG_FLAG_SYSTEM=1024,
    ISO_XA_MARKER_OFFSET=1024,
    XA_PERM_XGRP=1024,
    XA_PERM_ALL_EXEC=1092,
    LZMA_REP_LEN_CODER=1332,
    XA_PERM_ALL_ALL=1365,
    LZMA_BASE_SIZE=1846,
    LZMA_LITERAL=1846,
    EPOCH_YEAR=1970,
    ICBTAG_FLAG_TRANSFORMED=2048,
    UDF_BLOCKSIZE=2048,
    XA_ATTR_MODE2FORM1=2048,
    XA_FORM1_FILE=3413,
    SECS_PER_HOUR=3600,
    ICBTAG_FLAG_MULTIVERSIONS=4096,
    XA_ATTR_MODE2FORM2=4096,
    XA_PERM_ROTH=4096,
    XA_FORM2_FILE=5461,
    ICBTAG_FLAG_STREAM=8192,
    XA_ATTR_INTERLEAVED=8192,
    XZ_MAGIC1=14333,
    XA_ATTR_CDDA=16384,
    XA_PERM_XOTH=16384,
    BZIP2_MAGIC=23106,
    XA_ATTR_DIRECTORY=32768,
    GZIP_MAGIC=35615,
    XA_FORM1_DIR=36181,
    COMPRESS_MAGIC=40223,
    ZSTD_MAGIC1=46376,
    ZSTD_MAGIC2=64815,
    VSS_VOLSNAP_ATTR_HARDWARE_ASSISTED=65536,
    SECS_PER_DAY=86400,
    VSS_VOLSNAP_ATTR_DIFFERENTIAL=131072,
    VSS_VOLSNAP_ATTR_PLEX=262144,
    VSS_VOLSNAP_ATTR_IMPORTED=524288,
    VSS_VOLSNAP_ATTR_EXPOSED_LOCALLY=1048576,
    VSS_VOLSNAP_ATTR_EXPOSED_REMOTELY=2097152,
    VSS_VOLSNAP_ATTR_AUTORECOVER=4194304,
    XZ_MAGIC2=5920890,
    VSS_VOLSNAP_ATTR_ROLLBACK_RECOVERY=8388608,
    VSS_VOLSNAP_ATTR_DELAYED_POSTSNAPSHOT=16777216,
    VSS_VOLSNAP_ATTR_TXF_RECOVERY=33554432,
    ZIP_CDF_MAGIC=33639248,
    ZIP_FILEHEADER_MAGIC=67324752,
    ZIP_CDE_MAGIC=101010256,
    ZIP64_CDE_MAGIC=101075792,
    ZIP_DD_MAGIC=134695760,
    XZ_MAGIC1a=1484404733,
    ZSTD_MAGIC=4247762216
} anon_enum_32;

typedef union anon_union_8_2_d1a04883_for_wimlib_progress_info_scan_3 anon_union_8_2_d1a04883_for_wimlib_progress_info_scan_3, *Panon_union_8_2_d1a04883_for_wimlib_progress_info_scan_3;

typedef struct wimlib_update_command wimlib_update_command, *Pwimlib_update_command;

typedef struct vss_snapshot vss_snapshot, *Pvss_snapshot;

typedef struct cdio_header_t cdio_header_t, *Pcdio_header_t;

typedef struct _CdioDataSource _CdioDataSource, *P_CdioDataSource;

typedef struct _CdioDataSource CdioDataSource_t;

typedef enum bool_3way_t {
    nope=0,
    yep=1,
    dunno=2
} bool_3way_t;

typedef struct iso9660_pvd_s iso9660_pvd_s, *Piso9660_pvd_s;

typedef struct iso9660_pvd_s iso9660_pvd_t;

typedef struct iso9660_svd_s iso9660_svd_s, *Piso9660_svd_s;

typedef struct iso9660_svd_s iso9660_svd_t;

typedef uint8_t iso_extension_mask_t;

typedef struct anon_struct_12_3_46f71309 anon_struct_12_3_46f71309, *Panon_struct_12_3_46f71309;

typedef struct _CdIo _CdIo, *P_CdIo;

typedef struct _CdIo CdIo_t;

typedef struct anchor_vol_desc_ptr_s anchor_vol_desc_ptr_s, *Panchor_vol_desc_ptr_s;

typedef struct anchor_vol_desc_ptr_s anchor_vol_desc_ptr_t;

typedef uint16_t partition_num_t;

typedef struct udf_fileid_desc_s udf_fileid_desc_s, *Pudf_fileid_desc_s;

typedef struct udf_fileid_desc_s udf_fileid_desc_t;

typedef struct udf_file_entry_s udf_file_entry_s, *Pudf_file_entry_s;

typedef struct udf_file_entry_s udf_file_entry_t;

typedef struct iso_rock_statbuf_s iso_rock_statbuf_s, *Piso_rock_statbuf_s;

typedef struct iso_rock_statbuf_s iso_rock_statbuf_t;

typedef struct tm tm, *Ptm;

typedef int32_t lsn_t;

typedef struct iso9660_xa_s iso9660_xa_s, *Piso9660_xa_s;

typedef struct iso9660_xa_s iso9660_xa_t;

typedef enum wimlib_update_op {
    WIMLIB_UPDATE_OP_ADD=0,
    WIMLIB_UPDATE_OP_DELETE=1,
    WIMLIB_UPDATE_OP_RENAME=2
} wimlib_update_op;

typedef union anon_union_32_3_29d757e9_for_wimlib_update_command_1 anon_union_32_3_29d757e9_for_wimlib_update_command_1, *Panon_union_32_3_29d757e9_for_wimlib_update_command_1;

typedef struct cdio_stream_io_functions cdio_stream_io_functions, *Pcdio_stream_io_functions;

typedef uint8_t iso711_t;

typedef uint64_t iso733_t;

typedef uint32_t iso723_t;

typedef uint32_t iso731_t;

typedef uint32_t iso732_t;

typedef struct iso9660_dir_s iso9660_dir_s, *Piso9660_dir_s;

typedef struct iso9660_dir_s iso9660_dir_t;

typedef struct iso9660_ltime_s iso9660_ltime_s, *Piso9660_ltime_s;

typedef struct iso9660_ltime_s iso9660_ltime_t;

typedef enum driver_id_t {
    DRIVER_UNKNOWN=0,
    DRIVER_AIX=1,
    DRIVER_FREEBSD=2,
    DRIVER_NETBSD=3,
    DRIVER_LINUX=4,
    DRIVER_SOLARIS=5,
    DRIVER_OSX=6,
    DRIVER_WIN32=7,
    DRIVER_CDRDAO=8,
    DRIVER_BINCUE=9,
    DRIVER_NRG=10,
    DRIVER_DEVICE=11
} driver_id_t;

typedef struct cdio_funcs_t cdio_funcs_t, *Pcdio_funcs_t;

typedef enum driver_return_code_t {
    DRIVER_OP_MMC_SENSE_DATA=-8,
    DRIVER_OP_NO_DRIVER=-7,
    DRIVER_OP_BAD_POINTER=-6,
    DRIVER_OP_BAD_PARAMETER=-5,
    DRIVER_OP_NOT_PERMITTED=-4,
    DRIVER_OP_UNINIT=-3,
    DRIVER_OP_UNSUPPORTED=-2,
    DRIVER_OP_ERROR=-1,
    DRIVER_OP_SUCCESS=0
} driver_return_code_t;

typedef struct cdio_audio_volume_s cdio_audio_volume_s, *Pcdio_audio_volume_s;

typedef struct cdio_audio_volume_s cdio_audio_volume_t;

typedef struct msf_s msf_s, *Pmsf_s;

typedef struct msf_s msf_t;

typedef struct cdio_track_index_s cdio_track_index_s, *Pcdio_track_index_s;

typedef struct cdio_track_index_s cdio_track_index_t;

typedef struct cdio_subchannel_s cdio_subchannel_s, *Pcdio_subchannel_s;

typedef struct cdio_subchannel_s cdio_subchannel_t;

typedef struct cdtext_s cdtext_s, *Pcdtext_s;

typedef struct cdtext_s cdtext_t;

typedef enum discmode_t {
    CDIO_DISC_MODE_CD_DA=0,
    CDIO_DISC_MODE_CD_DATA=1,
    CDIO_DISC_MODE_CD_XA=2,
    CDIO_DISC_MODE_CD_MIXED=3,
    CDIO_DISC_MODE_DVD_ROM=4,
    CDIO_DISC_MODE_DVD_RAM=5,
    CDIO_DISC_MODE_DVD_R=6,
    CDIO_DISC_MODE_DVD_RW=7,
    CDIO_DISC_MODE_HD_DVD_ROM=8,
    CDIO_DISC_MODE_HD_DVD_RAM=9,
    CDIO_DISC_MODE_HD_DVD_R=10,
    CDIO_DISC_MODE_DVD_PR=11,
    CDIO_DISC_MODE_DVD_PRW=12,
    CDIO_DISC_MODE_DVD_PRW_DL=13,
    CDIO_DISC_MODE_DVD_PR_DL=14,
    CDIO_DISC_MODE_DVD_OTHER=15,
    CDIO_DISC_MODE_NO_INFO=16,
    CDIO_DISC_MODE_ERROR=17,
    CDIO_DISC_MODE_CD_I=18
} discmode_t;

typedef uint32_t cdio_drive_read_cap_t;

typedef uint32_t cdio_drive_write_cap_t;

typedef uint32_t cdio_drive_misc_cap_t;

typedef uint8_t track_t;

typedef struct cdio_hwinfo cdio_hwinfo, *Pcdio_hwinfo;

typedef struct cdio_hwinfo cdio_hwinfo_t;

typedef enum track_flag_t {
    CDIO_TRACK_FLAG_FALSE=0,
    CDIO_TRACK_FLAG_TRUE=1,
    CDIO_TRACK_FLAG_ERROR=2,
    CDIO_TRACK_FLAG_UNKNOWN=3
} track_flag_t;

typedef int32_t lba_t;

typedef enum track_format_t {
    TRACK_FORMAT_AUDIO=0,
    TRACK_FORMAT_CDI=1,
    TRACK_FORMAT_XA=2,
    TRACK_FORMAT_DATA=3,
    TRACK_FORMAT_PSX=4,
    TRACK_FORMAT_ERROR=5
} track_format_t;

typedef struct udf_tag_s udf_tag_s, *Pudf_tag_s;

typedef struct udf_tag_s udf_tag_t;

typedef struct udf_extent_ad_s udf_extent_ad_s, *Pudf_extent_ad_s;

typedef struct udf_extent_ad_s udf_extent_ad_t;

typedef uint8_t udf_Uint8_t;

typedef uint16_t udf_Uint16_t;

typedef struct udf_long_ad_s udf_long_ad_s, *Pudf_long_ad_s;

typedef struct udf_long_ad_s udf_long_ad_t;

typedef union anon_union_2_4_e0f80d3e_for_u anon_union_2_4_e0f80d3e_for_u, *Panon_union_2_4_e0f80d3e_for_u;

typedef struct udf_icbtag_s udf_icbtag_s, *Pudf_icbtag_s;

typedef struct udf_icbtag_s udf_icbtag_t;

typedef uint32_t udf_Uint32_t;

typedef uint64_t udf_Uint64_t;

typedef struct udf_timestamp_s udf_timestamp_s, *Pudf_timestamp_s;

typedef struct udf_timestamp_s udf_timestamp_t;

typedef struct udf_regid_s udf_regid_s, *Pudf_regid_s;

typedef struct udf_regid_s udf_regid_t;

typedef union anon_union_1872_3_36522125_for_u anon_union_1872_3_36522125_for_u, *Panon_union_1872_3_36522125_for_u;

typedef uint32_t posix_mode_t;

typedef uint32_t posix_nlink_t;

typedef uint32_t posix_uid_t;

typedef uint32_t posix_gid_t;

typedef struct iso_rock_time_s iso_rock_time_s, *Piso_rock_time_s;

typedef struct iso_rock_time_s iso_rock_time_t;

typedef struct wimlib_add_command wimlib_add_command, *Pwimlib_add_command;

typedef struct wimlib_delete_command wimlib_delete_command, *Pwimlib_delete_command;

typedef struct wimlib_rename_command wimlib_rename_command, *Pwimlib_rename_command;

typedef int (*cdio_data_open_t)(void *);

typedef int (*cdio_data_seek_t)(void *, off64_t, int);

typedef off64_t (*cdio_data_stat_t)(void *);

typedef ssize_t (*cdio_data_read_t)(void *, void *, size_t);

typedef int (*cdio_data_close_t)(void *);

typedef void (*cdio_data_free_t)(void *);

typedef struct iso9660_dtime_s iso9660_dtime_s, *Piso9660_dtime_s;

typedef struct iso9660_dtime_s iso9660_dtime_t;

typedef union anon_union_1_2_43abca9d_for_filename anon_union_1_2_43abca9d_for_filename, *Panon_union_1_2_43abca9d_for_filename;

typedef int8_t iso712_t;

typedef driver_return_code_t (*mmc_run_cmd_fn_t)(void);

typedef struct udf_lb_addr_s udf_lb_addr_s, *Pudf_lb_addr_s;

typedef struct udf_lb_addr_s udf_lb_addr_t;

typedef struct anon_struct_2_2_ffe33933_for_imp_use anon_struct_2_2_ffe33933_for_imp_use, *Panon_struct_2_2_ffe33933_for_imp_use;

typedef struct anon_struct_2_2_ffe33933_for_file_id anon_struct_2_2_ffe33933_for_file_id, *Panon_struct_2_2_ffe33933_for_file_id;

typedef struct anon_struct_2_2_ffe33933_for_padding anon_struct_2_2_ffe33933_for_padding, *Panon_struct_2_2_ffe33933_for_padding;

typedef struct udf_id_suffix_s udf_id_suffix_s, *Pudf_id_suffix_s;

typedef struct udf_id_suffix_s udf_id_suffix_t;

typedef union anon_union_17_2_fa9ec609_for_t anon_union_17_2_fa9ec609_for_t, *Panon_union_17_2_fa9ec609_for_t;

union anon_union_24_2_8e4338b2_for_wim_inode_stream_1 {
    u8 _stream_hash[20];
    struct blob_descriptor *_stream_blob;
    undefined1 field2[24]; // Automatically generated padding to match DWARF declared size
};

struct anon_struct_2_2_ffe33933_for_file_id {
    udf_Uint16_t unused;
    udf_Uint8_t data[0];
};

struct anon_struct_2_2_ffe33933_for_imp_use {
    udf_Uint16_t unused;
    udf_Uint8_t data[0];
};

struct anon_struct_2_2_ffe33933_for_padding {
    udf_Uint16_t unused;
    udf_Uint8_t data[0];
};

union anon_union_2_4_e0f80d3e_for_u {
    udf_Uint16_t i_imp_use;
    struct anon_struct_2_2_ffe33933_for_imp_use imp_use;
    struct anon_struct_2_2_ffe33933_for_file_id file_id;
    struct anon_struct_2_2_ffe33933_for_padding padding;
};

union anon_union_1872_3_36522125_for_u {
    udf_Uint8_t ext_attr[0];
    udf_Uint8_t alloc_descs[0];
    udf_Uint8_t pad_to_one_block[1872];
};

struct udf_id_suffix_s {
    udf_Uint16_t udf_revision;
    udf_Uint8_t os_class;
    udf_Uint8_t os_identifier;
    udf_Uint8_t reserved[4];
};

struct udf_regid_s {
    udf_Uint8_t flags;
    udf_Uint8_t id[23];
    udf_id_suffix_t id_suffix;
};

struct udf_lb_addr_s {
    udf_Uint32_t lba;
    udf_Uint16_t partitionReferenceNum;
};

struct udf_long_ad_s {
    udf_Uint32_t len;
    udf_lb_addr_t loc;
    udf_Uint8_t imp_use[6];
};

struct udf_timestamp_s {
    udf_Uint16_t type_tz;
    udf_Uint16_t year;
    udf_Uint8_t month;
    udf_Uint8_t day;
    udf_Uint8_t hour;
    udf_Uint8_t minute;
    udf_Uint8_t second;
    udf_Uint8_t centiseconds;
    udf_Uint8_t hundreds_of_microseconds;
    udf_Uint8_t microseconds;
};

struct udf_icbtag_s {
    udf_Uint32_t prev_num_dirs;
    udf_Uint16_t strat_type;
    udf_Uint16_t strat_param;
    udf_Uint16_t max_num_entries;
    udf_Uint8_t reserved;
    udf_Uint8_t file_type;
    udf_lb_addr_t parent_ICB;
    udf_Uint16_t flags;
};

struct udf_tag_s {
    udf_Uint16_t id;
    udf_Uint16_t desc_version;
    udf_Uint8_t cksum;
    udf_Uint8_t reserved;
    udf_Uint16_t i_serial;
    udf_Uint16_t desc_CRC;
    udf_Uint16_t desc_CRC_len;
    udf_Uint32_t loc;
};

struct udf_file_entry_s {
    udf_tag_t tag;
    udf_icbtag_t icb_tag;
    udf_Uint32_t uid;
    udf_Uint32_t gid;
    udf_Uint32_t permissions;
    udf_Uint16_t link_count;
    udf_Uint8_t rec_format;
    udf_Uint8_t rec_disp_attr;
    udf_Uint32_t rec_len;
    udf_Uint64_t info_len;
    udf_Uint64_t logblks_recorded;
    udf_timestamp_t access_time;
    udf_timestamp_t modification_time;
    udf_timestamp_t attribute_time;
    udf_Uint32_t checkpoint;
    udf_long_ad_t ext_attr_ICB;
    udf_regid_t imp_id;
    udf_Uint64_t unique_ID;
    udf_Uint32_t u_extended_attr;
    udf_Uint32_t u_alloc_descs;
    union anon_union_1872_3_36522125_for_u u;
};

struct cdio_stream_io_functions {
    cdio_data_open_t open;
    cdio_data_seek_t seek;
    cdio_data_stat_t stat;
    cdio_data_read_t read;
    cdio_data_close_t close;
    cdio_data_free_t free;
};

struct udf_extent_ad_s {
    udf_Uint32_t len;
    udf_Uint32_t loc;
};

struct anchor_vol_desc_ptr_s {
    udf_tag_t tag;
    udf_extent_ad_t main_vol_desc_seq_ext;
    udf_extent_ad_t reserve_vol_desc_seq_ext;
    udf_Uint8_t reserved[480];
};

struct iso9660_ltime_s {
    char lt_year[4];
    char lt_month[2];
    char lt_day[2];
    char lt_hour[2];
    char lt_minute[2];
    char lt_second[2];
    char lt_hsecond[2];
    iso712_t lt_gmtoff;
};

struct iso9660_dtime_s {
    iso711_t dt_year;
    iso711_t dt_month;
    iso711_t dt_day;
    iso711_t dt_hour;
    iso711_t dt_minute;
    iso711_t dt_second;
    iso712_t dt_gmtoff;
};

union anon_union_17_2_fa9ec609_for_t {
    iso9660_ltime_t ltime;
    iso9660_dtime_t dtime;
};

struct iso_rock_time_s {
    _Bool b_used;
    _Bool b_longdate;
    union anon_union_17_2_fa9ec609_for_t t;
};

struct iso_rock_statbuf_s {
    enum bool_3way_t b3_rock;
    posix_mode_t st_mode;
    posix_nlink_t st_nlinks;
    posix_uid_t st_uid;
    posix_gid_t st_gid;
    uint8_t s_rock_offset;
    int i_symlink;
    int i_symlink_max;
    char *psz_symlink;
    iso_rock_time_t create;
    iso_rock_time_t modify;
    iso_rock_time_t access;
    iso_rock_time_t attributes;
    iso_rock_time_t backup;
    iso_rock_time_t expiration;
    iso_rock_time_t effective;
    uint32_t i_rdev;
    uint32_t u_su_fields;
};

struct decompressor_ops {
    int (*create_decompressor)(size_t, void **);
    int (*decompress)(void *, size_t, void *, size_t, void *);
    void (*free_decompressor)(void *);
};

struct anon_struct_16_2_ca14de23_for_anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2_1 {
    utf16lechar *solid_sort_name;
    size_t solid_sort_name_nbytes;
};

struct wim_reshdr {
    u64 size_in_wim:56;
    u64 flags:8;
    u64 offset_in_wim;
    u64 uncompressed_size;
};

union anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2 {
    struct wim_reshdr out_reshdr;
    struct anon_struct_16_2_ca14de23_for_anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2_1 field_1;
};

struct _CdioDataSource {
    void *user_data;
    struct cdio_stream_io_functions op;
    int is_open;
    off64_t position;
};

union anon_union_8_2_4928384f_for_filedes_4 {
    udf_dirent_t *p_udf_file;
    iso9660_stat_t *p_iso_file;
};

union anon_union_8_3_97ac088e_for_filedes_0 {
    int fd;
    iso9660_t *p_iso;
    udf_t *p_udf;
};

struct filedes {
    union anon_union_8_3_97ac088e_for_filedes_0 field_0;
    uint is_pipe:1;
    uint is_iso:1;
    uint is_udf:1;
    union anon_union_8_2_4928384f_for_filedes_4 field_4;
    off64_t offset;
};

union anon_union_1_2_43abca9d_for_filename {
    iso711_t len;
    char str[1];
};

struct iso9660_dir_s {
    iso711_t length;
    iso711_t xa_length;
    iso733_t extent;
    iso733_t size;
    iso9660_dtime_t recording_time;
    uint8_t file_flags;
    iso711_t file_unit_size;
    iso711_t interleave_gap;
    iso723_t volume_sequence_number;
    union anon_union_1_2_43abca9d_for_filename filename;
};

struct wimlib_progress_info_test_file_exclusion {
    wimlib_tchar *path;
    _Bool will_exclude;
};

struct blob_extraction_target {
    struct wim_inode *inode;
    struct wim_inode_stream *stream;
};

struct anon_struct_16_2_f537b39f_for_anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1_1 {
    struct blob_extraction_target *blob_extraction_targets;
    u32 alloc_blob_extraction_targets;
};

union anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1 {
    struct blob_extraction_target inline_blob_extraction_targets[3];
    struct anon_struct_16_2_f537b39f_for_anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1_1 field_1;
};

struct wimlib_rename_command {
    wimlib_tchar *wim_source_path;
    wimlib_tchar *wim_target_path;
    int rename_flags;
};

union anon_union_8_2_d8d1805f_for_anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0_0 {
    tchar *file_on_disk;
    struct windows_file *windows_file;
};

struct anon_struct_16_2_99275dc8_for_anon_union_24_3_76a9f428_for_blob_descriptor_2_2 {
    struct wim_inode *back_inode;
    u32 back_stream_id;
};

union anon_union_24_3_76a9f428_for_blob_descriptor_2 {
    u8 hash[20];
    size_t hash_short;
    struct anon_struct_16_2_99275dc8_for_anon_union_24_3_76a9f428_for_blob_descriptor_2_2 field_2;
    undefined1 field3[24]; // Automatically generated padding to match DWARF declared size
};

struct wimlib_progress_info_write_streams {
    uint64_t total_bytes;
    uint64_t total_streams;
    uint64_t completed_bytes;
    uint64_t completed_streams;
    uint32_t num_threads;
    int32_t compression_type;
    uint32_t total_parts;
    uint32_t completed_parts;
    uint64_t completed_compressed_bytes;
};

struct wim_inode_extra {
    size_t size;
    u8 data[0];
};

struct cdio_header_t {
    uint16_t u_type;
    uint16_t u_flags;
};

struct cdio_funcs_t {
    driver_return_code_t (*audio_get_volume)(void *, cdio_audio_volume_t *);
    driver_return_code_t (*audio_pause)(void *);
    driver_return_code_t (*audio_play_msf)(void *, msf_t *, msf_t *);
    driver_return_code_t (*audio_play_track_index)(void *, cdio_track_index_t *);
    driver_return_code_t (*audio_read_subchannel)(void *, cdio_subchannel_t *);
    driver_return_code_t (*audio_resume)(void *);
    driver_return_code_t (*audio_set_volume)(void *, cdio_audio_volume_t *);
    driver_return_code_t (*audio_stop)(void *);
    driver_return_code_t (*eject_media)(void *);
    void (*free)(void *);
    char * (*get_arg)(void *, char *);
    int (*get_blocksize)(void *);
    cdtext_t * (*get_cdtext)(void *);
    uint8_t * (*get_cdtext_raw)(void *);
    char * * (*get_devices)(void);
    char * (*get_default_device)(void);
    lsn_t (*get_disc_last_lsn)(void *);
    discmode_t (*get_discmode)(void *);
    void (*get_drive_cap)(void *, cdio_drive_read_cap_t *, cdio_drive_write_cap_t *, cdio_drive_misc_cap_t *);
    track_t (*get_first_track_num)(void *);
    _Bool (*get_hwinfo)(CdIo_t *, cdio_hwinfo_t *);
    driver_return_code_t (*get_last_session)(void *, lsn_t *);
    int (*get_media_changed)(void *);
    char * (*get_mcn)(void *);
    track_t (*get_num_tracks)(void *);
    int (*get_track_channels)(void *, track_t);
    track_flag_t (*get_track_copy_permit)(void *, track_t);
    lba_t (*get_track_lba)(void *, track_t);
    lba_t (*get_track_pregap_lba)(void *, track_t);
    char * (*get_track_isrc)(void *, track_t);
    track_format_t (*get_track_format)(void *, track_t);
    _Bool (*get_track_green)(void *, track_t);
    _Bool (*get_track_msf)(void *, track_t, msf_t *);
    track_flag_t (*get_track_preemphasis)(void *, track_t);
    off64_t (*lseek)(void *, off64_t, int);
    ssize_t (*read)(void *, void *, size_t);
    int (*read_audio_sectors)(void *, void *, lsn_t, uint);
    driver_return_code_t (*read_data_sectors)(void *, void *, lsn_t, uint16_t, uint32_t);
    int (*read_mode2_sector)(void *, void *, lsn_t, _Bool);
    int (*read_mode2_sectors)(void *, void *, lsn_t, _Bool, uint);
    int (*read_mode1_sector)(void *, void *, lsn_t, _Bool);
    int (*read_mode1_sectors)(void *, void *, lsn_t, _Bool, uint);
    _Bool (*read_toc)(void *);
    mmc_run_cmd_fn_t run_mmc_cmd;
    int (*set_arg)(void *, char *, char *);
    driver_return_code_t (*set_blocksize)(void *, uint16_t);
    int (*set_speed)(void *, int);
};

struct _CdIo {
    struct cdio_header_t header;
    enum driver_id_t driver_id;
    struct cdio_funcs_t op;
    void *env;
};

union anon_union_8_2_d1a04883_for_wimlib_progress_info_scan_3 {
    wimlib_tchar *wim_target_path;
    wimlib_tchar *symlink_target;
};

struct cdtext_s {
};

struct msf_s {
    uint8_t m;
    uint8_t s;
    uint8_t f;
};

struct wimlib_progress_info_scan {
    wimlib_tchar *source;
    wimlib_tchar *cur_path;
    enum anon_enum_32 status;
    union anon_union_8_2_d1a04883_for_wimlib_progress_info_scan_3 field_3;
    uint64_t num_dirs_scanned;
    uint64_t num_nondirs_scanned;
    uint64_t num_bytes_scanned;
};

struct wimlib_progress_info_replace {
    wimlib_tchar *path_in_wim;
};

struct windows_file {
    u64 is_encrypted:1;
    u64 is_file_id:1;
    u64 sort_key:62;
    size_t path_nbytes;
    struct vss_snapshot *snapshot;
    wchar_t path[0];
};

struct wimlib_progress_info_unmount {
    wimlib_tchar *mountpoint;
    wimlib_tchar *mounted_wim;
    uint32_t mounted_image;
    uint32_t mount_flags;
    uint32_t unmount_flags;
};

struct list_head.conflict {
    struct list_head.conflict *next;
    struct list_head.conflict *prev;
};

struct anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0 {
    union anon_union_8_2_d8d1805f_for_anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0_0 field_0;
    struct wim_inode *file_inode;
};

union anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0 {
    struct anon_struct_16_2_17db9796_for_anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0_0 field_0;
    void *attached_buffer;
};

struct anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1 {
    union anon_union_16_2_030e9a93_for_anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1_0 field_0;
    struct list_head.conflict unhashed_list;
};

struct wimlib_progress_info_update {
    struct wimlib_update_command *command;
    size_t completed_commands;
    size_t total_commands;
};

struct wimlib_progress_info_extract {
    uint32_t image;
    uint32_t extract_flags;
    wimlib_tchar *wimfile_name;
    wimlib_tchar *image_name;
    wimlib_tchar *target;
    wimlib_tchar *reserved;
    uint64_t total_bytes;
    uint64_t completed_bytes;
    uint64_t total_streams;
    uint64_t completed_streams;
    uint32_t part_number;
    uint32_t total_parts;
    uint8_t guid[16];
    uint64_t current_file_count;
    uint64_t end_file_count;
};

struct wimlib_progress_info_handle_error {
    wimlib_tchar *path;
    int error_code;
    _Bool will_ignore;
};

struct wimlib_progress_info_rename {
    wimlib_tchar *from;
    wimlib_tchar *to;
};

struct wimlib_progress_info_wimboot_exclude {
    wimlib_tchar *path_in_wim;
    wimlib_tchar *extraction_path;
};

struct wimlib_progress_info_split {
    uint64_t total_bytes;
    uint64_t completed_bytes;
    uint cur_part_number;
    uint total_parts;
    wimlib_tchar *part_name;
};

struct wimlib_progress_info_integrity {
    uint64_t total_bytes;
    uint64_t completed_bytes;
    uint32_t total_chunks;
    uint32_t completed_chunks;
    uint32_t chunk_size;
    wimlib_tchar *filename;
};

struct wimlib_progress_info_verify_image {
    wimlib_tchar *wimfile;
    uint32_t total_images;
    uint32_t current_image;
};

struct wimlib_progress_info_verify_streams {
    wimlib_tchar *wimfile;
    uint64_t total_streams;
    uint64_t total_bytes;
    uint64_t completed_streams;
    uint64_t completed_bytes;
};

struct wimlib_progress_info_done_with_file {
    wimlib_tchar *path_to_file;
};

union wimlib_progress_info {
    struct wimlib_progress_info_write_streams write_streams;
    struct wimlib_progress_info_scan scan;
    struct wimlib_progress_info_extract extract;
    struct wimlib_progress_info_rename rename;
    struct wimlib_progress_info_update update;
    struct wimlib_progress_info_integrity integrity;
    struct wimlib_progress_info_split split;
    struct wimlib_progress_info_replace replace;
    struct wimlib_progress_info_wimboot_exclude wimboot_exclude;
    struct wimlib_progress_info_unmount unmount;
    struct wimlib_progress_info_done_with_file done_with_file;
    struct wimlib_progress_info_verify_image verify_image;
    struct wimlib_progress_info_verify_streams verify_streams;
    struct wimlib_progress_info_test_file_exclusion test_file_exclusion;
    struct wimlib_progress_info_handle_error handle_error;
};

struct hlist_node {
    struct hlist_node *next;
    struct hlist_node **pprev;
};

struct cdio_hwinfo {
    char psz_vendor[9];
    char psz_model[17];
    char psz_revision[5];
};

struct wimlib_delete_command {
    wimlib_tchar *wim_path;
    int delete_flags;
};

struct wimlib_add_command {
    wimlib_tchar *fs_source_path;
    wimlib_tchar *wim_target_path;
    wimlib_tchar *config_file;
    int add_flags;
};

union anon_union_32_3_29d757e9_for_wimlib_update_command_1 {
    struct wimlib_add_command add;
    struct wimlib_delete_command delete_;
    struct wimlib_rename_command rename;
};

struct wimlib_update_command {
    enum wimlib_update_op op;
    union anon_union_32_3_29d757e9_for_wimlib_update_command_1 field_1;
};

struct anon_struct_32_3_25d4c2e6_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_0 {
    struct wim_resource_descriptor *rdesc;
    u64 offset_in_res;
    struct list_head.conflict rdesc_node;
};

union anon_union_32_2_ecfd7102_for_blob_descriptor_13 {
    struct anon_struct_32_3_25d4c2e6_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_0 field_0;
    struct anon_struct_32_2_4a39c4ae_for_anon_union_32_2_ecfd7102_for_blob_descriptor_13_1 field_1;
};

struct wimlib_decompressor {
    struct decompressor_ops *ops;
    size_t max_block_size;
    void *private;
};

struct anon_struct_8_1_596955bb_for_anon_union_8_3_2c5e39c5_for_wim_inode_20_1 {
    struct wim_dentry *i_first_extraction_alias;
};

union anon_union_8_3_2c5e39c5_for_wim_inode_20 {
    u64 i_devno;
    struct anon_struct_8_1_596955bb_for_anon_union_8_3_2c5e39c5_for_wim_inode_20_1 field_1;
    u32 i_num_remaining_streams;
};

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

struct iso9660_xa_s {
    uint16_t group_id;
    uint16_t user_id;
    uint16_t attributes;
    char signature[2];
    uint8_t filenum;
    uint8_t reserved[5];
};

struct iso9660_stat_s {
    iso_rock_statbuf_t rr;
    struct tm tm;
    lsn_t lsn;
    uint64_t total_size;
    iso9660_xa_t xa;
    enum anon_enum_32 type;
    _Bool b_xa;
    char filename[0];
};

struct iso9660_svd_s {
    iso711_t type;
    char id[5];
    iso711_t version;
    char flags;
    achar_t system_id[32];
    dchar_t volume_id[32];
    char unused2[8];
    iso733_t volume_space_size;
    char escape_sequences[32];
    iso723_t volume_set_size;
    iso723_t volume_sequence_number;
    iso723_t logical_block_size;
    iso733_t path_table_size;
    iso731_t type_l_path_table;
    iso731_t opt_type_l_path_table;
    iso732_t type_m_path_table;
    iso732_t opt_type_m_path_table;
    iso9660_dir_t root_directory_record;
    char root_directory_filename;
    dchar_t volume_set_id[128];
    achar_t publisher_id[128];
    achar_t preparer_id[128];
    achar_t application_id[128];
    dchar_t copyright_file_id[37];
    dchar_t abstract_file_id[37];
    dchar_t bibliographic_file_id[37];
    iso9660_ltime_t creation_date;
    iso9660_ltime_t modification_date;
    iso9660_ltime_t expiration_date;
    iso9660_ltime_t effective_date;
    iso711_t file_structure_version;
    uint8_t unused4[1];
    char application_data[512];
    uint8_t unused5[653];
};

struct anon_struct_24_3_4ea1c0db_for_anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0_1 {
    u64 out_res_offset_in_wim;
    u64 out_res_size_in_wim;
    u64 out_res_uncompressed_size;
};

union anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0 {
    struct hlist_node hash_list_2;
    struct anon_struct_24_3_4ea1c0db_for_anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0_1 field_1;
};

struct anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0 {
    union anon_union_24_2_09d40d19_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_0 field_0;
    struct list_head.conflict write_blobs_list;
    union anon_union_24_2_85f27fbc_for_anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0_2 field_2;
};

union anon_union_64_2_ecfd7102_for_blob_descriptor_14 {
    struct anon_struct_64_3_61a500d0_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_0 field_0;
    union anon_union_48_2_5dae16bb_for_anon_union_64_2_ecfd7102_for_blob_descriptor_14_1 field_1;
};

struct xml_node {
    enum xml_node_type type;
    tchar *name;
    tchar *value;
    struct xml_node *parent;
    struct list_head.conflict children;
    struct list_head.conflict sibling_link;
};

struct wim_security_data {
    u32 total_length;
    u32 num_entries;
    u64 *sizes;
    u8 **descriptors;
};

struct vss_snapshot {
    size_t refcnt;
};

struct udf_s {
    _Bool b_stream;
    off64_t i_position;
    CdioDataSource_t *stream;
    CdIo_t *cdio;
    anchor_vol_desc_ptr_t anchor_vol_desc_ptr;
    uint32_t pvd_lba;
    partition_num_t i_partition;
    uint32_t i_part_start;
    uint32_t lvd_lba;
    uint32_t fsd_offset;
};

struct wim_header {
    u64 magic;
    u32 wim_version;
    u32 flags;
    u32 chunk_size;
    u8 guid[16];
    u16 part_number;
    u16 total_parts;
    u32 image_count;
    struct wim_reshdr blob_table_reshdr;
    struct wim_reshdr xml_data_reshdr;
    struct wim_reshdr boot_metadata_reshdr;
    u32 boot_idx;
    struct wim_reshdr integrity_table_reshdr;
};

struct WIMStruct {
    struct wim_header hdr;
    struct wim_header out_hdr;
    struct wim_image_metadata **image_metadata;
    struct wim_xml_info *xml_info;
    struct blob_table *blob_table;
    ssize_t refcnt;
    int current_image;
    tchar *filename;
    struct filedes in_fd;
    struct filedes out_fd;
    u64 file_size;
    struct wimlib_decompressor *decompressor;
    u8 decompressor_ctype;
    u32 decompressor_max_block_size;
    void *private;
    u8 image_deletion_occurred:1;
    u8 locked_for_append:1;
    u8 being_compacted:1;
    u8 compression_type;
    u8 out_compression_type;
    u8 out_solid_compression_type;
    u32 chunk_size;
    u32 out_chunk_size;
    u32 out_solid_chunk_size;
    wimlib_progress_func_t progfunc;
    void *progctx;
};

struct iso9660_pvd_s {
    iso711_t type;
    char id[5];
    iso711_t version;
    char unused1[1];
    achar_t system_id[32];
    dchar_t volume_id[32];
    uint8_t unused2[8];
    iso733_t volume_space_size;
    uint8_t unused3[32];
    iso723_t volume_set_size;
    iso723_t volume_sequence_number;
    iso723_t logical_block_size;
    iso733_t path_table_size;
    iso731_t type_l_path_table;
    iso731_t opt_type_l_path_table;
    iso732_t type_m_path_table;
    iso732_t opt_type_m_path_table;
    iso9660_dir_t root_directory_record;
    char root_directory_filename;
    dchar_t volume_set_id[128];
    achar_t publisher_id[128];
    achar_t preparer_id[128];
    achar_t application_id[128];
    dchar_t copyright_file_id[37];
    dchar_t abstract_file_id[37];
    dchar_t bibliographic_file_id[37];
    iso9660_ltime_t creation_date;
    iso9660_ltime_t modification_date;
    iso9660_ltime_t expiration_date;
    iso9660_ltime_t effective_date;
    iso711_t file_structure_version;
    uint8_t unused4[1];
    char application_data[512];
    uint8_t unused5[653];
};

struct wim_inode_stream {
    utf16lechar *stream_name;
    union anon_union_24_2_8e4338b2_for_wim_inode_stream_1 field_1;
    u32 stream_resolved:1;
    u32 stream_id:28;
    u32 stream_type:3;
};

struct avl_tree_node {
    struct avl_tree_node *left;
    struct avl_tree_node *right;
    uintptr_t parent_balance;
};

union anon_union_16_2_03a53316_for_wim_dentry_12 {
    u64 d_subdir_offset;
    struct list_head.conflict d_tmp_list;
};

struct wim_dentry {
    struct wim_inode *d_inode;
    struct avl_tree_node d_index_node;
    struct wim_dentry *d_parent;
    struct hlist_node d_alias_node;
    utf16lechar *d_name;
    utf16lechar *d_short_name;
    u16 d_name_nbytes;
    u16 d_short_name_nbytes;
    u16 d_extraction_name_nchars;
    u16 d_is_win32_name:1;
    u16 d_tmp_flag:1;
    u16 d_is_orphan:1;
    union anon_union_16_2_03a53316_for_wim_dentry_12 field_12;
    tchar *d_full_path;
    void *d_extraction_name;
    struct list_head.conflict d_extraction_list_node;
    struct wim_dentry *d_next_extraction_alias;
};

struct hlist_head {
    struct hlist_node *first;
};

struct anon_struct_12_3_46f71309 {
    uint8_t type;
    uint32_t lsn;
    uint32_t num_sectors;
};

struct _iso9660_s {
    struct cdio_header_t header;
    CdioDataSource_t *stream;
    enum bool_3way_t b_xa;
    enum bool_3way_t b_mode2;
    uint8_t u_joliet_level;
    iso9660_pvd_t pvd;
    iso9660_svd_t svd;
    iso_extension_mask_t iso_extension_mask;
    uint32_t i_datastart;
    uint32_t i_framesize;
    struct anon_struct_12_3_46f71309 boot_img[8];
    int i_fuzzy_offset;
    _Bool b_have_superblock;
};

struct blob_table {
    struct hlist_head *array;
    size_t num_blobs;
    size_t mask;
};

struct cdio_track_index_s {
    uint8_t i_start_track;
    uint8_t i_start_index;
    uint8_t i_end_track;
    uint8_t i_end_index;
};

struct wim_inode {
    struct wim_inode_stream *i_streams;
    struct wim_inode_stream i_embedded_streams[1];
    uint i_num_streams;
    u32 i_attributes;
    struct avl_tree_node *i_children;
    struct hlist_head i_alias_list;
    struct hlist_node i_hlist_node;
    u32 i_nlink:30;
    u32 i_visited:1;
    u32 i_can_externally_back:1;
    struct wim_inode_extra *i_extra;
    u64 i_creation_time;
    u64 i_last_access_time;
    u64 i_last_write_time;
    s32 i_security_id;
    u32 i_unknown_0x54;
    u32 i_reparse_tag;
    u16 i_rp_reserved;
    u16 i_rp_flags;
    u64 i_ino;
    union anon_union_8_3_2c5e39c5_for_wim_inode_20 field_20;
    u32 i_next_stream_id;
};

struct cdio_audio_volume_s {
    uint8_t level[4];
};

struct wim_image_metadata {
    u32 refcnt;
    u32 selected_refcnt;
    struct wim_dentry *root_dentry;
    struct wim_security_data *security_data;
    struct blob_descriptor *metadata_blob;
    struct hlist_head inode_list;
    struct list_head.conflict unhashed_blobs;
    _Bool stats_outdated;
};

union anon_union_16_3_01931894_for_blob_descriptor_15 {
    struct list_head.conflict blob_table_list;
    struct list_head.conflict extraction_list;
    struct list_head.conflict export_blob_list;
};

struct udf_fileid_desc_s {
    udf_tag_t tag;
    udf_Uint16_t file_version_num;
    udf_Uint8_t file_characteristics;
    udf_Uint8_t i_file_id;
    udf_long_ad_t icb;
    union anon_union_2_4_e0f80d3e_for_u u;
};

struct udf_dirent_s {
    char *psz_name;
    _Bool b_dir;
    _Bool b_parent;
    udf_t *p_udf;
    uint32_t i_part_start;
    uint32_t i_loc;
    uint32_t i_loc_end;
    uint64_t dir_left;
    uint8_t *sector;
    udf_fileid_desc_t *fid;
    udf_file_entry_t fe;
};

struct cdio_subchannel_s {
    uint8_t format;
    uint8_t audio_status;
    uint8_t address:4;
    uint8_t control:4;
    uint8_t track;
    uint8_t index;
    msf_t abs_addr;
    msf_t rel_addr;
};

struct wim_xml_info {
    struct xml_node *root;
    struct xml_node **images;
    int image_count;
};

struct blob_descriptor {
    struct hlist_node hash_list;
    u64 size;
    union anon_union_24_3_76a9f428_for_blob_descriptor_2 field_2;
    u32 refcnt;
    u32 out_refcnt;
    u16 blob_location:4;
    u16 is_metadata:1;
    u16 unhashed:1;
    u16 corrupted:1;
    u16 unique_size:1;
    u16 will_be_in_output_wim:1;
    u16 may_send_done_with_file:1;
    u16 was_exported:1;
    union anon_union_32_2_ecfd7102_for_blob_descriptor_13 field_13;
    union anon_union_64_2_ecfd7102_for_blob_descriptor_14 field_14;
    union anon_union_16_3_01931894_for_blob_descriptor_15 field_15;
};

struct wim_resource_descriptor {
    struct WIMStruct *wim;
    u64 offset_in_wim;
    u64 size_in_wim;
    u64 uncompressed_size;
    struct list_head.conflict blob_list;
    u32 flags:8;
    u32 is_pipable:1;
    u32 raw_copy_ok:1;
    u32 compression_type:22;
    u32 chunk_size;
};

typedef struct wim_dentry_on_disk wim_dentry_on_disk, *Pwim_dentry_on_disk;

typedef uint64_t le64;

typedef uint32_t le32;

typedef union anon_union_8_2_576e3a90_for_wim_dentry_on_disk_11 anon_union_8_2_576e3a90_for_wim_dentry_on_disk_11, *Panon_union_8_2_576e3a90_for_wim_dentry_on_disk_11;

typedef struct anon_struct_8_3_2606d9ac_for_reparse anon_struct_8_3_2606d9ac_for_reparse, *Panon_struct_8_3_2606d9ac_for_reparse;

typedef struct anon_struct_8_1_08e7a7ea_for_nonreparse anon_struct_8_1_08e7a7ea_for_nonreparse, *Panon_struct_8_1_08e7a7ea_for_nonreparse;

struct anon_struct_8_1_08e7a7ea_for_nonreparse {
    le64 hard_link_group_id;
};

struct anon_struct_8_3_2606d9ac_for_reparse {
    le32 reparse_tag;
    le16 rp_reserved;
    le16 rp_flags;
};

union anon_union_8_2_576e3a90_for_wim_dentry_on_disk_11 {
    struct anon_struct_8_3_2606d9ac_for_reparse reparse;
    struct anon_struct_8_1_08e7a7ea_for_nonreparse nonreparse;
};

struct wim_dentry_on_disk {
    le64 length;
    le32 attributes;
    le32 security_id;
    le64 subdir_offset;
    le64 unused_1;
    le64 unused_2;
    le64 creation_time;
    le64 last_access_time;
    le64 last_write_time;
    u8 main_hash[20];
    le32 unknown_0x54;
    union anon_union_8_2_576e3a90_for_wim_dentry_on_disk_11 field_11;
    le16 num_extra_streams;
    le16 short_name_nbytes;
    le16 name_nbytes;
};

typedef struct wim_extra_stream_entry_on_disk wim_extra_stream_entry_on_disk, *Pwim_extra_stream_entry_on_disk;

struct wim_extra_stream_entry_on_disk {
    le64 length;
    le64 reserved;
    u8 hash[20];
    le16 name_nbytes;
    utf16lechar name[0];
};


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /mbstring.h/FILE

typedef FILE * (*_f__acrt_iob_func)(uint);


// WARNING! conflicting data type names: /DWARF/unknwnbase.h/IUnknownVtbl - /unknwn.h/IUnknownVtbl


// WARNING! conflicting data type names: /DWARF/unknwnbase.h/IUnknown - /unknwn.h/IUnknown

typedef struct IUnknown *LPUNKNOWN;

typedef struct FAT_FSINFO FAT_FSINFO, *PFAT_FSINFO;

struct FAT_FSINFO {
    DWORD dLeadSig;
    BYTE sReserved1[480];
    DWORD dStrucSig;
    DWORD dFree_Count;
    DWORD dNxt_Free;
    BYTE sReserved2[12];
    DWORD dTrailSig;
};

typedef struct tagFAT_BOOTSECTOR32 tagFAT_BOOTSECTOR32, *PtagFAT_BOOTSECTOR32;

typedef struct tagFAT_BOOTSECTOR32 FAT_BOOTSECTOR32;

struct tagFAT_BOOTSECTOR32 {
    BYTE sJmpBoot[3];
    BYTE sOEMName[8];
    WORD wBytsPerSec;
    BYTE bSecPerClus;
    WORD wRsvdSecCnt;
    BYTE bNumFATs;
    WORD wRootEntCnt;
    WORD wTotSec16;
    BYTE bMedia;
    WORD wFATSz16;
    WORD wSecPerTrk;
    WORD wNumHeads;
    DWORD dHiddSec;
    DWORD dTotSec32;
    DWORD dFATSz32;
    WORD wExtFlags;
    WORD wFSVer;
    DWORD dRootClus;
    WORD wFSInfo;
    WORD wBkBootSec;
    BYTE Reserved[12];
    BYTE bDrvNum;
    BYTE Reserved1;
    BYTE bBootSig;
    DWORD dBS_VolID;
    BYTE sVolLab[11];
    BYTE sBS_FilSysType[8];
};

typedef struct _UserData _UserData, *P_UserData;

struct _UserData {
    char *pathname;
    FILE *fd;
    char *fd_buf;
    off64_t st_size;
};

typedef void (*__p_sig_fn_t)(int);

typedef uint16_t U16;

typedef uint8_t U8;

typedef uint32_t U32;

typedef uint64_t U64;

typedef U64 unalign64;

typedef int16_t S16;

typedef U32 unalign32;

typedef U16 unalign16;


// WARNING! conflicting data type names: /DWARF/fileapi.h/_BY_HANDLE_FILE_INFORMATION - /winbase.h/_BY_HANDLE_FILE_INFORMATION

typedef struct _BY_HANDLE_FILE_INFORMATION BY_HANDLE_FILE_INFORMATION;


// WARNING! conflicting data type names: /DWARF/fileapi.h/LPBY_HANDLE_FILE_INFORMATION - /winbase.h/LPBY_HANDLE_FILE_INFORMATION

typedef struct _RTL_RELATIVE_NAME_U _RTL_RELATIVE_NAME_U, *P_RTL_RELATIVE_NAME_U;

typedef struct _UNICODE_STRING _UNICODE_STRING, *P_UNICODE_STRING;

typedef struct _UNICODE_STRING UNICODE_STRING;

typedef struct _RTLP_CURDIR_REF _RTLP_CURDIR_REF, *P_RTLP_CURDIR_REF;

typedef struct _RTLP_CURDIR_REF *PRTLP_CURDIR_REF;

typedef WCHAR *PWSTR;

struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWSTR Buffer;
};

struct _RTLP_CURDIR_REF {
    LONG RefCount;
    HANDLE Handle;
};

struct _RTL_RELATIVE_NAME_U {
    UNICODE_STRING RelativeName;
    HANDLE ContainingDirectory;
    PRTLP_CURDIR_REF CurDirRef;
};

typedef struct _RTL_RELATIVE_NAME_U *PRTL_RELATIVE_NAME_U;

typedef struct gpt_type_entry_t gpt_type_entry_t, *Pgpt_type_entry_t;

struct gpt_type_entry_t {
    uint16_t code;
    char *guid_str;
    char *description;
};

typedef enum xz_mode {
    XZ_SINGLE=0,
    XZ_PREALLOC=1,
    XZ_DYNALLOC=2
} xz_mode;

typedef struct xz_buf xz_buf, *Pxz_buf;

struct xz_buf {
    uint8_t *in;
    size_t in_pos;
    size_t in_size;
    uint8_t *out;
    size_t out_pos;
    size_t out_size;
};

typedef enum xz_ret {
    XZ_OK=0,
    XZ_STREAM_END=1,
    XZ_UNSUPPORTED_CHECK=2,
    XZ_MEM_ERROR=3,
    XZ_MEMLIMIT_ERROR=4,
    XZ_FORMAT_ERROR=5,
    XZ_OPTIONS_ERROR=6,
    XZ_DATA_ERROR=7,
    XZ_BUF_ERROR=8,
    XZ_BUF_FULL=9
} xz_ret;

typedef struct _SYMBOL_INFO _SYMBOL_INFO, *P_SYMBOL_INFO;

struct _SYMBOL_INFO {
    ULONG SizeOfStruct;
    ULONG TypeIndex;
    ULONG64 Reserved[2];
    ULONG info;
    ULONG Size;
    ULONG64 ModBase;
    ULONG Flags;
    ULONG64 Value;
    ULONG64 Address;
    ULONG Register;
    ULONG Scope;
    ULONG Tag;
    ULONG NameLen;
    ULONG MaxNameLen;
    CHAR Name[1];
};

typedef struct _SYMBOL_INFO *PSYMBOL_INFO;

typedef WINBOOL (*PSYM_ENUMERATESYMBOLS_CALLBACK)(PSYMBOL_INFO, ULONG, PVOID);


// WARNING! conflicting data type names: /DWARF/objidl.h/IEnumMonikerVtbl - /objidl.h/IEnumMonikerVtbl


// WARNING! conflicting data type names: /DWARF/objidl.h/IBindCtx - /objidl.h/IBindCtx


// WARNING! conflicting data type names: /DWARF/objidl.h/IRunningObjectTable - /objidl.h/IRunningObjectTable


// WARNING! conflicting data type names: /DWARF/objidl.h/IMoniker - /objidl.h/IMoniker


// WARNING! conflicting data type names: /DWARF/objidl.h/IMonikerVtbl - /objidl.h/IMonikerVtbl


// WARNING! conflicting data type names: /DWARF/objidl.h/BIND_OPTS - /objidl.h/BIND_OPTS


// WARNING! conflicting data type names: /DWARF/objidl.h/IRunningObjectTableVtbl - /objidl.h/IRunningObjectTableVtbl


// WARNING! conflicting data type names: /DWARF/objidl.h/IEnumMoniker - /objidl.h/IEnumMoniker


// WARNING! conflicting data type names: /DWARF/objidl.h/IBindCtxVtbl - /objidl.h/IBindCtxVtbl


// WARNING! conflicting data type names: /DWARF/objidl.h/tagBIND_OPTS - /objidl.h/tagBIND_OPTS

typedef struct vm_thread_list vm_thread_list, *Pvm_thread_list;

typedef struct vm_thread vm_thread, *Pvm_thread;

typedef struct cregex_program_instr cregex_program_instr, *Pcregex_program_instr;

typedef struct cregex_program_instr cregex_program_instr_t;

typedef enum cregex_program_opcode_t {
    REGEX_PROGRAM_OPCODE_MATCH=0,
    REGEX_PROGRAM_OPCODE_CHARACTER=1,
    REGEX_PROGRAM_OPCODE_ANY_CHARACTER=2,
    REGEX_PROGRAM_OPCODE_CHARACTER_CLASS=3,
    REGEX_PROGRAM_OPCODE_CHARACTER_CLASS_NEGATED=4,
    REGEX_PROGRAM_OPCODE_SPLIT=5,
    REGEX_PROGRAM_OPCODE_JUMP=6,
    REGEX_PROGRAM_OPCODE_ASSERT_BEGIN=7,
    REGEX_PROGRAM_OPCODE_ASSERT_END=8,
    REGEX_PROGRAM_OPCODE_SAVE=9
} cregex_program_opcode_t;

typedef union anon_union_32_5_ab5a05cb_for_cregex_program_instr_1 anon_union_32_5_ab5a05cb_for_cregex_program_instr_1, *Panon_union_32_5_ab5a05cb_for_cregex_program_instr_1;

typedef struct anon_struct_4_1_3fcf6523_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_0 anon_struct_4_1_3fcf6523_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_0, *Panon_struct_4_1_3fcf6523_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_0;

typedef struct anon_struct_32_1_a83054a0_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_1 anon_struct_32_1_a83054a0_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_1, *Panon_struct_32_1_a83054a0_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_1;

typedef struct anon_struct_16_2_ff5814bb_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_2 anon_struct_16_2_ff5814bb_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_2, *Panon_struct_16_2_ff5814bb_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_2;

typedef struct anon_struct_8_1_6ca262cf_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_3 anon_struct_8_1_6ca262cf_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_3, *Panon_struct_8_1_6ca262cf_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_3;

typedef struct anon_struct_4_1_89916e7b_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_4 anon_struct_4_1_89916e7b_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_4, *Panon_struct_4_1_89916e7b_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_4;

typedef char cregex_char_class[32];

struct anon_struct_4_1_89916e7b_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_4 {
    int save;
};

struct anon_struct_16_2_ff5814bb_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_2 {
    struct cregex_program_instr *first;
    struct cregex_program_instr *second;
};

struct anon_struct_4_1_3fcf6523_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_0 {
    int ch;
};

struct anon_struct_32_1_a83054a0_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_1 {
    cregex_char_class klass;
};

struct anon_struct_8_1_6ca262cf_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_3 {
    struct cregex_program_instr *target;
};

union anon_union_32_5_ab5a05cb_for_cregex_program_instr_1 {
    struct anon_struct_4_1_3fcf6523_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_0 field_0;
    struct anon_struct_32_1_a83054a0_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_1 field_1;
    struct anon_struct_16_2_ff5814bb_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_2 field_2;
    struct anon_struct_8_1_6ca262cf_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_3 field_3;
    struct anon_struct_4_1_89916e7b_for_anon_union_32_5_ab5a05cb_for_cregex_program_instr_1_4 field_4;
};

struct cregex_program_instr {
    enum cregex_program_opcode_t opcode;
    union anon_union_32_5_ab5a05cb_for_cregex_program_instr_1 field_1;
};

struct vm_thread_list {
    int nthreads;
    struct vm_thread *threads;
};

struct vm_thread {
    int visited;
    cregex_program_instr_t *pc;
    char *matches[64];
};

typedef enum xz_check {
    XZ_CHECK_NONE=0,
    XZ_CHECK_CRC32=1,
    XZ_CHECK_CRC64=4,
    XZ_CHECK_SHA256=10
} xz_check;

typedef uint64_t vli_type;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};

typedef enum __enative_startup_state {
    __uninitialized=0,
    __initializing=1,
    __initialized=2
} __enative_startup_state;

typedef uint (*decode_codepoint_fn)(u8 *, size_t, _Bool, u32 *);

typedef uint (*encode_codepoint_fn)(u32, u8 *);

typedef struct _RTL_USER_PROCESS_PARAMETERS _RTL_USER_PROCESS_PARAMETERS, *P_RTL_USER_PROCESS_PARAMETERS;

struct _RTL_USER_PROCESS_PARAMETERS {
    BYTE Reserved1[16];
    PVOID Reserved2[10];
    UNICODE_STRING ImagePathName;
    UNICODE_STRING CommandLine;
};

typedef struct _PEB _PEB, *P_PEB;

typedef struct _PEB_LDR_DATA _PEB_LDR_DATA, *P_PEB_LDR_DATA;

typedef struct _PEB_LDR_DATA *PPEB_LDR_DATA;

typedef struct _RTL_USER_PROCESS_PARAMETERS *PRTL_USER_PROCESS_PARAMETERS;

typedef void (*PPS_POST_PROCESS_INIT_ROUTINE)(void);


// WARNING! conflicting data type names: /DWARF/winnt.h/LIST_ENTRY - /winnt.h/LIST_ENTRY

struct _PEB {
    BYTE Reserved1[2];
    BYTE BeingDebugged;
    BYTE Reserved2[1];
    PVOID Reserved3[2];
    PPEB_LDR_DATA Ldr;
    PRTL_USER_PROCESS_PARAMETERS ProcessParameters;
    PVOID Reserved4[3];
    PVOID AtlThunkSListPtr;
    PVOID Reserved5;
    ULONG Reserved6;
    PVOID Reserved7;
    ULONG Reserved8;
    ULONG AtlThunkSListPtr32;
    PVOID Reserved9[45];
    BYTE Reserved10[96];
    PPS_POST_PROCESS_INIT_ROUTINE PostProcessInitRoutine;
    BYTE Reserved11[128];
    PVOID Reserved12[1];
    ULONG SessionId;
};

struct _PEB_LDR_DATA {
    BYTE Reserved1[8];
    PVOID Reserved2[3];
    LIST_ENTRY InMemoryOrderModuleList;
};

typedef enum _FSINFOCLASS {
    FileFsVolumeInformation=1,
    FileFsLabelInformation=2,
    FileFsSizeInformation=3,
    FileFsDeviceInformation=4,
    FileFsAttributeInformation=5,
    FileFsControlInformation=6,
    FileFsFullSizeInformation=7,
    FileFsObjectIdInformation=8,
    FileFsDriverPathInformation=9,
    FileFsVolumeFlagsInformation=10,
    FileFsMaximumInformation=11
} _FSINFOCLASS;

typedef struct _FILE_INTERNAL_INFORMATION _FILE_INTERNAL_INFORMATION, *P_FILE_INTERNAL_INFORMATION;


// WARNING! conflicting data type names: /DWARF/winnt.h/LARGE_INTEGER - /winnt.h/LARGE_INTEGER

struct _FILE_INTERNAL_INFORMATION {
    LARGE_INTEGER IndexNumber;
};

typedef enum _SYSTEM_INFORMATION_CLASS {
    SystemBasicInformation=0,
    SystemProcessorInformation=1,
    SystemPerformanceInformation=2,
    SystemTimeOfDayInformation=3,
    SystemProcessInformation=5,
    SystemProcessorPerformanceInformation=8,
    SystemHandleInformation=16,
    SystemPagefileInformation=18,
    SystemInterruptInformation=23,
    SystemExceptionInformation=33,
    SystemRegistryQuotaInformation=37,
    SystemLookasideInformation=45,
    SystemCodeIntegrityInformation=103,
    SystemPolicyInformation=134
} _SYSTEM_INFORMATION_CLASS;

typedef struct _OBJECT_NAME_INFORMATION _OBJECT_NAME_INFORMATION, *P_OBJECT_NAME_INFORMATION;

struct _OBJECT_NAME_INFORMATION {
    UNICODE_STRING Name;
};

typedef struct _FILE_FULL_EA_INFORMATION _FILE_FULL_EA_INFORMATION, *P_FILE_FULL_EA_INFORMATION;

typedef struct _FILE_FULL_EA_INFORMATION FILE_FULL_EA_INFORMATION;

struct _FILE_FULL_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR Flags;
    UCHAR EaNameLength;
    USHORT EaValueLength;
    CHAR EaName[1];
};

typedef struct _RTL_HEAP_PARAMETERS _RTL_HEAP_PARAMETERS, *P_RTL_HEAP_PARAMETERS;

typedef ULONG_PTR SIZE_T;

typedef LONG NTSTATUS;

typedef ULONG_PTR *PSIZE_T;

typedef NTSTATUS (*PRTL_HEAP_COMMIT_ROUTINE)(PVOID, PVOID *, PSIZE_T);

struct _RTL_HEAP_PARAMETERS {
    ULONG Length;
    SIZE_T SegmentReserve;
    SIZE_T SegmentCommit;
    SIZE_T DeCommitFreeBlockThreshold;
    SIZE_T DeCommitTotalFreeThreshold;
    SIZE_T MaximumAllocationSize;
    SIZE_T VirtualMemoryThreshold;
    SIZE_T InitialCommit;
    SIZE_T InitialReserve;
    PRTL_HEAP_COMMIT_ROUTINE CommitRoutine;
    SIZE_T Reserved[2];
};

typedef struct _FILE_STANDARD_INFORMATION _FILE_STANDARD_INFORMATION, *P_FILE_STANDARD_INFORMATION;


// WARNING! conflicting data type names: /DWARF/winnt.h/BOOLEAN - /wtypes.h/BOOLEAN

struct _FILE_STANDARD_INFORMATION {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
};

typedef struct _FILE_STREAM_INFORMATION _FILE_STREAM_INFORMATION, *P_FILE_STREAM_INFORMATION;

struct _FILE_STREAM_INFORMATION {
    ULONG NextEntryOffset;
    ULONG StreamNameLength;
    LARGE_INTEGER StreamSize;
    LARGE_INTEGER StreamAllocationSize;
    WCHAR StreamName[1];
};

typedef struct _FILE_END_OF_FILE_INFORMATION _FILE_END_OF_FILE_INFORMATION, *P_FILE_END_OF_FILE_INFORMATION;

typedef struct _FILE_END_OF_FILE_INFORMATION FILE_END_OF_FILE_INFORMATION;

struct _FILE_END_OF_FILE_INFORMATION {
    LARGE_INTEGER EndOfFile;
};

typedef struct _FILE_ALIGNMENT_INFORMATION _FILE_ALIGNMENT_INFORMATION, *P_FILE_ALIGNMENT_INFORMATION;

typedef struct _FILE_ALIGNMENT_INFORMATION FILE_ALIGNMENT_INFORMATION;

struct _FILE_ALIGNMENT_INFORMATION {
    ULONG AlignmentRequirement;
};

typedef struct _IO_STATUS_BLOCK _IO_STATUS_BLOCK, *P_IO_STATUS_BLOCK;

typedef union anon_union_8_2_3ce5c3d4_for__IO_STATUS_BLOCK_0 anon_union_8_2_3ce5c3d4_for__IO_STATUS_BLOCK_0, *Panon_union_8_2_3ce5c3d4_for__IO_STATUS_BLOCK_0;

union anon_union_8_2_3ce5c3d4_for__IO_STATUS_BLOCK_0 {
    NTSTATUS Status;
    PVOID Pointer;
};

struct _IO_STATUS_BLOCK {
    union anon_union_8_2_3ce5c3d4_for__IO_STATUS_BLOCK_0 field_0;
    ULONG_PTR Information;
};

typedef struct _FILE_ALL_INFORMATION _FILE_ALL_INFORMATION, *P_FILE_ALL_INFORMATION;

typedef struct _FILE_ALL_INFORMATION FILE_ALL_INFORMATION;

typedef struct _FILE_BASIC_INFORMATION _FILE_BASIC_INFORMATION, *P_FILE_BASIC_INFORMATION;

typedef struct _FILE_BASIC_INFORMATION FILE_BASIC_INFORMATION;

typedef struct _FILE_STANDARD_INFORMATION FILE_STANDARD_INFORMATION;

typedef struct _FILE_INTERNAL_INFORMATION FILE_INTERNAL_INFORMATION;

typedef struct _FILE_EA_INFORMATION _FILE_EA_INFORMATION, *P_FILE_EA_INFORMATION;

typedef struct _FILE_EA_INFORMATION FILE_EA_INFORMATION;

typedef struct _FILE_ACCESS_INFORMATION _FILE_ACCESS_INFORMATION, *P_FILE_ACCESS_INFORMATION;

typedef struct _FILE_ACCESS_INFORMATION FILE_ACCESS_INFORMATION;

typedef struct _FILE_POSITION_INFORMATION _FILE_POSITION_INFORMATION, *P_FILE_POSITION_INFORMATION;

typedef struct _FILE_POSITION_INFORMATION FILE_POSITION_INFORMATION;

typedef struct _FILE_MODE_INFORMATION _FILE_MODE_INFORMATION, *P_FILE_MODE_INFORMATION;

typedef struct _FILE_MODE_INFORMATION FILE_MODE_INFORMATION;

typedef struct _FILE_NAME_INFORMATION _FILE_NAME_INFORMATION, *P_FILE_NAME_INFORMATION;

typedef struct _FILE_NAME_INFORMATION FILE_NAME_INFORMATION;

typedef DWORD ACCESS_MASK;

struct _FILE_MODE_INFORMATION {
    ULONG Mode;
};

struct _FILE_POSITION_INFORMATION {
    LARGE_INTEGER CurrentByteOffset;
};

struct _FILE_EA_INFORMATION {
    ULONG EaSize;
};

struct _FILE_ACCESS_INFORMATION {
    ACCESS_MASK AccessFlags;
};

struct _FILE_NAME_INFORMATION {
    ULONG FileNameLength;
    WCHAR FileName[1];
};

struct _FILE_BASIC_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
};

struct _FILE_ALL_INFORMATION {
    FILE_BASIC_INFORMATION BasicInformation;
    FILE_STANDARD_INFORMATION StandardInformation;
    FILE_INTERNAL_INFORMATION InternalInformation;
    FILE_EA_INFORMATION EaInformation;
    FILE_ACCESS_INFORMATION AccessInformation;
    FILE_POSITION_INFORMATION PositionInformation;
    FILE_MODE_INFORMATION ModeInformation;
    FILE_ALIGNMENT_INFORMATION AlignmentInformation;
    FILE_NAME_INFORMATION NameInformation;
};

typedef struct _OBJECT_ATTRIBUTES _OBJECT_ATTRIBUTES, *P_OBJECT_ATTRIBUTES;

typedef struct _OBJECT_ATTRIBUTES OBJECT_ATTRIBUTES;

typedef UNICODE_STRING *PUNICODE_STRING;

struct _OBJECT_ATTRIBUTES {
    ULONG Length;
    ULONG pad1;
    HANDLE RootDirectory;
    PUNICODE_STRING ObjectName;
    ULONG Attributes;
    ULONG pad2;
    PVOID SecurityDescriptor;
    PVOID SecurityQualityOfService;
};

typedef enum _SYSTEM_INFORMATION_CLASS SYSTEM_INFORMATION_CLASS;

typedef struct _CLIENT_ID _CLIENT_ID, *P_CLIENT_ID;

typedef struct _CLIENT_ID CLIENT_ID;

struct _CLIENT_ID {
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
};

typedef struct _IO_STATUS_BLOCK *PIO_STATUS_BLOCK;

typedef void (*PIO_APC_ROUTINE)(PVOID, PIO_STATUS_BLOCK, ULONG);

typedef struct _FILE_ALLOCATION_INFORMATION _FILE_ALLOCATION_INFORMATION, *P_FILE_ALLOCATION_INFORMATION;

struct _FILE_ALLOCATION_INFORMATION {
    LARGE_INTEGER AllocationSize;
};

typedef struct _FILE_NAMES_INFORMATION _FILE_NAMES_INFORMATION, *P_FILE_NAMES_INFORMATION;

typedef struct _FILE_NAMES_INFORMATION FILE_NAMES_INFORMATION;

struct _FILE_NAMES_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    ULONG FileNameLength;
    WCHAR FileName[1];
};

typedef struct _TEB _TEB, *P_TEB;

typedef struct _PEB *PPEB;

struct _TEB {
    PVOID Reserved1[12];
    PPEB ProcessEnvironmentBlock;
    PVOID Reserved2[399];
    BYTE Reserved3[1952];
    PVOID TlsSlots[64];
    BYTE Reserved4[8];
    PVOID Reserved5[26];
    PVOID ReservedForOle;
    PVOID Reserved6[4];
    PVOID TlsExpansionSlots;
};

typedef struct _FILE_FS_ATTRIBUTE_INFORMATION _FILE_FS_ATTRIBUTE_INFORMATION, *P_FILE_FS_ATTRIBUTE_INFORMATION;

typedef struct _FILE_FS_ATTRIBUTE_INFORMATION FILE_FS_ATTRIBUTE_INFORMATION;

struct _FILE_FS_ATTRIBUTE_INFORMATION {
    ULONG FileSystemAttributes;
    ULONG MaximumComponentNameLength;
    ULONG FileSystemNameLength;
    WCHAR FileSystemName[1];
};

typedef struct _FILE_FS_DEVICE_INFORMATION _FILE_FS_DEVICE_INFORMATION, *P_FILE_FS_DEVICE_INFORMATION;

struct _FILE_FS_DEVICE_INFORMATION {
    DWORD DeviceType;
    ULONG Characteristics;
};

typedef struct _RTL_HEAP_PARAMETERS *PRTL_HEAP_PARAMETERS;

typedef enum _FILE_INFORMATION_CLASS {
    FileDirectoryInformation=1,
    FileFullDirectoryInformation=2,
    FileBothDirectoryInformation=3,
    FileBasicInformation=4,
    FileStandardInformation=5,
    FileInternalInformation=6,
    FileEaInformation=7,
    FileAccessInformation=8,
    FileNameInformation=9,
    FileRenameInformation=10,
    FileLinkInformation=11,
    FileNamesInformation=12,
    FileDispositionInformation=13,
    FilePositionInformation=14,
    FileFullEaInformation=15,
    FileModeInformation=16,
    FileAlignmentInformation=17,
    FileAllInformation=18,
    FileAllocationInformation=19,
    FileEndOfFileInformation=20,
    FileAlternateNameInformation=21,
    FileStreamInformation=22,
    FilePipeInformation=23,
    FilePipeLocalInformation=24,
    FilePipeRemoteInformation=25,
    FileMailslotQueryInformation=26,
    FileMailslotSetInformation=27,
    FileCompressionInformation=28,
    FileObjectIdInformation=29,
    FileCompletionInformation=30,
    FileMoveClusterInformation=31,
    FileQuotaInformation=32,
    FileReparsePointInformation=33,
    FileNetworkOpenInformation=34,
    FileAttributeTagInformation=35,
    FileTrackingInformation=36,
    FileIdBothDirectoryInformation=37,
    FileIdFullDirectoryInformation=38,
    FileValidDataLengthInformation=39,
    FileShortNameInformation=40,
    FileSfioReserveInformation=44,
    FileSfioVolumeInformation=45,
    FileHardLinkInformation=46,
    FileNormalizedNameInformation=48,
    FileIdGlobalTxDirectoryInformation=50,
    FileStandardLinkInformation=54,
    FileMaximumInformation=55
} _FILE_INFORMATION_CLASS;

typedef enum _FILE_INFORMATION_CLASS FILE_INFORMATION_CLASS;

typedef struct _FILE_ALLOCATION_INFORMATION FILE_ALLOCATION_INFORMATION;

typedef struct _FILE_DISPOSITION_INFORMATION _FILE_DISPOSITION_INFORMATION, *P_FILE_DISPOSITION_INFORMATION;

typedef struct _FILE_DISPOSITION_INFORMATION FILE_DISPOSITION_INFORMATION;

struct _FILE_DISPOSITION_INFORMATION {
    BOOLEAN DoDeleteFile;
};

typedef struct _FILE_LINK_INFORMATION _FILE_LINK_INFORMATION, *P_FILE_LINK_INFORMATION;

typedef struct _FILE_LINK_INFORMATION FILE_LINK_INFORMATION;

struct _FILE_LINK_INFORMATION {
    BOOLEAN ReplaceIfExists;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
};

typedef enum _OBJECT_INFORMATION_CLASS {
    ObjectBasicInformation=0,
    ObjectNameInformation=1,
    ObjectTypeInformation=2,
    ObjectAllInformation=3,
    ObjectDataInformation=4
} _OBJECT_INFORMATION_CLASS;

typedef struct _FILE_FS_VOLUME_INFORMATION _FILE_FS_VOLUME_INFORMATION, *P_FILE_FS_VOLUME_INFORMATION;

struct _FILE_FS_VOLUME_INFORMATION {
    LARGE_INTEGER VolumeCreationTime;
    ULONG VolumeSerialNumber;
    ULONG VolumeLabelLength;
    BOOLEAN SupportsObjects;
    WCHAR VolumeLabel[1];
};

typedef struct _FILE_FS_VOLUME_INFORMATION FILE_FS_VOLUME_INFORMATION;

typedef struct _FILE_STREAM_INFORMATION FILE_STREAM_INFORMATION;

typedef LONG KPRIORITY;

typedef struct _OBJECT_NAME_INFORMATION *POBJECT_NAME_INFORMATION;

typedef struct _OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;

typedef enum _PROCESSINFOCLASS {
    ProcessBasicInformation=0,
    ProcessQuotaLimits=1,
    ProcessIoCounters=2,
    ProcessVmCounters=3,
    ProcessTimes=4,
    ProcessBasePriority=5,
    ProcessRaisePriority=6,
    ProcessDebugPort=7,
    ProcessExceptionPort=8,
    ProcessAccessToken=9,
    ProcessLdtInformation=10,
    ProcessLdtSize=11,
    ProcessDefaultHardErrorMode=12,
    ProcessIoPortHandlers=13,
    ProcessPooledUsageAndLimits=14,
    ProcessWorkingSetWatch=15,
    ProcessUserModeIOPL=16,
    ProcessEnableAlignmentFaultFixup=17,
    ProcessPriorityClass=18,
    ProcessWx86Information=19,
    ProcessHandleCount=20,
    ProcessAffinityMask=21,
    ProcessPriorityBoost=22,
    ProcessDeviceMap=23,
    ProcessSessionInformation=24,
    ProcessForegroundInformation=25,
    ProcessWow64Information=26,
    ProcessImageFileName=27,
    ProcessLUIDDeviceMapsEnabled=28,
    ProcessBreakOnTermination=29,
    ProcessDebugObjectHandle=30,
    ProcessDebugFlags=31,
    ProcessHandleTracing=32,
    ProcessIoPriority=33,
    ProcessExecuteFlags=34,
    ProcessTlsInformation=35,
    ProcessCookie=36,
    ProcessImageInformation=37,
    ProcessCycleTime=38,
    ProcessPagePriority=39,
    ProcessInstrumentationCallback=40,
    ProcessThreadStackAllocation=41,
    ProcessWorkingSetWatchEx=42,
    ProcessImageFileNameWin32=43,
    ProcessImageFileMapping=44,
    ProcessAffinityUpdateMode=45,
    ProcessMemoryAllocationMode=46,
    ProcessGroupInformation=47,
    ProcessTokenVirtualizationEnabled=48,
    ProcessConsoleHostProcess=49,
    ProcessWindowInformation=50,
    MaxProcessInfoClass=51
} _PROCESSINFOCLASS;

typedef enum _PROCESSINFOCLASS PROCESSINFOCLASS;

typedef enum _OBJECT_INFORMATION_CLASS OBJECT_INFORMATION_CLASS;

typedef enum _FSINFOCLASS FS_INFORMATION_CLASS;

typedef struct _FILE_FS_DEVICE_INFORMATION FILE_FS_DEVICE_INFORMATION;

typedef UNICODE_STRING *PCUNICODE_STRING;

typedef struct _IO_STATUS_BLOCK IO_STATUS_BLOCK;


// WARNING! conflicting data type names: /DWARF/winnt.h/ULARGE_INTEGER - /winnt.h/ULARGE_INTEGER

typedef PVOID PSECURITY_DESCRIPTOR;

typedef struct _IMAGE_RESOURCE_DIR_STRING_U _IMAGE_RESOURCE_DIR_STRING_U, *P_IMAGE_RESOURCE_DIR_STRING_U;

typedef struct _IMAGE_RESOURCE_DIR_STRING_U IMAGE_RESOURCE_DIR_STRING_U;

struct _IMAGE_RESOURCE_DIR_STRING_U {
    WORD Length;
    WCHAR NameString[1];
};

typedef struct _SECURITY_DESCRIPTOR_RELATIVE _SECURITY_DESCRIPTOR_RELATIVE, *P_SECURITY_DESCRIPTOR_RELATIVE;

typedef struct _SECURITY_DESCRIPTOR_RELATIVE SECURITY_DESCRIPTOR_RELATIVE;

typedef WORD SECURITY_DESCRIPTOR_CONTROL;

struct _SECURITY_DESCRIPTOR_RELATIVE {
    BYTE Revision;
    BYTE Sbz1;
    SECURITY_DESCRIPTOR_CONTROL Control;
    DWORD Owner;
    DWORD Group;
    DWORD Sacl;
    DWORD Dacl;
};

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION MEMORY_BASIC_INFORMATION;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    WORD PartitionId;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef struct _EXCEPTION_REGISTRATION_RECORD _EXCEPTION_REGISTRATION_RECORD, *P_EXCEPTION_REGISTRATION_RECORD;

typedef union anon_union_8_2_30252521_for__EXCEPTION_REGISTRATION_RECORD_0 anon_union_8_2_30252521_for__EXCEPTION_REGISTRATION_RECORD_0, *Panon_union_8_2_30252521_for__EXCEPTION_REGISTRATION_RECORD_0;

typedef union anon_union_8_2_988ba941_for__EXCEPTION_REGISTRATION_RECORD_1 anon_union_8_2_988ba941_for__EXCEPTION_REGISTRATION_RECORD_1, *Panon_union_8_2_988ba941_for__EXCEPTION_REGISTRATION_RECORD_1;


// WARNING! conflicting data type names: /DWARF/winnt.h/_EXCEPTION_RECORD - /excpt.h/_EXCEPTION_RECORD


// WARNING! conflicting data type names: /DWARF/winnt.h/_CONTEXT - /excpt.h/_CONTEXT

typedef int (*PEXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

union anon_union_8_2_988ba941_for__EXCEPTION_REGISTRATION_RECORD_1 {
    PEXCEPTION_ROUTINE Handler;
    PEXCEPTION_ROUTINE handler;
};

union anon_union_8_2_30252521_for__EXCEPTION_REGISTRATION_RECORD_0 {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    struct _EXCEPTION_REGISTRATION_RECORD *prev;
};

struct _EXCEPTION_REGISTRATION_RECORD {
    union anon_union_8_2_30252521_for__EXCEPTION_REGISTRATION_RECORD_0 field_0;
    union anon_union_8_2_988ba941_for__EXCEPTION_REGISTRATION_RECORD_1 field_1;
};


// WARNING! conflicting data type names: /DWARF/winnt.h/PRTL_CRITICAL_SECTION - /winnt.h/PRTL_CRITICAL_SECTION

typedef struct _TOKEN_PRIVILEGES _TOKEN_PRIVILEGES, *P_TOKEN_PRIVILEGES;

typedef struct _LUID_AND_ATTRIBUTES _LUID_AND_ATTRIBUTES, *P_LUID_AND_ATTRIBUTES;

typedef struct _LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES;

typedef struct _LUID _LUID, *P_LUID;

typedef struct _LUID LUID;

struct _LUID {
    DWORD LowPart;
    LONG HighPart;
};

struct _LUID_AND_ATTRIBUTES {
    LUID Luid;
    DWORD Attributes;
};

struct _TOKEN_PRIVILEGES {
    DWORD PrivilegeCount;
    LUID_AND_ATTRIBUTES Privileges[1];
};

typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY _IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *P_IMAGE_LOAD_CONFIG_CODE_INTEGRITY;

typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    WORD Flags;
    WORD Catalog;
    DWORD CatalogOffset;
    DWORD Reserved;
};

typedef struct _IMAGE_NT_HEADERS _IMAGE_NT_HEADERS, *P_IMAGE_NT_HEADERS;

typedef struct _IMAGE_NT_HEADERS IMAGE_NT_HEADERS32;

typedef struct _IMAGE_FILE_HEADER _IMAGE_FILE_HEADER, *P_IMAGE_FILE_HEADER;

typedef struct _IMAGE_FILE_HEADER IMAGE_FILE_HEADER;

typedef struct _IMAGE_OPTIONAL_HEADER _IMAGE_OPTIONAL_HEADER, *P_IMAGE_OPTIONAL_HEADER;

typedef struct _IMAGE_OPTIONAL_HEADER IMAGE_OPTIONAL_HEADER32;

typedef struct _IMAGE_DATA_DIRECTORY _IMAGE_DATA_DIRECTORY, *P_IMAGE_DATA_DIRECTORY;

typedef struct _IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY;

struct _IMAGE_DATA_DIRECTORY {
    DWORD VirtualAddress;
    DWORD Size;
};

struct _IMAGE_OPTIONAL_HEADER {
    WORD Magic;
    BYTE MajorLinkerVersion;
    BYTE MinorLinkerVersion;
    DWORD SizeOfCode;
    DWORD SizeOfInitializedData;
    DWORD SizeOfUninitializedData;
    DWORD AddressOfEntryPoint;
    DWORD BaseOfCode;
    DWORD BaseOfData;
    DWORD ImageBase;
    DWORD SectionAlignment;
    DWORD FileAlignment;
    WORD MajorOperatingSystemVersion;
    WORD MinorOperatingSystemVersion;
    WORD MajorImageVersion;
    WORD MinorImageVersion;
    WORD MajorSubsystemVersion;
    WORD MinorSubsystemVersion;
    DWORD Win32VersionValue;
    DWORD SizeOfImage;
    DWORD SizeOfHeaders;
    DWORD CheckSum;
    WORD Subsystem;
    WORD DllCharacteristics;
    DWORD SizeOfStackReserve;
    DWORD SizeOfStackCommit;
    DWORD SizeOfHeapReserve;
    DWORD SizeOfHeapCommit;
    DWORD LoaderFlags;
    DWORD NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct _IMAGE_FILE_HEADER {
    WORD Machine;
    WORD NumberOfSections;
    DWORD TimeDateStamp;
    DWORD PointerToSymbolTable;
    DWORD NumberOfSymbols;
    WORD SizeOfOptionalHeader;
    WORD Characteristics;
};

struct _IMAGE_NT_HEADERS {
    DWORD Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};


// WARNING! conflicting data type names: /DWARF/winnt.h/_EXCEPTION_POINTERS - /excpt.h/_EXCEPTION_POINTERS

typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;

typedef CHAR *LPCSTR;

typedef struct _IMAGE_NT_HEADERS64 _IMAGE_NT_HEADERS64, *P_IMAGE_NT_HEADERS64;

typedef struct _IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64;

typedef struct _IMAGE_OPTIONAL_HEADER64 _IMAGE_OPTIONAL_HEADER64, *P_IMAGE_OPTIONAL_HEADER64;

typedef struct _IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64;

struct _IMAGE_OPTIONAL_HEADER64 {
    WORD Magic;
    BYTE MajorLinkerVersion;
    BYTE MinorLinkerVersion;
    DWORD SizeOfCode;
    DWORD SizeOfInitializedData;
    DWORD SizeOfUninitializedData;
    DWORD AddressOfEntryPoint;
    DWORD BaseOfCode;
    ULONGLONG ImageBase;
    DWORD SectionAlignment;
    DWORD FileAlignment;
    WORD MajorOperatingSystemVersion;
    WORD MinorOperatingSystemVersion;
    WORD MajorImageVersion;
    WORD MinorImageVersion;
    WORD MajorSubsystemVersion;
    WORD MinorSubsystemVersion;
    DWORD Win32VersionValue;
    DWORD SizeOfImage;
    DWORD SizeOfHeaders;
    DWORD CheckSum;
    WORD Subsystem;
    WORD DllCharacteristics;
    ULONGLONG SizeOfStackReserve;
    ULONGLONG SizeOfStackCommit;
    ULONGLONG SizeOfHeapReserve;
    ULONGLONG SizeOfHeapCommit;
    DWORD LoaderFlags;
    DWORD NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct _IMAGE_NT_HEADERS64 {
    DWORD Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct _SID_IDENTIFIER_AUTHORITY _SID_IDENTIFIER_AUTHORITY, *P_SID_IDENTIFIER_AUTHORITY;

typedef struct _SID_IDENTIFIER_AUTHORITY *PSID_IDENTIFIER_AUTHORITY;

struct _SID_IDENTIFIER_AUTHORITY {
    BYTE Value[6];
};

typedef struct _IMAGE_RESOURCE_DATA_ENTRY _IMAGE_RESOURCE_DATA_ENTRY, *P_IMAGE_RESOURCE_DATA_ENTRY;

typedef struct _IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY;

struct _IMAGE_RESOURCE_DATA_ENTRY {
    DWORD OffsetToData;
    DWORD Size;
    DWORD CodePage;
    DWORD Reserved;
};

typedef struct _TOKEN_ELEVATION _TOKEN_ELEVATION, *P_TOKEN_ELEVATION;

typedef struct _TOKEN_ELEVATION TOKEN_ELEVATION;

struct _TOKEN_ELEVATION {
    DWORD TokenIsElevated;
};

typedef struct _IMAGE_OPTIONAL_HEADER64 *PIMAGE_OPTIONAL_HEADER64;

typedef PIMAGE_OPTIONAL_HEADER64 PIMAGE_OPTIONAL_HEADER;

typedef struct _IMAGE_DOS_HEADER _IMAGE_DOS_HEADER, *P_IMAGE_DOS_HEADER;

typedef struct _IMAGE_DOS_HEADER IMAGE_DOS_HEADER;

struct _IMAGE_DOS_HEADER {
    WORD e_magic;
    WORD e_cblp;
    WORD e_cp;
    WORD e_crlc;
    WORD e_cparhdr;
    WORD e_minalloc;
    WORD e_maxalloc;
    WORD e_ss;
    WORD e_sp;
    WORD e_csum;
    WORD e_ip;
    WORD e_cs;
    WORD e_lfarlc;
    WORD e_ovno;
    WORD e_res[4];
    WORD e_oemid;
    WORD e_oeminfo;
    WORD e_res2[10];
    LONG e_lfanew;
};

typedef struct _OSVERSIONINFOEXA _OSVERSIONINFOEXA, *P_OSVERSIONINFOEXA;

struct _OSVERSIONINFOEXA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
    WORD wServicePackMajor;
    WORD wServicePackMinor;
    WORD wSuiteMask;
    BYTE wProductType;
    BYTE wReserved;
};

typedef struct _LUID *PLUID;

typedef struct _ACL _ACL, *P_ACL;

typedef struct _ACL ACL;

typedef ACL *PACL;

struct _ACL {
    BYTE AclRevision;
    BYTE Sbz1;
    WORD AclSize;
    WORD AceCount;
    WORD Sbz2;
};

typedef LONG *PLONG;


// WARNING! conflicting data type names: /DWARF/winnt.h/LPCWSTR - /winnt.h/LPCWSTR

typedef LPCWSTR LPCTSTR;

typedef ULARGE_INTEGER *PULARGE_INTEGER;


// WARNING! conflicting data type names: /DWARF/winnt.h/_LIST_ENTRY - /winnt.h/_LIST_ENTRY

typedef LPCSTR LPCTSTR.conflict;

typedef struct _IMAGE_IMPORT_BY_NAME _IMAGE_IMPORT_BY_NAME, *P_IMAGE_IMPORT_BY_NAME;

typedef struct _IMAGE_IMPORT_BY_NAME *PIMAGE_IMPORT_BY_NAME;

struct _IMAGE_IMPORT_BY_NAME {
    WORD Hint;
    CHAR Name[1];
};

typedef WCHAR *PCWSTR;


// WARNING! conflicting data type names: /DWARF/winnt.h/LPSTR - /winnt.h/LPSTR

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    DWORD Size;
    DWORD TimeDateStamp;
    WORD MajorVersion;
    WORD MinorVersion;
    DWORD GlobalFlagsClear;
    DWORD GlobalFlagsSet;
    DWORD CriticalSectionDefaultTimeout;
    ULONGLONG DeCommitFreeBlockThreshold;
    ULONGLONG DeCommitTotalFreeThreshold;
    ULONGLONG LockPrefixTable;
    ULONGLONG MaximumAllocationSize;
    ULONGLONG VirtualMemoryThreshold;
    ULONGLONG ProcessAffinityMask;
    DWORD ProcessHeapFlags;
    WORD CSDVersion;
    WORD DependentLoadFlags;
    ULONGLONG EditList;
    ULONGLONG SecurityCookie;
    ULONGLONG SEHandlerTable;
    ULONGLONG SEHandlerCount;
    ULONGLONG GuardCFCheckFunctionPointer;
    ULONGLONG GuardCFDispatchFunctionPointer;
    ULONGLONG GuardCFFunctionTable;
    ULONGLONG GuardCFFunctionCount;
    DWORD GuardFlags;
    IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    ULONGLONG GuardAddressTakenIatEntryTable;
    ULONGLONG GuardAddressTakenIatEntryCount;
    ULONGLONG GuardLongJumpTargetTable;
    ULONGLONG GuardLongJumpTargetCount;
    ULONGLONG DynamicValueRelocTable;
    ULONGLONG CHPEMetadataPointer;
    ULONGLONG GuardRFFailureRoutine;
    ULONGLONG GuardRFFailureRoutineFunctionPointer;
    DWORD DynamicValueRelocTableOffset;
    WORD DynamicValueRelocTableSection;
    WORD Reserved2;
    ULONGLONG GuardRFVerifyStackPointerFunctionPointer;
    DWORD HotPatchTableOffset;
    DWORD Reserved3;
    ULONGLONG EnclaveConfigurationPointer;
    ULONGLONG VolatileMetadataPointer;
    ULONGLONG GuardEHContinuationTable;
    ULONGLONG GuardEHContinuationCount;
    ULONGLONG GuardXFGCheckFunctionPointer;
    ULONGLONG GuardXFGDispatchFunctionPointer;
    ULONGLONG GuardXFGTableDispatchFunctionPointer;
    ULONGLONG CastGuardOsDeterminedFailureMode;
    ULONGLONG GuardMemcpyFunctionPointer;
};

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _TOKEN_PRIVILEGES *PTOKEN_PRIVILEGES;

typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY _IMAGE_RESOURCE_DIRECTORY_ENTRY, *P_IMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0 anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0, *Panon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0;

typedef union anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1 anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1, *Panon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1;

typedef struct anon_struct_4_2_12676999_for_anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0_0 anon_struct_4_2_12676999_for_anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0_0, *Panon_struct_4_2_12676999_for_anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0_0;

typedef struct anon_struct_4_2_96e91807_for_anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1_1 anon_struct_4_2_96e91807_for_anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1_1, *Panon_struct_4_2_96e91807_for_anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1_1;

struct anon_struct_4_2_12676999_for_anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0_0 {
    DWORD NameOffset:31;
    DWORD NameIsString:1;
};

union anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0 {
    struct anon_struct_4_2_12676999_for_anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0_0 field_0;
    DWORD Name;
    WORD Id;
};

struct anon_struct_4_2_96e91807_for_anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1_1 {
    DWORD OffsetToDirectory:31;
    DWORD DataIsDirectory:1;
};

union anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1 {
    DWORD OffsetToData;
    struct anon_struct_4_2_96e91807_for_anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1_1 field_1;
};

struct _IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union anon_union_4_3_5f7988d9_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_0 field_0;
    union anon_union_4_2_89a4d0d5_for__IMAGE_RESOURCE_DIRECTORY_ENTRY_1 field_1;
};

typedef struct _IMAGE_NT_HEADERS64 *PIMAGE_NT_HEADERS64;

typedef PIMAGE_NT_HEADERS64 PIMAGE_NT_HEADERS;


// WARNING! conflicting data type names: /DWARF/winnt.h/_RTL_CRITICAL_SECTION - /winnt.h/_RTL_CRITICAL_SECTION

typedef struct _NT_TIB _NT_TIB, *P_NT_TIB;

typedef struct _NT_TIB NT_TIB;

typedef union anon_union_8_2_9ea3c503_for__NT_TIB_4 anon_union_8_2_9ea3c503_for__NT_TIB_4, *Panon_union_8_2_9ea3c503_for__NT_TIB_4;

union anon_union_8_2_9ea3c503_for__NT_TIB_4 {
    PVOID FiberData;
    DWORD Version;
};

struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;
    union anon_union_8_2_9ea3c503_for__NT_TIB_4 field_4;
    PVOID ArbitraryUserPointer;
    struct _NT_TIB *Self;
};

typedef PVOID PSID;


// WARNING! conflicting data type names: /DWARF/winnt.h/EXCEPTION_RECORD - /winnt.h/EXCEPTION_RECORD

typedef struct _IMAGE_IMPORT_DESCRIPTOR _IMAGE_IMPORT_DESCRIPTOR, *P_IMAGE_IMPORT_DESCRIPTOR;

typedef union anon_union_4_2_b1ad5ba6_for__IMAGE_IMPORT_DESCRIPTOR_0 anon_union_4_2_b1ad5ba6_for__IMAGE_IMPORT_DESCRIPTOR_0, *Panon_union_4_2_b1ad5ba6_for__IMAGE_IMPORT_DESCRIPTOR_0;

union anon_union_4_2_b1ad5ba6_for__IMAGE_IMPORT_DESCRIPTOR_0 {
    DWORD Characteristics;
    DWORD OriginalFirstThunk;
};

struct _IMAGE_IMPORT_DESCRIPTOR {
    union anon_union_4_2_b1ad5ba6_for__IMAGE_IMPORT_DESCRIPTOR_0 field_0;
    DWORD TimeDateStamp;
    DWORD ForwarderChain;
    DWORD Name;
    DWORD FirstThunk;
};

typedef struct _OSVERSIONINFOEXW _OSVERSIONINFOEXW, *P_OSVERSIONINFOEXW;

struct _OSVERSIONINFOEXW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR szCSDVersion[128];
    WORD wServicePackMajor;
    WORD wServicePackMinor;
    WORD wSuiteMask;
    BYTE wProductType;
    BYTE wReserved;
};

typedef struct _IMAGE_IMPORT_DESCRIPTOR IMAGE_IMPORT_DESCRIPTOR;

typedef IMAGE_IMPORT_DESCRIPTOR *PIMAGE_IMPORT_DESCRIPTOR;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef union anon_union_4_2_d8da8690_for_Misc anon_union_4_2_d8da8690_for_Misc, *Panon_union_4_2_d8da8690_for_Misc;

union anon_union_4_2_d8da8690_for_Misc {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union anon_union_4_2_d8da8690_for_Misc Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef DWORD SECURITY_INFORMATION;

typedef struct _TOKEN_USER _TOKEN_USER, *P_TOKEN_USER;

typedef struct _TOKEN_USER TOKEN_USER;

typedef struct _SID_AND_ATTRIBUTES _SID_AND_ATTRIBUTES, *P_SID_AND_ATTRIBUTES;

typedef struct _SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES;

struct _SID_AND_ATTRIBUTES {
    PSID Sid;
    DWORD Attributes;
};

struct _TOKEN_USER {
    SID_AND_ATTRIBUTES User;
};

typedef struct _SID_IDENTIFIER_AUTHORITY SID_IDENTIFIER_AUTHORITY;

typedef struct _IMAGE_THUNK_DATA64 _IMAGE_THUNK_DATA64, *P_IMAGE_THUNK_DATA64;

typedef union anon_union_8_4_d16396ca_for_u1 anon_union_8_4_d16396ca_for_u1, *Panon_union_8_4_d16396ca_for_u1;

union anon_union_8_4_d16396ca_for_u1 {
    ULONGLONG ForwarderString;
    ULONGLONG Function;
    ULONGLONG Ordinal;
    ULONGLONG AddressOfData;
};

struct _IMAGE_THUNK_DATA64 {
    union anon_union_8_4_d16396ca_for_u1 u1;
};

typedef BOOLEAN *PBOOLEAN;


// WARNING! conflicting data type names: /DWARF/winnt.h/_RTL_CRITICAL_SECTION_DEBUG - /winnt.h/_RTL_CRITICAL_SECTION_DEBUG

typedef struct _IMAGE_TLS_DIRECTORY64 _IMAGE_TLS_DIRECTORY64, *P_IMAGE_TLS_DIRECTORY64;

typedef struct _IMAGE_TLS_DIRECTORY64 IMAGE_TLS_DIRECTORY64;

typedef IMAGE_TLS_DIRECTORY64 IMAGE_TLS_DIRECTORY;

struct _IMAGE_TLS_DIRECTORY64 {
    ULONGLONG StartAddressOfRawData;
    ULONGLONG EndAddressOfRawData;
    ULONGLONG AddressOfIndex;
    ULONGLONG AddressOfCallBacks;
    DWORD SizeOfZeroFill;
    DWORD Characteristics;
};


// WARNING! conflicting data type names: /DWARF/winnt.h/HRESULT - /winnt.h/HRESULT

typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser=1,
    TokenGroups=2,
    TokenPrivileges=3,
    TokenOwner=4,
    TokenPrimaryGroup=5,
    TokenDefaultDacl=6,
    TokenSource=7,
    TokenType=8,
    TokenImpersonationLevel=9,
    TokenStatistics=10,
    TokenRestrictedSids=11,
    TokenSessionId=12,
    TokenGroupsAndPrivileges=13,
    TokenSessionReference=14,
    TokenSandBoxInert=15,
    TokenAuditPolicy=16,
    TokenOrigin=17,
    TokenElevationType=18,
    TokenLinkedToken=19,
    TokenElevation=20,
    TokenHasRestrictions=21,
    TokenAccessInformation=22,
    TokenVirtualizationAllowed=23,
    TokenVirtualizationEnabled=24,
    TokenIntegrityLevel=25,
    TokenUIAccess=26,
    TokenMandatoryPolicy=27,
    TokenLogonSid=28,
    TokenIsAppContainer=29,
    TokenCapabilities=30,
    TokenAppContainerSid=31,
    TokenAppContainerNumber=32,
    TokenUserClaimAttributes=33,
    TokenDeviceClaimAttributes=34,
    TokenRestrictedUserClaimAttributes=35,
    TokenRestrictedDeviceClaimAttributes=36,
    TokenDeviceGroups=37,
    TokenRestrictedDeviceGroups=38,
    TokenSecurityAttributes=39,
    TokenIsRestricted=40,
    TokenProcessTrustLevel=41,
    TokenPrivateNameSpace=42,
    TokenSingletonAttributes=43,
    TokenBnoIsolation=44,
    TokenChildProcessFlags=45,
    TokenIsLessPrivilegedAppContainer=46,
    TokenIsSandboxed=47,
    TokenIsAppSilo=48,
    MaxTokenInfoClass=49
} _TOKEN_INFORMATION_CLASS;


// WARNING! conflicting data type names: /DWARF/winnt.h/PCONTEXT - /winnt.h/PCONTEXT

typedef WORD LANGID;

typedef DWORD LCID;

typedef struct _SECURITY_DESCRIPTOR _SECURITY_DESCRIPTOR, *P_SECURITY_DESCRIPTOR;

struct _SECURITY_DESCRIPTOR {
    BYTE Revision;
    BYTE Sbz1;
    SECURITY_DESCRIPTOR_CONTROL Control;
    PSID Owner;
    PSID Group;
    PACL Sacl;
    PACL Dacl;
};

typedef void (*PIMAGE_TLS_CALLBACK)(PVOID, DWORD, PVOID);


// WARNING! conflicting data type names: /DWARF/winnt.h/LPWSTR - /winnt.h/LPWSTR

typedef LPWSTR LPTSTR;

typedef HANDLE *PHANDLE;


// WARNING! conflicting data type names: /DWARF/winnt.h/PEXCEPTION_RECORD - /winnt.h/PEXCEPTION_RECORD

typedef struct _OSVERSIONINFOA OSVERSIONINFOA;

typedef enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS {
    JOB_OBJECT_NET_RATE_CONTROL_ENABLE=1,
    JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH=2,
    JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG=4,
    JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS=7
} JOB_OBJECT_NET_RATE_CONTROL_FLAGS;


// WARNING! conflicting data type names: /DWARF/winnt.h/XMM_SAVE_AREA32 - /winnt.h/XMM_SAVE_AREA32

typedef NT_TIB *PNT_TIB;

typedef CHAR *PCHAR;

typedef struct _TOKEN_PRIVILEGES TOKEN_PRIVILEGES;

typedef struct _IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER;

typedef struct _SECURITY_DESCRIPTOR SECURITY_DESCRIPTOR;

typedef struct _IMAGE_RESOURCE_DIRECTORY _IMAGE_RESOURCE_DIRECTORY, *P_IMAGE_RESOURCE_DIRECTORY;

typedef struct _IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY;

struct _IMAGE_RESOURCE_DIRECTORY {
    DWORD Characteristics;
    DWORD TimeDateStamp;
    WORD MajorVersion;
    WORD MinorVersion;
    WORD NumberOfNamedEntries;
    WORD NumberOfIdEntries;
};

typedef struct _IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64;

typedef IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef WCHAR *LPCWCH;

typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;

typedef enum _TOKEN_INFORMATION_CLASS TOKEN_INFORMATION_CLASS;


// WARNING! conflicting data type names: /DWARF/winnt.h/_LARGE_INTEGER - /winnt.h/_LARGE_INTEGER

typedef struct _OSVERSIONINFOEXW *LPOSVERSIONINFOEXW;

typedef CHAR *LPCCH;

typedef struct _OSVERSIONINFOEXW OSVERSIONINFOEXW;

typedef struct _IMAGE_DOS_HEADER *PIMAGE_DOS_HEADER;

typedef struct _IMAGE_OPTIONAL_HEADER *PIMAGE_OPTIONAL_HEADER32;

typedef CHAR *PCSTR;

typedef struct _XMM_SAVE_AREA32 _XMM_SAVE_AREA32, *P_XMM_SAVE_AREA32;

struct _XMM_SAVE_AREA32 {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};


// WARNING! conflicting data type names: /DWARF/winnt.h/PRTL_CRITICAL_SECTION_DEBUG - /winnt.h/PRTL_CRITICAL_SECTION_DEBUG


// WARNING! conflicting data type names: /DWARF/winnt.h/_ULARGE_INTEGER - /winnt.h/_ULARGE_INTEGER

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef struct _OSVERSIONINFOEXA OSVERSIONINFOEXA;

typedef CHAR *PSTR;

typedef struct _OSVERSIONINFOEXA *LPOSVERSIONINFOEXA;

typedef union anon_union_512_3_a3503179_for__CONTEXT_38 anon_union_512_3_a3503179_for__CONTEXT_38, *Panon_union_512_3_a3503179_for__CONTEXT_38;

typedef struct anon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2 anon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2, *Panon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2;

struct anon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union anon_union_512_3_a3503179_for__CONTEXT_38 {
    XMM_SAVE_AREA32 FltSave;
    XMM_SAVE_AREA32 FloatSave;
    struct anon_struct_416_18_1bcf7cc9_for_anon_union_512_3_a3503179_for__CONTEXT_38_2 field_2;
};

typedef struct anon_struct_8_2_d6b66b69_for__ULARGE_INTEGER_0 anon_struct_8_2_d6b66b69_for__ULARGE_INTEGER_0, *Panon_struct_8_2_d6b66b69_for__ULARGE_INTEGER_0;

struct anon_struct_8_2_d6b66b69_for__ULARGE_INTEGER_0 {
    DWORD LowPart;
    DWORD HighPart;
};

typedef struct anon_struct_8_2_d6b66b69_for_u anon_struct_8_2_d6b66b69_for_u, *Panon_struct_8_2_d6b66b69_for_u;

struct anon_struct_8_2_d6b66b69_for_u {
    DWORD LowPart;
    DWORD HighPart;
};

typedef struct anon_struct_8_2_d6b66b69_for__LARGE_INTEGER_0 anon_struct_8_2_d6b66b69_for__LARGE_INTEGER_0, *Panon_struct_8_2_d6b66b69_for__LARGE_INTEGER_0;

struct anon_struct_8_2_d6b66b69_for__LARGE_INTEGER_0 {
    DWORD LowPart;
    LONG HighPart;
};


// WARNING! conflicting data type names: /DWARF/winnt.h/_LARGE_INTEGER/anon_struct_8_2_d6b66b69_for_u - /DWARF/winnt.h/_ULARGE_INTEGER/anon_struct_8_2_d6b66b69_for_u

typedef struct sha512_state sha512_state, *Psha512_state;

struct sha512_state {
    __u64 length;
    __u64 state[8];
    ulong curlen;
    uchar buf[128];
};

typedef struct hash_state hash_state, *Phash_state;

struct hash_state {
    struct sha512_state sha512;
};

typedef enum FILE_SYSTEM_CALLBACK_COMMAND {
    FCC_PROGRESS=0,
    FCC_DONE_WITH_STRUCTURE=1,
    FCC_UNKNOWN2=2,
    FCC_INCOMPATIBLE_FILE_SYSTEM=3,
    FCC_UNKNOWN4=4,
    FCC_UNKNOWN5=5,
    FCC_ACCESS_DENIED=6,
    FCC_MEDIA_WRITE_PROTECTED=7,
    FCC_VOLUME_IN_USE=8,
    FCC_CANT_QUICK_FORMAT=9,
    FCC_UNKNOWNA=10,
    FCC_DONE=11,
    FCC_BAD_LABEL=12,
    FCC_UNKNOWND=13,
    FCC_OUTPUT=14,
    FCC_STRUCTURE_PROGRESS=15,
    FCC_CLUSTER_SIZE_TOO_SMALL=16,
    FCC_CLUSTER_SIZE_TOO_BIG=17,
    FCC_VOLUME_TOO_SMALL=18,
    FCC_VOLUME_TOO_BIG=19,
    FCC_NO_MEDIA_IN_DRIVE=20,
    FCC_UNKNOWN15=21,
    FCC_UNKNOWN16=22,
    FCC_UNKNOWN17=23,
    FCC_DEVICE_NOT_READY=24,
    FCC_CHECKDISK_PROGRESS=25,
    FCC_UNKNOWN1A=26,
    FCC_UNKNOWN1B=27,
    FCC_UNKNOWN1C=28,
    FCC_UNKNOWN1D=29,
    FCC_UNKNOWN1E=30,
    FCC_UNKNOWN1F=31,
    FCC_READ_ONLY_MODE=32,
    FCC_UNKNOWN21=33,
    FCC_UNKNOWN22=34,
    FCC_UNKNOWN23=35,
    FCC_UNKNOWN24=36,
    FCC_ALIGNMENT_VIOLATION=37
} FILE_SYSTEM_CALLBACK_COMMAND;

typedef BOOLEAN (*FILE_SYSTEM_CALLBACK)(enum FILE_SYSTEM_CALLBACK_COMMAND, ULONG, PVOID);

typedef struct anon_struct_16_2_9672cf19 anon_struct_16_2_9672cf19, *Panon_struct_16_2_9672cf19;

typedef struct anon_struct_16_2_9672cf19 *PTEXTOUTPUT;

struct anon_struct_16_2_9672cf19 {
    DWORD Lines;
    CHAR *Output;
};

typedef enum _MEDIA_TYPE {
    Unknown=0,
    F5_1Pt2_512=1,
    F3_1Pt44_512=2,
    F3_2Pt88_512=3,
    F3_20Pt8_512=4,
    F3_720_512=5,
    F5_360_512=6,
    F5_320_512=7,
    F5_320_1024=8,
    F5_180_512=9,
    F5_160_512=10,
    RemovableMedia=11,
    FixedMedia=12,
    F3_120M_512=13,
    F3_640_512=14,
    F5_640_512=15,
    F5_720_512=16,
    F3_1Pt2_512=17,
    F3_1Pt23_1024=18,
    F5_1Pt23_1024=19,
    F3_128Mb_512=20,
    F3_230Mb_512=21,
    F8_256_128=22,
    F3_200Mb_512=23,
    F3_240M_512=24,
    F3_32M_512=25
} _MEDIA_TYPE;

typedef enum _MEDIA_TYPE MEDIA_TYPE;

typedef void (*FormatEx_t)(WCHAR *, MEDIA_TYPE, WCHAR *, WCHAR *, BOOL, ULONG, FILE_SYSTEM_CALLBACK);

typedef BOOLEAN (*EnableVolumeCompression_t)(WCHAR *, ULONG);

typedef LONG (*Chkdsk_t)(WCHAR *, WCHAR *, BOOL, BOOL, BOOL, BOOL, void *, void *, FILE_SYSTEM_CALLBACK);

typedef enum cdio_log_level_t {
    CDIO_LOG_DEBUG=1,
    CDIO_LOG_INFO=2,
    CDIO_LOG_WARN=3,
    CDIO_LOG_ERROR=4,
    CDIO_LOG_ASSERT=5
} cdio_log_level_t;

typedef void (*cdio_log_handler_t)(enum cdio_log_level_t, char *);

typedef struct wimlib_resource_entry wimlib_resource_entry, *Pwimlib_resource_entry;

typedef int (*wimlib_iterate_lookup_table_callback_t)(struct wimlib_resource_entry *, void *);

struct wimlib_resource_entry {
    uint64_t uncompressed_size;
    uint64_t compressed_size;
    uint64_t offset;
    uint8_t sha1_hash[20];
    uint32_t part_number;
    uint32_t reference_count;
    uint32_t is_compressed:1;
    uint32_t is_metadata:1;
    uint32_t is_free:1;
    uint32_t is_spanned:1;
    uint32_t is_missing:1;
    uint32_t packed:1;
    uint32_t reserved_flags:26;
    uint64_t raw_resource_offset_in_wim;
    uint64_t raw_resource_compressed_size;
    uint64_t raw_resource_uncompressed_size;
    uint64_t reserved[1];
};

typedef enum wimlib_compression_type {
    WIMLIB_COMPRESSION_TYPE_NONE=0,
    WIMLIB_COMPRESSION_TYPE_XPRESS=1,
    WIMLIB_COMPRESSION_TYPE_LZX=2,
    WIMLIB_COMPRESSION_TYPE_LZMS=3
} wimlib_compression_type;

typedef struct wimlib_timespec wimlib_timespec, *Pwimlib_timespec;

struct wimlib_timespec {
    int64_t tv_sec;
    int32_t tv_nsec;
};

typedef enum wimlib_error_code {
    WIMLIB_ERR_SUCCESS=0,
    WIMLIB_ERR_ALREADY_LOCKED=1,
    WIMLIB_ERR_DECOMPRESSION=2,
    WIMLIB_ERR_FUSE=6,
    WIMLIB_ERR_GLOB_HAD_NO_MATCHES=8,
    WIMLIB_ERR_IMAGE_COUNT=10,
    WIMLIB_ERR_IMAGE_NAME_COLLISION=11,
    WIMLIB_ERR_INSUFFICIENT_PRIVILEGES=12,
    WIMLIB_ERR_INTEGRITY=13,
    WIMLIB_ERR_INVALID_CAPTURE_CONFIG=14,
    WIMLIB_ERR_INVALID_CHUNK_SIZE=15,
    WIMLIB_ERR_INVALID_COMPRESSION_TYPE=16,
    WIMLIB_ERR_INVALID_HEADER=17,
    WIMLIB_ERR_INVALID_IMAGE=18,
    WIMLIB_ERR_INVALID_INTEGRITY_TABLE=19,
    WIMLIB_ERR_INVALID_LOOKUP_TABLE_ENTRY=20,
    WIMLIB_ERR_INVALID_METADATA_RESOURCE=21,
    WIMLIB_ERR_INVALID_OVERLAY=23,
    WIMLIB_ERR_INVALID_PARAM=24,
    WIMLIB_ERR_INVALID_PART_NUMBER=25,
    WIMLIB_ERR_INVALID_PIPABLE_WIM=26,
    WIMLIB_ERR_INVALID_REPARSE_DATA=27,
    WIMLIB_ERR_INVALID_RESOURCE_HASH=28,
    WIMLIB_ERR_INVALID_UTF16_STRING=30,
    WIMLIB_ERR_INVALID_UTF8_STRING=31,
    WIMLIB_ERR_IS_DIRECTORY=32,
    WIMLIB_ERR_IS_SPLIT_WIM=33,
    WIMLIB_ERR_LINK=35,
    WIMLIB_ERR_METADATA_NOT_FOUND=36,
    WIMLIB_ERR_MKDIR=37,
    WIMLIB_ERR_MQUEUE=38,
    WIMLIB_ERR_NOMEM=39,
    WIMLIB_ERR_NOTDIR=40,
    WIMLIB_ERR_NOTEMPTY=41,
    WIMLIB_ERR_NOT_A_REGULAR_FILE=42,
    WIMLIB_ERR_NOT_A_WIM_FILE=43,
    WIMLIB_ERR_NOT_PIPABLE=44,
    WIMLIB_ERR_NO_FILENAME=45,
    WIMLIB_ERR_NTFS_3G=46,
    WIMLIB_ERR_OPEN=47,
    WIMLIB_ERR_OPENDIR=48,
    WIMLIB_ERR_PATH_DOES_NOT_EXIST=49,
    WIMLIB_ERR_READ=50,
    WIMLIB_ERR_READLINK=51,
    WIMLIB_ERR_RENAME=52,
    WIMLIB_ERR_REPARSE_POINT_FIXUP_FAILED=54,
    WIMLIB_ERR_RESOURCE_NOT_FOUND=55,
    WIMLIB_ERR_RESOURCE_ORDER=56,
    WIMLIB_ERR_SET_ATTRIBUTES=57,
    WIMLIB_ERR_SET_REPARSE_DATA=58,
    WIMLIB_ERR_SET_SECURITY=59,
    WIMLIB_ERR_SET_SHORT_NAME=60,
    WIMLIB_ERR_SET_TIMESTAMPS=61,
    WIMLIB_ERR_SPLIT_INVALID=62,
    WIMLIB_ERR_STAT=63,
    WIMLIB_ERR_UNEXPECTED_END_OF_FILE=65,
    WIMLIB_ERR_UNICODE_STRING_NOT_REPRESENTABLE=66,
    WIMLIB_ERR_UNKNOWN_VERSION=67,
    WIMLIB_ERR_UNSUPPORTED=68,
    WIMLIB_ERR_UNSUPPORTED_FILE=69,
    WIMLIB_ERR_WIM_IS_READONLY=71,
    WIMLIB_ERR_WRITE=72,
    WIMLIB_ERR_XML=73,
    WIMLIB_ERR_WIM_IS_ENCRYPTED=74,
    WIMLIB_ERR_WIMBOOT=75,
    WIMLIB_ERR_ABORTED_BY_PROGRESS=76,
    WIMLIB_ERR_UNKNOWN_PROGRESS_STATUS=77,
    WIMLIB_ERR_MKNOD=78,
    WIMLIB_ERR_MOUNTED_IMAGE_IS_BUSY=79,
    WIMLIB_ERR_NOT_A_MOUNTPOINT=80,
    WIMLIB_ERR_NOT_PERMITTED_TO_UNMOUNT=81,
    WIMLIB_ERR_FVE_LOCKED_VOLUME=82,
    WIMLIB_ERR_UNABLE_TO_READ_CAPTURE_CONFIG=83,
    WIMLIB_ERR_WIM_IS_INCOMPLETE=84,
    WIMLIB_ERR_COMPACTION_NOT_POSSIBLE=85,
    WIMLIB_ERR_IMAGE_HAS_MULTIPLE_REFERENCES=86,
    WIMLIB_ERR_DUPLICATE_EXPORTED_IMAGE=87,
    WIMLIB_ERR_CONCURRENT_MODIFICATION_DETECTED=88,
    WIMLIB_ERR_SNAPSHOT_FAILURE=89,
    WIMLIB_ERR_INVALID_XATTR=90,
    WIMLIB_ERR_SET_XATTR=91
} wimlib_error_code;

typedef struct wimlib_wim_info wimlib_wim_info, *Pwimlib_wim_info;

struct wimlib_wim_info {
    uint8_t guid[16];
    uint32_t image_count;
    uint32_t boot_index;
    uint32_t wim_version;
    uint32_t chunk_size;
    uint16_t part_number;
    uint16_t total_parts;
    int32_t compression_type;
    uint64_t total_bytes;
    uint32_t has_integrity_table:1;
    uint32_t opened_from_file:1;
    uint32_t is_readonly:1;
    uint32_t has_rpfix:1;
    uint32_t is_marked_readonly:1;
    uint32_t spanned:1;
    uint32_t write_in_progress:1;
    uint32_t metadata_only:1;
    uint32_t resource_only:1;
    uint32_t pipable:1;
    uint32_t reserved_flags:22;
    uint32_t reserved[9];
};

typedef struct FAKE_FD FAKE_FD, *PFAKE_FD;

struct FAKE_FD {
    void *_handle;
    uint64_t _offset;
};

typedef __u32 __be32;

typedef int32_t __s32;

typedef __u64 __le64;

typedef struct image_region image_region, *Pimage_region;

struct image_region {
    uint8_t *data;
    uint32_t size;
};

typedef struct efi_image_regions efi_image_regions, *Pefi_image_regions;

struct efi_image_regions {
    int max;
    int num;
    struct image_region reg[0];
};

typedef struct _TIME_FIELDS _TIME_FIELDS, *P_TIME_FIELDS;

struct _TIME_FIELDS {
    short Year;
    short Month;
    short Day;
    short Hour;
    short Minute;
    short Second;
    short Milliseconds;
};

typedef struct _TIME_FIELDS TIME_FIELDS;

typedef struct _TIME_FIELDS *PTIME_FIELDS;


// WARNING! conflicting data type names: /DWARF/wintrust.h/WINTRUST_FILE_INFO_ - /wintrust.h/WINTRUST_FILE_INFO_


// WARNING! conflicting data type names: /DWARF/wintrust.h/_WINTRUST_DATA - /wintrust.h/_WINTRUST_DATA


// WARNING! conflicting data type names: /DWARF/wintrust.h/WINTRUST_BLOB_INFO_ - /wintrust.h/WINTRUST_BLOB_INFO_


// WARNING! conflicting data type names: /DWARF/wintrust.h/WINTRUST_DATA - /wintrust.h/WINTRUST_DATA

typedef struct WINTRUST_FILE_INFO_ WINTRUST_FILE_INFO;


// WARNING! conflicting data type names: /DWARF/wintrust.h/WINTRUST_CATALOG_INFO_ - /wintrust.h/WINTRUST_CATALOG_INFO_

typedef HANDLE HCATADMIN;

typedef struct _WIN_CERTIFICATE.conflict _WIN_CERTIFICATE.conflict, *P_WIN_CERTIFICATE.conflict;

struct _WIN_CERTIFICATE.conflict {
    DWORD dwLength;
    WORD wRevision;
    WORD wCertificateType;
    BYTE bCertificate[1];
};

typedef struct _WIN_CERTIFICATE.conflict WIN_CERTIFICATE.conflict;


// WARNING! conflicting data type names: /DWARF/wintrust.h/WINTRUST_CERT_INFO_ - /wintrust.h/WINTRUST_CERT_INFO_


// WARNING! conflicting data type names: /DWARF/wintrust.h/WINTRUST_SGNR_INFO_ - /wintrust.h/WINTRUST_SGNR_INFO_

typedef union anon_union_8_5_2cc40496_for__WINTRUST_DATA_6 anon_union_8_5_2cc40496_for__WINTRUST_DATA_6, *Panon_union_8_5_2cc40496_for__WINTRUST_DATA_6;

union anon_union_8_5_2cc40496_for__WINTRUST_DATA_6 {
    struct WINTRUST_FILE_INFO_ *pFile;
    struct WINTRUST_CATALOG_INFO_ *pCatalog;
    struct WINTRUST_BLOB_INFO_ *pBlob;
    struct WINTRUST_SGNR_INFO_ *pSgnr;
    struct WINTRUST_CERT_INFO_ *pCert;
};

typedef struct _exception _exception, *P_exception;

struct _exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

typedef union __mingw_dbl_type_t __mingw_dbl_type_t, *P__mingw_dbl_type_t;

typedef struct anon_struct_8_2_19ee64c9_for_lh anon_struct_8_2_19ee64c9_for_lh, *Panon_struct_8_2_19ee64c9_for_lh;

struct anon_struct_8_2_19ee64c9_for_lh {
    uint low;
    uint high;
};

union __mingw_dbl_type_t {
    double x;
    ulonglong val;
    struct anon_struct_8_2_19ee64c9_for_lh lh;
};

typedef uint64_t sector_t;

typedef struct anon_struct_8_2_d02e7724 anon_struct_8_2_d02e7724, *Panon_struct_8_2_d02e7724;

struct anon_struct_8_2_d02e7724 {
    char c;
    int flag;
};


// WARNING! conflicting data type names: /DWARF/vadefs.h/va_list - /vadefs.h/va_list

typedef char *__gnuc_va_list;

typedef struct glob_t glob_t, *Pglob_t;

struct glob_t {
    size_t gl_pathc;
    wchar_t **gl_pathv;
    size_t gl_offs;
};


// WARNING! conflicting data type names: /DWARF/timezoneapi.h/LPTIME_ZONE_INFORMATION - /winbase.h/LPTIME_ZONE_INFORMATION


// WARNING! conflicting data type names: /DWARF/timezoneapi.h/_TIME_ZONE_INFORMATION - /winbase.h/_TIME_ZONE_INFORMATION

typedef struct _TIME_ZONE_INFORMATION TIME_ZONE_INFORMATION;


// WARNING! conflicting data type names: /DWARF/shlobj.h/SHChangeNotifyEntry - /shlobj.h/SHChangeNotifyEntry


// WARNING! conflicting data type names: /DWARF/shlobj.h/_SHChangeNotifyEntry - /shlobj.h/_SHChangeNotifyEntry

typedef struct lzms_probability_entry lzms_probability_entry, *Plzms_probability_entry;

struct lzms_probability_entry {
    u32 num_recent_zero_bits;
    u64 recent_bits;
};

typedef struct lzms_probabilites lzms_probabilites, *Plzms_probabilites;

struct lzms_probabilites {
    struct lzms_probability_entry main[16];
    struct lzms_probability_entry match[32];
    struct lzms_probability_entry lz[64];
    struct lzms_probability_entry delta[64];
    struct lzms_probability_entry lz_rep[2][64];
    struct lzms_probability_entry delta_rep[2][64];
};


// WARNING! conflicting data type names: /DWARF/windef.h/HWND - /WinDef.h/HWND

typedef struct _WINDOWCOMPOSITIONATTRIBDATA _WINDOWCOMPOSITIONATTRIBDATA, *P_WINDOWCOMPOSITIONATTRIBDATA;

typedef struct _WINDOWCOMPOSITIONATTRIBDATA WINDOWCOMPOSITIONATTRIBDATA;

typedef BOOL (*SetWindowCompositionAttribute_t)(HWND, WINDOWCOMPOSITIONATTRIBDATA *);

typedef enum _WINDOWCOMPOSITIONATTRIB {
    WCA_UNDEFINED=0,
    WCA_NCRENDERING_ENABLED=1,
    WCA_NCRENDERING_POLICY=2,
    WCA_TRANSITIONS_FORCEDISABLED=3,
    WCA_ALLOW_NCPAINT=4,
    WCA_CAPTION_BUTTON_BOUNDS=5,
    WCA_NONCLIENT_RTL_LAYOUT=6,
    WCA_FORCE_ICONIC_REPRESENTATION=7,
    WCA_EXTENDED_FRAME_BOUNDS=8,
    WCA_HAS_ICONIC_BITMAP=9,
    WCA_THEME_ATTRIBUTES=10,
    WCA_NCRENDERING_EXILED=11,
    WCA_NCADORNMENTINFO=12,
    WCA_EXCLUDED_FROM_LIVEPREVIEW=13,
    WCA_VIDEO_OVERLAY_ACTIVE=14,
    WCA_FORCE_ACTIVEWINDOW_APPEARANCE=15,
    WCA_DISALLOW_PEEK=16,
    WCA_CLOAK=17,
    WCA_CLOAKED=18,
    WCA_ACCENT_POLICY=19,
    WCA_FREEZE_REPRESENTATION=20,
    WCA_EVER_UNCLOAKED=21,
    WCA_VISUAL_OWNER=22,
    WCA_HOLOGRAPHIC=23,
    WCA_EXCLUDED_FROM_DDA=24,
    WCA_PASSIVEUPDATEMODE=25,
    WCA_USEDARKMODECOLORS=26,
    WCA_LAST=27
} _WINDOWCOMPOSITIONATTRIB;

typedef enum _WINDOWCOMPOSITIONATTRIB WINDOWCOMPOSITIONATTRIB;

struct _WINDOWCOMPOSITIONATTRIBDATA {
    WINDOWCOMPOSITIONATTRIB Attrib;
    PVOID pvData;
    SIZE_T cbData;
};

typedef void (*FlushMenuThemes_t)(void);

typedef enum _PreferredAppMode {
    AppModeDefault=0,
    AppModeAllowDark=1,
    AppModeForceDark=2,
    AppModeForceLight=3
} _PreferredAppMode;

typedef enum _PreferredAppMode PreferredAppMode;

typedef PreferredAppMode (*SetPreferredAppMode_t)(PreferredAppMode);

typedef BOOL (*AllowDarkModeForWindow_t)(HWND, BOOL);

typedef RTL_CONDITION_VARIABLE CONDITION_VARIABLE;


// WARNING! conflicting data type names: /DWARF/synchapi.h/PCONDITION_VARIABLE - /winbase.h/PCONDITION_VARIABLE

typedef struct runtime_pseudo_reloc_v2 runtime_pseudo_reloc_v2, *Pruntime_pseudo_reloc_v2;

struct runtime_pseudo_reloc_v2 {
    DWORD magic1;
    DWORD magic2;
    DWORD version;
};

typedef struct runtime_pseudo_reloc_item_v2 runtime_pseudo_reloc_item_v2, *Pruntime_pseudo_reloc_item_v2;

struct runtime_pseudo_reloc_item_v2 {
    DWORD sym;
    DWORD target;
    DWORD flags;
};

typedef struct runtime_pseudo_reloc_item_v1 runtime_pseudo_reloc_item_v1, *Pruntime_pseudo_reloc_item_v1;

struct runtime_pseudo_reloc_item_v1 {
    DWORD addend;
    DWORD target;
};

typedef struct sSecInfo sSecInfo, *PsSecInfo;


// WARNING! conflicting data type names: /DWARF/minwindef.h/PBYTE - /WinDef.h/PBYTE

struct sSecInfo {
    DWORD old_protect;
    PVOID base_address;
    SIZE_T region_size;
    PBYTE sec_start;
    PIMAGE_SECTION_HEADER hash;
};


// WARNING! conflicting data type names: /DWARF/guiddef.h/GUID - /guiddef.h/GUID

typedef GUID MSAAPROPID;

typedef struct IAccPropServer IAccPropServer, *PIAccPropServer;

typedef struct IAccPropServerVtbl IAccPropServerVtbl, *PIAccPropServerVtbl;


// WARNING! conflicting data type names: /DWARF/guiddef.h/IID - /guiddef.h/IID

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

typedef struct tagVARIANT VARIANT;

typedef union anon_union_24_2_0f1baa75_for_tagVARIANT_0 anon_union_24_2_0f1baa75_for_tagVARIANT_0, *Panon_union_24_2_0f1baa75_for_tagVARIANT_0;

typedef struct anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0 anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0, *Panon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0;

typedef struct tagDEC tagDEC, *PtagDEC;

typedef struct tagDEC DECIMAL;

typedef union anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4 anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4, *Panon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4;

typedef union anon_union_2_2_142145c5_for_tagDEC_1 anon_union_2_2_142145c5_for_tagDEC_1, *Panon_union_2_2_142145c5_for_tagDEC_1;

typedef union anon_union_8_2_d5e41eab_for_tagDEC_3 anon_union_8_2_d5e41eab_for_tagDEC_3, *Panon_union_8_2_d5e41eab_for_tagDEC_3;

typedef LONG SCODE;

typedef union tagCY tagCY, *PtagCY;

typedef union tagCY CY;

typedef OLECHAR *BSTR;

typedef struct IDispatch IDispatch, *PIDispatch;

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

typedef struct tagSAFEARRAY SAFEARRAY;

typedef struct anon_struct_16_2_197d3050_for_anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4_43 anon_struct_16_2_197d3050_for_anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4_43, *Panon_struct_16_2_197d3050_for_anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4_43;

typedef struct anon_struct_2_2_f6487811_for_anon_union_2_2_142145c5_for_tagDEC_1_0 anon_struct_2_2_f6487811_for_anon_union_2_2_142145c5_for_tagDEC_1_0, *Panon_struct_2_2_f6487811_for_anon_union_2_2_142145c5_for_tagDEC_1_0;

typedef struct anon_struct_8_2_209d4e4c_for_anon_union_8_2_d5e41eab_for_tagDEC_3_0 anon_struct_8_2_209d4e4c_for_anon_union_8_2_d5e41eab_for_tagDEC_3_0, *Panon_struct_8_2_209d4e4c_for_anon_union_8_2_d5e41eab_for_tagDEC_3_0;

typedef struct anon_struct_8_2_f9ee1cfb_for_tagCY_0 anon_struct_8_2_f9ee1cfb_for_tagCY_0, *Panon_struct_8_2_f9ee1cfb_for_tagCY_0;

typedef struct IDispatchVtbl IDispatchVtbl, *PIDispatchVtbl;

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;


// WARNING! conflicting data type names: /DWARF/wtypesbase.h/LPOLESTR - /wtypes.h/LPOLESTR

typedef LONG DISPID;

typedef struct tagDISPPARAMS tagDISPPARAMS, *PtagDISPPARAMS;

typedef struct tagDISPPARAMS DISPPARAMS;

typedef struct tagEXCEPINFO tagEXCEPINFO, *PtagEXCEPINFO;

typedef struct tagEXCEPINFO EXCEPINFO;

typedef struct tagSAFEARRAYBOUND tagSAFEARRAYBOUND, *PtagSAFEARRAYBOUND;

typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;

typedef struct IRecordInfo IRecordInfo, *PIRecordInfo;

typedef struct ITypeInfoVtbl ITypeInfoVtbl, *PITypeInfoVtbl;

typedef struct tagTYPEATTR tagTYPEATTR, *PtagTYPEATTR;

typedef struct tagTYPEATTR TYPEATTR;

typedef struct ITypeComp ITypeComp, *PITypeComp;

typedef struct tagFUNCDESC tagFUNCDESC, *PtagFUNCDESC;

typedef struct tagFUNCDESC FUNCDESC;

typedef struct tagVARDESC tagVARDESC, *PtagVARDESC;

typedef struct tagVARDESC VARDESC;

typedef DISPID MEMBERID;

typedef DWORD HREFTYPE;

typedef enum tagINVOKEKIND {
    INVOKE_FUNC=1,
    INVOKE_PROPERTYGET=2,
    INVOKE_PROPERTYPUT=4,
    INVOKE_PROPERTYPUTREF=8
} tagINVOKEKIND;

typedef enum tagINVOKEKIND INVOKEKIND;

typedef struct ITypeLib ITypeLib, *PITypeLib;

typedef VARIANT VARIANTARG;

typedef struct IRecordInfoVtbl IRecordInfoVtbl, *PIRecordInfoVtbl;

typedef OLECHAR *LPCOLESTR;

typedef enum tagTYPEKIND {
    TKIND_ENUM=0,
    TKIND_RECORD=1,
    TKIND_MODULE=2,
    TKIND_INTERFACE=3,
    TKIND_DISPATCH=4,
    TKIND_COCLASS=5,
    TKIND_ALIAS=6,
    TKIND_UNION=7,
    TKIND_MAX=8
} tagTYPEKIND;

typedef enum tagTYPEKIND TYPEKIND;

typedef struct tagTYPEDESC tagTYPEDESC, *PtagTYPEDESC;

typedef struct tagTYPEDESC TYPEDESC;

typedef struct tagIDLDESC tagIDLDESC, *PtagIDLDESC;

typedef struct tagIDLDESC IDLDESC;

typedef struct ITypeCompVtbl ITypeCompVtbl, *PITypeCompVtbl;

typedef enum tagDESCKIND {
    DESCKIND_NONE=0,
    DESCKIND_FUNCDESC=1,
    DESCKIND_VARDESC=2,
    DESCKIND_TYPECOMP=3,
    DESCKIND_IMPLICITAPPOBJ=4,
    DESCKIND_MAX=5
} tagDESCKIND;

typedef enum tagDESCKIND DESCKIND;

typedef union tagBINDPTR tagBINDPTR, *PtagBINDPTR;

typedef union tagBINDPTR BINDPTR;

typedef struct tagELEMDESC tagELEMDESC, *PtagELEMDESC;

typedef struct tagELEMDESC ELEMDESC;

typedef enum tagFUNCKIND {
    FUNC_VIRTUAL=0,
    FUNC_PUREVIRTUAL=1,
    FUNC_NONVIRTUAL=2,
    FUNC_STATIC=3,
    FUNC_DISPATCH=4
} tagFUNCKIND;

typedef enum tagFUNCKIND FUNCKIND;

typedef enum tagCALLCONV {
    CC_FASTCALL=0,
    CC_CDECL=1,
    CC_MSCPASCAL=2,
    CC_PASCAL=2,
    CC_MACPASCAL=3,
    CC_STDCALL=4,
    CC_FPFASTCALL=5,
    CC_SYSCALL=6,
    CC_MPWCDECL=7,
    CC_MPWPASCAL=8,
    CC_MAX=9
} tagCALLCONV;

typedef enum tagCALLCONV CALLCONV;

typedef union anon_union_8_2_4534e60a_for_tagVARDESC_2 anon_union_8_2_4534e60a_for_tagVARDESC_2, *Panon_union_8_2_4534e60a_for_tagVARDESC_2;

typedef enum tagVARKIND {
    VAR_PERINSTANCE=0,
    VAR_STATIC=1,
    VAR_CONST=2,
    VAR_DISPATCH=3
} tagVARKIND;

typedef enum tagVARKIND VARKIND;

typedef struct ITypeLibVtbl ITypeLibVtbl, *PITypeLibVtbl;

typedef struct tagTLIBATTR tagTLIBATTR, *PtagTLIBATTR;

typedef struct tagTLIBATTR TLIBATTR;

typedef union anon_union_8_3_e3319e16_for_tagTYPEDESC_0 anon_union_8_3_e3319e16_for_tagTYPEDESC_0, *Panon_union_8_3_e3319e16_for_tagTYPEDESC_0;

typedef union anon_union_16_2_75497bbd_for_tagELEMDESC_1 anon_union_16_2_75497bbd_for_tagELEMDESC_1, *Panon_union_16_2_75497bbd_for_tagELEMDESC_1;

typedef enum tagSYSKIND {
    SYS_WIN16=0,
    SYS_WIN32=1,
    SYS_MAC=2,
    SYS_WIN64=3
} tagSYSKIND;

typedef enum tagSYSKIND SYSKIND;

typedef struct tagARRAYDESC tagARRAYDESC, *PtagARRAYDESC;

typedef struct tagPARAMDESC tagPARAMDESC, *PtagPARAMDESC;

typedef struct tagPARAMDESC PARAMDESC;

typedef struct tagPARAMDESCEX tagPARAMDESCEX, *PtagPARAMDESCEX;

typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

struct anon_struct_8_2_f9ee1cfb_for_tagCY_0 {
    ulong Lo;
    long Hi;
};

union tagCY {
    struct anon_struct_8_2_f9ee1cfb_for_tagCY_0 field_0;
    LONGLONG int64;
};

struct anon_struct_8_2_209d4e4c_for_anon_union_8_2_d5e41eab_for_tagDEC_3_0 {
    ULONG Lo32;
    ULONG Mid32;
};

union anon_union_8_3_e3319e16_for_tagTYPEDESC_0 {
    struct tagTYPEDESC *lptdesc;
    struct tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
};

struct tagTYPEDESC {
    union anon_union_8_3_e3319e16_for_tagTYPEDESC_0 field_0;
    VARTYPE vt;
};

struct tagIDLDESC {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
};

struct tagPARAMDESC {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
};

union anon_union_16_2_75497bbd_for_tagELEMDESC_1 {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
};

struct tagELEMDESC {
    TYPEDESC tdesc;
    union anon_union_16_2_75497bbd_for_tagELEMDESC_1 field_1;
};

struct tagFUNCDESC {
    MEMBERID memid;
    SCODE *lprgscode;
    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
};

struct tagSAFEARRAYBOUND {
    ULONG cElements;
    LONG lLbound;
};

struct tagSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND rgsabound[1];
};

struct tagTLIBATTR {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
};

struct tagARRAYDESC {
    TYPEDESC tdescElem;
    USHORT cDims;
    undefined field2_0x12;
    undefined field3_0x13;
    SAFEARRAYBOUND rgbounds[1];
    undefined field5_0x1c;
    undefined field6_0x1d;
    undefined field7_0x1e;
    undefined field8_0x1f;
};

struct IRecordInfo {
    struct IRecordInfoVtbl *lpVtbl;
};

struct anon_struct_2_2_f6487811_for_anon_union_2_2_142145c5_for_tagDEC_1_0 {
    BYTE scale;
    BYTE sign;
};

union anon_union_2_2_142145c5_for_tagDEC_1 {
    struct anon_struct_2_2_f6487811_for_anon_union_2_2_142145c5_for_tagDEC_1_0 field_0;
    USHORT signscale;
};

union anon_union_8_2_d5e41eab_for_tagDEC_3 {
    struct anon_struct_8_2_209d4e4c_for_anon_union_8_2_d5e41eab_for_tagDEC_3_0 field_0;
    ULONGLONG Lo64;
};

struct tagDEC {
    USHORT wReserved;
    union anon_union_2_2_142145c5_for_tagDEC_1 field_1;
    ULONG Hi32;
    union anon_union_8_2_d5e41eab_for_tagDEC_3 field_3;
};

struct anon_struct_16_2_197d3050_for_anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4_43 {
    PVOID pvRecord;
    struct IRecordInfo *pRecInfo;
};

union anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4 {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    struct IUnknown *punkVal;
    struct IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    struct IUnknown **ppunkVal;
    struct IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    struct anon_struct_16_2_197d3050_for_anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4_43 field_43;
};

struct anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0 {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    union anon_union_16_44_a00887f0_for_anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0_4 field_4;
};

union anon_union_24_2_0f1baa75_for_tagVARIANT_0 {
    struct anon_struct_24_5_4353c734_for_anon_union_24_2_0f1baa75_for_tagVARIANT_0_0 field_0;
    DECIMAL decVal;
};

struct tagDISPPARAMS {
    VARIANTARG *rgvarg;
    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
};

struct tagVARIANT {
    union anon_union_24_2_0f1baa75_for_tagVARIANT_0 field_0;
};

union anon_union_8_2_4534e60a_for_tagVARDESC_2 {
    ULONG oInst;
    VARIANT *lpvarValue;
};

struct ITypeLibVtbl {
    HRESULT (*QueryInterface)(struct ITypeLib *, IID *, void **);
    ULONG (*AddRef)(struct ITypeLib *);
    ULONG (*Release)(struct ITypeLib *);
    UINT (*GetTypeInfoCount)(struct ITypeLib *);
    HRESULT (*GetTypeInfo)(struct ITypeLib *, UINT, struct ITypeInfo **);
    HRESULT (*GetTypeInfoType)(struct ITypeLib *, UINT, TYPEKIND *);
    HRESULT (*GetTypeInfoOfGuid)(struct ITypeLib *, GUID *, struct ITypeInfo **);
    HRESULT (*GetLibAttr)(struct ITypeLib *, TLIBATTR **);
    HRESULT (*GetTypeComp)(struct ITypeLib *, struct ITypeComp **);
    HRESULT (*GetDocumentation)(struct ITypeLib *, INT, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*IsName)(struct ITypeLib *, LPOLESTR, ULONG, WINBOOL *);
    HRESULT (*FindName)(struct ITypeLib *, LPOLESTR, ULONG, struct ITypeInfo **, MEMBERID *, USHORT *);
    void (*ReleaseTLibAttr)(struct ITypeLib *, TLIBATTR *);
};

struct IRecordInfoVtbl {
    HRESULT (*QueryInterface)(struct IRecordInfo *, IID *, void **);
    ULONG (*AddRef)(struct IRecordInfo *);
    ULONG (*Release)(struct IRecordInfo *);
    HRESULT (*RecordInit)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordClear)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordCopy)(struct IRecordInfo *, PVOID, PVOID);
    HRESULT (*GetGuid)(struct IRecordInfo *, GUID *);
    HRESULT (*GetName)(struct IRecordInfo *, BSTR *);
    HRESULT (*GetSize)(struct IRecordInfo *, ULONG *);
    HRESULT (*GetTypeInfo)(struct IRecordInfo *, struct ITypeInfo **);
    HRESULT (*GetField)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNoCopy)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *, PVOID *);
    HRESULT (*PutField)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*PutFieldNoCopy)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNames)(struct IRecordInfo *, ULONG *, BSTR *);
    WINBOOL (*IsMatchingType)(struct IRecordInfo *, struct IRecordInfo *);
    PVOID (*RecordCreate)(struct IRecordInfo *);
    HRESULT (*RecordCreateCopy)(struct IRecordInfo *, PVOID, PVOID *);
    HRESULT (*RecordDestroy)(struct IRecordInfo *, PVOID);
};

struct ITypeInfo {
    struct ITypeInfoVtbl *lpVtbl;
};

struct tagEXCEPINFO {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (*pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
};

struct IAccPropServerVtbl {
    HRESULT (*QueryInterface)(struct IAccPropServer *, IID *, void **);
    ULONG (*AddRef)(struct IAccPropServer *);
    ULONG (*Release)(struct IAccPropServer *);
    HRESULT (*GetPropValue)(struct IAccPropServer *, BYTE *, DWORD, MSAAPROPID, VARIANT *, WINBOOL *);
};

struct tagVARDESC {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
    union anon_union_8_2_4534e60a_for_tagVARDESC_2 field_2;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
};

struct ITypeCompVtbl {
    HRESULT (*QueryInterface)(struct ITypeComp *, IID *, void **);
    ULONG (*AddRef)(struct ITypeComp *);
    ULONG (*Release)(struct ITypeComp *);
    HRESULT (*Bind)(struct ITypeComp *, LPOLESTR, ULONG, WORD, struct ITypeInfo **, DESCKIND *, BINDPTR *);
    HRESULT (*BindType)(struct ITypeComp *, LPOLESTR, ULONG, struct ITypeInfo **, struct ITypeComp **);
};

struct tagTYPEATTR {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
};

union tagBINDPTR {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    struct ITypeComp *lptcomp;
};

struct IDispatch {
    struct IDispatchVtbl *lpVtbl;
};

struct IDispatchVtbl {
    HRESULT (*QueryInterface)(struct IDispatch *, IID *, void **);
    ULONG (*AddRef)(struct IDispatch *);
    ULONG (*Release)(struct IDispatch *);
    HRESULT (*GetTypeInfoCount)(struct IDispatch *, UINT *);
    HRESULT (*GetTypeInfo)(struct IDispatch *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IDispatch *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IDispatch *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
};

struct tagPARAMDESCEX {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
};

struct IAccPropServer {
    struct IAccPropServerVtbl *lpVtbl;
};

struct ITypeInfoVtbl {
    HRESULT (*QueryInterface)(struct ITypeInfo *, IID *, void **);
    ULONG (*AddRef)(struct ITypeInfo *);
    ULONG (*Release)(struct ITypeInfo *);
    HRESULT (*GetTypeAttr)(struct ITypeInfo *, TYPEATTR **);
    HRESULT (*GetTypeComp)(struct ITypeInfo *, struct ITypeComp **);
    HRESULT (*GetFuncDesc)(struct ITypeInfo *, UINT, FUNCDESC **);
    HRESULT (*GetVarDesc)(struct ITypeInfo *, UINT, VARDESC **);
    HRESULT (*GetNames)(struct ITypeInfo *, MEMBERID, BSTR *, UINT, UINT *);
    HRESULT (*GetRefTypeOfImplType)(struct ITypeInfo *, UINT, HREFTYPE *);
    HRESULT (*GetImplTypeFlags)(struct ITypeInfo *, UINT, INT *);
    HRESULT (*GetIDsOfNames)(struct ITypeInfo *, LPOLESTR *, UINT, MEMBERID *);
    HRESULT (*Invoke)(struct ITypeInfo *, PVOID, MEMBERID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetDocumentation)(struct ITypeInfo *, MEMBERID, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*GetDllEntry)(struct ITypeInfo *, MEMBERID, INVOKEKIND, BSTR *, BSTR *, WORD *);
    HRESULT (*GetRefTypeInfo)(struct ITypeInfo *, HREFTYPE, struct ITypeInfo **);
    HRESULT (*AddressOfMember)(struct ITypeInfo *, MEMBERID, INVOKEKIND, PVOID *);
    HRESULT (*CreateInstance)(struct ITypeInfo *, struct IUnknown *, IID *, PVOID *);
    HRESULT (*GetMops)(struct ITypeInfo *, MEMBERID, BSTR *);
    HRESULT (*GetContainingTypeLib)(struct ITypeInfo *, struct ITypeLib **, UINT *);
    void (*ReleaseTypeAttr)(struct ITypeInfo *, TYPEATTR *);
    void (*ReleaseFuncDesc)(struct ITypeInfo *, FUNCDESC *);
    void (*ReleaseVarDesc)(struct ITypeInfo *, VARDESC *);
};

struct ITypeComp {
    struct ITypeCompVtbl *lpVtbl;
};

struct ITypeLib {
    struct ITypeLibVtbl *lpVtbl;
};

typedef struct IAccPropServices IAccPropServices, *PIAccPropServices;

typedef struct IAccPropServicesVtbl IAccPropServicesVtbl, *PIAccPropServicesVtbl;

typedef enum AnnoScope {
    ANNO_THIS=0,
    ANNO_CONTAINER=1
} AnnoScope;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct IAccPropServicesVtbl {
    HRESULT (*QueryInterface)(struct IAccPropServices *, IID *, void **);
    ULONG (*AddRef)(struct IAccPropServices *);
    ULONG (*Release)(struct IAccPropServices *);
    HRESULT (*SetPropValue)(struct IAccPropServices *, BYTE *, DWORD, MSAAPROPID, VARIANT);
    HRESULT (*SetPropServer)(struct IAccPropServices *, BYTE *, DWORD, MSAAPROPID *, int, struct IAccPropServer *, enum AnnoScope);
    HRESULT (*ClearProps)(struct IAccPropServices *, BYTE *, DWORD, MSAAPROPID *, int);
    HRESULT (*SetHwndProp)(struct IAccPropServices *, HWND, DWORD, DWORD, MSAAPROPID, VARIANT);
    HRESULT (*SetHwndPropStr)(struct IAccPropServices *, HWND, DWORD, DWORD, MSAAPROPID, LPCWSTR);
    HRESULT (*SetHwndPropServer)(struct IAccPropServices *, HWND, DWORD, DWORD, MSAAPROPID *, int, struct IAccPropServer *, enum AnnoScope);
    HRESULT (*ClearHwndProps)(struct IAccPropServices *, HWND, DWORD, DWORD, MSAAPROPID *, int);
    HRESULT (*ComposeHwndIdentityString)(struct IAccPropServices *, HWND, DWORD, DWORD, BYTE **, DWORD *);
    HRESULT (*DecomposeHwndIdentityString)(struct IAccPropServices *, BYTE *, DWORD, HWND *, DWORD *, DWORD *);
    HRESULT (*SetHmenuProp)(struct IAccPropServices *, HMENU, DWORD, MSAAPROPID, VARIANT);
    HRESULT (*SetHmenuPropStr)(struct IAccPropServices *, HMENU, DWORD, MSAAPROPID, LPCWSTR);
    HRESULT (*SetHmenuPropServer)(struct IAccPropServices *, HMENU, DWORD, MSAAPROPID *, int, struct IAccPropServer *, enum AnnoScope);
    HRESULT (*ClearHmenuProps)(struct IAccPropServices *, HMENU, DWORD, MSAAPROPID *, int);
    HRESULT (*ComposeHmenuIdentityString)(struct IAccPropServices *, HMENU, DWORD, BYTE **, DWORD *);
    HRESULT (*DecomposeHmenuIdentityString)(struct IAccPropServices *, BYTE *, DWORD, HMENU *, DWORD *);
};

struct IAccPropServices {
    struct IAccPropServicesVtbl *lpVtbl;
};

struct HMENU__ {
    int unused;
};

typedef struct regex_compile_context regex_compile_context, *Pregex_compile_context;

struct regex_compile_context {
    cregex_program_instr_t *pc;
    int ncaptures;
};

typedef struct ButtonData ButtonData, *PButtonData;

struct ButtonData {
    HTHEME hTheme;
    int iStateID;
};

typedef struct StatusBarData StatusBarData, *PStatusBarData;

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

struct StatusBarData {
    HFONT hFont;
};

typedef struct StaticTextData StaticTextData, *PStaticTextData;

struct StaticTextData {
    BOOL disabled;
};

typedef struct ProgressBarData ProgressBarData, *PProgressBarData;

struct ProgressBarData {
    HTHEME hTheme;
    int iStateID;
};

typedef struct ThemeResources ThemeResources, *PThemeResources;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef struct HPEN__ HPEN__, *PHPEN__;

typedef struct HPEN__ *HPEN;

struct HPEN__ {
    int unused;
};

struct HBRUSH__ {
    int unused;
};

struct ThemeResources {
    HBRUSH hbrBackground;
    HBRUSH hbrBackgroundControl;
    HBRUSH hbrBackgroundHot;
    HBRUSH hbrEdge;
    HPEN hpnEdge;
    HPEN hpnEdgeHot;
};

typedef enum _SubclassID {
    ButtonSubclassID=42,
    GroupboxSubclassID=43,
    WindowNotifySubclassID=44,
    StatusBarSubclassID=45,
    ProgressBarSubclassID=46,
    StaticTextSubclassID=47,
    WindowCtlColorSubclassID=48
} _SubclassID;

typedef struct Borders Borders, *PBorders;

struct Borders {
    int horizontal;
    int vertical;
    int between;
};

typedef enum _WindowsBuild {
    WIN10_1809=17763,
    WIN10_1903=18362,
    WIN10_22H2=19045,
    WIN11_21H2=22000
} _WindowsBuild;

typedef struct wim_header_disk wim_header_disk, *Pwim_header_disk;

typedef struct wim_reshdr_disk wim_reshdr_disk, *Pwim_reshdr_disk;

struct wim_reshdr_disk {
    u8 size_in_wim[7];
    u8 flags;
    le64 offset_in_wim;
    le64 uncompressed_size;
};

struct wim_header_disk {
    le64 magic;
    le32 hdr_size;
    le32 wim_version;
    le32 wim_flags;
    le32 chunk_size;
    u8 guid[16];
    le16 part_number;
    le16 total_parts;
    le32 image_count;
    struct wim_reshdr_disk blob_table_reshdr;
    struct wim_reshdr_disk xml_data_reshdr;
    struct wim_reshdr_disk boot_metadata_reshdr;
    le32 boot_idx;
    struct wim_reshdr_disk integrity_table_reshdr;
    u8 unused[60];
};

typedef struct anon_struct_16_2_3f1fcd38 anon_struct_16_2_3f1fcd38, *Panon_struct_16_2_3f1fcd38;

struct anon_struct_16_2_3f1fcd38 {
    u32 flag;
    tchar *name;
};

typedef struct iso9660_readfat_private iso9660_readfat_private, *Piso9660_readfat_private;

typedef uint64_t libfat_sector_t;

struct iso9660_readfat_private {
    iso9660_t *p_iso;
    lsn_t lsn;
    libfat_sector_t sec_start;
    uint8_t buf[32768];
};

typedef struct EXTRACT_PROPS EXTRACT_PROPS, *PEXTRACT_PROPS;

struct EXTRACT_PROPS {
    BOOLEAN is_cfg;
    BOOLEAN is_conf;
    BOOLEAN is_syslinux_cfg;
    BOOLEAN is_grub_cfg;
    BOOLEAN is_menu_cfg;
    BOOLEAN is_old_c32[2];
};

typedef struct anon_struct_16_2_7653cefd anon_struct_16_2_7653cefd, *Panon_struct_16_2_7653cefd;

struct anon_struct_16_2_7653cefd {
    char *label;
    char *search_string;
};

typedef struct journal_header_s journal_header_s, *Pjournal_header_s;

typedef struct journal_header_s journal_header_t;

struct journal_header_s {
    __be32 h_magic;
    __be32 h_blocktype;
    __be32 h_sequence;
};

typedef struct journal_superblock_s journal_superblock_s, *Pjournal_superblock_s;

typedef struct journal_superblock_s journal_superblock_t;

struct journal_superblock_s {
    journal_header_t s_header;
    __be32 s_blocksize;
    __be32 s_maxlen;
    __be32 s_first;
    __be32 s_sequence;
    __be32 s_start;
    __s32 s_errno;
    __be32 s_feature_compat;
    __be32 s_feature_incompat;
    __be32 s_feature_ro_compat;
    __u8 s_uuid[16];
    __be32 s_nr_users;
    __be32 s_dynsuper;
    __be32 s_max_transaction;
    __be32 s_max_trans_data;
    __u8 s_checksum_type;
    __u8 s_padding2[3];
    __be32 s_padding[42];
    __be32 s_checksum;
    __u8 s_users[768];
};

typedef struct iso_rock_sf_s iso_rock_sf_s, *Piso_rock_sf_s;

struct iso_rock_sf_s {
    iso733_t virtual_size_high;
    iso733_t virtual_size_low;
    uint8_t table_depth;
};

typedef struct iso_extension_record_s iso_extension_record_s, *Piso_extension_record_s;

typedef struct iso_extension_record_s iso_extension_record_t;

typedef union anon_union_32_11_4cba63a6_for_u anon_union_32_11_4cba63a6_for_u, *Panon_union_32_11_4cba63a6_for_u;

typedef struct iso_su_sp_s iso_su_sp_s, *Piso_su_sp_s;

typedef struct iso_su_sp_s iso_su_sp_t;

typedef struct iso_su_er_s iso_su_er_s, *Piso_su_er_s;

typedef struct iso_su_er_s iso_su_er_t;

typedef struct iso_su_ce_s iso_su_ce_s, *Piso_su_ce_s;

typedef struct iso_su_ce_s iso_su_ce_t;

typedef struct iso_rock_px_s iso_rock_px_s, *Piso_rock_px_s;

typedef struct iso_rock_px_s iso_rock_px_t;

typedef struct iso_rock_pn_s iso_rock_pn_s, *Piso_rock_pn_s;

typedef struct iso_rock_pn_s iso_rock_pn_t;

typedef struct iso_rock_sl_s iso_rock_sl_s, *Piso_rock_sl_s;

typedef struct iso_rock_sl_s iso_rock_sl_t;

typedef struct iso_rock_nm_s iso_rock_nm_s, *Piso_rock_nm_s;

typedef struct iso_rock_nm_s iso_rock_nm_t;

typedef struct iso_rock_cl_s iso_rock_cl_s, *Piso_rock_cl_s;

typedef struct iso_rock_cl_s iso_rock_cl_t;

typedef struct iso_rock_pl_s iso_rock_pl_s, *Piso_rock_pl_s;

typedef struct iso_rock_pl_s iso_rock_pl_t;

typedef struct iso_rock_tf_s iso_rock_tf_s, *Piso_rock_tf_s;

typedef struct iso_rock_tf_s iso_rock_tf_t;

typedef struct iso_rock_sf_s iso_rock_sf_t;

typedef struct iso_rock_sl_part_s iso_rock_sl_part_s, *Piso_rock_sl_part_s;

typedef struct iso_rock_sl_part_s iso_rock_sl_part_t;

struct iso_rock_pn_s {
    iso733_t dev_high;
    iso733_t dev_low;
};

struct iso_rock_px_s {
    iso733_t st_mode;
    iso733_t st_nlinks;
    iso733_t st_uid;
    iso733_t st_gid;
};

struct iso_rock_tf_s {
    uint8_t flags;
    uint8_t time_bytes[0];
};

struct iso_su_ce_s {
    iso733_t extent;
    iso733_t offset;
    iso733_t size;
};

struct iso_rock_sl_part_s {
    uint8_t flags;
    uint8_t len;
    char text[0];
};

struct iso_rock_sl_s {
    uint8_t flags;
    iso_rock_sl_part_t link;
};

struct iso_su_er_s {
    iso711_t len_id;
    uint8_t len_des;
    uint8_t len_src;
    iso711_t ext_ver;
    char data[0];
};

struct iso_su_sp_s {
    uint8_t magic[2];
    uint8_t skip;
};

struct iso_rock_cl_s {
    iso733_t location;
};

struct iso_rock_pl_s {
    iso733_t location;
};

struct iso_rock_nm_s {
    uint8_t flags;
    char name[0];
};

union anon_union_32_11_4cba63a6_for_u {
    iso_su_sp_t SP;
    iso_su_er_t ER;
    iso_su_ce_t CE;
    iso_rock_px_t PX;
    iso_rock_pn_t PN;
    iso_rock_sl_t SL;
    iso_rock_nm_t NM;
    iso_rock_cl_t CL;
    iso_rock_pl_t PL;
    iso_rock_tf_t TF;
    iso_rock_sf_t SF;
};

struct iso_extension_record_s {
    char signature[2];
    iso711_t len;
    iso711_t version;
    union anon_union_32_11_4cba63a6_for_u u;
};

typedef enum iso_rock_nm_flag_t {
    ISO_ROCK_NM_CONTINUE=1,
    ISO_ROCK_NM_CURRENT=2,
    ISO_ROCK_NM_PARENT=4
} iso_rock_nm_flag_t;

typedef enum iso_rock_tf_flag_t {
    ISO_ROCK_TF_CREATE=1,
    ISO_ROCK_TF_MODIFY=2,
    ISO_ROCK_TF_ACCESS=4,
    ISO_ROCK_TF_ATTRIBUTES=8,
    ISO_ROCK_TF_BACKUP=16,
    ISO_ROCK_TF_EXPIRATION=32,
    ISO_ROCK_TF_EFFECTIVE=64,
    ISO_ROCK_TF_LONG_FORM=128
} iso_rock_tf_flag_t;

typedef enum iso_rock_sl_flag_t {
    ISO_ROCK_SL_CONTINUE=1,
    ISO_ROCK_SL_CURRENT=2,
    ISO_ROCK_SL_PARENT=4,
    ISO_ROCK_SL_ROOT=8
} iso_rock_sl_flag_t;

typedef enum iso_rock_enums {
    ISO_ROCK_IXOTH=1,
    ISO_ROCK_IWOTH=2,
    ISO_ROCK_IROTH=4,
    ISO_ROCK_IXGRP=8,
    ISO_ROCK_IWGRP=16,
    ISO_ROCK_IRGRP=32,
    ISO_ROCK_IXUSR=64,
    ISO_ROCK_IWUSR=128,
    ISO_ROCK_IRUSR=256,
    ISO_ROCK_ISVTX=512,
    ISO_ROCK_ISGID=1024,
    ISO_ROCK_ISUID=2048,
    ISO_ROCK_ISFIFO=4096,
    ISO_ROCK_ISCHR=8192,
    ISO_ROCK_ISDIR=16384,
    ISO_ROCK_ISBLK=24576,
    ISO_ROCK_ISREG=32768,
    ISO_ROCK_ISLNK=40960,
    ISO_ROCK_ISSOCK=49152
} iso_rock_enums;


// WARNING! conflicting data type names: /DWARF/minwindef.h/_FILETIME - /WinDef.h/_FILETIME

typedef struct _FILETIME *LPFILETIME;

typedef INT_PTR (*FARPROC)(...);

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};


// WARNING! conflicting data type names: /DWARF/minwindef.h/FILETIME - /WinDef.h/FILETIME

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef DWORD *LPDWORD;

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef struct HRGN__ *HRGN;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};


// WARNING! conflicting data type names: /DWARF/minwindef.h/PULONG - /WinDef.h/PULONG

typedef DWORD *PDWORD;

typedef HANDLE HGLOBAL;

typedef WINBOOL *LPBOOL;

typedef struct HINSTANCE__ *HINSTANCE;

typedef HINSTANCE HMODULE;

typedef uint *PUINT;

typedef void *LPCVOID;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ *HRSRC;

struct HRSRC__ {
    int unused;
};

typedef HANDLE HLOCAL;


// WARNING! conflicting data type names: /DWARF/minwindef.h/LPBYTE - /WinDef.h/LPBYTE

typedef WINBOOL *PBOOL;

typedef struct FSE_DTableHeader FSE_DTableHeader, *PFSE_DTableHeader;

struct FSE_DTableHeader {
    U16 tableLog;
    U16 fastMode;
};

typedef struct FSE_decode_t FSE_decode_t, *PFSE_decode_t;

struct FSE_decode_t {
    ushort newState;
    uchar symbol;
    uchar nbBits;
};

typedef struct FSE_DState_t FSE_DState_t, *PFSE_DState_t;

struct FSE_DState_t {
    size_t state;
    void *table;
};

typedef struct sd_node sd_node, *Psd_node;

struct sd_node {
    s32 security_id;
    u8 hash[20];
    struct avl_tree_node index_node;
};

typedef struct wim_security_data_disk wim_security_data_disk, *Pwim_security_data_disk;

struct wim_security_data_disk {
    le32 total_length;
    le32 num_entries;
    le64 sizes[0];
};

typedef struct track_flags_t track_flags_t, *Ptrack_flags_t;

struct track_flags_t {
    enum track_flag_t preemphasis;
    enum track_flag_t copy_permit;
    int channels;
};

typedef enum cdio_track_enums {
    CDIO_CDROM_LBA=1,
    CDIO_CDROM_MSF=2,
    CDIO_CDROM_DATA_TRACK=4,
    CDIO_CDROM_CDI_TRACK=16,
    CDIO_CDROM_XA_TRACK=32,
    CDIO_CD_MAX_TRACKS=99,
    CDIO_CDROM_LEADOUT_TRACK=170,
    CDIO_INVALID_TRACK=255
} cdio_track_enums;

typedef struct option option, *Poption;

struct option {
    char *name;
    int has_arg;
    int *flag;
    int val;
};

typedef struct _GUID.conflict _GUID.conflict, *P_GUID.conflict;

typedef struct _GUID.conflict GUID.conflict;

typedef GUID.conflict CATID;

struct _GUID.conflict {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct capture_config capture_config, *Pcapture_config;

typedef struct string_list string_list, *Pstring_list;

struct string_list {
    tchar **strings;
    size_t num_strings;
    size_t num_alloc_strings;
};

struct capture_config {
    struct string_list exclusion_pats;
    struct string_list exclusion_exception_pats;
    void *buf;
};

typedef struct scan_params scan_params, *Pscan_params;

typedef struct wim_inode_table wim_inode_table, *Pwim_inode_table;

typedef struct wim_sd_set wim_sd_set, *Pwim_sd_set;

struct wim_sd_set {
    struct wim_security_data *sd;
    struct avl_tree_node *root;
    s32 orig_num_entries;
};

struct wim_inode_table {
    struct hlist_head *array;
    size_t filled;
    size_t capacity;
    struct hlist_head extra_inodes;
};

struct scan_params {
    struct blob_table *blob_table;
    struct list_head.conflict *unhashed_blobs;
    struct wim_inode_table *inode_table;
    struct wim_sd_set *sd_set;
    struct capture_config *config;
    int add_flags;
    wimlib_progress_func_t progfunc;
    void *progctx;
    union wimlib_progress_info progress;
    tchar *cur_path;
    size_t cur_path_nchars;
    size_t cur_path_alloc_nchars;
    size_t root_path_nchars;
    u64 capture_root_ino;
    u64 capture_root_dev;
};

typedef int (*scan_tree_t)(struct wim_dentry **, tchar *, struct scan_params *);

typedef struct _FAT_DATETIME _FAT_DATETIME, *P_FAT_DATETIME;

typedef union anon_union_4_2_649915e9_for__FAT_DATETIME_0 anon_union_4_2_649915e9_for__FAT_DATETIME_0, *Panon_union_4_2_649915e9_for__FAT_DATETIME_0;

typedef struct anon_struct_4_2_33d0cb60_for_anon_union_4_2_649915e9_for__FAT_DATETIME_0_0 anon_struct_4_2_33d0cb60_for_anon_union_4_2_649915e9_for__FAT_DATETIME_0_0, *Panon_struct_4_2_33d0cb60_for_anon_union_4_2_649915e9_for__FAT_DATETIME_0_0;

typedef struct _FAT_TIME _FAT_TIME, *P_FAT_TIME;

typedef struct _FAT_TIME FAT_TIME;

typedef struct _FAT_DATE _FAT_DATE, *P_FAT_DATE;

typedef struct _FAT_DATE FAT_DATE;

typedef union anon_union_2_2_649915e9_for__FAT_TIME_0 anon_union_2_2_649915e9_for__FAT_TIME_0, *Panon_union_2_2_649915e9_for__FAT_TIME_0;

typedef union anon_union_2_2_649915e9_for__FAT_DATE_0 anon_union_2_2_649915e9_for__FAT_DATE_0, *Panon_union_2_2_649915e9_for__FAT_DATE_0;

typedef struct anon_struct_2_3_b8eb5cbe_for_anon_union_2_2_649915e9_for__FAT_TIME_0_0 anon_struct_2_3_b8eb5cbe_for_anon_union_2_2_649915e9_for__FAT_TIME_0_0, *Panon_struct_2_3_b8eb5cbe_for_anon_union_2_2_649915e9_for__FAT_TIME_0_0;

typedef struct anon_struct_2_3_5a6533d7_for_anon_union_2_2_649915e9_for__FAT_DATE_0_0 anon_struct_2_3_5a6533d7_for_anon_union_2_2_649915e9_for__FAT_DATE_0_0, *Panon_struct_2_3_5a6533d7_for_anon_union_2_2_649915e9_for__FAT_DATE_0_0;

struct anon_struct_2_3_b8eb5cbe_for_anon_union_2_2_649915e9_for__FAT_TIME_0_0 {
    USHORT DoubleSeconds:5;
    USHORT Minute:6;
    USHORT Hour:5;
};

union anon_union_2_2_649915e9_for__FAT_TIME_0 {
    struct anon_struct_2_3_b8eb5cbe_for_anon_union_2_2_649915e9_for__FAT_TIME_0_0 field_0;
    USHORT Value;
};

struct _FAT_TIME {
    union anon_union_2_2_649915e9_for__FAT_TIME_0 field_0;
};

struct anon_struct_2_3_5a6533d7_for_anon_union_2_2_649915e9_for__FAT_DATE_0_0 {
    USHORT Day:5;
    USHORT Month:4;
    USHORT Year:7;
};

union anon_union_2_2_649915e9_for__FAT_DATE_0 {
    struct anon_struct_2_3_5a6533d7_for_anon_union_2_2_649915e9_for__FAT_DATE_0_0 field_0;
    USHORT Value;
};

struct _FAT_DATE {
    union anon_union_2_2_649915e9_for__FAT_DATE_0 field_0;
};

struct anon_struct_4_2_33d0cb60_for_anon_union_4_2_649915e9_for__FAT_DATETIME_0_0 {
    FAT_TIME Time;
    FAT_DATE Date;
};

union anon_union_4_2_649915e9_for__FAT_DATETIME_0 {
    struct anon_struct_4_2_33d0cb60_for_anon_union_4_2_649915e9_for__FAT_DATETIME_0_0 field_0;
    ULONG Value;
};

struct _FAT_DATETIME {
    union anon_union_4_2_649915e9_for__FAT_DATETIME_0 field_0;
};

typedef struct _DIR_ENTRY _DIR_ENTRY, *P_DIR_ENTRY;

typedef struct _FAT_DATETIME FAT_DATETIME;

typedef union anon_union_2_2_5e902e0f_for__DIR_ENTRY_6 anon_union_2_2_5e902e0f_for__DIR_ENTRY_6, *Panon_union_2_2_5e902e0f_for__DIR_ENTRY_6;

union anon_union_2_2_5e902e0f_for__DIR_ENTRY_6 {
    USHORT ExtendedAttributes;
    USHORT FirstClusterOfFileHi;
};

struct _DIR_ENTRY {
    UCHAR FileName[11];
    UCHAR Attributes;
    UCHAR Case;
    UCHAR CreationTimeTenMs;
    FAT_DATETIME CreationDateTime;
    FAT_DATE LastAccessDate;
    union anon_union_2_2_5e902e0f_for__DIR_ENTRY_6 field_6;
    FAT_DATETIME LastWriteDateTime;
    USHORT FirstCluster;
    ULONG FileSize;
};

typedef struct _DIR_ENTRY *PDIR_ENTRY;

typedef struct _FAT_DATETIME *PFAT_DATETIME;

typedef struct GRPICONDIR GRPICONDIR, *PGRPICONDIR;

typedef struct GRPICONDIRENTRY GRPICONDIRENTRY, *PGRPICONDIRENTRY;

struct GRPICONDIRENTRY {
    BYTE bWidth;
    BYTE bHeight;
    BYTE bColorCount;
    BYTE bReserved;
    WORD wPlanes;
    WORD wBitCount;
    DWORD dwBytesInRes;
    WORD nID;
};

struct GRPICONDIR {
    WORD idReserved;
    WORD idType;
    WORD idCount;
    struct GRPICONDIRENTRY idEntries[1];
};

typedef struct tagVS_FIXEDFILEINFO tagVS_FIXEDFILEINFO, *PtagVS_FIXEDFILEINFO;

typedef struct tagVS_FIXEDFILEINFO VS_FIXEDFILEINFO;

struct tagVS_FIXEDFILEINFO {
    DWORD dwSignature;
    DWORD dwStrucVersion;
    DWORD dwFileVersionMS;
    DWORD dwFileVersionLS;
    DWORD dwProductVersionMS;
    DWORD dwProductVersionLS;
    DWORD dwFileFlagsMask;
    DWORD dwFileFlags;
    DWORD dwFileOS;
    DWORD dwFileType;
    DWORD dwFileSubtype;
    DWORD dwFileDateMS;
    DWORD dwFileDateLS;
};

typedef enum DBREASONENUM {
    DBREASON_ROWSET_FETCHPOSITIONCHANGE=0,
    DBREASON_ROWSET_RELEASE=1,
    DBREASON_COLUMN_SET=2,
    DBREASON_COLUMN_RECALCULATED=3,
    DBREASON_ROW_ACTIVATE=4,
    DBREASON_ROW_RELEASE=5,
    DBREASON_ROW_DELETE=6,
    DBREASON_ROW_FIRSTCHANGE=7,
    DBREASON_ROW_INSERT=8,
    DBREASON_ROW_RESYNCH=9,
    DBREASON_ROW_UNDOCHANGE=10,
    DBREASON_ROW_UNDOINSERT=11,
    DBREASON_ROW_UNDODELETE=12,
    DBREASON_ROW_UPDATE=13,
    DBREASON_ROWSET_CHANGED=14
} DBREASONENUM;

typedef struct _settextex _settextex, *P_settextex;

struct _settextex {
    DWORD flags;
    UINT codepage;
};

typedef struct _charrange _charrange, *P_charrange;

struct _charrange {
    LONG cpMin;
    LONG cpMax;
};

typedef struct _textrangew _textrangew, *P_textrangew;

typedef struct _textrangew TEXTRANGEW;

typedef struct _charrange CHARRANGE;

struct _textrangew {
    CHARRANGE chrg;
    LPWSTR lpstrText;
};

typedef struct _reqresize _reqresize, *P_reqresize;

typedef struct _reqresize REQRESIZE;

typedef struct tagNMHDR tagNMHDR, *PtagNMHDR;

typedef struct tagNMHDR NMHDR;


// WARNING! conflicting data type names: /DWARF/windef.h/RECT - /WinDef.h/RECT

struct tagNMHDR {
    HWND hwndFrom;
    UINT_PTR idFrom;
    UINT code;
};

struct _reqresize {
    NMHDR nmhdr;
    RECT rc;
};

typedef struct _charformatw _charformatw, *P_charformatw;

typedef struct _charformatw CHARFORMATW;


// WARNING! conflicting data type names: /DWARF/windef.h/COLORREF - /WinDef.h/COLORREF

struct _charformatw {
    UINT cbSize;
    DWORD dwMask;
    DWORD dwEffects;
    LONG yHeight;
    LONG yOffset;
    COLORREF crTextColor;
    BYTE bCharSet;
    BYTE bPitchAndFamily;
    WCHAR szFaceName[32];
};

typedef struct _enlink _enlink, *P_enlink;

struct _enlink {
    NMHDR nmhdr;
    UINT msg;
    WPARAM wParam;
    LPARAM lParam;
    CHARRANGE chrg;
};

typedef struct _enlink ENLINK;

typedef struct _settextex SETTEXTEX;

typedef struct _tagpropertykey _tagpropertykey, *P_tagpropertykey;

typedef struct _tagpropertykey PROPERTYKEY;

struct _tagpropertykey {
    GUID.conflict fmtid;
    DWORD pid;
};

typedef enum VARENUM {
    VT_EMPTY=0,
    VT_NULL=1,
    VT_I2=2,
    VT_I4=3,
    VT_R4=4,
    VT_R8=5,
    VT_CY=6,
    VT_DATE=7,
    VT_BSTR=8,
    VT_DISPATCH=9,
    VT_ERROR=10,
    VT_BOOL=11,
    VT_VARIANT=12,
    VT_UNKNOWN=13,
    VT_DECIMAL=14,
    VT_I1=16,
    VT_UI1=17,
    VT_UI2=18,
    VT_UI4=19,
    VT_I8=20,
    VT_UI8=21,
    VT_INT=22,
    VT_UINT=23,
    VT_VOID=24,
    VT_HRESULT=25,
    VT_PTR=26,
    VT_SAFEARRAY=27,
    VT_CARRAY=28,
    VT_USERDEFINED=29,
    VT_LPSTR=30,
    VT_LPWSTR=31,
    VT_RECORD=36,
    VT_INT_PTR=37,
    VT_UINT_PTR=38,
    VT_FILETIME=64,
    VT_BLOB=65,
    VT_STREAM=66,
    VT_STORAGE=67,
    VT_STREAMED_OBJECT=68,
    VT_STORED_OBJECT=69,
    VT_BLOB_OBJECT=70,
    VT_CF=71,
    VT_CLSID=72,
    VT_VERSIONED_STREAM=73,
    VT_BSTR_BLOB=4095,
    VT_ILLEGALMASKED=4095,
    VT_TYPEMASK=4095,
    VT_VECTOR=4096,
    VT_ARRAY=8192,
    VT_BYREF=16384,
    VT_RESERVED=32768,
    VT_ILLEGAL=65535
} VARENUM;

typedef int8_t s8;

typedef int64_t s64;

typedef uint64_t be64;

typedef _mode_t mode_t;

typedef _pid_t pid_t;

typedef size_t machine_word_t;

typedef void (*CdioDataFree_t)(void *);

typedef uint32_t be32;

typedef struct BIT_DStream_t BIT_DStream_t, *PBIT_DStream_t;

typedef size_t BitContainerType;

struct BIT_DStream_t {
    BitContainerType bitContainer;
    uint bitsConsumed;
    char *ptr;
    char *start;
    char *limitPtr;
};

typedef enum BIT_DStream_status {
    BIT_DStream_unfinished=0,
    BIT_DStream_endOfBuffer=1,
    BIT_DStream_completed=2,
    BIT_DStream_overflow=3
} BIT_DStream_status;

typedef struct ext2fs_struct_generic_bitmap_32 ext2fs_struct_generic_bitmap_32, *Pext2fs_struct_generic_bitmap_32;

struct ext2fs_struct_generic_bitmap_32 {
    errcode_t magic;
    ext2_filsys fs;
    __u32 start;
    __u32 end;
    __u32 real_end;
    char *description;
    char *bitmap;
    errcode_t base_error_code;
    __u32 reserved[7];
};

typedef struct ext2fs_struct_generic_bitmap_32 *ext2fs_generic_bitmap_32;

typedef enum DWMWINDOWATTRIBUTE {
    DWMWA_NCRENDERING_ENABLED=1,
    DWMWA_NCRENDERING_POLICY=2,
    DWMWA_TRANSITIONS_FORCEDISABLED=3,
    DWMWA_ALLOW_NCPAINT=4,
    DWMWA_CAPTION_BUTTON_BOUNDS=5,
    DWMWA_NONCLIENT_RTL_LAYOUT=6,
    DWMWA_FORCE_ICONIC_REPRESENTATION=7,
    DWMWA_FLIP3D_POLICY=8,
    DWMWA_EXTENDED_FRAME_BOUNDS=9,
    DWMWA_HAS_ICONIC_BITMAP=10,
    DWMWA_DISALLOW_PEEK=11,
    DWMWA_EXCLUDED_FROM_PEEK=12,
    DWMWA_CLOAK=13,
    DWMWA_CLOAKED=14,
    DWMWA_FREEZE_REPRESENTATION=15,
    DWMWA_PASSIVE_UPDATE_MODE=16,
    DWMWA_USE_HOSTBACKDROPBRUSH=17,
    DWMWA_USE_IMMERSIVE_DARK_MODE=20,
    DWMWA_WINDOW_CORNER_PREFERENCE=33,
    DWMWA_BORDER_COLOR=34,
    DWMWA_CAPTION_COLOR=35,
    DWMWA_TEXT_COLOR=36,
    DWMWA_VISIBLE_FRAME_BORDER_THICKNESS=37,
    DWMWA_SYSTEMBACKDROP_TYPE=38,
    DWMWA_LAST=39
} DWMWINDOWATTRIBUTE;

typedef struct libfat_dirpos libfat_dirpos, *Plibfat_dirpos;

typedef struct libfat_dirpos libfat_dirpos_t;

struct libfat_dirpos {
    int32_t cluster;
    int32_t offset;
    libfat_sector_t sector;
};

typedef struct libfat_diritem libfat_diritem, *Plibfat_diritem;

typedef struct libfat_diritem libfat_diritem_t;

struct libfat_diritem {
    wchar_t name[256];
    uint32_t size;
    uint8_t attributes;
};

typedef struct libfat_direntry libfat_direntry, *Plibfat_direntry;

struct libfat_direntry {
    libfat_sector_t sector;
    int offset;
    uchar entry[32];
};

typedef struct block_entry block_entry, *Pblock_entry;

struct block_entry {
    blk64_t physblock;
    uchar sha[64];
};

typedef struct ext2_file ext2_file, *Pext2_file;

struct ext2_file {
    errcode_t magic;
    ext2_filsys fs;
    ext2_ino_t ino;
    struct ext2_inode inode;
    int flags;
    __u64 pos;
    blk64_t blockno;
    blk64_t physblock;
    char *buf;
};

typedef struct block_entry *block_entry_t;

typedef struct vidpid_score_t vidpid_score_t, *Pvidpid_score_t;

struct vidpid_score_t {
    uint16_t vid;
    uint16_t pid;
    int score;
};

typedef struct str_score_t str_score_t, *Pstr_score_t;

struct str_score_t {
    char *name;
    int score;
};

typedef struct vid_score_t vid_score_t, *Pvid_score_t;

struct vid_score_t {
    uint16_t vid;
    int score;
};

typedef struct link_struct link_struct, *Plink_struct;

struct link_struct {
    ext2_filsys fs;
    char *name;
    int namelen;
    ext2_ino_t inode;
    int flags;
    int done;
    uint blocksize;
    errcode_t err;
    struct ext2_super_block *sb;
};

typedef struct dx_hash_map dx_hash_map, *Pdx_hash_map;

struct dx_hash_map {
    __u32 hash;
    int size;
    int off;
};

typedef struct dx_frame dx_frame, *Pdx_frame;

typedef struct ext2_dx_countlimit ext2_dx_countlimit, *Pext2_dx_countlimit;

typedef struct ext2_dx_entry ext2_dx_entry, *Pext2_dx_entry;

struct ext2_dx_entry {
    __le32 hash;
    __le32 block;
};

struct ext2_dx_countlimit {
    __le16 limit;
    __le16 count;
};

struct dx_frame {
    __u8 *buf;
    blk64_t pblock;
    struct ext2_dx_countlimit *head;
    struct ext2_dx_entry *entries;
    struct ext2_dx_entry *at;
};

typedef struct dx_lookup_info dx_lookup_info, *Pdx_lookup_info;

struct dx_lookup_info {
    char *name;
    int namelen;
    int hash_alg;
    __u32 hash;
    int levels;
    struct dx_frame frames[3];
};

typedef struct wimlib_compressor wimlib_compressor, *Pwimlib_compressor;

typedef struct compressor_ops compressor_ops, *Pcompressor_ops;

struct wimlib_compressor {
    struct compressor_ops *ops;
    void *private;
    enum wimlib_compression_type ctype;
    size_t max_block_size;
};

struct compressor_ops {
    u64 (*get_needed_memory)(size_t, uint, _Bool);
    int (*create_compressor)(size_t, uint, _Bool, void **);
    size_t (*compress)(void *, size_t, void *, size_t, void *);
    void (*free_compressor)(void *);
};

typedef struct _MODLOAD_DATA _MODLOAD_DATA, *P_MODLOAD_DATA;

typedef struct _MODLOAD_DATA *PMODLOAD_DATA;

typedef DWORD64 (*SymLoadModuleEx_t)(HANDLE, HANDLE, PCSTR, PCSTR, DWORD64, DWORD, PMODLOAD_DATA, DWORD);

struct _MODLOAD_DATA {
    DWORD ssize;
    DWORD ssig;
    PVOID data;
    DWORD size;
    DWORD flags;
};

typedef BOOL (*SymInitialize_t)(HANDLE, PCSTR, BOOL);

typedef struct cfx_params_t cfx_params_t, *Pcfx_params_t;

struct cfx_params_t {
    LPCWSTR lpFileName;
    DWORD dwDesiredAccess;
    DWORD dwShareMode;
    DWORD dwCreationDisposition;
    DWORD dwFlagsAndAttributes;
    HANDLE hFile;
    DWORD dwError;
};

typedef BOOLEAN (*RtlDosPathNameToNtPathNameW_t)(PCWSTR, PUNICODE_STRING, PWSTR *, PVOID);

typedef BOOL (*SymEnumSymbols_t)(HANDLE, ULONG64, PCSTR, PSYM_ENUMERATESYMBOLS_CALLBACK, PVOID);

typedef void (*RtlSetLastWin32ErrorAndNtStatusFromNtStatus_t)(NTSTATUS);

typedef struct debug_info_t debug_info_t, *Pdebug_info_t;

struct debug_info_t {
    DWORD Signature;
    GUID Guid;
    DWORD Age;
    CHAR PdbName[1];
};

typedef BOOL (*SymCleanup_t)(HANDLE);

typedef BOOL (*SymUnloadModule64_t)(HANDLE, DWORD64);

typedef struct tagNMTTDISPINFOW tagNMTTDISPINFOW, *PtagNMTTDISPINFOW;

typedef struct tagNMTTDISPINFOW *LPNMTTDISPINFOW;

struct tagNMTTDISPINFOW {
    NMHDR hdr;
    LPWSTR lpszText;
    WCHAR szText[80];
    HINSTANCE hinst;
    UINT uFlags;
    LPARAM lParam;
};

typedef struct TBBUTTONINFOW TBBUTTONINFOW, *PTBBUTTONINFOW;

struct TBBUTTONINFOW {
    UINT cbSize;
    DWORD dwMask;
    int idCommand;
    int iImage;
    BYTE fsState;
    BYTE fsStyle;
    WORD cx;
    DWORD_PTR lParam;
    LPWSTR pszText;
    int cchText;
};

typedef struct _TBBUTTON _TBBUTTON, *P_TBBUTTON;

typedef struct _TBBUTTON TBBUTTON;

struct _TBBUTTON {
    int iBitmap;
    int idCommand;
    BYTE fsState;
    BYTE fsStyle;
    BYTE bReserved[6];
    DWORD_PTR dwData;
    INT_PTR iString;
};

typedef LRESULT (*SUBCLASSPROC)(HWND, UINT, WPARAM, LPARAM, UINT_PTR, DWORD_PTR);

typedef struct _NMTBCUSTOMDRAW _NMTBCUSTOMDRAW, *P_NMTBCUSTOMDRAW;

typedef struct tagNMCUSTOMDRAWINFO tagNMCUSTOMDRAWINFO, *PtagNMCUSTOMDRAWINFO;

typedef struct tagNMCUSTOMDRAWINFO NMCUSTOMDRAW;


// WARNING! conflicting data type names: /DWARF/windef.h/HDC - /WinDef.h/HDC

struct tagNMCUSTOMDRAWINFO {
    NMHDR hdr;
    DWORD dwDrawStage;
    HDC hdc;
    RECT rc;
    DWORD_PTR dwItemSpec;
    UINT uItemState;
    LPARAM lItemlParam;
};

struct _NMTBCUSTOMDRAW {
    NMCUSTOMDRAW nmcd;
    HBRUSH hbrMonoDither;
    HBRUSH hbrLines;
    HPEN hpenLines;
    COLORREF clrText;
    COLORREF clrMark;
    COLORREF clrTextHighlight;
    COLORREF clrBtnFace;
    COLORREF clrBtnHighlight;
    COLORREF clrHighlightHotTrack;
    RECT rcText;
    int nStringBkMode;
    int nHLStringBkMode;
    int iListGap;
};

typedef struct tagNMBCDROPDOWN tagNMBCDROPDOWN, *PtagNMBCDROPDOWN;

typedef struct tagNMBCDROPDOWN NMBCDROPDOWN;

struct tagNMBCDROPDOWN {
    NMHDR hdr;
    RECT rcButton;
};

typedef struct PBRANGE PBRANGE, *PPBRANGE;

struct PBRANGE {
    int iLow;
    int iHigh;
};

typedef struct _NMTBCUSTOMDRAW *LPNMTBCUSTOMDRAW;

typedef struct _IMAGELIST _IMAGELIST, *P_IMAGELIST;

typedef struct _IMAGELIST *HIMAGELIST;

struct _IMAGELIST {
};

typedef struct tagNMBCDROPDOWN *LPNMBCDROPDOWN;

typedef struct tagNMCUSTOMDRAWINFO *LPNMCUSTOMDRAW;

typedef struct tagTOOLINFOW tagTOOLINFOW, *PtagTOOLINFOW;

typedef struct tagTOOLINFOW TTTOOLINFOW;

struct tagTOOLINFOW {
    UINT cbSize;
    UINT uFlags;
    HWND hwnd;
    UINT_PTR uId;
    RECT rect;
    HINSTANCE hinst;
    LPWSTR lpszText;
    LPARAM lParam;
    void *lpReserved;
};

typedef struct IShellItemFilterVtbl IShellItemFilterVtbl, *PIShellItemFilterVtbl;

typedef struct IShellItemFilter IShellItemFilter, *PIShellItemFilter;

typedef struct IShellItem IShellItem, *PIShellItem;

typedef DWORD SHCONTF;

typedef struct IShellItemVtbl IShellItemVtbl, *PIShellItemVtbl;

typedef enum _SIGDN {
    SIGDN_PARENTRELATIVEPARSING=-2147385343,
    SIGDN_DESKTOPABSOLUTEPARSING=-2147319808,
    SIGDN_PARENTRELATIVEEDITING=-2147282943,
    SIGDN_DESKTOPABSOLUTEEDITING=-2147172352,
    SIGDN_FILESYSPATH=-2147123200,
    SIGDN_URL=-2147057664,
    SIGDN_PARENTRELATIVEFORADDRESSBAR=-2146975743,
    SIGDN_PARENTRELATIVE=-2146959359,
    SIGDN_PARENTRELATIVEFORUI=-2146877439,
    SIGDN_NORMALDISPLAY=0
} _SIGDN;

typedef enum _SIGDN SIGDN;

typedef ULONG SFGAOF;

typedef DWORD SICHINTF;

struct IShellItemFilter {
    struct IShellItemFilterVtbl *lpVtbl;
};

struct IShellItemFilterVtbl {
    HRESULT (*QueryInterface)(struct IShellItemFilter *, IID *, void **);
    ULONG (*AddRef)(struct IShellItemFilter *);
    ULONG (*Release)(struct IShellItemFilter *);
    HRESULT (*IncludeItem)(struct IShellItemFilter *, struct IShellItem *);
    HRESULT (*GetEnumFlagsForItem)(struct IShellItemFilter *, struct IShellItem *, SHCONTF *);
};

struct IShellItemVtbl {
    HRESULT (*QueryInterface)(struct IShellItem *, IID *, void **);
    ULONG (*AddRef)(struct IShellItem *);
    ULONG (*Release)(struct IShellItem *);
    HRESULT (*BindToHandler)(struct IShellItem *, struct IBindCtx *, GUID *, IID *, void **);
    HRESULT (*GetParent)(struct IShellItem *, struct IShellItem **);
    HRESULT (*GetDisplayName)(struct IShellItem *, SIGDN, LPWSTR *);
    HRESULT (*GetAttributes)(struct IShellItem *, SFGAOF, SFGAOF *);
    HRESULT (*Compare)(struct IShellItem *, struct IShellItem *, SICHINTF, int *);
};

struct IShellItem {
    struct IShellItemVtbl *lpVtbl;
};

typedef enum FDE_OVERWRITE_RESPONSE {
    FDEOR_DEFAULT=0,
    FDEOR_ACCEPT=1,
    FDEOR_REFUSE=2
} FDE_OVERWRITE_RESPONSE;

typedef struct THUMBBUTTON THUMBBUTTON, *PTHUMBBUTTON;

typedef enum THUMBBUTTONMASK {
    THB_BITMAP=1,
    THB_ICON=2,
    THB_TOOLTIP=4,
    THB_FLAGS=8
} THUMBBUTTONMASK;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef enum THUMBBUTTONFLAGS {
    THBF_ENABLED=0,
    THBF_DISABLED=1,
    THBF_DISMISSONCLICK=2,
    THBF_NOBACKGROUND=4,
    THBF_HIDDEN=8,
    THBF_NONINTERACTIVE=16
} THUMBBUTTONFLAGS;

struct HICON__ {
    int unused;
};

struct THUMBBUTTON {
    enum THUMBBUTTONMASK dwMask;
    UINT iId;
    UINT iBitmap;
    HICON hIcon;
    WCHAR szTip[260];
    enum THUMBBUTTONFLAGS dwFlags;
};

typedef DWORD FILEOPENDIALOGOPTIONS;

typedef struct ITaskbarList3Vtbl ITaskbarList3Vtbl, *PITaskbarList3Vtbl;

typedef struct ITaskbarList3 ITaskbarList3, *PITaskbarList3;

typedef enum TBPFLAG {
    TBPF_NOPROGRESS=0,
    TBPF_INDETERMINATE=1,
    TBPF_NORMAL=2,
    TBPF_ERROR=4,
    TBPF_PAUSED=8
} TBPFLAG;

typedef struct THUMBBUTTON *LPTHUMBBUTTON;

struct ITaskbarList3Vtbl {
    HRESULT (*QueryInterface)(struct ITaskbarList3 *, IID *, void **);
    ULONG (*AddRef)(struct ITaskbarList3 *);
    ULONG (*Release)(struct ITaskbarList3 *);
    HRESULT (*HrInit)(struct ITaskbarList3 *);
    HRESULT (*AddTab)(struct ITaskbarList3 *, HWND);
    HRESULT (*DeleteTab)(struct ITaskbarList3 *, HWND);
    HRESULT (*ActivateTab)(struct ITaskbarList3 *, HWND);
    HRESULT (*SetActiveAlt)(struct ITaskbarList3 *, HWND);
    HRESULT (*MarkFullscreenWindow)(struct ITaskbarList3 *, HWND, WINBOOL);
    HRESULT (*SetProgressValue)(struct ITaskbarList3 *, HWND, ULONGLONG, ULONGLONG);
    HRESULT (*SetProgressState)(struct ITaskbarList3 *, HWND, enum TBPFLAG);
    HRESULT (*RegisterTab)(struct ITaskbarList3 *, HWND, HWND);
    HRESULT (*UnregisterTab)(struct ITaskbarList3 *, HWND);
    HRESULT (*SetTabOrder)(struct ITaskbarList3 *, HWND, HWND);
    HRESULT (*SetTabActive)(struct ITaskbarList3 *, HWND, HWND, DWORD);
    HRESULT (*ThumbBarAddButtons)(struct ITaskbarList3 *, HWND, UINT, LPTHUMBBUTTON);
    HRESULT (*ThumbBarUpdateButtons)(struct ITaskbarList3 *, HWND, UINT, LPTHUMBBUTTON);
    HRESULT (*ThumbBarSetImageList)(struct ITaskbarList3 *, HWND, HIMAGELIST);
    HRESULT (*SetOverlayIcon)(struct ITaskbarList3 *, HWND, HICON, LPCWSTR);
    HRESULT (*SetThumbnailTooltip)(struct ITaskbarList3 *, HWND, LPCWSTR);
    HRESULT (*SetThumbnailClip)(struct ITaskbarList3 *, HWND, RECT *);
};

struct ITaskbarList3 {
    struct ITaskbarList3Vtbl *lpVtbl;
};

typedef enum FDAP {
    FDAP_BOTTOM=0,
    FDAP_TOP=1
} FDAP;

typedef enum FDE_SHAREVIOLATION_RESPONSE {
    FDESVR_DEFAULT=0,
    FDESVR_ACCEPT=1,
    FDESVR_REFUSE=2
} FDE_SHAREVIOLATION_RESPONSE;

typedef struct IFileDialogVtbl IFileDialogVtbl, *PIFileDialogVtbl;

typedef struct IFileDialog IFileDialog, *PIFileDialog;

typedef struct _COMDLG_FILTERSPEC _COMDLG_FILTERSPEC, *P_COMDLG_FILTERSPEC;

typedef struct _COMDLG_FILTERSPEC COMDLG_FILTERSPEC;

typedef struct IFileDialogEvents IFileDialogEvents, *PIFileDialogEvents;

typedef struct IFileDialogEventsVtbl IFileDialogEventsVtbl, *PIFileDialogEventsVtbl;

struct _COMDLG_FILTERSPEC {
    LPCWSTR pszName;
    LPCWSTR pszSpec;
};

struct IFileDialog {
    struct IFileDialogVtbl *lpVtbl;
};

struct IFileDialogVtbl {
    HRESULT (*QueryInterface)(struct IFileDialog *, IID *, void **);
    ULONG (*AddRef)(struct IFileDialog *);
    ULONG (*Release)(struct IFileDialog *);
    HRESULT (*Show)(struct IFileDialog *, HWND);
    HRESULT (*SetFileTypes)(struct IFileDialog *, UINT, COMDLG_FILTERSPEC *);
    HRESULT (*SetFileTypeIndex)(struct IFileDialog *, UINT);
    HRESULT (*GetFileTypeIndex)(struct IFileDialog *, UINT *);
    HRESULT (*Advise)(struct IFileDialog *, struct IFileDialogEvents *, DWORD *);
    HRESULT (*Unadvise)(struct IFileDialog *, DWORD);
    HRESULT (*SetOptions)(struct IFileDialog *, FILEOPENDIALOGOPTIONS);
    HRESULT (*GetOptions)(struct IFileDialog *, FILEOPENDIALOGOPTIONS *);
    HRESULT (*SetDefaultFolder)(struct IFileDialog *, struct IShellItem *);
    HRESULT (*SetFolder)(struct IFileDialog *, struct IShellItem *);
    HRESULT (*GetFolder)(struct IFileDialog *, struct IShellItem **);
    HRESULT (*GetCurrentSelection)(struct IFileDialog *, struct IShellItem **);
    HRESULT (*SetFileName)(struct IFileDialog *, LPCWSTR);
    HRESULT (*GetFileName)(struct IFileDialog *, LPWSTR *);
    HRESULT (*SetTitle)(struct IFileDialog *, LPCWSTR);
    HRESULT (*SetOkButtonLabel)(struct IFileDialog *, LPCWSTR);
    HRESULT (*SetFileNameLabel)(struct IFileDialog *, LPCWSTR);
    HRESULT (*GetResult)(struct IFileDialog *, struct IShellItem **);
    HRESULT (*AddPlace)(struct IFileDialog *, struct IShellItem *, enum FDAP);
    HRESULT (*SetDefaultExtension)(struct IFileDialog *, LPCWSTR);
    HRESULT (*Close)(struct IFileDialog *, HRESULT);
    HRESULT (*SetClientGuid)(struct IFileDialog *, GUID *);
    HRESULT (*ClearClientData)(struct IFileDialog *);
    HRESULT (*SetFilter)(struct IFileDialog *, struct IShellItemFilter *);
};

struct IFileDialogEvents {
    struct IFileDialogEventsVtbl *lpVtbl;
};

struct IFileDialogEventsVtbl {
    HRESULT (*QueryInterface)(struct IFileDialogEvents *, IID *, void **);
    ULONG (*AddRef)(struct IFileDialogEvents *);
    ULONG (*Release)(struct IFileDialogEvents *);
    HRESULT (*OnFileOk)(struct IFileDialogEvents *, struct IFileDialog *);
    HRESULT (*OnFolderChanging)(struct IFileDialogEvents *, struct IFileDialog *, struct IShellItem *);
    HRESULT (*OnFolderChange)(struct IFileDialogEvents *, struct IFileDialog *);
    HRESULT (*OnSelectionChange)(struct IFileDialogEvents *, struct IFileDialog *);
    HRESULT (*OnShareViolation)(struct IFileDialogEvents *, struct IFileDialog *, struct IShellItem *, enum FDE_SHAREVIOLATION_RESPONSE *);
    HRESULT (*OnTypeChange)(struct IFileDialogEvents *, struct IFileDialog *);
    HRESULT (*OnOverwrite)(struct IFileDialogEvents *, struct IFileDialog *, struct IShellItem *, enum FDE_OVERWRITE_RESPONSE *);
};

typedef struct consume_chunk_callback consume_chunk_callback, *Pconsume_chunk_callback;

struct consume_chunk_callback {
    int (*func)(void *, size_t, void *);
    void *ctx;
};

typedef struct pwm_blob_hdr pwm_blob_hdr, *Ppwm_blob_hdr;

struct pwm_blob_hdr {
    le64 magic;
    le64 uncompressed_size;
    u8 hash[20];
    le32 flags;
};

typedef struct read_blob_callbacks read_blob_callbacks, *Pread_blob_callbacks;

struct read_blob_callbacks {
    int (*begin_blob)(struct blob_descriptor *, void *);
    int (*continue_blob)(struct blob_descriptor *, u64, void *, size_t, void *);
    int (*end_blob)(struct blob_descriptor *, int, void *);
    void *ctx;
};

typedef struct alt_chunk_table_header_disk alt_chunk_table_header_disk, *Palt_chunk_table_header_disk;

struct alt_chunk_table_header_disk {
    le64 res_usize;
    le32 chunk_size;
    le32 compression_format;
};

typedef struct pwm_chunk_hdr pwm_chunk_hdr, *Ppwm_chunk_hdr;

struct pwm_chunk_hdr {
    le32 compressed_size;
};

typedef struct DelayLoadInfo DelayLoadInfo, *PDelayLoadInfo;

typedef struct ImgDelayDescr ImgDelayDescr, *PImgDelayDescr;

typedef struct ImgDelayDescr *PCImgDelayDescr;

typedef struct DelayLoadProc DelayLoadProc, *PDelayLoadProc;

typedef DWORD RVA;

typedef union anon_union_8_2_0e946ae9_for_DelayLoadProc_1 anon_union_8_2_0e946ae9_for_DelayLoadProc_1, *Panon_union_8_2_0e946ae9_for_DelayLoadProc_1;

union anon_union_8_2_0e946ae9_for_DelayLoadProc_1 {
    LPCSTR szProcName;
    DWORD dwOrdinal;
};

struct DelayLoadProc {
    WINBOOL fImportByName;
    union anon_union_8_2_0e946ae9_for_DelayLoadProc_1 field_1;
};

struct DelayLoadInfo {
    DWORD cb;
    PCImgDelayDescr pidd;
    FARPROC *ppfn;
    LPCSTR szDll;
    struct DelayLoadProc dlp;
    HMODULE hmodCur;
    FARPROC pfnCur;
    DWORD dwLastError;
};

struct ImgDelayDescr {
    DWORD grAttrs;
    RVA rvaDLLName;
    RVA rvaHmod;
    RVA rvaIAT;
    RVA rvaINT;
    RVA rvaBoundIAT;
    RVA rvaUnloadIAT;
    DWORD dwTimeStamp;
};

typedef enum DLAttr {
    dlattrRva=1
} DLAttr;

typedef IMAGE_THUNK_DATA *PImgThunkData;

typedef IMAGE_THUNK_DATA *PCImgThunkData;

typedef FARPROC (*PfnDliHook)(uint, PDelayLoadInfo);

typedef U32 HUF_DTable;

typedef union cde64_t cde64_t, *Pcde64_t;

typedef struct anon_struct_52_9_9638ee98_for_fmt anon_struct_52_9_9638ee98_for_fmt, *Panon_struct_52_9_9638ee98_for_fmt;

struct anon_struct_52_9_9638ee98_for_fmt {
    uint64_t size;
    uint16_t version_made_by;
    uint16_t version_needed;
    uint32_t this_disk_no;
    uint32_t disk_with_cdf_no;
    uint64_t cdf_entries_on_this_disk;
    uint64_t cdf_entries_total;
    uint64_t cdf_size;
    uint64_t cdf_offset;
};

union cde64_t {
    uint8_t raw[52];
    struct anon_struct_52_9_9638ee98_for_fmt fmt;
};

typedef union extra_header_t extra_header_t, *Pextra_header_t;

typedef struct anon_struct_4_2_b8866a09_for_fmt anon_struct_4_2_b8866a09_for_fmt, *Panon_struct_4_2_b8866a09_for_fmt;

struct anon_struct_4_2_b8866a09_for_fmt {
    uint16_t tag;
    uint16_t length;
};

union extra_header_t {
    uint8_t raw[4];
    struct anon_struct_4_2_b8866a09_for_fmt fmt;
};

typedef union zip_header_t zip_header_t, *Pzip_header_t;

typedef struct anon_struct_26_10_bd77f344_for_fmt anon_struct_26_10_bd77f344_for_fmt, *Panon_struct_26_10_bd77f344_for_fmt;

struct anon_struct_26_10_bd77f344_for_fmt {
    uint16_t version;
    uint16_t zip_flags;
    uint16_t method;
    uint16_t modtime;
    uint16_t moddate;
    uint32_t crc32;
    uint32_t cmpsize;
    uint32_t ucmpsize;
    uint16_t filename_len;
    uint16_t extra_len;
};

union zip_header_t {
    uint8_t raw[26];
    struct anon_struct_26_10_bd77f344_for_fmt fmt;
};

typedef union cdf_header_t cdf_header_t, *Pcdf_header_t;

typedef struct anon_struct_44_16_4448cb1b_for_fmt anon_struct_44_16_4448cb1b_for_fmt, *Panon_struct_44_16_4448cb1b_for_fmt;

struct anon_struct_44_16_4448cb1b_for_fmt {
    uint16_t version_made_by;
    uint16_t version_needed;
    uint16_t cdf_flags;
    uint16_t method;
    uint16_t modtime;
    uint16_t moddate;
    uint32_t crc32;
    uint32_t cmpsize;
    uint32_t ucmpsize;
    uint16_t filename_len;
    uint16_t extra_len;
    uint16_t file_comment_length;
    uint16_t disk_number_start;
    uint16_t internal_attributes;
    uint32_t external_attributes;
    uint32_t relative_offset_of_local_header;
    undefined field16_0x2a;
    undefined field17_0x2b;
};

union cdf_header_t {
    uint8_t raw[42];
    struct anon_struct_44_16_4448cb1b_for_fmt fmt;
};

typedef union cde_t cde_t, *Pcde_t;

typedef struct anon_struct_16_6_b00dc6f6_for_fmt anon_struct_16_6_b00dc6f6_for_fmt, *Panon_struct_16_6_b00dc6f6_for_fmt;

struct anon_struct_16_6_b00dc6f6_for_fmt {
    uint16_t this_disk_no;
    uint16_t disk_with_cdf_no;
    uint16_t cdf_entries_on_this_disk;
    uint16_t cdf_entries_total;
    uint32_t cdf_size;
    uint32_t cdf_offset;
};

union cde_t {
    uint8_t raw[16];
    struct anon_struct_16_6_b00dc6f6_for_fmt fmt;
};

typedef union zip64_t zip64_t, *Pzip64_t;

typedef struct anon_struct_20_4_972c3197_for_fmt anon_struct_20_4_972c3197_for_fmt, *Panon_struct_20_4_972c3197_for_fmt;

struct anon_struct_20_4_972c3197_for_fmt {
    uint16_t tag;
    uint16_t length;
    uint64_t ucmpsize;
    uint64_t cmpsize;
};

union zip64_t {
    uint8_t raw[20];
    struct anon_struct_20_4_972c3197_for_fmt fmt;
};

typedef struct data_range data_range, *Pdata_range;

struct data_range {
    u64 offset;
    u64 size;
};

typedef struct blobifier_context blobifier_context, *Pblobifier_context;

struct blobifier_context {
    struct read_blob_callbacks cbs;
    struct blob_descriptor *cur_blob;
    struct blob_descriptor *next_blob;
    u64 cur_blob_offset;
    struct blob_descriptor *final_blob;
    size_t list_head_offset;
};

typedef int (*read_blob_prefix_handler_t)(struct blob_descriptor *, u64, struct consume_chunk_callback *, _Bool);

typedef struct hasher_context hasher_context, *Phasher_context;

typedef struct sha1_ctx sha1_ctx, *Psha1_ctx;

struct sha1_ctx {
    u64 bytecount;
    u32 h[5];
    u8 buffer[64];
};

struct hasher_context {
    struct sha1_ctx sha_ctx;
    int flags;
    struct read_blob_callbacks cbs;
};

typedef struct blob_chunk_ctx blob_chunk_ctx, *Pblob_chunk_ctx;

struct blob_chunk_ctx {
    struct blob_descriptor *blob;
    struct read_blob_callbacks *cbs;
    u64 offset;
};

typedef uint64_t aliased_le64_t;

typedef uint32_t aliased_le32_t;

typedef enum wim_inode_stream_type {
    STREAM_TYPE_DATA=0,
    STREAM_TYPE_REPARSE_POINT=1,
    STREAM_TYPE_EFSRPC_RAW_DATA=2,
    STREAM_TYPE_UNKNOWN=3
} wim_inode_stream_type;

typedef struct _SYSTEM_HANDLE_INFORMATION_EX _SYSTEM_HANDLE_INFORMATION_EX, *P_SYSTEM_HANDLE_INFORMATION_EX;

typedef struct _SYSTEM_HANDLE_INFORMATION_EX *PSYSTEM_HANDLE_INFORMATION_EX;

typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX, *P_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX;

typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX;

struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX {
    PVOID Object;
    ULONG_PTR UniqueProcessId;
    ULONG_PTR HandleValue;
    ULONG GrantedAccess;
    USHORT CreatorBackTraceIndex;
    USHORT ObjectTypeIndex;
    ULONG HandleAttributes;
    ULONG Reserved;
};

struct _SYSTEM_HANDLE_INFORMATION_EX {
    ULONG_PTR NumberOfHandles;
    ULONG_PTR Reserved;
    SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX Handles[1];
};

typedef struct _PROCESS_BASIC_INFORMATION_INTERNAL _PROCESS_BASIC_INFORMATION_INTERNAL, *P_PROCESS_BASIC_INFORMATION_INTERNAL;

struct _PROCESS_BASIC_INFORMATION_INTERNAL {
    NTSTATUS ExitStatus;
    ULONG_PTR PebBaseAddress;
    ULONG_PTR AffinityMask;
    KPRIORITY BasePriority;
    ULONG_PTR UniqueProcessId;
    ULONG_PTR InheritedFromUniqueProcessId;
};

typedef struct _UNICODE_STRING_WOW64 _UNICODE_STRING_WOW64, *P_UNICODE_STRING_WOW64;

typedef struct _UNICODE_STRING_WOW64 UNICODE_STRING_WOW64;

struct _UNICODE_STRING_WOW64 {
    USHORT Length;
    USHORT MaximumLength;
    ULONGLONG Buffer;
};

typedef struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION _FILE_PROCESS_IDS_USING_FILE_INFORMATION, *P_FILE_PROCESS_IDS_USING_FILE_INFORMATION;

typedef struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION *PFILE_PROCESS_IDS_USING_FILE_INFORMATION;

struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION {
    ULONG NumberOfProcessIdsInList;
    ULONG_PTR ProcessIdList[1];
};

typedef struct ProcessEntry ProcessEntry, *PProcessEntry;

struct ProcessEntry {
    uint64_t pid;
    uint8_t access_rights;
    uint32_t seen_on_pass;
    char cmdline[2048];
};

typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX *PSYSTEM_HANDLE_TABLE_ENTRY_INFO_EX;

typedef struct _PROCESS_BASIC_INFORMATION_INTERNAL PROCESS_BASIC_INFORMATION_INTERNAL;

typedef struct BlockingProcess BlockingProcess, *PBlockingProcess;

struct BlockingProcess {
    BOOL bActive;
    uint32_t nVersion[2];
    uint32_t nHandles;
    wchar_t **wHandleName;
    HANDLE hLock;
    HANDLE hStart;
    struct ProcessEntry Process[16];
    uint32_t nPass;
};

typedef struct ext2_struct_inode_scan ext2_struct_inode_scan, *Pext2_struct_inode_scan;

typedef struct ext2_struct_inode_scan *ext2_inode_scan;

struct ext2_struct_inode_scan {
    errcode_t magic;
    ext2_filsys fs;
    ext2_ino_t current_inode;
    blk64_t current_block;
    dgrp_t current_group;
    ext2_ino_t inodes_left;
    blk_t blocks_left;
    dgrp_t groups_left;
    blk_t inode_buffer_blocks;
    char *inode_buffer;
    int inode_size;
    char *ptr;
    int bytes_left;
    char *temp_buffer;
    errcode_t (*done_group)(ext2_filsys, ext2_inode_scan, dgrp_t, void *);
    void *done_group_data;
    int bad_block_ptr;
    int scan_flags;
    int reserved[6];
};

typedef struct __processor_model2 __processor_model2, *P__processor_model2;

struct __processor_model2 {
    uint __cpu_family;
    uint __cpu_model;
    uint __cpu_max_level;
    uint __cpu_ext_level;
};

typedef struct __processor_model __processor_model, *P__processor_model;

struct __processor_model {
    uint __cpu_vendor;
    uint __cpu_type;
    uint __cpu_subtype;
    uint __cpu_features[1];
};

typedef struct apply_ctx apply_ctx, *Papply_ctx;

typedef struct wim_features wim_features, *Pwim_features;

typedef struct apply_operations apply_operations, *Papply_operations;

struct wim_features {
    ulong readonly_files;
    ulong hidden_files;
    ulong system_files;
    ulong archive_files;
    ulong compressed_files;
    ulong encrypted_files;
    ulong encrypted_directories;
    ulong not_context_indexed_files;
    ulong sparse_files;
    ulong named_data_streams;
    ulong hard_links;
    ulong reparse_points;
    ulong symlink_reparse_points;
    ulong other_reparse_points;
    ulong security_descriptors;
    ulong short_names;
    ulong unix_data;
    ulong object_ids;
    ulong timestamps;
    ulong case_sensitive_filenames;
    ulong xattrs;
};

struct apply_ctx {
    struct WIMStruct *wim;
    tchar *target;
    size_t target_nchars;
    int extract_flags;
    wimlib_progress_func_t progfunc;
    void *progctx;
    union wimlib_progress_info progress;
    struct wim_features required_features;
    struct wim_features supported_features;
    struct apply_operations *apply_ops;
    u64 next_progress;
    ulong invalid_sequence;
    ulong num_blobs_remaining;
    struct list_head.conflict blob_list;
    struct read_blob_callbacks *saved_cbs;
    struct filedes tmpfile_fd;
    tchar *tmpfile_name;
    uint count_until_file_progress;
};

struct apply_operations {
    char *name;
    int (*get_supported_features)(tchar *, struct wim_features *);
    int (*extract)(struct list_head.conflict *, struct apply_ctx *);
    int (*will_back_from_wim)(struct wim_dentry *, struct apply_ctx *);
    size_t context_size;
    _Bool single_tree_only;
};


// WARNING! conflicting data type names: /DWARF/stdio.h/_iobuf - /mbstring.h/_iobuf

typedef struct reparse_buffer_disk reparse_buffer_disk, *Preparse_buffer_disk;

typedef union anon_union_16376_2_1242e20f_for_reparse_buffer_disk_3 anon_union_16376_2_1242e20f_for_reparse_buffer_disk_3, *Panon_union_16376_2_1242e20f_for_reparse_buffer_disk_3;

typedef struct anon_struct_16376_5_36350491_for_link anon_struct_16376_5_36350491_for_link, *Panon_struct_16376_5_36350491_for_link;

typedef union anon_union_16368_2_79bd3370_for_anon_struct_16376_5_36350491_for_link_4 anon_union_16368_2_79bd3370_for_anon_struct_16376_5_36350491_for_link_4, *Panon_union_16368_2_79bd3370_for_anon_struct_16376_5_36350491_for_link_4;

typedef struct anon_struct_16368_1_898a9ca8_for_junction anon_struct_16368_1_898a9ca8_for_junction, *Panon_struct_16368_1_898a9ca8_for_junction;

typedef struct anon_struct_16368_2_e5afd63e_for_symlink anon_struct_16368_2_e5afd63e_for_symlink, *Panon_struct_16368_2_e5afd63e_for_symlink;

struct anon_struct_16368_2_e5afd63e_for_symlink {
    le32 flags;
    u8 data[16364];
};

struct anon_struct_16368_1_898a9ca8_for_junction {
    u8 data[16368];
};

union anon_union_16368_2_79bd3370_for_anon_struct_16376_5_36350491_for_link_4 {
    struct anon_struct_16368_1_898a9ca8_for_junction junction;
    struct anon_struct_16368_2_e5afd63e_for_symlink symlink;
};

struct anon_struct_16376_5_36350491_for_link {
    le16 substitute_name_offset;
    le16 substitute_name_nbytes;
    le16 print_name_offset;
    le16 print_name_nbytes;
    union anon_union_16368_2_79bd3370_for_anon_struct_16376_5_36350491_for_link_4 field_4;
};

union anon_union_16376_2_1242e20f_for_reparse_buffer_disk_3 {
    u8 rpdata[16376];
    struct anon_struct_16376_5_36350491_for_link link;
};

struct reparse_buffer_disk {
    le32 rptag;
    le16 rpdatalen;
    le16 rpreserved;
    union anon_union_16376_2_1242e20f_for_reparse_buffer_disk_3 field_3;
};

typedef struct link_reparse_point link_reparse_point, *Plink_reparse_point;

struct link_reparse_point {
    u32 rptag;
    u16 rpreserved;
    u32 symlink_flags;
    utf16lechar *substitute_name;
    utf16lechar *print_name;
    size_t substitute_name_nbytes;
    size_t print_name_nbytes;
};

typedef enum udf_enum1_t {
    UDF_BLOCKSIZE=2048
} udf_enum1_t;

typedef ACCESS_MASK REGSAM;

typedef LONG LSTATUS;

typedef struct UnloadInfo UnloadInfo, *PUnloadInfo;

typedef struct UnloadInfo *PUnloadInfo.conflict;

struct UnloadInfo {
    PUnloadInfo puiNext;
    PCImgDelayDescr pidd;
};

typedef struct InternalImgDelayDescr InternalImgDelayDescr, *PInternalImgDelayDescr;

struct InternalImgDelayDescr {
    DWORD grAttrs;
    LPCSTR szName;
    HMODULE *phmod;
    PImgThunkData pIAT;
    PCImgThunkData pINT;
    PCImgThunkData pBoundIAT;
    PCImgThunkData pUnloadIAT;
    DWORD dwTimeStamp;
};

typedef union _USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS _USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS, *P_USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS;

typedef struct anon_struct_4_5_3ecda1fd_for__USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS_1 anon_struct_4_5_3ecda1fd_for__USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS_1, *Panon_struct_4_5_3ecda1fd_for__USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS_1;

struct anon_struct_4_5_3ecda1fd_for__USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS_1 {
    ULONG DeviceIsOperatingAtSuperSpeedOrHigher:1;
    ULONG DeviceIsSuperSpeedCapableOrHigher:1;
    ULONG DeviceIsOperatingAtSuperSpeedPlusOrHigher:1;
    ULONG DeviceIsSuperSpeedPlusCapableOrHigher:1;
    ULONG ReservedMBZ:28;
};

union _USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS {
    ULONG ul;
    struct anon_struct_4_5_3ecda1fd_for__USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS_1 field_1;
};

typedef struct _USB_NODE_CONNECTION_INFORMATION_EX_V2 _USB_NODE_CONNECTION_INFORMATION_EX_V2, *P_USB_NODE_CONNECTION_INFORMATION_EX_V2;

typedef union _USB_PROTOCOLS _USB_PROTOCOLS, *P_USB_PROTOCOLS;

typedef union _USB_PROTOCOLS USB_PROTOCOLS;

typedef union _USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS;

typedef struct anon_struct_4_4_0b4c654f_for__USB_PROTOCOLS_1 anon_struct_4_4_0b4c654f_for__USB_PROTOCOLS_1, *Panon_struct_4_4_0b4c654f_for__USB_PROTOCOLS_1;

struct anon_struct_4_4_0b4c654f_for__USB_PROTOCOLS_1 {
    ULONG Usb110:1;
    ULONG Usb200:1;
    ULONG Usb300:1;
    ULONG ReservedMBZ:29;
};

union _USB_PROTOCOLS {
    ULONG ul;
    struct anon_struct_4_4_0b4c654f_for__USB_PROTOCOLS_1 field_1;
};

struct _USB_NODE_CONNECTION_INFORMATION_EX_V2 {
    ULONG ConnectionIndex;
    ULONG Length;
    USB_PROTOCOLS SupportedUsbProtocols;
    USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS Flags;
};

typedef struct usb_device_props usb_device_props, *Pusb_device_props;

struct usb_device_props {
    int32_t vid;
    int32_t pid;
    uint32_t speed;
    uint32_t lower_speed;
    uint32_t port;
    BOOLEAN is_USB;
    BOOLEAN is_SCSI;
    BOOLEAN is_CARD;
    BOOLEAN is_UASP;
    BOOLEAN is_VHD;
    BOOLEAN is_Removable;
};

typedef struct USB_NODE_CONNECTION_INFORMATION_EX USB_NODE_CONNECTION_INFORMATION_EX, *PUSB_NODE_CONNECTION_INFORMATION_EX;

typedef struct _USB_DEVICE_DESCRIPTOR _USB_DEVICE_DESCRIPTOR, *P_USB_DEVICE_DESCRIPTOR;

typedef struct _USB_DEVICE_DESCRIPTOR USB_DEVICE_DESCRIPTOR;

typedef enum USB_CONNECTION_STATUS {
    NoDeviceConnected=0,
    DeviceConnected=1,
    DeviceFailedEnumeration=2,
    DeviceGeneralFailure=3,
    DeviceCausedOvercurrent=4,
    DeviceNotEnoughPower=5,
    DeviceNotEnoughBandwidth=6,
    DeviceHubNestedTooDeeply=7,
    DeviceInLegacyHub=8
} USB_CONNECTION_STATUS;

struct _USB_DEVICE_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT bcdUSB;
    UCHAR bDeviceClass;
    UCHAR bDeviceSubClass;
    UCHAR bDeviceProtocol;
    UCHAR bMaxPacketSize0;
    USHORT idVendor;
    USHORT idProduct;
    USHORT bcdDevice;
    UCHAR iManufacturer;
    UCHAR iProduct;
    UCHAR iSerialNumber;
    UCHAR bNumConfigurations;
};

struct USB_NODE_CONNECTION_INFORMATION_EX {
    ULONG ConnectionIndex;
    USB_DEVICE_DESCRIPTOR DeviceDescriptor;
    UCHAR CurrentConfigurationValue;
    UCHAR Speed;
    BOOLEAN DeviceIsHub;
    USHORT DeviceAddress;
    ULONG NumberOfOpenPipes;
    enum USB_CONNECTION_STATUS ConnectionStatus;
};

typedef struct USB_CYCLE_PORT_PARAMS USB_CYCLE_PORT_PARAMS, *PUSB_CYCLE_PORT_PARAMS;

struct USB_CYCLE_PORT_PARAMS {
    ULONG ConnectionIndex;
    ULONG StatusReturned;
};

typedef struct _USB_NODE_CONNECTION_INFORMATION_EX_V2 USB_NODE_CONNECTION_INFORMATION_EX_V2;

typedef struct transformer_state_t transformer_state_t, *Ptransformer_state_t;

typedef union anon_union_8_3_fdc3c8bc_for_magic anon_union_8_3_fdc3c8bc_for_magic, *Panon_union_8_3_fdc3c8bc_for_magic;

union anon_union_8_3_fdc3c8bc_for_magic {
    uint8_t b[8];
    uint16_t b16[4];
    uint32_t b32[2];
};

struct transformer_state_t {
    int8_t signature_skipped;
    longlong (*xformer)(struct transformer_state_t *);
    int src_fd;
    int dst_fd;
    char *dst_dir;
    char *dst_name;
    uint64_t dst_size;
    size_t mem_output_size_max;
    size_t mem_output_size;
    char *mem_output_buf;
    uint64_t bytes_out;
    uint64_t bytes_in;
    uint32_t crc32;
    time_t mtime;
    union anon_union_8_3_fdc3c8bc_for_magic magic;
};

typedef struct thread thread, *Pthread;

struct thread {
    void *win32_thread;
    void * (*thrproc)(void *);
    void *arg;
};

typedef struct condvar condvar, *Pcondvar;

struct condvar {
    void *win32_cond;
};

typedef struct mutex mutex, *Pmutex;

struct mutex {
    void *win32_crit;
};

typedef struct stat64 stat64, *Pstat64;

struct stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    ushort st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    longlong st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
};

typedef struct stat stat, *Pstat;

struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    wchar_t st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    off64_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
};

typedef struct stat.conflict stat.conflict, *Pstat.conflict;

struct stat.conflict {
    _dev_t st_dev;
    _ino_t st_ino;
    ushort st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    off64_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
};

typedef struct ext2fs_ba_private_struct ext2fs_ba_private_struct, *Pext2fs_ba_private_struct;

struct ext2fs_ba_private_struct {
    char *bitarray;
};

typedef struct ext2fs_ba_private_struct *ext2fs_ba_private;


// WARNING! conflicting data type names: /DWARF/winbase.h/PFE_EXPORT_FUNC - /winbase.h/PFE_EXPORT_FUNC


// WARNING! conflicting data type names: /DWARF/winbase.h/PFE_IMPORT_FUNC - /winbase.h/PFE_IMPORT_FUNC

typedef struct update_command_journal update_command_journal, *Pupdate_command_journal;

typedef struct update_primitive_list update_primitive_list, *Pupdate_primitive_list;

typedef struct update_primitive update_primitive, *Pupdate_primitive;

typedef union anon_union_16_2_31cc6972_for_update_primitive_1 anon_union_16_2_31cc6972_for_update_primitive_1, *Panon_union_16_2_31cc6972_for_update_primitive_1;

typedef struct anon_struct_16_2_1164da35_for_link anon_struct_16_2_1164da35_for_link, *Panon_struct_16_2_1164da35_for_link;

typedef struct anon_struct_16_2_029a6d6e_for_name anon_struct_16_2_029a6d6e_for_name, *Panon_struct_16_2_029a6d6e_for_name;

struct anon_struct_16_2_1164da35_for_link {
    struct wim_dentry *subject;
    struct wim_dentry *parent;
};

struct anon_struct_16_2_029a6d6e_for_name {
    struct wim_dentry *subject;
    utf16lechar *old_name;
};

union anon_union_16_2_31cc6972_for_update_primitive_1 {
    struct anon_struct_16_2_1164da35_for_link link;
    struct anon_struct_16_2_029a6d6e_for_name name;
};

struct update_primitive {
    enum anon_enum_32 type;
    union anon_union_16_2_31cc6972_for_update_primitive_1 field_1;
};

struct update_primitive_list {
    struct update_primitive *entries;
    struct update_primitive inline_entries[4];
    size_t num_entries;
    size_t num_alloc_entries;
};

struct update_command_journal {
    size_t num_cmds;
    size_t cur_cmd;
    struct wim_dentry **root_p;
    struct blob_table *blob_table;
    struct list_head.conflict orphans;
    struct update_primitive_list cmd_prims[0];
};

typedef struct __mingwthr_key __mingwthr_key, *P__mingwthr_key;

typedef struct __mingwthr_key __mingwthr_key_t;

struct __mingwthr_key {
    DWORD key;
    void (*dtor)(void *);
    __mingwthr_key_t *next;
};

typedef enum ZSTD_frameType_e {
    ZSTD_frame=0,
    ZSTD_skippableFrame=1
} ZSTD_frameType_e;

typedef struct ZSTD_customMem ZSTD_customMem, *PZSTD_customMem;

typedef void * (*ZSTD_allocFunction)(void *, size_t);

typedef void (*ZSTD_freeFunction)(void *, void *);

struct ZSTD_customMem {
    ZSTD_allocFunction customAlloc;
    ZSTD_freeFunction customFree;
    void *opaque;
};

typedef enum ZSTD_dParameter {
    ZSTD_d_windowLogMax=100,
    ZSTD_d_experimentalParam1=1000,
    ZSTD_d_experimentalParam2=1001,
    ZSTD_d_experimentalParam3=1002,
    ZSTD_d_experimentalParam4=1003,
    ZSTD_d_experimentalParam5=1004,
    ZSTD_d_experimentalParam6=1005
} ZSTD_dParameter;

typedef struct ZSTD_DDict_s ZSTD_DDict_s, *PZSTD_DDict_s;

typedef struct ZSTD_DDict_s ZSTD_DDict;

typedef struct ZSTD_entropyDTables_t ZSTD_entropyDTables_t, *PZSTD_entropyDTables_t;

typedef struct ZSTD_seqSymbol ZSTD_seqSymbol, *PZSTD_seqSymbol;

struct ZSTD_seqSymbol {
    U16 nextState;
    BYTE nbAdditionalBits;
    BYTE nbBits;
    U32 baseValue;
};

struct ZSTD_entropyDTables_t {
    struct ZSTD_seqSymbol LLTable[513];
    struct ZSTD_seqSymbol OFTable[257];
    struct ZSTD_seqSymbol MLTable[513];
    HUF_DTable hufTable[4097];
    U32 rep[3];
    U32 workspace[157];
};

struct ZSTD_DDict_s {
    void *dictBuffer;
    void *dictContent;
    size_t dictSize;
    struct ZSTD_entropyDTables_t entropy;
    U32 dictID;
    U32 entropyPresent;
    struct ZSTD_customMem cMem;
};

typedef enum ZSTD_dictContentType_e {
    ZSTD_dct_auto=0,
    ZSTD_dct_rawContent=1,
    ZSTD_dct_fullDict=2
} ZSTD_dictContentType_e;

typedef struct ZSTD_outBuffer_s ZSTD_outBuffer_s, *PZSTD_outBuffer_s;

struct ZSTD_outBuffer_s {
    void *dst;
    size_t size;
    size_t pos;
};

typedef enum ZSTD_dictLoadMethod_e {
    ZSTD_dlm_byCopy=0,
    ZSTD_dlm_byRef=1
} ZSTD_dictLoadMethod_e;

typedef struct ZSTD_inBuffer_s ZSTD_inBuffer_s, *PZSTD_inBuffer_s;

struct ZSTD_inBuffer_s {
    void *src;
    size_t size;
    size_t pos;
};

typedef enum ZSTD_ResetDirective {
    ZSTD_reset_session_only=1,
    ZSTD_reset_parameters=2,
    ZSTD_reset_session_and_parameters=3
} ZSTD_ResetDirective;

typedef struct ZSTD_bounds ZSTD_bounds, *PZSTD_bounds;

struct ZSTD_bounds {
    size_t error;
    int lowerBound;
    int upperBound;
};

typedef struct ZSTD_DCtx_s ZSTD_DCtx_s, *PZSTD_DCtx_s;

typedef struct ZSTD_DCtx_s ZSTD_DCtx;

typedef struct ZSTD_frameHeader ZSTD_frameHeader, *PZSTD_frameHeader;

typedef enum blockType_e {
    bt_raw=0,
    bt_rle=1,
    bt_compressed=2,
    bt_reserved=3
} blockType_e;

typedef enum ZSTD_dStage {
    ZSTDds_getFrameHeaderSize=0,
    ZSTDds_decodeFrameHeader=1,
    ZSTDds_decodeBlockHeader=2,
    ZSTDds_decompressBlock=3,
    ZSTDds_decompressLastBlock=4,
    ZSTDds_checkChecksum=5,
    ZSTDds_decodeSkippableHeader=6,
    ZSTDds_skipFrame=7
} ZSTD_dStage;

typedef struct XXH64_state_s XXH64_state_s, *PXXH64_state_s;

typedef struct XXH64_state_s XXH64_state_t;

typedef enum ZSTD_format_e {
    ZSTD_f_zstd1=0,
    ZSTD_f_zstd1_magicless=1
} ZSTD_format_e;

typedef enum ZSTD_forceIgnoreChecksum_e {
    ZSTD_d_validateChecksum=0,
    ZSTD_d_ignoreChecksum=1
} ZSTD_forceIgnoreChecksum_e;

typedef enum ZSTD_dictUses_e {
    ZSTD_use_indefinitely=-1,
    ZSTD_dont_use=0,
    ZSTD_use_once=1
} ZSTD_dictUses_e;

typedef struct ZSTD_DDictHashSet ZSTD_DDictHashSet, *PZSTD_DDictHashSet;

typedef enum ZSTD_refMultipleDDicts_e {
    ZSTD_rmd_refSingleDDict=0,
    ZSTD_rmd_refMultipleDDicts=1
} ZSTD_refMultipleDDicts_e;

typedef enum ZSTD_dStreamStage {
    zdss_init=0,
    zdss_loadHeader=1,
    zdss_read=2,
    zdss_load=3,
    zdss_flush=4
} ZSTD_dStreamStage;

typedef enum ZSTD_bufferMode_e {
    ZSTD_bm_buffered=0,
    ZSTD_bm_stable=1
} ZSTD_bufferMode_e;

typedef struct ZSTD_outBuffer_s ZSTD_outBuffer;

typedef enum ZSTD_litLocation_e {
    ZSTD_not_in_dst=0,
    ZSTD_in_dst=1,
    ZSTD_split=2
} ZSTD_litLocation_e;

typedef uint64_t XXH64_hash_t;

typedef uint32_t XXH32_hash_t;

struct XXH64_state_s {
    XXH64_hash_t total_len;
    XXH64_hash_t v[4];
    XXH64_hash_t mem64[4];
    XXH32_hash_t memsize;
    XXH32_hash_t reserved32;
    XXH64_hash_t reserved64;
};

struct ZSTD_frameHeader {
    ulonglong frameContentSize;
    ulonglong windowSize;
    uint blockSizeMax;
    enum ZSTD_frameType_e frameType;
    uint headerSize;
    uint dictID;
    uint checksumFlag;
    uint _reserved1;
    uint _reserved2;
};

struct ZSTD_DCtx_s {
    struct ZSTD_seqSymbol *LLTptr;
    struct ZSTD_seqSymbol *MLTptr;
    struct ZSTD_seqSymbol *OFTptr;
    HUF_DTable *HUFptr;
    struct ZSTD_entropyDTables_t entropy;
    U32 workspace[640];
    void *previousDstEnd;
    void *prefixStart;
    void *virtualStart;
    void *dictEnd;
    size_t expected;
    struct ZSTD_frameHeader fParams;
    U64 processedCSize;
    U64 decodedSize;
    enum blockType_e bType;
    enum ZSTD_dStage stage;
    U32 litEntropy;
    U32 fseEntropy;
    XXH64_state_t xxhState;
    size_t headerSize;
    enum ZSTD_format_e format;
    enum ZSTD_forceIgnoreChecksum_e forceIgnoreChecksum;
    U32 validateChecksum;
    BYTE *litPtr;
    struct ZSTD_customMem customMem;
    size_t litSize;
    size_t rleSize;
    size_t staticSize;
    int isFrameDecompression;
    ZSTD_DDict *ddictLocal;
    ZSTD_DDict *ddict;
    U32 dictID;
    int ddictIsCold;
    enum ZSTD_dictUses_e dictUses;
    struct ZSTD_DDictHashSet *ddictSet;
    enum ZSTD_refMultipleDDicts_e refMultipleDDicts;
    int disableHufAsm;
    int maxBlockSizeParam;
    enum ZSTD_dStreamStage streamStage;
    char *inBuff;
    size_t inBuffSize;
    size_t inPos;
    size_t maxWindowSize;
    char *outBuff;
    size_t outBuffSize;
    size_t outStart;
    size_t outEnd;
    size_t lhSize;
    U32 hostageByte;
    int noForwardProgress;
    enum ZSTD_bufferMode_e outBufferMode;
    ZSTD_outBuffer expectedOutBuffer;
    BYTE *litBuffer;
    BYTE *litBufferEnd;
    enum ZSTD_litLocation_e litBufferLocation;
    BYTE litExtraBuffer[65568];
    BYTE headerBuffer[18];
    size_t oversizedDuration;
};

struct ZSTD_DDictHashSet {
    ZSTD_DDict **ddictPtrTable;
    size_t ddictPtrTableSize;
    size_t ddictPtrCount;
};

typedef enum ZSTD_nextInputType_e {
    ZSTDnit_frameHeader=0,
    ZSTDnit_blockHeader=1,
    ZSTDnit_block=2,
    ZSTDnit_lastBlock=3,
    ZSTDnit_checksum=4,
    ZSTDnit_skippableFrame=5
} ZSTD_nextInputType_e;

typedef ZSTD_DCtx ZSTD_DStream;

typedef struct ZSTD_inBuffer_s ZSTD_inBuffer;

typedef enum lzma_state {
    STATE_LIT_LIT=0,
    STATE_MATCH_LIT_LIT=1,
    STATE_REP_LIT_LIT=2,
    STATE_SHORTREP_LIT_LIT=3,
    STATE_MATCH_LIT=4,
    STATE_REP_LIT=5,
    STATE_SHORTREP_LIT=6,
    STATE_LIT_MATCH=7,
    STATE_LIT_LONGREP=8,
    STATE_LIT_SHORTREP=9,
    STATE_NONLIT_MATCH=10,
    STATE_NONLIT_REP=11
} lzma_state;

typedef __u64 ext2_off64_t;

typedef struct ext2fs_extent ext2fs_extent, *Pext2fs_extent;

struct ext2fs_extent {
    blk64_t e_pblk;
    blk64_t e_lblk;
    __u32 e_len;
    __u32 e_flags;
};

typedef struct ext2_file *ext2_file_t;

typedef __u32 ext2_off_t;

typedef struct ext2_struct_u32_list *badblocks_list;

typedef struct ext2_extent_info ext2_extent_info, *Pext2_extent_info;

struct ext2_extent_info {
    int curr_entry;
    int curr_level;
    int num_entries;
    int max_entries;
    int max_depth;
    int bytes_avail;
    blk64_t max_lblk;
    blk64_t max_pblk;
    __u32 max_len;
    __u32 max_uninit_len;
};

typedef struct ext2fs_struct_generic_bitmap_base *ext2fs_generic_bitmap;

typedef struct ext2_extent_handle ext2_extent_handle, *Pext2_extent_handle;

typedef struct ext2_extent_handle *ext2_extent_handle_t;

typedef struct extent_path extent_path, *Pextent_path;

struct ext2_extent_handle {
    errcode_t magic;
    ext2_filsys fs;
    ext2_ino_t ino;
    struct ext2_inode *inode;
    struct ext2_inode inodebuf;
    int type;
    int level;
    int max_depth;
    int max_paths;
    struct extent_path *path;
};

struct extent_path {
    char *buf;
    int entries;
    int max_entries;
    int left;
    int visit_num;
    int flags;
    blk64_t end_blk;
    void *curr;
};

typedef struct ext2_struct_u32_iterate ext2_struct_u32_iterate, *Pext2_struct_u32_iterate;

typedef struct ext2_struct_u32_iterate *ext2_u32_iterate;

typedef struct ext2_struct_u32_list *ext2_u32_list;

struct ext2_struct_u32_iterate {
    int magic;
    ext2_u32_list bb;
    int ptr;
};

typedef __u32 ext2_dirhash_t;

typedef struct ext2_struct_u32_iterate *ext2_badblocks_iterate;

typedef struct filter_context filter_context, *Pfilter_context;

struct filter_context {
    int write_flags;
    struct WIMStruct *wim;
};

typedef struct insert_other_if_hard_filtered_ctx insert_other_if_hard_filtered_ctx, *Pinsert_other_if_hard_filtered_ctx;

typedef struct blob_size_table blob_size_table, *Pblob_size_table;

struct insert_other_if_hard_filtered_ctx {
    struct blob_size_table *tab;
    struct filter_context *filter_ctx;
};

struct blob_size_table {
    struct hlist_head *array;
    size_t num_entries;
    size_t capacity;
};

typedef struct write_blobs_ctx write_blobs_ctx, *Pwrite_blobs_ctx;

typedef struct write_blobs_progress_data write_blobs_progress_data, *Pwrite_blobs_progress_data;

typedef struct chunk_compressor chunk_compressor, *Pchunk_compressor;

struct write_blobs_progress_data {
    wimlib_progress_func_t progfunc;
    void *progctx;
    union wimlib_progress_info progress;
    u64 next_progress;
};

struct write_blobs_ctx {
    struct filedes *out_fd;
    struct blob_table *blob_table;
    int out_ctype;
    u32 out_chunk_size;
    int write_resource_flags;
    struct write_blobs_progress_data progress_data;
    struct filter_context *filter_ctx;
    struct chunk_compressor *compressor;
    u8 *cur_chunk_buf;
    size_t cur_chunk_buf_filled;
    struct list_head.conflict blobs_being_compressed;
    struct list_head.conflict blobs_in_solid_resource;
    u64 cur_write_blob_offset;
    u64 cur_write_res_size;
    u64 *chunk_csizes;
    size_t chunk_index;
    size_t num_alloc_chunks;
    u64 chunks_start_offset;
};

struct chunk_compressor {
    int out_ctype;
    u32 out_chunk_size;
    uint num_threads;
    void (*destroy)(struct chunk_compressor *);
    void * (*get_chunk_buffer)(struct chunk_compressor *);
    void (*signal_chunk_filled)(struct chunk_compressor *, u32);
    _Bool (*get_compression_result)(struct chunk_compressor *, void **, u32 *, u32 *);
};


// WARNING! conflicting data type names: /DWARF/winuser.h/PWINDOWINFO - /winuser.h/PWINDOWINFO


// WARNING! conflicting data type names: /DWARF/winuser.h/PCHANGEFILTERSTRUCT - /winuser.h/PCHANGEFILTERSTRUCT


// WARNING! conflicting data type names: /DWARF/winuser.h/tagINPUT - /winuser.h/tagINPUT

typedef struct tagINPUT INPUT;


// WARNING! conflicting data type names: /DWARF/winuser.h/LPMSG - /winuser.h/LPMSG


// WARNING! conflicting data type names: /DWARF/winuser.h/ICONINFO - /winuser.h/ICONINFO


// WARNING! conflicting data type names: /DWARF/winuser.h/HARDWAREINPUT - /winuser.h/HARDWAREINPUT


// WARNING! conflicting data type names: /DWARF/winuser.h/HOOKPROC - /winuser.h/HOOKPROC


// WARNING! conflicting data type names: /DWARF/winuser.h/tagWINDOWINFO - /winuser.h/tagWINDOWINFO


// WARNING! conflicting data type names: /DWARF/winuser.h/LPPAINTSTRUCT - /winuser.h/LPPAINTSTRUCT

typedef struct tagDRAWITEMSTRUCT tagDRAWITEMSTRUCT, *PtagDRAWITEMSTRUCT;

typedef struct tagDRAWITEMSTRUCT DRAWITEMSTRUCT;

struct tagDRAWITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    UINT itemAction;
    UINT itemState;
    HWND hwndItem;
    HDC hDC;
    RECT rcItem;
    ULONG_PTR itemData;
};


// WARNING! conflicting data type names: /DWARF/winuser.h/DLGTEMPLATE - /winuser.h/DLGTEMPLATE


// WARNING! conflicting data type names: /DWARF/winuser.h/WNDPROC - /winuser.h/WNDPROC


// WARNING! conflicting data type names: /DWARF/winuser.h/LPCDLGTEMPLATEW - /winuser.h/LPCDLGTEMPLATEW


// WARNING! conflicting data type names: /DWARF/winuser.h/_ICONINFO - /winuser.h/_ICONINFO


// WARNING! conflicting data type names: /DWARF/winuser.h/LPINPUT - /winuser.h/LPINPUT


// WARNING! conflicting data type names: /DWARF/winuser.h/FLASHWINFO - /winuser.h/FLASHWINFO


// WARNING! conflicting data type names: /DWARF/winuser.h/PAINTSTRUCT - /winuser.h/PAINTSTRUCT


// WARNING! conflicting data type names: /DWARF/winuser.h/WNDENUMPROC - /winuser.h/WNDENUMPROC


// WARNING! conflicting data type names: /DWARF/winuser.h/tagCHANGEFILTERSTRUCT - /winuser.h/tagCHANGEFILTERSTRUCT


// WARNING! conflicting data type names: /DWARF/winuser.h/TIMERPROC - /winuser.h/TIMERPROC

typedef LPCDLGTEMPLATEW LPCDLGTEMPLATE;


// WARNING! conflicting data type names: /DWARF/winuser.h/tagHARDWAREINPUT - /winuser.h/tagHARDWAREINPUT

typedef struct tagNONCLIENTMETRICSW tagNONCLIENTMETRICSW, *PtagNONCLIENTMETRICSW;

typedef struct tagNONCLIENTMETRICSW NONCLIENTMETRICSW;

typedef NONCLIENTMETRICSW NONCLIENTMETRICS;


// WARNING! conflicting data type names: /DWARF/wingdi.h/LOGFONTW - /wingdi.h/LOGFONTW

struct tagNONCLIENTMETRICSW {
    UINT cbSize;
    int iBorderWidth;
    int iScrollWidth;
    int iScrollHeight;
    int iCaptionWidth;
    int iCaptionHeight;
    LOGFONTW lfCaptionFont;
    int iSmCaptionWidth;
    int iSmCaptionHeight;
    LOGFONTW lfSmCaptionFont;
    int iMenuWidth;
    int iMenuHeight;
    LOGFONTW lfMenuFont;
    LOGFONTW lfStatusFont;
    LOGFONTW lfMessageFont;
    int iPaddedBorderWidth;
};

typedef struct tagHIGHCONTRASTW tagHIGHCONTRASTW, *PtagHIGHCONTRASTW;

typedef struct tagHIGHCONTRASTW HIGHCONTRASTW;

struct tagHIGHCONTRASTW {
    UINT cbSize;
    DWORD dwFlags;
    LPWSTR lpszDefaultScheme;
};

typedef struct tagMOUSEHOOKSTRUCT tagMOUSEHOOKSTRUCT, *PtagMOUSEHOOKSTRUCT;

typedef struct tagMOUSEHOOKSTRUCT MOUSEHOOKSTRUCT;


// WARNING! conflicting data type names: /DWARF/windef.h/POINT - /WinDef.h/POINT

struct tagMOUSEHOOKSTRUCT {
    POINT pt;
    HWND hwnd;
    UINT wHitTestCode;
    ULONG_PTR dwExtraInfo;
};


// WARNING! conflicting data type names: /DWARF/winuser.h/tagMSG - /winuser.h/tagMSG


// WARNING! conflicting data type names: /DWARF/winuser.h/LPTPMPARAMS - /winuser.h/LPTPMPARAMS


// WARNING! conflicting data type names: /DWARF/winuser.h/tagTPMPARAMS - /winuser.h/tagTPMPARAMS


// WARNING! conflicting data type names: /DWARF/winuser.h/WINDOWPLACEMENT - /winuser.h/WINDOWPLACEMENT


// WARNING! conflicting data type names: /DWARF/winuser.h/MOUSEINPUT - /winuser.h/MOUSEINPUT


// WARNING! conflicting data type names: /DWARF/winuser.h/KEYBDINPUT - /winuser.h/KEYBDINPUT


// WARNING! conflicting data type names: /DWARF/winuser.h/TPMPARAMS - /winuser.h/TPMPARAMS


// WARNING! conflicting data type names: /DWARF/winuser.h/MSG - /winuser.h/MSG


// WARNING! conflicting data type names: /DWARF/winuser.h/tagPAINTSTRUCT - /winuser.h/tagPAINTSTRUCT


// WARNING! conflicting data type names: /DWARF/winuser.h/tagKEYBDINPUT - /winuser.h/tagKEYBDINPUT


// WARNING! conflicting data type names: /DWARF/winuser.h/PICONINFO - /winuser.h/PICONINFO


// WARNING! conflicting data type names: /DWARF/winuser.h/tagMOUSEINPUT - /winuser.h/tagMOUSEINPUT

typedef struct tagWINDOWINFO WINDOWINFO;


// WARNING! conflicting data type names: /DWARF/winuser.h/tagWINDOWPLACEMENT - /winuser.h/tagWINDOWPLACEMENT


// WARNING! conflicting data type names: /DWARF/winuser.h/LPDRAWTEXTPARAMS - /winuser.h/LPDRAWTEXTPARAMS


// WARNING! conflicting data type names: /DWARF/winuser.h/WINEVENTPROC - /winuser.h/WINEVENTPROC


// WARNING! conflicting data type names: /DWARF/winuser.h/DLGPROC - /winuser.h/DLGPROC

typedef NMHDR *LPNMHDR;

typedef union anon_union_32_3_8379b1dd_for_tagINPUT_1 anon_union_32_3_8379b1dd_for_tagINPUT_1, *Panon_union_32_3_8379b1dd_for_tagINPUT_1;

union anon_union_32_3_8379b1dd_for_tagINPUT_1 {
    MOUSEINPUT mi;
    KEYBDINPUT ki;
    HARDWAREINPUT hi;
};

typedef struct lzx_output_bitstream lzx_output_bitstream, *Plzx_output_bitstream;

struct lzx_output_bitstream {
    machine_word_t bitbuf;
    machine_word_t bitcount;
    u8 *start;
    u8 *next;
    u8 *end;
};

typedef struct lzx_codes lzx_codes, *Plzx_codes;

typedef struct lzx_codewords lzx_codewords, *Plzx_codewords;

typedef struct lzx_lens lzx_lens, *Plzx_lens;

struct lzx_codewords {
    u32 main[656];
    u32 len[249];
    u32 aligned[8];
};

struct lzx_lens {
    u8 main[657];
    u8 len[250];
    u8 aligned[8];
};

struct lzx_codes {
    struct lzx_codewords codewords;
    struct lzx_lens lens;
};

typedef struct lzx_sequence lzx_sequence, *Plzx_sequence;

struct lzx_sequence {
    u32 litrunlen_and_matchlen;
    u32 adjusted_offset_and_mainsym;
};

typedef struct lzx_lru_queue lzx_lru_queue, *Plzx_lru_queue;

struct lzx_lru_queue {
    u64 R;
};

typedef struct lzx_optimum_node lzx_optimum_node, *Plzx_optimum_node;

struct lzx_optimum_node {
    u32 cost;
    u32 item;
};

typedef struct lzx_block_split_stats lzx_block_split_stats, *Plzx_block_split_stats;

struct lzx_block_split_stats {
    u32 new_observations[10];
    u32 observations[10];
    u32 num_new_observations;
    u32 num_observations;
};

typedef struct lzx_costs lzx_costs, *Plzx_costs;

struct lzx_costs {
    u16 match_cost[50][256];
    u32 main[656];
    u32 len[249];
    u32 aligned[8];
};

typedef struct lzx_freqs lzx_freqs, *Plzx_freqs;

struct lzx_freqs {
    u32 main[656];
    u32 len[249];
    u32 aligned[8];
};

typedef struct lzx_compressor lzx_compressor, *Plzx_compressor;

typedef union anon_union_5376080_2_ecfd7102_for_lzx_compressor_15 anon_union_5376080_2_ecfd7102_for_lzx_compressor_15, *Panon_union_5376080_2_ecfd7102_for_lzx_compressor_15;

typedef struct anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0 anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0, *Panon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0;

typedef struct anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1 anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1, *Panon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1;

typedef union anon_union_393216_2_176ef8bb_for_anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0_0 anon_union_393216_2_176ef8bb_for_anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0_0, *Panon_union_393216_2_176ef8bb_for_anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0_0;

typedef struct lz_match lz_match, *Plz_match;

typedef union anon_union_540672_2_97cb3b9b_for_anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1_3 anon_union_540672_2_97cb3b9b_for_anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1_3, *Panon_union_540672_2_97cb3b9b_for_anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1_3;

typedef struct hc_matchfinder_16 hc_matchfinder_16, *Phc_matchfinder_16;

typedef struct hc_matchfinder_32 hc_matchfinder_32, *Phc_matchfinder_32;

typedef struct bt_matchfinder_16 bt_matchfinder_16, *Pbt_matchfinder_16;

typedef struct bt_matchfinder_32 bt_matchfinder_32, *Pbt_matchfinder_32;

struct hc_matchfinder_32 {
    u32 hash3_tab[32768];
    u32 hash4_tab[65536];
    u32 next_tab[0];
};

struct bt_matchfinder_16 {
    u16 hash2_tab[4096];
    u16 hash3_tab[32768][2];
    u16 hash4_tab[65536];
    u16 child_tab[0];
};

struct bt_matchfinder_32 {
    u32 hash2_tab[4096];
    u32 hash3_tab[32768][2];
    u32 hash4_tab[65536];
    u32 child_tab[0];
};

union anon_union_540672_2_97cb3b9b_for_anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1_3 {
    struct bt_matchfinder_16 bt_mf_16;
    struct bt_matchfinder_32 bt_mf_32;
};

struct lz_match {
    u32 length;
    u32 offset;
};

struct anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1 {
    struct lzx_optimum_node optimum_nodes[100257];
    struct lzx_costs costs;
    struct lz_match match_cache[500512];
    union anon_union_540672_2_97cb3b9b_for_anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1_3 field_3;
    undefined field4_0x52084c;
    undefined field5_0x52084d;
    undefined field6_0x52084e;
    undefined field7_0x52084f;
};

struct hc_matchfinder_16 {
    u16 hash3_tab[32768];
    u16 hash4_tab[65536];
    u16 next_tab[0];
};

union anon_union_393216_2_176ef8bb_for_anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0_0 {
    struct hc_matchfinder_16 hc_mf_16;
    struct hc_matchfinder_32 hc_mf_32;
};

struct anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0 {
    union anon_union_393216_2_176ef8bb_for_anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0_0 field_0;
};

union anon_union_5376080_2_ecfd7102_for_lzx_compressor_15 {
    struct anon_struct_393216_1_2f67eb89_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_0 field_0;
    struct anon_struct_5376080_4_19fc1960_for_anon_union_5376080_2_ecfd7102_for_lzx_compressor_15_1 field_1;
};

struct lzx_compressor {
    void *in_buffer;
    _Bool destructive;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    void (*impl)(struct lzx_compressor *, u8 *, size_t, struct lzx_output_bitstream *);
    uint window_order;
    uint num_main_syms;
    uint nice_match_length;
    uint max_search_depth;
    uint num_optim_passes;
    struct lzx_freqs freqs;
    struct lzx_block_split_stats split_stats;
    struct lzx_codes codes[2];
    uint codes_index;
    undefined field19_0x327c;
    undefined field20_0x327d;
    undefined field21_0x327e;
    undefined field22_0x327f;
    struct lzx_sequence chosen_sequences[50001];
    u8 offset_slot_tab_1[32768];
    u8 offset_slot_tab_2[128];
    union anon_union_5376080_2_ecfd7102_for_lzx_compressor_15 field_15;
};

typedef union anon_union_4_2_947300a4 anon_union_4_2_947300a4, *Panon_union_4_2_947300a4;

union anon_union_4_2_947300a4 {
    float f;
    s32 i;
};

typedef struct anon_struct_24_5_b6274b37 anon_struct_24_5_b6274b37, *Panon_struct_24_5_b6274b37;

struct anon_struct_24_5_b6274b37 {
    tchar *name;
    u32 min_chunk_size;
    u32 max_chunk_size;
    u32 default_nonsolid_chunk_size;
    u32 default_solid_chunk_size;
};

typedef enum tagCOINIT {
    COINIT_MULTITHREADED=0,
    COINIT_APARTMENTTHREADED=2,
    COINIT_DISABLE_OLE1DDE=4,
    COINIT_SPEED_OVER_MEMORY=8
} tagCOINIT;

typedef void (*_invalid_parameter_handler)(wchar_t *, wchar_t *, wchar_t *, uint, uintptr_t);

typedef struct lzx_decompressor lzx_decompressor, *Plzx_decompressor;

typedef union anon_union_256_2_4c8514c2_for_lzx_decompressor_4 anon_union_256_2_4c8514c2_for_lzx_decompressor_4, *Panon_union_256_2_4c8514c2_for_lzx_decompressor_4;

typedef union anon_union_1168_3_9bd95684_for_lzx_decompressor_5 anon_union_1168_3_9bd95684_for_lzx_decompressor_5, *Panon_union_1168_3_9bd95684_for_lzx_decompressor_5;

typedef union anon_union_1380_4_70902a9e_for_lzx_decompressor_6 anon_union_1380_4_70902a9e_for_lzx_decompressor_6, *Panon_union_1380_4_70902a9e_for_lzx_decompressor_6;

union anon_union_256_2_4c8514c2_for_lzx_decompressor_4 {
    u16 alignedcode_decode_table[128];
    u8 alignedcode_lens[8];
};

union anon_union_1168_3_9bd95684_for_lzx_decompressor_5 {
    u16 precode_decode_table[582];
    u8 precode_lens[20];
    u8 extra_offset_bits[50];
    undefined1 field3[1168]; // Automatically generated padding to match DWARF declared size
};

union anon_union_1380_4_70902a9e_for_lzx_decompressor_6 {
    u16 maincode_working_space[690];
    u16 lencode_working_space[283];
    u16 alignedcode_working_space[24];
    u16 precode_working_space[52];
};

struct lzx_decompressor {
    u16 maincode_decode_table[2726];
    u8 maincode_lens[706];
    undefined field2_0x180e;
    undefined field3_0x180f;
    u16 lencode_decode_table[878];
    u8 lencode_lens[299];
    undefined field6_0x2017;
    undefined field7_0x2018;
    undefined field8_0x2019;
    undefined field9_0x201a;
    undefined field10_0x201b;
    undefined field11_0x201c;
    undefined field12_0x201d;
    undefined field13_0x201e;
    undefined field14_0x201f;
    union anon_union_256_2_4c8514c2_for_lzx_decompressor_4 field_4;
    union anon_union_1168_3_9bd95684_for_lzx_decompressor_5 field_5;
    union anon_union_1380_4_70902a9e_for_lzx_decompressor_6 field_6;
    uint window_order;
    uint num_main_syms;
    u8 extra_offset_bits_minus_aligned[50];
    undefined field21_0x2b4e;
    undefined field22_0x2b4f;
};

typedef enum D2D1_LINE_JOIN {
    D2D1_LINE_JOIN_MITER=0,
    D2D1_LINE_JOIN_BEVEL=1,
    D2D1_LINE_JOIN_ROUND=2,
    D2D1_LINE_JOIN_MITER_OR_BEVEL=3,
    D2D1_LINE_JOIN_FORCE_DWORD=4294967295
} D2D1_LINE_JOIN;

typedef enum D2D1_CAP_STYLE {
    D2D1_CAP_STYLE_FLAT=0,
    D2D1_CAP_STYLE_SQUARE=1,
    D2D1_CAP_STYLE_ROUND=2,
    D2D1_CAP_STYLE_TRIANGLE=3,
    D2D1_CAP_STYLE_FORCE_DWORD=4294967295
} D2D1_CAP_STYLE;

typedef enum D2D1_FACTORY_TYPE {
    D2D1_FACTORY_TYPE_SINGLE_THREADED=0,
    D2D1_FACTORY_TYPE_MULTI_THREADED=1,
    D2D1_FACTORY_TYPE_FORCE_DWORD=4294967295
} D2D1_FACTORY_TYPE;

typedef enum D2D1_GAMMA {
    D2D1_GAMMA_2_2=0,
    D2D1_GAMMA_1_0=1,
    D2D1_GAMMA_FORCE_DWORD=4294967295
} D2D1_GAMMA;

typedef struct _WIM_PROVIDER_EXTERNAL_INFO _WIM_PROVIDER_EXTERNAL_INFO, *P_WIM_PROVIDER_EXTERNAL_INFO;

typedef struct _WIM_PROVIDER_EXTERNAL_INFO WIM_PROVIDER_EXTERNAL_INFO;

struct _WIM_PROVIDER_EXTERNAL_INFO {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER DataSourceId;
    UCHAR ResourceHash[20];
};

typedef struct WimOverlay_dat_entry_1 WimOverlay_dat_entry_1, *PWimOverlay_dat_entry_1;

struct WimOverlay_dat_entry_1 {
    le64 data_source_id;
    le32 entry_2_offset;
    le32 entry_2_length;
    le32 wim_type;
    le32 wim_index;
    u8 guid[16];
};

typedef struct _WIM_PROVIDER_ADD_OVERLAY_INPUT _WIM_PROVIDER_ADD_OVERLAY_INPUT, *P_WIM_PROVIDER_ADD_OVERLAY_INPUT;

struct _WIM_PROVIDER_ADD_OVERLAY_INPUT {
    ULONG WimType;
    ULONG WimIndex;
    ULONG WimFileNameOffset;
    ULONG WimFileNameLength;
};

typedef struct WimOverlay_dat_entry_2 WimOverlay_dat_entry_2, *PWimOverlay_dat_entry_2;

typedef struct anon_struct_84_13_11f0abaa_for_WimOverlay_dat_entry_2_5 anon_struct_84_13_11f0abaa_for_WimOverlay_dat_entry_2_5, *Panon_struct_84_13_11f0abaa_for_WimOverlay_dat_entry_2_5;

typedef union anon_union_16_2_43a99613_for_partition anon_union_16_2_43a99613_for_partition, *Panon_union_16_2_43a99613_for_partition;

typedef union anon_union_16_2_43a99613_for_disk anon_union_16_2_43a99613_for_disk, *Panon_union_16_2_43a99613_for_disk;

typedef struct anon_struct_16_2_f4eb0cde_for_mbr anon_struct_16_2_f4eb0cde_for_mbr, *Panon_struct_16_2_f4eb0cde_for_mbr;

typedef struct anon_struct_16_1_f1e84269_for_gpt anon_struct_16_1_f1e84269_for_gpt, *Panon_struct_16_1_f1e84269_for_gpt;

typedef struct anon_struct_16_2_9cfa1099_for_mbr anon_struct_16_2_9cfa1099_for_mbr, *Panon_struct_16_2_9cfa1099_for_mbr;

typedef struct anon_struct_16_1_1b1dc28b_for_gpt anon_struct_16_1_1b1dc28b_for_gpt, *Panon_struct_16_1_1b1dc28b_for_gpt;

struct anon_struct_16_1_1b1dc28b_for_gpt {
    u8 disk_guid[16];
};

struct anon_struct_16_2_9cfa1099_for_mbr {
    le32 disk_id;
    le32 padding[3];
};

union anon_union_16_2_43a99613_for_disk {
    struct anon_struct_16_2_9cfa1099_for_mbr mbr;
    struct anon_struct_16_1_1b1dc28b_for_gpt gpt;
};

struct anon_struct_16_2_f4eb0cde_for_mbr {
    le64 part_start_offset;
    le64 padding;
};

struct anon_struct_16_1_f1e84269_for_gpt {
    u8 part_unique_guid[16];
};

union anon_union_16_2_43a99613_for_partition {
    struct anon_struct_16_2_f4eb0cde_for_mbr mbr;
    struct anon_struct_16_1_f1e84269_for_gpt gpt;
};

struct anon_struct_84_13_11f0abaa_for_WimOverlay_dat_entry_2_5 {
    le32 unknown_0x14;
    le32 inner_struct_size;
    le32 unknown_0x1C;
    le32 unknown_0x20;
    le32 unknown_0x24;
    le32 unknown_0x28;
    le32 unknown_0x2C;
    union anon_union_16_2_43a99613_for_partition partition;
    le32 unknown_0x40;
    le32 partition_table_type;
    union anon_union_16_2_43a99613_for_disk disk;
    le32 unknown_0x58[4];
    utf16lechar wim_file_name[0];
};

struct WimOverlay_dat_entry_2 {
    le32 unknown_0x00;
    le32 unknown_0x04;
    le32 entry_2_length;
    le32 unknown_0x0C;
    le32 unknown_0x10;
    struct anon_struct_84_13_11f0abaa_for_WimOverlay_dat_entry_2_5 field_5;
};

typedef struct _WIM_PROVIDER_ADD_OVERLAY_INPUT WIM_PROVIDER_ADD_OVERLAY_INPUT;

typedef struct WimOverlay_dat_header WimOverlay_dat_header, *PWimOverlay_dat_header;

struct WimOverlay_dat_header {
    le32 magic;
    le32 wim_provider_version;
    le32 unknown_0x08;
    le32 num_entries;
    le64 next_data_source_id;
    struct WimOverlay_dat_entry_1 entry_1s[0];
};

typedef struct wim_provider_rpdata wim_provider_rpdata, *Pwim_provider_rpdata;

struct wim_provider_rpdata {
    le32 version;
    le32 flags;
    le64 data_source_id;
    u8 unnamed_data_stream_hash[20];
    u8 blob_table_hash[20];
    le64 unnamed_data_stream_size;
    le64 unnamed_data_stream_size_in_wim;
    le64 unnamed_data_stream_offset_in_wim;
};

typedef struct group_data group_data, *Pgroup_data;

struct group_data {
    int limit[21];
    int base[20];
    int permute[258];
    int minLen;
    int maxLen;
};

typedef struct bunzip_data bunzip_data, *Pbunzip_data;


// WARNING! conflicting data type names: /DWARF/setjmp.h/_JBTYPE - /setjmp.h/_JBTYPE

struct bunzip_data {
    uint inbufBitCount;
    uint inbufBits;
    int in_fd;
    int out_fd;
    int inbufCount;
    int inbufPos;
    uint8_t *inbuf;
    int writeCopies;
    int writePos;
    int writeRunCountdown;
    int writeCount;
    int writeCurrent;
    uint32_t headerCRC;
    uint32_t totalCRC;
    uint32_t writeCRC;
    uint32_t *dbuf;
    uint dbufSize;
    jmp_buf *jmpbuf;
    uint32_t crc32Table[256];
    uint8_t selectors[32768];
    struct group_data groups[6];
};

typedef _JBTYPE jmp_buf[16];


// WARNING! conflicting data type names: /DWARF/decompress_bunzip2.c/start_bunzip/anon_enum_32 - /DWARF/format.h/anon_enum_32

typedef int (*line_mangle_t)(tchar *, tchar *, ulong);

typedef struct text_file_section text_file_section, *Ptext_file_section;

struct text_file_section {
    tchar *name;
    struct string_list *strings;
};

typedef struct FSE_DecompressWksp FSE_DecompressWksp, *PFSE_DecompressWksp;

struct FSE_DecompressWksp {
    short ncount[256];
};


// WARNING! conflicting data type names: /DWARF/uxtheme.h/BP_PAINTPARAMS - /uxtheme.h/BP_PAINTPARAMS

typedef struct HANIMATIONBUFFER__ HANIMATIONBUFFER__, *PHANIMATIONBUFFER__;

struct HANIMATIONBUFFER__ {
    int unused;
};


// WARNING! conflicting data type names: /DWARF/uxtheme.h/HANIMATIONBUFFER - /uxtheme.h/HANIMATIONBUFFER


// WARNING! conflicting data type names: /DWARF/uxtheme.h/DTTOPTS - /uxtheme.h/DTTOPTS


// WARNING! conflicting data type names: /DWARF/uxtheme.h/_BP_ANIMATIONPARAMS - /uxtheme.h/_BP_ANIMATIONPARAMS


// WARNING! conflicting data type names: /DWARF/uxtheme.h/_BP_PAINTPARAMS - /uxtheme.h/_BP_PAINTPARAMS


// WARNING! conflicting data type names: /DWARF/uxtheme.h/BP_ANIMATIONPARAMS - /uxtheme.h/BP_ANIMATIONPARAMS


// WARNING! conflicting data type names: /DWARF/uxtheme.h/_DTTOPTS - /uxtheme.h/_DTTOPTS


// WARNING! conflicting data type names: /DWARF/uxtheme.h/DTT_CALLBACK_PROC - /uxtheme.h/DTT_CALLBACK_PROC

typedef struct S_NTFSSECT_EXTENT_ S_NTFSSECT_EXTENT_, *PS_NTFSSECT_EXTENT_;

struct S_NTFSSECT_EXTENT_ {
    LARGE_INTEGER FirstVcn;
    LARGE_INTEGER NextVcn;
    LARGE_INTEGER FirstLcn;
};

typedef struct S_NTFSSECT_EXTENT_ S_NTFSSECT_EXTENT;

typedef struct S_NTFSSECT_XPFUNCS_ S_NTFSSECT_XPFUNCS_, *PS_NTFSSECT_XPFUNCS_;

typedef struct S_NTFSSECT_XPFUNCS_ S_NTFSSECT_XPFUNCS;

struct S_NTFSSECT_XPFUNCS_ {
    DWORD Size;
    HMODULE Kernel32;
    BOOL (*GetVolumePathNameW)(LPCSTR, LPCSTR, DWORD);
    BOOL (*GetDiskFreeSpaceW)(LPCSTR, LPDWORD, LPDWORD, LPDWORD, LPDWORD);
};

typedef struct S_NTFSSECT_VOLINFO_ S_NTFSSECT_VOLINFO_, *PS_NTFSSECT_VOLINFO_;

typedef struct S_NTFSSECT_VOLINFO_ S_NTFSSECT_VOLINFO;

struct S_NTFSSECT_VOLINFO_ {
    DWORD Size;
    HANDLE Handle;
    DWORD BytesPerSector;
    DWORD SectorsPerCluster;
    LARGE_INTEGER PartitionLba;
};

typedef struct _VIRTUAL_STORAGE_TYPE _VIRTUAL_STORAGE_TYPE, *P_VIRTUAL_STORAGE_TYPE;

struct _VIRTUAL_STORAGE_TYPE {
    ULONG DeviceId;
    GUID VendorId;
};

typedef struct _GET_VIRTUAL_DISK_INFO _GET_VIRTUAL_DISK_INFO, *P_GET_VIRTUAL_DISK_INFO;

typedef enum _GET_VIRTUAL_DISK_INFO_VERSION {
    GET_VIRTUAL_DISK_INFO_UNSPECIFIED=0,
    GET_VIRTUAL_DISK_INFO_SIZE=1,
    GET_VIRTUAL_DISK_INFO_IDENTIFIER=2,
    GET_VIRTUAL_DISK_INFO_PARENT_LOCATION=3,
    GET_VIRTUAL_DISK_INFO_PARENT_IDENTIFIER=4,
    GET_VIRTUAL_DISK_INFO_PARENT_TIMESTAMP=5,
    GET_VIRTUAL_DISK_INFO_VIRTUAL_STORAGE_TYPE=6,
    GET_VIRTUAL_DISK_INFO_PROVIDER_SUBTYPE=7,
    GET_VIRTUAL_DISK_INFO_IS_4K_ALIGNED=8,
    GET_VIRTUAL_DISK_INFO_PHYSICAL_DISK=9,
    GET_VIRTUAL_DISK_INFO_VHD_PHYSICAL_SECTOR_SIZE=10,
    GET_VIRTUAL_DISK_INFO_SMALLEST_SAFE_VIRTUAL_SIZE=11,
    GET_VIRTUAL_DISK_INFO_FRAGMENTATION=12,
    GET_VIRTUAL_DISK_INFO_IS_LOADED=13,
    GET_VIRTUAL_DISK_INFO_VIRTUAL_DISK_ID=14,
    GET_VIRTUAL_DISK_INFO_CHANGE_TRACKING_STATE=15
} _GET_VIRTUAL_DISK_INFO_VERSION;

typedef enum _GET_VIRTUAL_DISK_INFO_VERSION GET_VIRTUAL_DISK_INFO_VERSION;

typedef union anon_union_24_15_8d8bc119_for__GET_VIRTUAL_DISK_INFO_1 anon_union_24_15_8d8bc119_for__GET_VIRTUAL_DISK_INFO_1, *Panon_union_24_15_8d8bc119_for__GET_VIRTUAL_DISK_INFO_1;

typedef struct anon_struct_24_4_e92ea358_for_Size anon_struct_24_4_e92ea358_for_Size, *Panon_struct_24_4_e92ea358_for_Size;

typedef struct anon_struct_8_2_21ecebfa_for_ParentLocation anon_struct_8_2_21ecebfa_for_ParentLocation, *Panon_struct_8_2_21ecebfa_for_ParentLocation;

typedef struct _VIRTUAL_STORAGE_TYPE VIRTUAL_STORAGE_TYPE;

typedef struct anon_struct_12_3_905ce99e_for_PhysicalDisk anon_struct_12_3_905ce99e_for_PhysicalDisk, *Panon_struct_12_3_905ce99e_for_PhysicalDisk;

typedef struct anon_struct_12_3_3a8d2c20_for_ChangeTrackingState anon_struct_12_3_3a8d2c20_for_ChangeTrackingState, *Panon_struct_12_3_3a8d2c20_for_ChangeTrackingState;

struct anon_struct_12_3_3a8d2c20_for_ChangeTrackingState {
    WINBOOL Enabled;
    WINBOOL NewerChanges;
    WCHAR MostRecentId[1];
};

struct anon_struct_24_4_e92ea358_for_Size {
    ULONGLONG VirtualSize;
    ULONGLONG PhysicalSize;
    ULONG BlockSize;
    ULONG SectorSize;
};

struct anon_struct_12_3_905ce99e_for_PhysicalDisk {
    ULONG LogicalSectorSize;
    ULONG PhysicalSectorSize;
    WINBOOL IsRemote;
};

struct anon_struct_8_2_21ecebfa_for_ParentLocation {
    WINBOOL ParentResolved;
    WCHAR ParentLocationBuffer[1];
};

union anon_union_24_15_8d8bc119_for__GET_VIRTUAL_DISK_INFO_1 {
    struct anon_struct_24_4_e92ea358_for_Size Size;
    GUID Identifier;
    struct anon_struct_8_2_21ecebfa_for_ParentLocation ParentLocation;
    GUID ParentIdentifier;
    ULONG ParentTimestamp;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    ULONG ProviderSubtype;
    WINBOOL Is4kAligned;
    WINBOOL IsLoaded;
    struct anon_struct_12_3_905ce99e_for_PhysicalDisk PhysicalDisk;
    ULONG VhdPhysicalSectorSize;
    ULONGLONG SmallestSafeVirtualSize;
    ULONG FragmentationPercentage;
    GUID VirtualDiskId;
    struct anon_struct_12_3_3a8d2c20_for_ChangeTrackingState ChangeTrackingState;
};

struct _GET_VIRTUAL_DISK_INFO {
    GET_VIRTUAL_DISK_INFO_VERSION Version;
    union anon_union_24_15_8d8bc119_for__GET_VIRTUAL_DISK_INFO_1 field_1;
};

typedef struct _GET_VIRTUAL_DISK_INFO GET_VIRTUAL_DISK_INFO;

typedef enum _DETACH_VIRTUAL_DISK_FLAG {
    DETACH_VIRTUAL_DISK_FLAG_NONE=0
} _DETACH_VIRTUAL_DISK_FLAG;

typedef enum _VIRTUAL_DISK_ACCESS_MASK {
    VIRTUAL_DISK_ACCESS_NONE=0,
    VIRTUAL_DISK_ACCESS_ATTACH_RO=65536,
    VIRTUAL_DISK_ACCESS_ATTACH_RW=131072,
    VIRTUAL_DISK_ACCESS_DETACH=262144,
    VIRTUAL_DISK_ACCESS_GET_INFO=524288,
    VIRTUAL_DISK_ACCESS_READ=851968,
    VIRTUAL_DISK_ACCESS_CREATE=1048576,
    VIRTUAL_DISK_ACCESS_METAOPS=2097152,
    VIRTUAL_DISK_ACCESS_WRITABLE=3276800,
    VIRTUAL_DISK_ACCESS_ALL=4128768
} _VIRTUAL_DISK_ACCESS_MASK;

typedef enum _VIRTUAL_DISK_ACCESS_MASK VIRTUAL_DISK_ACCESS_MASK;

typedef enum _OPEN_VIRTUAL_DISK_VERSION {
    OPEN_VIRTUAL_DISK_VERSION_UNSPECIFIED=0,
    OPEN_VIRTUAL_DISK_VERSION_1=1,
    OPEN_VIRTUAL_DISK_VERSION_2=2
} _OPEN_VIRTUAL_DISK_VERSION;

typedef struct _VIRTUAL_DISK_PROGRESS _VIRTUAL_DISK_PROGRESS, *P_VIRTUAL_DISK_PROGRESS;

struct _VIRTUAL_DISK_PROGRESS {
    DWORD OperationStatus;
    ULONGLONG CurrentValue;
    ULONGLONG CompletionValue;
};

typedef enum _CREATE_VIRTUAL_DISK_FLAG {
    CREATE_VIRTUAL_DISK_FLAG_NONE=0,
    CREATE_VIRTUAL_DISK_FLAG_FULL_PHYSICAL_ALLOCATION=1,
    CREATE_VIRTUAL_DISK_FLAG_PREVENT_WRITES_TO_SOURCE_DISK=2,
    CREATE_VIRTUAL_DISK_FLAG_DO_NOT_COPY_METADATA_FROM_PARENT=4
} _CREATE_VIRTUAL_DISK_FLAG;

typedef enum _DETACH_VIRTUAL_DISK_FLAG DETACH_VIRTUAL_DISK_FLAG;

typedef enum _ATTACH_VIRTUAL_DISK_VERSION {
    ATTACH_VIRTUAL_DISK_VERSION_UNSPECIFIED=0,
    ATTACH_VIRTUAL_DISK_VERSION_1=1
} _ATTACH_VIRTUAL_DISK_VERSION;

typedef enum _ATTACH_VIRTUAL_DISK_FLAG {
    ATTACH_VIRTUAL_DISK_FLAG_NONE=0,
    ATTACH_VIRTUAL_DISK_FLAG_READ_ONLY=1,
    ATTACH_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER=2,
    ATTACH_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME=4,
    ATTACH_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST=8
} _ATTACH_VIRTUAL_DISK_FLAG;

typedef struct _VIRTUAL_DISK_PROGRESS *PVIRTUAL_DISK_PROGRESS;

typedef struct _ATTACH_VIRTUAL_DISK_PARAMETERS _ATTACH_VIRTUAL_DISK_PARAMETERS, *P_ATTACH_VIRTUAL_DISK_PARAMETERS;

typedef struct _ATTACH_VIRTUAL_DISK_PARAMETERS *PATTACH_VIRTUAL_DISK_PARAMETERS;

typedef enum _ATTACH_VIRTUAL_DISK_VERSION ATTACH_VIRTUAL_DISK_VERSION;

typedef union anon_union_4_1_757507f7_for__ATTACH_VIRTUAL_DISK_PARAMETERS_1 anon_union_4_1_757507f7_for__ATTACH_VIRTUAL_DISK_PARAMETERS_1, *Panon_union_4_1_757507f7_for__ATTACH_VIRTUAL_DISK_PARAMETERS_1;

typedef struct anon_struct_4_1_d6e414c6_for_Version1 anon_struct_4_1_d6e414c6_for_Version1, *Panon_struct_4_1_d6e414c6_for_Version1;

struct anon_struct_4_1_d6e414c6_for_Version1 {
    ULONG Reserved;
};

union anon_union_4_1_757507f7_for__ATTACH_VIRTUAL_DISK_PARAMETERS_1 {
    struct anon_struct_4_1_d6e414c6_for_Version1 Version1;
};

struct _ATTACH_VIRTUAL_DISK_PARAMETERS {
    ATTACH_VIRTUAL_DISK_VERSION Version;
    union anon_union_4_1_757507f7_for__ATTACH_VIRTUAL_DISK_PARAMETERS_1 field_1;
};

typedef enum _OPEN_VIRTUAL_DISK_FLAG {
    OPEN_VIRTUAL_DISK_FLAG_NONE=0,
    OPEN_VIRTUAL_DISK_FLAG_NO_PARENTS=1,
    OPEN_VIRTUAL_DISK_FLAG_BLANK_FILE=2,
    OPEN_VIRTUAL_DISK_FLAG_BOOT_DRIVE=4,
    OPEN_VIRTUAL_DISK_FLAG_CACHED_IO=8,
    OPEN_VIRTUAL_DISK_FLAG_CUSTOM_DIFF_CHAIN=16
} _OPEN_VIRTUAL_DISK_FLAG;

typedef enum _OPEN_VIRTUAL_DISK_FLAG OPEN_VIRTUAL_DISK_FLAG;

typedef enum _CREATE_VIRTUAL_DISK_FLAG CREATE_VIRTUAL_DISK_FLAG;

typedef struct _GET_VIRTUAL_DISK_INFO *PGET_VIRTUAL_DISK_INFO;

typedef struct _CREATE_VIRTUAL_DISK_PARAMETERS _CREATE_VIRTUAL_DISK_PARAMETERS, *P_CREATE_VIRTUAL_DISK_PARAMETERS;

typedef struct _CREATE_VIRTUAL_DISK_PARAMETERS *PCREATE_VIRTUAL_DISK_PARAMETERS;

typedef enum _CREATE_VIRTUAL_DISK_VERSION {
    CREATE_VIRTUAL_DISK_VERSION_UNSPECIFIED=0,
    CREATE_VIRTUAL_DISK_VERSION_1=1,
    CREATE_VIRTUAL_DISK_VERSION_2=2
} _CREATE_VIRTUAL_DISK_VERSION;

typedef enum _CREATE_VIRTUAL_DISK_VERSION CREATE_VIRTUAL_DISK_VERSION;

typedef union anon_union_120_2_aea0fec2_for__CREATE_VIRTUAL_DISK_PARAMETERS_1 anon_union_120_2_aea0fec2_for__CREATE_VIRTUAL_DISK_PARAMETERS_1, *Panon_union_120_2_aea0fec2_for__CREATE_VIRTUAL_DISK_PARAMETERS_1;

typedef struct anon_struct_48_6_b5625a42_for_Version1 anon_struct_48_6_b5625a42_for_Version1, *Panon_struct_48_6_b5625a42_for_Version1;

typedef struct anon_struct_120_11_9ae5752e_for_Version2 anon_struct_120_11_9ae5752e_for_Version2, *Panon_struct_120_11_9ae5752e_for_Version2;

struct anon_struct_120_11_9ae5752e_for_Version2 {
    GUID UniqueId;
    ULONGLONG MaximumSize;
    ULONG BlockSizeInBytes;
    ULONG SectorSizeInBytes;
    ULONG PhysicalSectorSizeInBytes;
    PCWSTR ParentPath;
    PCWSTR SourcePath;
    OPEN_VIRTUAL_DISK_FLAG OpenFlags;
    VIRTUAL_STORAGE_TYPE ParentVirtualStorageType;
    VIRTUAL_STORAGE_TYPE SourceVirtualStorageType;
    GUID ResiliencyGuid;
};

struct anon_struct_48_6_b5625a42_for_Version1 {
    GUID UniqueId;
    ULONGLONG MaximumSize;
    ULONG BlockSizeInBytes;
    ULONG SectorSizeInBytes;
    PCWSTR ParentPath;
    PCWSTR SourcePath;
};

union anon_union_120_2_aea0fec2_for__CREATE_VIRTUAL_DISK_PARAMETERS_1 {
    struct anon_struct_48_6_b5625a42_for_Version1 Version1;
    struct anon_struct_120_11_9ae5752e_for_Version2 Version2;
};

struct _CREATE_VIRTUAL_DISK_PARAMETERS {
    CREATE_VIRTUAL_DISK_VERSION Version;
    union anon_union_120_2_aea0fec2_for__CREATE_VIRTUAL_DISK_PARAMETERS_1 field_1;
};

typedef enum _OPEN_VIRTUAL_DISK_VERSION OPEN_VIRTUAL_DISK_VERSION;

typedef struct _VIRTUAL_DISK_PROGRESS VIRTUAL_DISK_PROGRESS;

typedef enum _ATTACH_VIRTUAL_DISK_FLAG ATTACH_VIRTUAL_DISK_FLAG;

typedef struct _OPEN_VIRTUAL_DISK_PARAMETERS _OPEN_VIRTUAL_DISK_PARAMETERS, *P_OPEN_VIRTUAL_DISK_PARAMETERS;

typedef union anon_union_24_2_aea0fec2_for__OPEN_VIRTUAL_DISK_PARAMETERS_1 anon_union_24_2_aea0fec2_for__OPEN_VIRTUAL_DISK_PARAMETERS_1, *Panon_union_24_2_aea0fec2_for__OPEN_VIRTUAL_DISK_PARAMETERS_1;

typedef struct anon_struct_4_1_0d7ca65e_for_Version1 anon_struct_4_1_0d7ca65e_for_Version1, *Panon_struct_4_1_0d7ca65e_for_Version1;

typedef struct anon_struct_24_3_eebc28b8_for_Version2 anon_struct_24_3_eebc28b8_for_Version2, *Panon_struct_24_3_eebc28b8_for_Version2;

struct anon_struct_4_1_0d7ca65e_for_Version1 {
    ULONG RWDepth;
};

struct anon_struct_24_3_eebc28b8_for_Version2 {
    WINBOOL GetInfoOnly;
    WINBOOL ReadOnly;
    GUID ResiliencyGuid;
};

union anon_union_24_2_aea0fec2_for__OPEN_VIRTUAL_DISK_PARAMETERS_1 {
    struct anon_struct_4_1_0d7ca65e_for_Version1 Version1;
    struct anon_struct_24_3_eebc28b8_for_Version2 Version2;
};

struct _OPEN_VIRTUAL_DISK_PARAMETERS {
    OPEN_VIRTUAL_DISK_VERSION Version;
    union anon_union_24_2_aea0fec2_for__OPEN_VIRTUAL_DISK_PARAMETERS_1 field_1;
};

typedef struct _VIRTUAL_STORAGE_TYPE *PVIRTUAL_STORAGE_TYPE;

typedef struct _OPEN_VIRTUAL_DISK_PARAMETERS *POPEN_VIRTUAL_DISK_PARAMETERS;

typedef struct _ATTACH_VIRTUAL_DISK_PARAMETERS ATTACH_VIRTUAL_DISK_PARAMETERS;

typedef struct IGroupPolicyObject IGroupPolicyObject, *PIGroupPolicyObject;

typedef struct IGroupPolicyObjectVtbl IGroupPolicyObjectVtbl, *PIGroupPolicyObjectVtbl;

typedef enum _GROUP_POLICY_OBJECT_TYPE {
    GPOTypeLocal=0,
    GPOTypeRemote=1,
    GPOTypeDS=2
} _GROUP_POLICY_OBJECT_TYPE;

typedef enum _GROUP_POLICY_OBJECT_TYPE GROUP_POLICY_OBJECT_TYPE;

typedef struct _PSP _PSP, *P_PSP;

typedef struct _PSP *HPROPSHEETPAGE;

struct IGroupPolicyObject {
    struct IGroupPolicyObjectVtbl *lpVtbl;
};

struct IGroupPolicyObjectVtbl {
    HRESULT (*QueryInterface)(struct IGroupPolicyObject *, IID *, LPVOID *);
    ULONG (*AddRef)(struct IGroupPolicyObject *);
    ULONG (*Release)(struct IGroupPolicyObject *);
    HRESULT (*New)(struct IGroupPolicyObject *, LPOLESTR, LPOLESTR, DWORD);
    HRESULT (*OpenDSGPO)(struct IGroupPolicyObject *, LPOLESTR, DWORD);
    HRESULT (*OpenLocalMachineGPO)(struct IGroupPolicyObject *, DWORD);
    HRESULT (*OpenRemoteMachineGPO)(struct IGroupPolicyObject *, LPOLESTR, DWORD);
    HRESULT (*Save)(struct IGroupPolicyObject *, WINBOOL, WINBOOL, GUID *, GUID *);
    HRESULT (*Delete)(struct IGroupPolicyObject *);
    HRESULT (*GetName)(struct IGroupPolicyObject *, LPOLESTR, int);
    HRESULT (*GetDisplayName)(struct IGroupPolicyObject *, LPOLESTR, int);
    HRESULT (*SetDisplayName)(struct IGroupPolicyObject *, LPOLESTR);
    HRESULT (*GetPath)(struct IGroupPolicyObject *, LPOLESTR, int);
    HRESULT (*GetDSPath)(struct IGroupPolicyObject *, DWORD, LPOLESTR, int);
    HRESULT (*GetFileSysPath)(struct IGroupPolicyObject *, DWORD, LPOLESTR, int);
    HRESULT (*GetRegistryKey)(struct IGroupPolicyObject *, DWORD, HKEY *);
    HRESULT (*GetOptions)(struct IGroupPolicyObject *, DWORD *);
    HRESULT (*SetOptions)(struct IGroupPolicyObject *, DWORD, DWORD);
    HRESULT (*GetType)(struct IGroupPolicyObject *, GROUP_POLICY_OBJECT_TYPE *);
    HRESULT (*GetMachineName)(struct IGroupPolicyObject *, LPOLESTR, int);
    HRESULT (*GetPropertySheetPages)(struct IGroupPolicyObject *, HPROPSHEETPAGE **, UINT *);
};

struct _PSP {
};

typedef struct iso9660_br_s iso9660_br_s, *Piso9660_br_s;

typedef struct iso9660_br_s iso9660_br_t;

struct iso9660_br_s {
    uint8_t boot_id;
    uint8_t media_type;
    uint16_t load_seg;
    uint8_t system_type;
    uint8_t unused1;
    uint16_t num_sectors;
    uint32_t image_lsn;
    uint8_t unused2[20];
};

typedef enum strncpy_pad_check {
    ISO9660_NOCHECK=0,
    ISO9660_7BIT=1,
    ISO9660_ACHARS=2,
    ISO9660_DCHARS=3
} strncpy_pad_check;

typedef enum iso_extension_enum_s {
    ISO_EXTENSION_JOLIET_LEVEL1=1,
    ISO_EXTENSION_JOLIET_LEVEL2=2,
    ISO_EXTENSION_JOLIET_LEVEL3=4,
    ISO_EXTENSION_ROCK_RIDGE=8,
    ISO_EXTENSION_HIGH_SIERRA=16,
    ISO_EXTENSION_EL_TORITO=32
} iso_extension_enum_s;

typedef struct _CdioList _CdioList, *P_CdioList;

typedef struct _CdioList CdioList_t;

typedef CdioList_t CdioISO9660FileList_t;

typedef struct _CdioListNode _CdioListNode, *P_CdioListNode;

typedef struct _CdioListNode CdioListNode_t;

struct _CdioListNode {
    CdioList_t *list;
    CdioListNode_t *next;
    void *data;
};

struct _CdioList {
    uint length;
    CdioListNode_t *begin;
    CdioListNode_t *end;
};

typedef struct iso9660_brvd_s iso9660_brvd_s, *Piso9660_brvd_s;

typedef struct iso9660_brvd_s iso9660_brvd_t;

struct iso9660_brvd_s {
    uint8_t type;
    char id[5];
    uint8_t version;
    char system_id[32];
    uint8_t unused1[32];
    uint32_t boot_catalog_sector;
    uint8_t unused2[1973];
};

typedef enum iso_flag_enum_s {
    ISO_FILE=0,
    ISO_EXISTENCE=1,
    ISO_DIRECTORY=2,
    ISO_ASSOCIATED=4,
    ISO_RECORD=8,
    ISO_PROTECTION=16,
    ISO_DRESERVED1=32,
    ISO_DRESERVED2=64,
    ISO_MULTIEXTENT=128
} iso_flag_enum_s;

typedef CdioList_t CdioISO9660DirList_t;

typedef enum iso_vd_enum_s {
    ISO_VD_BOOT_RECORD=0,
    ISO_VD_PRIMARY=1,
    ISO_VD_SUPPLEMENTARY=2,
    ISO_VD_PARITION=3,
    ISO_VD_END=255
} iso_vd_enum_s;

typedef enum iso_enum1_s {
    ISO_PVD_SECTOR=16,
    ISO_EVD_SECTOR=17,
    LEN_ISONAME=31,
    ISO_MAX_SYSTEM_ID=32,
    MAX_ISONAME=37,
    ISO_MAX_PREPARER_ID=128,
    MAX_ISOPATHNAME=255,
    VIRTUAL_SECTORSIZE=512,
    ISO_BLOCKSIZE=2048
} iso_enum1_s;

typedef struct xlate xlate, *Pxlate;

struct xlate {
    int (*func)(ext2_filsys, blk_t *, int, void *);
    void *real_private;
};

typedef struct block_context block_context, *Pblock_context;

struct block_context {
    ext2_filsys fs;
    int (*func)(ext2_filsys, blk64_t *, e2_blkcnt_t, blk64_t, int, void *);
    e2_blkcnt_t bcount;
    int bsize;
    int flags;
    errcode_t errcode;
    char *ind_buf;
    char *dind_buf;
    char *tind_buf;
    void *priv_data;
};

typedef struct xlate64 xlate64, *Pxlate64;

struct xlate64 {
    int (*func)(ext2_filsys, blk_t *, e2_blkcnt_t, blk_t, int, void *);
    void *real_private;
};

typedef int (*fUserMathErr)(struct _exception *);

typedef struct cp_ext cp_ext, *Pcp_ext;

struct cp_ext {
    uint16_t cp[31];
    uint8_t ext[31];
};

typedef struct huft_t huft_t, *Phuft_t;

typedef union anon_union_8_2_947301a7_for_v anon_union_8_2_947301a7_for_v, *Panon_union_8_2_947301a7_for_v;

union anon_union_8_2_947301a7_for_v {
    uint n;
    struct huft_t *t;
};

struct huft_t {
    uchar e;
    uchar b;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    union anon_union_8_2_947301a7_for_v v;
};

typedef struct state_t state_t, *Pstate_t;

struct state_t {
    off64_t gunzip_bytes_out;
    uint32_t gunzip_crc;
    int gunzip_src_fd;
    uint gunzip_outbuf_count;
    uchar *gunzip_window;
    uint32_t *gunzip_crc_table;
    uint gunzip_bb;
    uchar gunzip_bk;
    uchar *bytebuffer;
    off64_t to_read;
    uint bytebuffer_offset;
    uint bytebuffer_size;
    uint inflate_codes_ml;
    uint inflate_codes_md;
    uint inflate_codes_bb;
    uint inflate_codes_k;
    uint inflate_codes_w;
    struct huft_t *inflate_codes_tl;
    struct huft_t *inflate_codes_td;
    uint inflate_codes_bl;
    uint inflate_codes_bd;
    uint inflate_codes_nn;
    uint inflate_codes_dd;
    smallint resume_copy;
    smallint method;
    smallint need_another_block;
    smallint end_reached;
    uint inflate_stored_n;
    uint inflate_stored_b;
    uint inflate_stored_k;
    uint inflate_stored_w;
    char *error_msg;
    jmp_buf error_jmp;
};


// WARNING! conflicting data type names: /DWARF/decompress_gunzip.c/inflate_block/anon_enum_32 - /DWARF/format.h/anon_enum_32

typedef union anon_union_8_2_6af1278d anon_union_8_2_6af1278d, *Panon_union_8_2_6af1278d;

typedef struct anon_struct_8_5_9c91e529_for_formatted anon_struct_8_5_9c91e529_for_formatted, *Panon_struct_8_5_9c91e529_for_formatted;

struct anon_struct_8_5_9c91e529_for_formatted {
    uint8_t gz_method;
    uint8_t flags;
    uint32_t mtime;
    uint8_t xtra_flags_UNUSED;
    uint8_t os_flags_UNUSED;
};

union anon_union_8_2_6af1278d {
    uchar raw[8];
    struct anon_struct_8_5_9c91e529_for_formatted formatted;
};

typedef struct loc_control_id_struct loc_control_id_struct, *Ploc_control_id_struct;

struct loc_control_id_struct {
    char *name;
    int id;
};

typedef struct list_head list_head, *Plist_head;

struct list_head {
    struct list_head *prev;
    struct list_head *next;
};

typedef enum loc_command_type {
    LC_GROUP=0,
    LC_TEXT=1,
    LC_VERSION=2,
    LC_LOCALE=3,
    LC_BASE=4,
    LC_FONT=5,
    LC_ATTRIBUTES=6
} loc_command_type;

typedef struct loc_cmd_struct loc_cmd_struct, *Ploc_cmd_struct;

typedef struct loc_cmd_struct loc_cmd;

struct loc_cmd_struct {
    uint8_t command;
    uint8_t unum_size;
    uint16_t line_nr;
    int ctrl_id;
    int32_t num[2];
    uint32_t *unum;
    char *txt[2];
    struct list_head list;
};

typedef struct loc_parse_struct loc_parse_struct, *Ploc_parse_struct;

typedef struct loc_parse_struct loc_parse;

struct loc_parse_struct {
    char c;
    enum loc_command_type cmd;
    char *arg_type;
};

typedef struct loc_control_id_struct loc_control_id;

typedef struct loc_dlg_list_struct loc_dlg_list_struct, *Ploc_dlg_list_struct;

struct loc_dlg_list_struct {
    int dlg_id;
    HWND hDlg;
    struct list_head list;
};

typedef struct loc_dlg_list_struct loc_dlg_list;

typedef enum bootcheck_return {
    BOOTCHECK_GENERAL_ERROR=-3,
    BOOTCHECK_DOWNLOAD_ERROR=-2,
    BOOTCHECK_CANCEL=-1,
    BOOTCHECK_PROCEED=0
} bootcheck_return;

typedef int (*__wgetmainargs_t)(int *, wchar_t ***, wchar_t ***, int, int *);

typedef BOOL (*IsWow64Process2_t)(HANDLE, USHORT *, USHORT *);

typedef struct _trbudget_t _trbudget_t, *P_trbudget_t;

typedef struct _trbudget_t trbudget_t;

struct _trbudget_t {
    int chance;
    int remain;
    int incval;
    int count;
};

typedef struct anon_struct_24_4_d8a55aef anon_struct_24_4_d8a55aef, *Panon_struct_24_4_d8a55aef;

struct anon_struct_24_4_d8a55aef {
    int *a;
    int *b;
    int c;
    int d;
};

typedef struct anon_struct_32_4_d8a569f3 anon_struct_32_4_d8a569f3, *Panon_struct_32_4_d8a569f3;

struct anon_struct_32_4_d8a569f3 {
    int *a;
    int *b;
    int *c;
    int d;
};

typedef struct anon_struct_32_5_90aca025 anon_struct_32_5_90aca025, *Panon_struct_32_5_90aca025;

struct anon_struct_32_5_90aca025 {
    int *a;
    int *b;
    int *c;
    int d;
    int e;
};

typedef struct ntfs_stream ntfs_stream, *Pntfs_stream;

struct ntfs_stream {
    u64 size;
    wchar_t name[0];
};

typedef struct CLUSTER_RANGE CLUSTER_RANGE, *PCLUSTER_RANGE;

struct CLUSTER_RANGE {
    u64 StartingCluster;
    u64 ClusterCount;
};

typedef struct file_info file_info, *Pfile_info;

struct file_info {
    u32 attributes;
    u32 num_links;
    u64 creation_time;
    u64 last_write_time;
    u64 last_access_time;
    u64 ino;
    u64 end_of_file;
    u32 ea_size;
};

typedef struct FILE_LAYOUT_INFO_ENTRY FILE_LAYOUT_INFO_ENTRY, *PFILE_LAYOUT_INFO_ENTRY;

typedef struct anon_struct_40_5_bde20e81_for_BasicInformation anon_struct_40_5_bde20e81_for_BasicInformation, *Panon_struct_40_5_bde20e81_for_BasicInformation;

struct anon_struct_40_5_bde20e81_for_BasicInformation {
    u64 CreationTime;
    u64 LastAccessTime;
    u64 LastWriteTime;
    u64 ChangeTime;
    u32 FileAttributes;
};

struct FILE_LAYOUT_INFO_ENTRY {
    struct anon_struct_40_5_bde20e81_for_BasicInformation BasicInformation;
    u32 OwnerId;
    u32 SecurityId;
    s64 Usn;
};

typedef struct FILE_REFERENCE_RANGE FILE_REFERENCE_RANGE, *PFILE_REFERENCE_RANGE;

struct FILE_REFERENCE_RANGE {
    u64 StartingFileReferenceNumber;
    u64 EndingFileReferenceNumber;
};

typedef struct QUERY_FILE_LAYOUT_OUTPUT QUERY_FILE_LAYOUT_OUTPUT, *PQUERY_FILE_LAYOUT_OUTPUT;

struct QUERY_FILE_LAYOUT_OUTPUT {
    u32 FileEntryCount;
    u32 FirstFileOffset;
    u32 Flags;
    u32 Reserved;
};

typedef struct STREAM_EXTENT_ENTRY STREAM_EXTENT_ENTRY, *PSTREAM_EXTENT_ENTRY;

typedef union anon_union_32_1_61e7f6aa_for_ExtentInformation anon_union_32_1_61e7f6aa_for_ExtentInformation, *Panon_union_32_1_61e7f6aa_for_ExtentInformation;

typedef struct RETRIEVAL_POINTERS_BUFFER RETRIEVAL_POINTERS_BUFFER, *PRETRIEVAL_POINTERS_BUFFER;

typedef struct anon_struct_16_2_fb3ba092 anon_struct_16_2_fb3ba092, *Panon_struct_16_2_fb3ba092;

struct anon_struct_16_2_fb3ba092 {
    LARGE_INTEGER NextVcn;
    LARGE_INTEGER Lcn;
};

struct RETRIEVAL_POINTERS_BUFFER {
    DWORD ExtentCount;
    LARGE_INTEGER StartingVcn;
    struct anon_struct_16_2_fb3ba092 Extents[1];
};

union anon_union_32_1_61e7f6aa_for_ExtentInformation {
    struct RETRIEVAL_POINTERS_BUFFER RetrievalPointers;
};

struct STREAM_EXTENT_ENTRY {
    u32 Flags;
    union anon_union_32_1_61e7f6aa_for_ExtentInformation ExtentInformation;
};

typedef struct QUERY_FILE_LAYOUT_INPUT QUERY_FILE_LAYOUT_INPUT, *PQUERY_FILE_LAYOUT_INPUT;

typedef union anon_union_16_2_eff40896_for_Filter anon_union_16_2_eff40896_for_Filter, *Panon_union_16_2_eff40896_for_Filter;

union anon_union_16_2_eff40896_for_Filter {
    struct CLUSTER_RANGE ClusterRanges[1];
    struct FILE_REFERENCE_RANGE FileReferenceRanges[1];
};

struct QUERY_FILE_LAYOUT_INPUT {
    u32 NumberOfPairs;
    u32 Flags;
    u32 FilterType;
    u32 Reserved;
    union anon_union_16_2_eff40896_for_Filter Filter;
};

typedef struct security_map_node security_map_node, *Psecurity_map_node;

struct security_map_node {
    struct avl_tree_node index_node;
    u32 disk_security_id;
    u32 wim_security_id;
};

typedef struct win32_encrypted_read_ctx win32_encrypted_read_ctx, *Pwin32_encrypted_read_ctx;

struct win32_encrypted_read_ctx {
    struct consume_chunk_callback *cb;
    int wimlib_err_code;
    u64 bytes_remaining;
};

typedef struct FILE_LAYOUT_NAME_ENTRY FILE_LAYOUT_NAME_ENTRY, *PFILE_LAYOUT_NAME_ENTRY;

struct FILE_LAYOUT_NAME_ENTRY {
    u32 NextNameOffset;
    u32 Flags;
    u64 ParentFileReferenceNumber;
    u32 FileNameLength;
    u32 Reserved;
    wchar_t FileName[1];
};

typedef struct winnt_scan_ctx winnt_scan_ctx, *Pwinnt_scan_ctx;

struct winnt_scan_ctx {
    struct scan_params *params;
    _Bool is_ntfs;
    u32 vol_flags;
    ulong num_get_sd_access_denied;
    ulong num_get_sacl_priv_notheld;
    _Bool wof_not_attached;
    struct vss_snapshot *snapshot;
};

typedef struct ntfs_inode ntfs_inode, *Pntfs_inode;

typedef struct ntfs_dentry ntfs_dentry, *Pntfs_dentry;

typedef union anon_union_8_2_de1e1ba6_for_ntfs_dentry_2 anon_union_8_2_de1e1ba6_for_ntfs_dentry_2, *Panon_union_8_2_de1e1ba6_for_ntfs_dentry_2;

union anon_union_8_2_de1e1ba6_for_ntfs_dentry_2 {
    u64 parent_ino;
    struct ntfs_dentry *next_child;
};

struct ntfs_inode {
    struct avl_tree_node index_node;
    u64 ino;
    u64 creation_time;
    u64 last_access_time;
    u64 last_write_time;
    u64 starting_lcn;
    u32 attributes;
    u32 security_id;
    u32 num_aliases;
    u32 num_streams;
    u32 special_streams;
    u32 first_stream_offset;
    struct ntfs_dentry *first_child;
    wchar_t short_name[13];
};

struct ntfs_dentry {
    u32 offset_from_inode:31;
    u32 is_primary:1;
    union anon_union_8_2_de1e1ba6_for_ntfs_dentry_2 field_2;
    wchar_t name[0];
};

typedef struct FILE_LAYOUT_ENTRY FILE_LAYOUT_ENTRY, *PFILE_LAYOUT_ENTRY;

struct FILE_LAYOUT_ENTRY {
    u32 Version;
    u32 NextFileOffset;
    u32 Flags;
    u32 FileAttributes;
    u64 FileReferenceNumber;
    u32 FirstNameOffset;
    u32 FirstStreamOffset;
    u32 ExtraInfoOffset;
    u32 Reserved;
};

typedef struct ntfs_inode_map ntfs_inode_map, *Pntfs_inode_map;

struct ntfs_inode_map {
    struct avl_tree_node *root;
};

typedef struct STREAM_LAYOUT_ENTRY STREAM_LAYOUT_ENTRY, *PSTREAM_LAYOUT_ENTRY;

struct STREAM_LAYOUT_ENTRY {
    u32 Version;
    u32 NextStreamOffset;
    u32 Flags;
    u32 ExtentInformationOffset;
    u64 AllocationSize;
    u64 EndOfFile;
    u64 Reserved;
    u32 AttributeFlags;
    u32 StreamIdentifierLength;
    wchar_t StreamIdentifier[1];
};

typedef struct security_map security_map, *Psecurity_map;

struct security_map {
    struct avl_tree_node *root;
};

typedef struct anon_struct_48_2_0d9bf94c anon_struct_48_2_0d9bf94c, *Panon_struct_48_2_0d9bf94c;

typedef struct _WOF_EXTERNAL_INFO _WOF_EXTERNAL_INFO, *P_WOF_EXTERNAL_INFO;

typedef struct _WOF_EXTERNAL_INFO WOF_EXTERNAL_INFO;

struct _WOF_EXTERNAL_INFO {
    DWORD Version;
    DWORD Provider;
};

struct anon_struct_48_2_0d9bf94c {
    WOF_EXTERNAL_INFO wof_info;
    WIM_PROVIDER_EXTERNAL_INFO wim_info;
};

typedef struct anon_struct_88_2_0d9bf94c anon_struct_88_2_0d9bf94c, *Panon_struct_88_2_0d9bf94c;

struct anon_struct_88_2_0d9bf94c {
    WOF_EXTERNAL_INFO wof_info;
    struct wim_provider_rpdata wim_info;
};

typedef struct version_t version_t, *Pversion_t;

struct version_t {
    WORD Major;
    WORD Minor;
    WORD Micro;
    WORD Nano;
};

typedef struct winver_t winver_t, *Pwinver_t;

struct winver_t {
    uint16_t major;
    uint16_t minor;
    uint16_t build;
    uint16_t revision;
};

typedef struct HASH_CONTEXT HASH_CONTEXT, *PHASH_CONTEXT;

typedef void (hash_init_t)(struct HASH_CONTEXT *);

struct HASH_CONTEXT {
    uint8_t buf[128];
    uint64_t state[8];
    uint64_t bytecount;
    undefined field3_0xc8;
    undefined field4_0xc9;
    undefined field5_0xca;
    undefined field6_0xcb;
    undefined field7_0xcc;
    undefined field8_0xcd;
    undefined field9_0xce;
    undefined field10_0xcf;
    undefined field11_0xd0;
    undefined field12_0xd1;
    undefined field13_0xd2;
    undefined field14_0xd3;
    undefined field15_0xd4;
    undefined field16_0xd5;
    undefined field17_0xd6;
    undefined field18_0xd7;
    undefined field19_0xd8;
    undefined field20_0xd9;
    undefined field21_0xda;
    undefined field22_0xdb;
    undefined field23_0xdc;
    undefined field24_0xdd;
    undefined field25_0xde;
    undefined field26_0xdf;
    undefined field27_0xe0;
    undefined field28_0xe1;
    undefined field29_0xe2;
    undefined field30_0xe3;
    undefined field31_0xe4;
    undefined field32_0xe5;
    undefined field33_0xe6;
    undefined field34_0xe7;
    undefined field35_0xe8;
    undefined field36_0xe9;
    undefined field37_0xea;
    undefined field38_0xeb;
    undefined field39_0xec;
    undefined field40_0xed;
    undefined field41_0xee;
    undefined field42_0xef;
    undefined field43_0xf0;
    undefined field44_0xf1;
    undefined field45_0xf2;
    undefined field46_0xf3;
    undefined field47_0xf4;
    undefined field48_0xf5;
    undefined field49_0xf6;
    undefined field50_0xf7;
    undefined field51_0xf8;
    undefined field52_0xf9;
    undefined field53_0xfa;
    undefined field54_0xfb;
    undefined field55_0xfc;
    undefined field56_0xfd;
    undefined field57_0xfe;
    undefined field58_0xff;
};

typedef enum fs_type {
    FS_UNKNOWN=-1,
    FS_FAT16=0,
    FS_FAT32=1,
    FS_NTFS=2,
    FS_UDF=3,
    FS_EXFAT=4,
    FS_REFS=5,
    FS_EXT2=6,
    FS_EXT3=7,
    FS_EXT4=8,
    FS_MAX=9
} fs_type;

typedef enum image_option_type {
    IMOP_WIN_STANDARD=0,
    IMOP_WIN_EXTENDED=1,
    IMOP_WIN_TO_GO=2,
    IMOP_MAX=3
} image_option_type;

typedef struct sbat_entry_t sbat_entry_t, *Psbat_entry_t;

struct sbat_entry_t {
    char *product;
    uint32_t version;
};

typedef struct ext_t ext_t, *Pext_t;

struct ext_t {
    size_t count;
    char *filename;
    char **extension;
    char **description;
};

typedef enum user_message_type {
    UM_FORMAT_COMPLETED=32768,
    UM_MEDIA_CHANGE=32769,
    UM_PROGRESS_INIT=32770,
    UM_PROGRESS_EXIT=32771,
    UM_NO_UPDATE=32772,
    UM_UPDATE_CSM_TOOLTIP=32773,
    UM_RESIZE_BUTTONS=32774,
    UM_ENABLE_CONTROLS=32775,
    UM_SELECT_ISO=32776,
    UM_TIMER_START=32777,
    UM_FORMAT_START=32778,
    UM_LANGUAGE_MENU=33024
} user_message_type;

typedef struct htab_table htab_table, *Phtab_table;

typedef struct htab_entry htab_entry, *Phtab_entry;

struct htab_table {
    struct htab_entry *table;
    uint32_t size;
    uint32_t filled;
};

struct htab_entry {
    uint32_t used;
    char *str;
    void *data;
};

typedef enum file_io_type {
    FILE_IO_READ=0,
    FILE_IO_WRITE=1,
    FILE_IO_APPEND=2
} file_io_type;

typedef struct thumbprint_list_t thumbprint_list_t, *Pthumbprint_list_t;

struct thumbprint_list_t {
    uint32_t count;
    uint8_t list[0][20];
};

typedef INT_PTR (*Callback_t)(HWND, UINT, WPARAM, LPARAM);

typedef struct notification_info notification_info, *Pnotification_info;

typedef union anon_union_8_2_917df34d_for_notification_info_1 anon_union_8_2_917df34d_for_notification_info_1, *Panon_union_8_2_917df34d_for_notification_info_1;

union anon_union_8_2_917df34d_for_notification_info_1 {
    Callback_t callback;
    char *url;
};

struct notification_info {
    WORD id;
    union anon_union_8_2_917df34d_for_notification_info_1 field_1;
};

typedef struct windows_version_t windows_version_t, *Pwindows_version_t;

struct windows_version_t {
    DWORD Version;
    DWORD Major;
    DWORD Minor;
    DWORD BuildNumber;
    DWORD Ubr;
    DWORD Edition;
    USHORT Arch;
    char VersionStr[128];
};

typedef struct RUFUS_DRIVE RUFUS_DRIVE, *PRUFUS_DRIVE;

struct RUFUS_DRIVE {
    char *id;
    char *name;
    char *display_name;
    char *label;
    char *hub;
    DWORD index;
    uint32_t port;
    uint64_t size;
};

typedef struct IMG_SAVE IMG_SAVE, *PIMG_SAVE;

struct IMG_SAVE {
    DWORD Type;
    DWORD DeviceNum;
    DWORD BufSize;
    LONGLONG DeviceSize;
    char *DevicePath;
    char *ImagePath;
    char *Label;
};

typedef void (hash_final_t)(struct HASH_CONTEXT *);

typedef struct efi_boot_entry_t efi_boot_entry_t, *Pefi_boot_entry_t;

struct efi_boot_entry_t {
    uint8_t type;
    char path[64];
};

typedef struct RUFUS_UPDATE RUFUS_UPDATE, *PRUFUS_UPDATE;

struct RUFUS_UPDATE {
    uint16_t version[3];
    uint32_t platform_min[2];
    char *download_url;
    char *release_notes;
};

typedef enum WindowsVersion {
    WINDOWS_UNDEFINED=0,
    WINDOWS_XP=81,
    WINDOWS_2003=82,
    WINDOWS_VISTA=96,
    WINDOWS_7=97,
    WINDOWS_8=98,
    WINDOWS_8_1=99,
    WINDOWS_10_PREVIEW1=100,
    WINDOWS_10=160,
    WINDOWS_11=176,
    WINDOWS_MAX=65535
} WindowsVersion;

typedef enum hash_type {
    HASH_MD5=0,
    HASH_SHA1=1,
    HASH_SHA256=2,
    HASH_SHA512=3,
    HASH_MAX=4
} hash_type;

typedef enum action_type {
    OP_NOOP_WITH_TASKBAR=-3,
    OP_NOOP=-2,
    OP_INIT=-1,
    OP_ANALYZE_MBR=0,
    OP_BADBLOCKS=1,
    OP_ZERO_MBR=2,
    OP_PARTITION=3,
    OP_FORMAT=4,
    OP_CREATE_FS=5,
    OP_FIX_MBR=6,
    OP_FILE_COPY=7,
    OP_PATCH=8,
    OP_FINALIZE=9,
    OP_EXTRACT_ZIP=10,
    OP_MAX=11
} action_type;

typedef struct cert_info_t cert_info_t, *Pcert_info_t;

struct cert_info_t {
    char name[256];
    uint8_t thumbprint[20];
};

typedef struct selection_dialog_options_t selection_dialog_options_t, *Pselection_dialog_options_t;

typedef struct StrArray StrArray, *PStrArray;

struct StrArray {
    char **String;
    uint32_t Index;
    uint32_t Max;
};

struct selection_dialog_options_t {
    int style;
    int mask;
    int username_index;
    int edition_index;
    int regional_index;
    int privacy_index;
    struct StrArray choices;
    struct StrArray tooltips;
};

typedef struct dll_resolver_t dll_resolver_t, *Pdll_resolver_t;

struct dll_resolver_t {
    char *path;
    uint32_t count;
    char **name;
    uint32_t *address;
};

typedef enum ArchType {
    ARCH_UNKNOWN=0,
    ARCH_X86_32=1,
    ARCH_X86_64=2,
    ARCH_ARM_32=3,
    ARCH_ARM_64=4,
    ARCH_IA_64=5,
    ARCH_RISCV_64=6,
    ARCH_LOONGARCH_64=7,
    ARCH_EBC=8,
    ARCH_MAX=9
} ArchType;

typedef enum TASKBAR_PROGRESS_FLAGS {
    TASKBAR_NOPROGRESS=0,
    TASKBAR_INDETERMINATE=1,
    TASKBAR_NORMAL=2,
    TASKBAR_ERROR=4,
    TASKBAR_PAUSED=8
} TASKBAR_PROGRESS_FLAGS;

typedef enum target_type {
    TT_BIOS=0,
    TT_UEFI=1,
    TT_MAX=2
} target_type;

typedef enum boot_type {
    BT_NON_BOOTABLE=0,
    BT_MSDOS=1,
    BT_FREEDOS=2,
    BT_IMAGE=3,
    BT_SYSLINUX_V4=4,
    BT_SYSLINUX_V6=5,
    BT_REACTOS=6,
    BT_GRUB4DOS=7,
    BT_GRUB2=8,
    BT_UEFI_NTFS=9,
    BT_MAX=10
} boot_type;

typedef enum EFI_BOOT_TYPE {
    EBT_MAIN=0,
    EBT_GRUB=1,
    EBT_MOKMANAGER=2,
    EBT_BOOTMGR=3
} EFI_BOOT_TYPE;

typedef struct RUFUS_IMG_REPORT RUFUS_IMG_REPORT, *PRUFUS_IMG_REPORT;

struct RUFUS_IMG_REPORT {
    char label[192];
    char usb_label[192];
    char cfg_path[128];
    char reactos_path[128];
    char wininst_path[4][64];
    struct efi_boot_entry_t efi_boot_entry[64];
    char efi_img_path[128];
    uint64_t image_size;
    uint64_t projected_size;
    int64_t mismatch_size;
    uint32_t wininst_version;
    BOOLEAN is_iso;
    int8_t is_bootable_img;
    BOOLEAN is_vhd;
    BOOLEAN is_windows_img;
    BOOLEAN disable_iso;
    BOOLEAN rh8_derivative;
    uint16_t winpe;
    uint16_t has_efi;
    uint8_t has_secureboot_bootloader;
    uint8_t has_md5sum;
    uint8_t wininst_index;
    uint8_t has_symlinks;
    uint8_t has_4GB_file;
    BOOLEAN has_long_filename;
    BOOLEAN has_deep_directories;
    BOOLEAN has_bootmgr;
    BOOLEAN has_bootmgr_efi;
    BOOLEAN has_autorun;
    BOOLEAN has_old_c32[2];
    BOOLEAN has_old_vesamenu;
    BOOLEAN has_efi_syslinux;
    BOOLEAN has_grub4dos;
    uint8_t has_grub2;
    uint8_t has_grub2_fs;
    BOOLEAN has_compatresources_dll;
    BOOLEAN has_panther_unattend;
    BOOLEAN has_kolibrios;
    BOOLEAN needs_syslinux_overwrite;
    BOOLEAN needs_ntfs;
    BOOLEAN uses_casper;
    BOOLEAN uses_minint;
    uint8_t compression_type;
    struct winver_t win_version;
    uint16_t sl_version;
    char sl_version_str[12];
    char sl_version_ext[32];
    char grub2_version[192];
};

typedef enum timer_type {
    TID_MESSAGE_INFO=4096,
    TID_MESSAGE_STATUS=4097,
    TID_OUTPUT_INFO=4098,
    TID_OUTPUT_STATUS=4099,
    TID_BADBLOCKS_UPDATE=4100,
    TID_APP_TIMER=4101,
    TID_BLOCKING_TIMER=4102,
    TID_REFRESH_TIMER=4103,
    TID_MARQUEE_TIMER=4104
} timer_type;

typedef NTSTATUS (*NtWow64QueryInformationProcess64_t)(HANDLE, ULONG, PVOID, ULONG, PULONG);

typedef ulonglong *PULONG64;

typedef NTSTATUS (*NtWow64ReadVirtualMemory64_t)(HANDLE, ULONGLONG, PVOID, ULONG64, PULONG64);


// WARNING! conflicting data type names: /DWARF/sysinfoapi.h/LPSYSTEM_INFO - /winbase.h/LPSYSTEM_INFO


// WARNING! conflicting data type names: /DWARF/sysinfoapi.h/_MEMORYSTATUSEX - /winbase.h/_MEMORYSTATUSEX


// WARNING! conflicting data type names: /DWARF/sysinfoapi.h/_SYSTEM_INFO - /winbase.h/_SYSTEM_INFO


// WARNING! conflicting data type names: /DWARF/sysinfoapi.h/LPMEMORYSTATUSEX - /winbase.h/LPMEMORYSTATUSEX

typedef struct _MEMORYSTATUSEX MEMORYSTATUSEX;

typedef struct _SYSTEM_INFO SYSTEM_INFO;

typedef union anon_union_4_2_ba785c76_for__SYSTEM_INFO_0 anon_union_4_2_ba785c76_for__SYSTEM_INFO_0, *Panon_union_4_2_ba785c76_for__SYSTEM_INFO_0;

typedef struct anon_struct_4_2_aa601436_for_anon_union_4_2_ba785c76_for__SYSTEM_INFO_0_1 anon_struct_4_2_aa601436_for_anon_union_4_2_ba785c76_for__SYSTEM_INFO_0_1, *Panon_struct_4_2_aa601436_for_anon_union_4_2_ba785c76_for__SYSTEM_INFO_0_1;

struct anon_struct_4_2_aa601436_for_anon_union_4_2_ba785c76_for__SYSTEM_INFO_0_1 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union anon_union_4_2_ba785c76_for__SYSTEM_INFO_0 {
    DWORD dwOemId;
    struct anon_struct_4_2_aa601436_for_anon_union_4_2_ba785c76_for__SYSTEM_INFO_0_1 field_1;
};

typedef struct SPROG_PUBLISHERINFO SPROG_PUBLISHERINFO, *PSPROG_PUBLISHERINFO;

struct SPROG_PUBLISHERINFO {
    LPWSTR lpszProgramName;
    LPWSTR lpszPublisherLink;
    LPWSTR lpszMoreInfoLink;
};

typedef struct RSA_2048_PUBKEY RSA_2048_PUBKEY, *PRSA_2048_PUBKEY;

typedef struct _PUBLICKEYSTRUC _PUBLICKEYSTRUC, *P_PUBLICKEYSTRUC;

typedef struct _PUBLICKEYSTRUC BLOBHEADER;

typedef struct _RSAPUBKEY _RSAPUBKEY, *P_RSAPUBKEY;

typedef struct _RSAPUBKEY RSAPUBKEY;

struct _RSAPUBKEY {
    DWORD magic;
    DWORD bitlen;
    DWORD pubexp;
};

struct _PUBLICKEYSTRUC {
    BYTE bType;
    BYTE bVersion;
    WORD reserved;
    ALG_ID aiKeyAlg;
};

struct RSA_2048_PUBKEY {
    BLOBHEADER BlobHeader;
    RSAPUBKEY RsaHeader;
    BYTE Modulus[256];
};

typedef struct swm_info swm_info, *Pswm_info;

typedef struct swm_part_info swm_part_info, *Pswm_part_info;

struct swm_info {
    struct swm_part_info *parts;
    uint num_parts;
    uint num_alloc_parts;
    u64 total_bytes;
    u64 max_part_size;
};

struct swm_part_info {
    struct list_head.conflict blob_list;
    u64 size;
};

typedef struct inode_fixup_params inode_fixup_params, *Pinode_fixup_params;

struct inode_fixup_params {
    struct wim_inode_table inode_table;
    ulong num_dir_hard_links;
    ulong num_inconsistent_inodes;
};

typedef struct wim_xattr_entry wim_xattr_entry, *Pwim_xattr_entry;

struct wim_xattr_entry {
    le16 value_len;
    u8 name_len;
    u8 flags;
    char name[0];
};

typedef struct udf_fsd_s udf_fsd_s, *Pudf_fsd_s;

typedef struct udf_fsd_s udf_fsd_t;

typedef struct udf_charspec_s udf_charspec_s, *Pudf_charspec_s;

typedef struct udf_charspec_s udf_charspec_t;

struct udf_charspec_s {
    udf_Uint8_t charset_type;
    udf_Uint8_t charset_info[63];
};

struct udf_fsd_s {
    udf_tag_t tag;
    udf_timestamp_t recording_time;
    udf_Uint16_t interchange_lvl;
    udf_Uint16_t maxInterchange_lvl;
    udf_Uint32_t charset_list;
    udf_Uint32_t max_charset_list;
    udf_Uint32_t fileset_num;
    udf_Uint32_t udf_fsd_num;
    udf_charspec_t logical_vol_id_charset;
    udf_dstring logical_vol_id[128];
    udf_charspec_t fileset_charset;
    udf_dstring fileSet_id[32];
    udf_dstring copyright_file_id[32];
    udf_dstring abstract_file_id[32];
    udf_long_ad_t root_icb;
    udf_regid_t domain_id;
    udf_long_ad_t next_ext;
    udf_long_ad_t stream_directory_ICB;
    udf_Uint8_t reserved[32];
};

typedef enum ecma_167_timezone_enum_t {
    TIMESTAMP_TYPE_CUT=0,
    TIMESTAMP_TIMEZONE_MASK=4095,
    TIMESTAMP_TYPE_LOCAL=4096,
    TIMESTAMP_TYPE_AGREEMENT=8192,
    TIMESTAMP_TYPE_MASK=61440
} ecma_167_timezone_enum_t;

typedef struct partition_desc_s partition_desc_s, *Ppartition_desc_s;

typedef struct partition_desc_s partition_desc_t;

struct partition_desc_s {
    udf_tag_t tag;
    udf_Uint32_t vol_desc_seq_num;
    udf_Uint16_t flags;
    udf_Uint16_t number;
    udf_regid_t contents;
    udf_Uint8_t contents_use[128];
    udf_Uint32_t access_type;
    udf_Uint32_t start_loc;
    udf_Uint32_t part_len;
    udf_regid_t imp_id;
    udf_Uint8_t imp_use[128];
    udf_Uint8_t reserved[156];
};

typedef enum icbtag_file_type_enum_t {
    ICBTAG_FILE_TYPE_UNDEF=0,
    ICBTAG_FILE_TYPE_USE=1,
    ICBTAG_FILE_TYPE_PIE=2,
    ICBTAG_FILE_TYPE_IE=3,
    ICBTAG_FILE_TYPE_DIRECTORY=4,
    ICBTAG_FILE_TYPE_REGULAR=5,
    ICBTAG_FILE_TYPE_BLOCK=6,
    ICBTAG_FILE_TYPE_CHAR=7,
    ICBTAG_FILE_TYPE_EA=8,
    ICBTAG_FILE_TYPE_FIFO=9,
    ICBTAG_FILE_TYPE_SOCKET=10,
    ICBTAG_FILE_TYPE_TE=11,
    ICBTAG_FILE_TYPE_SYMLINK=12,
    ICBTAG_FILE_TYPE_STREAMDIR=13
} icbtag_file_type_enum_t;

typedef struct udf_pvd_s udf_pvd_s, *Pudf_pvd_s;

typedef struct udf_pvd_s udf_pvd_t;

struct udf_pvd_s {
    udf_tag_t tag;
    udf_Uint32_t vol_desc_seq_num;
    udf_Uint32_t primary_vol_desc_num;
    udf_dstring vol_ident[32];
    udf_Uint16_t vol_seq_num;
    udf_Uint16_t max_vol_seqnum;
    udf_Uint16_t interchange_lvl;
    udf_Uint16_t max_interchange_lvl;
    udf_Uint32_t charset_list;
    udf_Uint32_t max_charset_list;
    udf_dstring volset_id[128];
    udf_charspec_t desc_charset;
    udf_charspec_t explanatory_charset;
    udf_extent_ad_t vol_abstract;
    udf_extent_ad_t vol_copyright;
    udf_regid_t app_ident;
    udf_timestamp_t recording_time;
    udf_regid_t imp_ident;
    udf_Uint8_t imp_use[64];
    udf_Uint32_t predecessor_vol_desc_seq_location;
    udf_Uint16_t flags;
    udf_Uint8_t reserved[22];
};

typedef enum icbtag_flag_enum_t {
    ICBTAG_FLAG_AD_SHORT=0,
    ICBTAG_FLAG_AD_LONG=1,
    ICBTAG_FLAG_AD_EXTENDED=2,
    ICBTAG_FLAG_AD_IN_ICB=3,
    ICBTAG_FLAG_AD_MASK=7,
    ICBTAG_FLAG_SORTED=8,
    ICBTAG_FLAG_NONRELOCATABLE=16,
    ICBTAG_FLAG_ARCHIVE=32,
    ICBTAG_FLAG_SETUID=64,
    ICBTAG_FLAG_SETGID=128,
    ICBTAG_FLAG_STICKY=256,
    ICBTAG_FLAG_CONTIGUOUS=512,
    ICBTAG_FLAG_SYSTEM=1024,
    ICBTAG_FLAG_TRANSFORMED=2048,
    ICBTAG_FLAG_MULTIVERSIONS=4096,
    ICBTAG_FLAG_STREAM=8192
} icbtag_flag_enum_t;

typedef struct udf_short_ad_s udf_short_ad_s, *Pudf_short_ad_s;

typedef struct udf_short_ad_s udf_short_ad_t;

struct udf_short_ad_s {
    udf_Uint32_t len;
    udf_Uint32_t pos;
};

typedef struct udf_ext_ad_s udf_ext_ad_s, *Pudf_ext_ad_s;

typedef struct udf_ext_ad_s udf_ext_ad_t;

struct udf_ext_ad_s {
    udf_Uint32_t len;
    udf_Uint32_t recorded_len;
    udf_Uint32_t information_len;
    udf_lb_addr_t ext_loc;
};

typedef enum tag_id_t {
    TAGID_PRI_VOL=1,
    TAGID_ANCHOR=2,
    TAGID_VOL=3,
    TAGID_IMP_VOL=4,
    TAGID_PARTITION=5,
    TAGID_LOGVOL=6,
    TAGID_UNALLOC_SPACE=7,
    TAGID_TERM=8,
    TAGID_LOGVOL_INTEGRITY=9,
    TAGID_FSD=256,
    TAGID_FID=257,
    TAGID_AED=258,
    TAGID_IE=259,
    TAGID_TE=260,
    TAGID_FILE_ENTRY=261,
    TAGID_EAHD=262,
    TAGID_USE=263,
    TAGID_SBD=264,
    TAGID_PIE=265,
    TAGID_EFE=266
} tag_id_t;

typedef enum file_characteristics_t {
    UDF_FILE_HIDDEN=1,
    UDF_FILE_DIRECTORY=2,
    UDF_FILE_DELETED=4,
    UDF_FILE_PARENT=8,
    UDF_FILE_METADATA=16
} file_characteristics_t;

typedef enum ecma_167_enum1_t {
    VSD_STD_ID_SIZE=5,
    UDF_REGID_ID_SIZE=23,
    UDF_VOLID_SIZE=32,
    UDF_FID_SIZE=38,
    UDF_VOLSET_ID_SIZE=128
} ecma_167_enum1_t;

typedef struct logical_vol_desc_s logical_vol_desc_s, *Plogical_vol_desc_s;

typedef struct logical_vol_desc_s logical_vol_desc_t;

typedef union anon_union_16_2_64f9b218_for_lvd_use anon_union_16_2_64f9b218_for_lvd_use, *Panon_union_16_2_64f9b218_for_lvd_use;

union anon_union_16_2_64f9b218_for_lvd_use {
    udf_long_ad_t fsd_loc;
    udf_Uint8_t logvol_content_use[16];
};

struct logical_vol_desc_s {
    udf_tag_t tag;
    udf_Uint32_t seq_num;
    udf_charspec_t desc_charset;
    udf_dstring logvol_id[128];
    udf_Uint32_t logical_blocksize;
    udf_regid_t domain_id;
    union anon_union_16_2_64f9b218_for_lvd_use lvd_use;
    udf_Uint8_t logvol_contents_use[16];
    udf_Uint32_t maptable_len;
    udf_Uint32_t i_partition_maps;
    udf_regid_t imp_id;
    udf_Uint8_t imp_use[128];
    udf_extent_ad_t integrity_seq_ext;
    udf_Uint8_t partition_maps[0];
};

typedef struct bt_matchfinder bt_matchfinder, *Pbt_matchfinder;

struct bt_matchfinder {
    u16 hash3_tab[32768][2];
    u16 hash4_tab[65536];
    u16 child_tab[0];
};

typedef struct compressor_thread_data compressor_thread_data, *Pcompressor_thread_data;

typedef struct message_queue message_queue, *Pmessage_queue;

struct compressor_thread_data {
    struct thread thread;
    struct message_queue *chunks_to_compress_queue;
    struct message_queue *compressed_chunks_queue;
    struct wimlib_compressor *compressor;
};

struct message_queue {
    struct list_head.conflict list;
    struct mutex lock;
    struct condvar msg_avail_cond;
    struct condvar space_avail_cond;
    _Bool terminating;
};

typedef struct parallel_chunk_compressor parallel_chunk_compressor, *Pparallel_chunk_compressor;

typedef struct message message, *Pmessage;

struct parallel_chunk_compressor {
    struct chunk_compressor base;
    struct message_queue chunks_to_compress_queue;
    struct message_queue compressed_chunks_queue;
    struct compressor_thread_data *thread_data;
    uint num_thread_data;
    uint num_started_threads;
    struct message *msgs;
    size_t num_messages;
    struct list_head.conflict available_msgs;
    struct list_head.conflict submitted_msgs;
    struct message *next_submit_msg;
    struct message *next_ready_msg;
    size_t next_chunk_idx;
};

struct message {
    u8 *uncompressed_chunks[16];
    u8 *compressed_chunks[16];
    u32 uncompressed_chunk_sizes[16];
    u32 compressed_chunk_sizes[16];
    size_t num_filled_chunks;
    size_t num_alloc_chunks;
    struct list_head.conflict list;
    _Bool complete;
    struct list_head.conflict submission_list;
};

typedef struct _NT_PRIVATE_DATA _NT_PRIVATE_DATA, *P_NT_PRIVATE_DATA;

struct _NT_PRIVATE_DATA {
    int magic;
    HANDLE handle;
    int flags;
    char *buffer;
    __u32 buffer_block_number;
    ULONG buffer_size;
    BOOLEAN read_only;
    BOOLEAN written;
    __u64 offset;
    __u64 size;
};

typedef struct _NT_PRIVATE_DATA *PNT_PRIVATE_DATA;

typedef struct ERROR_ENTRY ERROR_ENTRY, *PERROR_ENTRY;

struct ERROR_ENTRY {
    ULONG WinError;
    int errnocode;
};

typedef struct ZSTD_seqSymbol_header ZSTD_seqSymbol_header, *PZSTD_seqSymbol_header;

struct ZSTD_seqSymbol_header {
    U32 fastMode;
    U32 tableLog;
};

typedef struct anon_struct_24_3_b9de407c anon_struct_24_3_b9de407c, *Panon_struct_24_3_b9de407c;

struct anon_struct_24_3_b9de407c {
    char *szMessageText;
    char *szMessageTitle;
    struct selection_dialog_options_t *options;
};

typedef struct anon_struct_32_4_20471617 anon_struct_32_4_20471617, *Panon_struct_32_4_20471617;

struct anon_struct_32_4_20471617 {
    HWND hTip;
    HWND hCtrl;
    WNDPROC original_proc;
    LPWSTR wstring;
};

typedef struct anon_struct_392_3_4407dc1c anon_struct_392_3_4407dc1c, *Panon_struct_392_3_4407dc1c;


// WARNING! conflicting data type names: /DWARF/windef.h/HWINEVENTHOOK - /WinDef.h/HWINEVENTHOOK

struct anon_struct_392_3_4407dc1c {
    char title_str[2][128];
    char button_str[128];
    HWINEVENTHOOK weh;
};

typedef struct anon_struct_48_6_5c10cc01 anon_struct_48_6_5c10cc01, *Panon_struct_48_6_5c10cc01;

struct anon_struct_48_6_5c10cc01 {
    HICON hMessageIcon;
    char *szMessageText;
    char *szMessageTitle;
    int type;
    struct notification_info *more_info;
    char *dont_display_setting;
};

typedef struct anon_struct_32_4_4acb22c2 anon_struct_32_4_4acb22c2, *Panon_struct_32_4_4acb22c2;

struct anon_struct_32_4_4acb22c2 {
    char *szMessageText;
    char *szMessageTitle;
    char **szDialogItem;
    int nDialogItems;
};

typedef struct xz_dec_bcj xz_dec_bcj, *Pxz_dec_bcj;

typedef struct anon_struct_32_3_4c9269d0_for_temp anon_struct_32_3_4c9269d0_for_temp, *Panon_struct_32_3_4c9269d0_for_temp;

struct anon_struct_32_3_4c9269d0_for_temp {
    size_t filtered;
    size_t size;
    uint8_t buf[16];
};

struct xz_dec_bcj {
    enum anon_enum_32 type;
    enum xz_ret ret;
    _Bool single_call;
    uint32_t pos;
    uint32_t x86_prev_mask;
    uint8_t *out;
    size_t out_pos;
    size_t out_size;
    struct anon_struct_32_3_4c9269d0_for_temp temp;
};

typedef struct serial_chunk_compressor serial_chunk_compressor, *Pserial_chunk_compressor;

struct serial_chunk_compressor {
    struct chunk_compressor base;
    struct wimlib_compressor *compressor;
    u8 *udata;
    u8 *cdata;
    u32 usize;
    u8 *result_data;
    u32 result_size;
};

typedef enum cdio_read_mode_t {
    CDIO_READ_MODE_AUDIO=0,
    CDIO_READ_MODE_M1F1=1,
    CDIO_READ_MODE_M1F2=2,
    CDIO_READ_MODE_M2F1=3,
    CDIO_READ_MODE_M2F2=4
} cdio_read_mode_t;

typedef struct EFI_SIGNATURE_LIST EFI_SIGNATURE_LIST, *PEFI_SIGNATURE_LIST;

struct EFI_SIGNATURE_LIST {
    GUID SignatureType;
    UINT32 SignatureListSize;
    UINT32 SignatureHeaderSize;
    UINT32 SignatureSize;
};

typedef struct EFI_VARIABLE_AUTHENTICATION_2 EFI_VARIABLE_AUTHENTICATION_2, *PEFI_VARIABLE_AUTHENTICATION_2;

typedef struct EFI_TIME EFI_TIME, *PEFI_TIME;

typedef struct _WIN_CERTIFICATE_UEFI_GUID _WIN_CERTIFICATE_UEFI_GUID, *P_WIN_CERTIFICATE_UEFI_GUID;

typedef struct _WIN_CERTIFICATE_UEFI_GUID WIN_CERTIFICATE_UEFI_GUID;

typedef struct _WIN_CERTIFICATE _WIN_CERTIFICATE, *P_WIN_CERTIFICATE;

typedef struct _WIN_CERTIFICATE WIN_CERTIFICATE;

struct _WIN_CERTIFICATE {
    UINT32 dwLength;
    UINT16 wRevision;
    UINT16 wCertificateType;
};

struct _WIN_CERTIFICATE_UEFI_GUID {
    WIN_CERTIFICATE Hdr;
    GUID CertType;
    UINT8 CertData[1];
};

struct EFI_TIME {
    UINT16 Year;
    UINT8 Month;
    UINT8 Day;
    UINT8 Hour;
    UINT8 Minute;
    UINT8 Second;
    UINT8 Pad1;
    UINT32 Nanosecond;
    INT16 TimeZone;
    UINT8 Daylight;
    UINT8 Pad2;
};

struct EFI_VARIABLE_AUTHENTICATION_2 {
    struct EFI_TIME TimeStamp;
    WIN_CERTIFICATE_UEFI_GUID AuthInfo;
};

typedef struct subkey_list subkey_list, *Psubkey_list;

typedef struct cell cell, *Pcell;

struct cell {
    le32 size;
    le16 magic;
};

struct subkey_list {
    struct cell base;
    le16 num_offsets;
    le32 elements[0];
};

typedef struct subkey_iteration_stats subkey_iteration_stats, *Psubkey_iteration_stats;

struct subkey_iteration_stats {
    u32 levels_remaining;
    u32 subkey_lists_remaining;
    u32 subkeys_remaining;
};

typedef struct vk vk, *Pvk;

struct vk {
    struct cell base;
    le16 name_size;
    le32 data_size;
    le32 data_offset;
    le32 data_type;
    le16 flags;
    le16 unknown_0x16;
    char name[0];
};

typedef struct regf regf, *Pregf;

struct regf {
    le32 magic;
    le32 f1[4];
    le32 major_version;
    le32 minor_version;
    le32 f2[2];
    le32 root_key_offset;
    le32 total_hbin_size;
    le32 f3[1013];
    u8 hbin_area[0];
};

typedef struct value_list value_list, *Pvalue_list;

struct value_list {
    le32 size;
    le32 vk_offsets[0];
};

typedef struct nk nk, *Pnk;

struct nk {
    struct cell base;
    le16 flags;
    le64 unknown_0x08;
    le32 unknown_0x10;
    le32 parent_offset;
    le32 num_subkeys;
    le32 unknown_0x1C;
    le32 subkey_list_offset;
    le32 unknown_0x24;
    le32 num_values;
    le32 value_list_offset;
    le32 unknown_0x30;
    le32 unknown_0x34;
    le16 unknown_0x38;
    le16 unknown_0x3A;
    le32 unknown_0x3C;
    le32 unknown_0x40;
    le32 unknown_0x44;
    le32 unknown_0x48;
    le16 name_size;
    le16 unknown_0x4E;
    char name[0];
};

typedef struct data_cell data_cell, *Pdata_cell;

struct data_cell {
    le32 size;
    u8 data[0];
};

typedef struct lookup_subkey_ctx lookup_subkey_ctx, *Plookup_subkey_ctx;

struct lookup_subkey_ctx {
    utf16lechar *key_name;
    size_t key_name_nchars;
    struct nk *result;
};

typedef enum hive_status {
    HIVE_OK=0,
    HIVE_CORRUPT=1,
    HIVE_UNSUPPORTED=2,
    HIVE_KEY_NOT_FOUND=3,
    HIVE_VALUE_NOT_FOUND=4,
    HIVE_VALUE_IS_WRONG_TYPE=5,
    HIVE_OUT_OF_MEMORY=6,
    HIVE_ITERATION_STOPPED=7
} hive_status;

typedef hive_status (*subkey_cb_t)(struct nk *, void *);

typedef LOGFONTW LOGFONT;


// WARNING! conflicting data type names: /DWARF/wingdi.h/tagLOGFONTA - /wingdi.h/tagLOGFONTA


// WARNING! conflicting data type names: /DWARF/wingdi.h/FONTENUMPROCA - /wingdi.h/FONTENUMPROCA


// WARNING! conflicting data type names: /DWARF/wingdi.h/OLDFONTENUMPROCA - /wingdi.h/OLDFONTENUMPROCA


// WARNING! conflicting data type names: /DWARF/wingdi.h/TEXTMETRICA - /wingdi.h/TEXTMETRICA


// WARNING! conflicting data type names: /DWARF/wingdi.h/tagTEXTMETRICW - /wingdi.h/tagTEXTMETRICW

typedef struct tagTEXTMETRICW TEXTMETRICW;

typedef TEXTMETRICW TEXTMETRIC;


// WARNING! conflicting data type names: /DWARF/wingdi.h/tagTEXTMETRICA - /wingdi.h/tagTEXTMETRICA


// WARNING! conflicting data type names: /DWARF/wingdi.h/tagBITMAPINFO - /wingdi.h/tagBITMAPINFO

typedef struct tagBITMAP tagBITMAP, *PtagBITMAP;

struct tagBITMAP {
    LONG bmType;
    LONG bmWidth;
    LONG bmHeight;
    LONG bmWidthBytes;
    WORD bmPlanes;
    WORD bmBitsPixel;
    LPVOID bmBits;
};


// WARNING! conflicting data type names: /DWARF/wingdi.h/LPLOGFONTA - /wingdi.h/LPLOGFONTA


// WARNING! conflicting data type names: /DWARF/wingdi.h/tagLOGFONTW - /wingdi.h/tagLOGFONTW


// WARNING! conflicting data type names: /DWARF/wingdi.h/BITMAPINFO - /wingdi.h/BITMAPINFO


// WARNING! conflicting data type names: /DWARF/wingdi.h/LPBITMAPINFO - /wingdi.h/LPBITMAPINFO


// WARNING! conflicting data type names: /DWARF/wingdi.h/LOGFONTA - /wingdi.h/LOGFONTA

typedef struct tagBITMAP BITMAP;


// WARNING! conflicting data type names: /DWARF/wingdi.h/BITMAPINFOHEADER - /wingdi.h/BITMAPINFOHEADER


// WARNING! conflicting data type names: /DWARF/wingdi.h/tagBITMAPINFOHEADER - /wingdi.h/tagBITMAPINFOHEADER


// WARNING! conflicting data type names: /DWARF/wingdi.h/LPTEXTMETRICW - /wingdi.h/LPTEXTMETRICW

typedef struct SetLGP_Params SetLGP_Params, *PSetLGP_Params;

struct SetLGP_Params {
    BOOL bRestore;
    BOOL *bExistingKey;
    char *szPath;
    char *szPolicy;
    DWORD dwValue;
};

typedef enum WLDP_WINDOWS_LOCKDOWN_MODE {
    WLDP_WINDOWS_LOCKDOWN_MODE_UNLOCKED=0,
    WLDP_WINDOWS_LOCKDOWN_MODE_TRIAL=1,
    WLDP_WINDOWS_LOCKDOWN_MODE_LOCKED=2,
    WLDP_WINDOWS_LOCKDOWN_MODE_MAX=3
} WLDP_WINDOWS_LOCKDOWN_MODE;

typedef enum WLDP_WINDOWS_LOCKDOWN_MODE *PWLDP_WINDOWS_LOCKDOWN_MODE;

typedef HRESULT (*WldpQueryWindowsLockdownMode_t)(PWLDP_WINDOWS_LOCKDOWN_MODE);

typedef struct DownloadSignedFileThreadArgs DownloadSignedFileThreadArgs, *PDownloadSignedFileThreadArgs;

struct DownloadSignedFileThreadArgs {
    char *url;
    char *file;
    HWND hProgressDialog;
    BOOL bPromptOnError;
};

typedef struct cregex_node cregex_node, *Pcregex_node;

typedef enum cregex_node_type {
    REGEX_NODE_TYPE_EPSILON=0,
    REGEX_NODE_TYPE_CHARACTER=1,
    REGEX_NODE_TYPE_ANY_CHARACTER=2,
    REGEX_NODE_TYPE_CHARACTER_CLASS=3,
    REGEX_NODE_TYPE_CHARACTER_CLASS_NEGATED=4,
    REGEX_NODE_TYPE_CONCATENATION=5,
    REGEX_NODE_TYPE_ALTERNATION=6,
    REGEX_NODE_TYPE_QUANTIFIER=7,
    REGEX_NODE_TYPE_ANCHOR_BEGIN=8,
    REGEX_NODE_TYPE_ANCHOR_END=9,
    REGEX_NODE_TYPE_CAPTURE=10
} cregex_node_type;

typedef union anon_union_24_5_ab5a05cb_for_cregex_node_1 anon_union_24_5_ab5a05cb_for_cregex_node_1, *Panon_union_24_5_ab5a05cb_for_cregex_node_1;

typedef struct anon_struct_4_1_3fcf6523_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_0 anon_struct_4_1_3fcf6523_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_0, *Panon_struct_4_1_3fcf6523_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_0;

typedef struct anon_struct_16_2_e7bfda6a_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_1 anon_struct_16_2_e7bfda6a_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_1, *Panon_struct_16_2_e7bfda6a_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_1;

typedef struct anon_struct_24_4_3e181560_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_2 anon_struct_24_4_3e181560_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_2, *Panon_struct_24_4_3e181560_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_2;

typedef struct anon_struct_16_2_f7fedec0_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_3 anon_struct_16_2_f7fedec0_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_3, *Panon_struct_16_2_f7fedec0_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_3;

typedef struct anon_struct_8_1_e4f5475c_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_4 anon_struct_8_1_e4f5475c_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_4, *Panon_struct_8_1_e4f5475c_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_4;

struct anon_struct_24_4_3e181560_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_2 {
    int nmin;
    int nmax;
    int greedy;
    struct cregex_node *quantified;
};

struct anon_struct_4_1_3fcf6523_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_0 {
    int ch;
};

struct anon_struct_8_1_e4f5475c_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_4 {
    struct cregex_node *captured;
};

struct anon_struct_16_2_f7fedec0_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_3 {
    struct cregex_node *left;
    struct cregex_node *right;
};

struct anon_struct_16_2_e7bfda6a_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_1 {
    char *from;
    char *to;
};

union anon_union_24_5_ab5a05cb_for_cregex_node_1 {
    struct anon_struct_4_1_3fcf6523_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_0 field_0;
    struct anon_struct_16_2_e7bfda6a_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_1 field_1;
    struct anon_struct_24_4_3e181560_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_2 field_2;
    struct anon_struct_16_2_f7fedec0_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_3 field_3;
    struct anon_struct_8_1_e4f5475c_for_anon_union_24_5_ab5a05cb_for_cregex_node_1_4 field_4;
};

struct cregex_node {
    enum cregex_node_type type;
    union anon_union_24_5_ab5a05cb_for_cregex_node_1 field_1;
};

typedef struct cregex_program_t cregex_program_t, *Pcregex_program_t;

struct cregex_program_t {
    int ninstructions;
    cregex_program_instr_t instructions[0];
};

typedef struct cregex_node cregex_node_t;

typedef struct xz_dec xz_dec, *Pxz_dec;

typedef struct anon_struct_24_3_9a5f660f_for_block_header anon_struct_24_3_9a5f660f_for_block_header, *Panon_struct_24_3_9a5f660f_for_block_header;

typedef struct anon_struct_48_4_51d0bee9_for_block anon_struct_48_4_51d0bee9_for_block, *Panon_struct_48_4_51d0bee9_for_block;

typedef struct anon_struct_48_4_3ccec150_for_index anon_struct_48_4_3ccec150_for_index, *Panon_struct_48_4_3ccec150_for_index;

typedef struct anon_struct_1040_3_b41ccc2f_for_temp anon_struct_1040_3_b41ccc2f_for_temp, *Panon_struct_1040_3_b41ccc2f_for_temp;

typedef struct xz_dec_lzma2 xz_dec_lzma2, *Pxz_dec_lzma2;

typedef struct xz_dec_hash xz_dec_hash, *Pxz_dec_hash;

typedef struct rc_dec rc_dec, *Prc_dec;

typedef struct dictionary dictionary, *Pdictionary;

typedef struct lzma2_dec lzma2_dec, *Plzma2_dec;

typedef struct lzma_dec lzma_dec, *Plzma_dec;

typedef struct anon_struct_68_2_62f5aa99_for_temp anon_struct_68_2_62f5aa99_for_temp, *Panon_struct_68_2_62f5aa99_for_temp;

typedef enum lzma2_seq {
    SEQ_CONTROL=0,
    SEQ_UNCOMPRESSED_1=1,
    SEQ_UNCOMPRESSED_2=2,
    SEQ_COMPRESSED_0=3,
    SEQ_COMPRESSED_1=4,
    SEQ_PROPERTIES=5,
    SEQ_LZMA_PREPARE=6,
    SEQ_LZMA_RUN=7,
    SEQ_COPY=8
} lzma2_seq;

typedef struct lzma_len_dec lzma_len_dec, *Plzma_len_dec;

struct xz_dec_hash {
    vli_type unpadded;
    vli_type uncompressed;
    uint32_t crc32;
};

struct anon_struct_48_4_3ccec150_for_index {
    enum anon_enum_32 sequence;
    vli_type size;
    vli_type count;
    struct xz_dec_hash hash;
};

struct anon_struct_1040_3_b41ccc2f_for_temp {
    size_t pos;
    size_t size;
    uint8_t buf[1024];
};

struct lzma_len_dec {
    uint16_t choice;
    uint16_t choice2;
    uint16_t low[16][8];
    uint16_t mid[16][8];
    uint16_t high[256];
};

struct lzma_dec {
    uint32_t rep0;
    uint32_t rep1;
    uint32_t rep2;
    uint32_t rep3;
    enum lzma_state state;
    uint32_t len;
    uint32_t lc;
    uint32_t literal_pos_mask;
    uint32_t pos_mask;
    uint16_t is_match[12][16];
    uint16_t is_rep[12];
    uint16_t is_rep0[12];
    uint16_t is_rep1[12];
    uint16_t is_rep2[12];
    uint16_t is_rep0_long[12][16];
    uint16_t dist_slot[4][64];
    uint16_t dist_special[114];
    uint16_t dist_align[16];
    struct lzma_len_dec match_len_dec;
    struct lzma_len_dec rep_len_dec;
    uint16_t literal[16][768];
};

struct lzma2_dec {
    enum lzma2_seq sequence;
    enum lzma2_seq next_sequence;
    uint32_t uncompressed;
    uint32_t compressed;
    _Bool need_dict_reset;
    _Bool need_props;
};

struct anon_struct_68_2_62f5aa99_for_temp {
    uint32_t size;
    uint8_t buf[63];
};

struct dictionary {
    uint8_t *buf;
    size_t start;
    size_t pos;
    size_t full;
    size_t limit;
    size_t end;
    uint32_t size;
    uint32_t size_max;
    uint32_t allocated;
    enum xz_mode mode;
};

struct rc_dec {
    uint32_t range;
    uint32_t code;
    uint32_t init_bytes_left;
    uint8_t *in;
    size_t in_pos;
    size_t in_limit;
};

struct xz_dec_lzma2 {
    struct rc_dec rc;
    struct dictionary dict;
    struct lzma2_dec lzma2;
    struct lzma_dec lzma;
    struct anon_struct_68_2_62f5aa99_for_temp temp;
};

struct anon_struct_24_3_9a5f660f_for_block_header {
    vli_type compressed;
    vli_type uncompressed;
    uint32_t size;
};

struct anon_struct_48_4_51d0bee9_for_block {
    vli_type compressed;
    vli_type uncompressed;
    vli_type count;
    struct xz_dec_hash hash;
};

struct xz_dec {
    enum anon_enum_32 sequence;
    uint32_t pos;
    vli_type vli;
    size_t in_start;
    size_t out_start;
    uint32_t crc32;
    enum xz_check check_type;
    enum xz_mode mode;
    _Bool allow_buf_error;
    struct anon_struct_24_3_9a5f660f_for_block_header block_header;
    struct anon_struct_48_4_51d0bee9_for_block block;
    struct anon_struct_48_4_3ccec150_for_index index;
    struct anon_struct_1040_3_b41ccc2f_for_temp temp;
    struct xz_dec_lzma2 *lzma2;
    struct xz_dec_bcj *bcj;
    _Bool bcj_active;
};

typedef uint32_t aliased_u32_t;

typedef uint64_t aliased_u64_t;

typedef struct ezxml_root ezxml_root, *Pezxml_root;

typedef struct ezxml_root *ezxml_root_t;

typedef struct ezxml ezxml, *Pezxml;

typedef struct ezxml *ezxml_t;

struct ezxml {
    char *name;
    char **attr;
    char *txt;
    size_t off;
    ezxml_t next;
    ezxml_t sibling;
    ezxml_t ordered;
    ezxml_t child;
    ezxml_t parent;
    short flags;
};

struct ezxml_root {
    struct ezxml xml;
    ezxml_t cur;
    char *m;
    size_t len;
    char *u;
    char *s;
    char *e;
    char **ent;
    char ***attr;
    char ***pi;
    short standalone;
    char err[256];
};

typedef struct IEnumVARIANT IEnumVARIANT, *PIEnumVARIANT;

typedef struct IEnumVARIANTVtbl IEnumVARIANTVtbl, *PIEnumVARIANTVtbl;

struct IEnumVARIANT {
    struct IEnumVARIANTVtbl *lpVtbl;
};

struct IEnumVARIANTVtbl {
    HRESULT (*QueryInterface)(struct IEnumVARIANT *, IID *, void **);
    ULONG (*AddRef)(struct IEnumVARIANT *);
    ULONG (*Release)(struct IEnumVARIANT *);
    HRESULT (*Next)(struct IEnumVARIANT *, ULONG, VARIANT *, ULONG *);
    HRESULT (*Skip)(struct IEnumVARIANT *, ULONG);
    HRESULT (*Reset)(struct IEnumVARIANT *);
    HRESULT (*Clone)(struct IEnumVARIANT *, struct IEnumVARIANT **);
};

typedef struct anon_struct_16_2_74ab80b4 anon_struct_16_2_74ab80b4, *Panon_struct_16_2_74ab80b4;

struct anon_struct_16_2_74ab80b4 {
    int (*fn)(FILE *);
    char *str;
};

typedef struct fat_mbr_type fat_mbr_type, *Pfat_mbr_type;

struct fat_mbr_type {
    uint8_t mbr_type;
    uint8_t magic[8];
};

typedef struct win_fs_type win_fs_type, *Pwin_fs_type;

struct win_fs_type {
    char *name;
    uint8_t magic[8];
};

typedef enum tagCLSCTX {
    CLSCTX_PS_DLL=-2147483648,
    CLSCTX_INPROC_SERVER=1,
    CLSCTX_INPROC_HANDLER=2,
    CLSCTX_LOCAL_SERVER=4,
    CLSCTX_INPROC_SERVER16=8,
    CLSCTX_REMOTE_SERVER=16,
    CLSCTX_INPROC_HANDLER16=32,
    CLSCTX_RESERVED1=64,
    CLSCTX_RESERVED2=128,
    CLSCTX_RESERVED3=256,
    CLSCTX_RESERVED4=512,
    CLSCTX_NO_CODE_DOWNLOAD=1024,
    CLSCTX_RESERVED5=2048,
    CLSCTX_NO_CUSTOM_MARSHAL=4096,
    CLSCTX_ENABLE_CODE_DOWNLOAD=8192,
    CLSCTX_NO_FAILURE_LOG=16384,
    CLSCTX_DISABLE_AAA=32768,
    CLSCTX_ENABLE_AAA=65536,
    CLSCTX_FROM_DEFAULT_CONTEXT=131072,
    CLSCTX_ACTIVATE_32_BIT_SERVER=262144,
    CLSCTX_ACTIVATE_64_BIT_SERVER=524288,
    CLSCTX_ENABLE_CLOAKING=1048576,
    CLSCTX_APPCONTAINER=4194304,
    CLSCTX_ACTIVATE_AAA_AS_IU=8388608
} tagCLSCTX;

typedef uint8_t le8_t;

typedef uint8_t le16_t[2];

typedef uint8_t le32_t[4];


// WARNING! conflicting data type names: /DWARF/objidlbase.h/SOLE_AUTHENTICATION_SERVICE - /objidl.h/SOLE_AUTHENTICATION_SERVICE


// WARNING! conflicting data type names: /DWARF/objidlbase.h/IStreamVtbl - /objidl.h/IStreamVtbl


// WARNING! conflicting data type names: /DWARF/objidlbase.h/IEnumString - /objidl.h/IEnumString


// WARNING! conflicting data type names: /DWARF/objidlbase.h/tagSOLE_AUTHENTICATION_SERVICE - /objidl.h/tagSOLE_AUTHENTICATION_SERVICE


// WARNING! conflicting data type names: /DWARF/objidlbase.h/IStream - /objidl.h/IStream


// WARNING! conflicting data type names: /DWARF/objidlbase.h/STATSTG - /objidl.h/STATSTG


// WARNING! conflicting data type names: /DWARF/objidlbase.h/IEnumStringVtbl - /objidl.h/IEnumStringVtbl


// WARNING! conflicting data type names: /DWARF/objidlbase.h/tagSTATSTG - /objidl.h/tagSTATSTG

typedef struct wimboot_wim wimboot_wim, *Pwimboot_wim;

struct wimboot_wim {
    struct WIMStruct *wim;
    u64 data_source_id;
    u8 blob_table_hash[20];
};

typedef struct win32_apply_ctx win32_apply_ctx, *Pwin32_apply_ctx;

typedef struct anon_struct_24_7_113c9438_for_wimboot anon_struct_24_7_113c9438_for_wimboot, *Panon_struct_24_7_113c9438_for_wimboot;

struct anon_struct_24_7_113c9438_for_wimboot {
    struct wimboot_wim *wims;
    size_t num_wims;
    _Bool wof_running;
    _Bool have_wrong_version_wims;
    _Bool have_uncompressed_wims;
    _Bool have_unsupported_compressed_resources;
    _Bool have_huge_resources;
};

struct win32_apply_ctx {
    struct apply_ctx common;
    struct anon_struct_24_7_113c9438_for_wimboot wimboot;
    struct string_list *prepopulate_pats;
    void *mem_prepopulate_pats;
    _Bool tried_to_load_prepopulate_list;
    HANDLE h_target;
    UNICODE_STRING target_ntpath;
    UNICODE_STRING pathbuf;
    OBJECT_ATTRIBUTES attr;
    IO_STATUS_BLOCK iosb;
    wchar_t *print_buffer;
    u8 *data_buffer;
    u8 *data_buffer_ptr;
    size_t data_buffer_size;
    size_t encrypted_offset;
    size_t encrypted_size;
    struct reparse_buffer_disk rpbuf;
    struct reparse_buffer_disk rpfixbuf;
    HANDLE open_handles[512];
    uint num_open_handles;
    _Bool is_sparse_stream[512];
    _Bool any_sparse_streams;
    struct list_head.conflict reparse_dentries;
    struct list_head.conflict encrypted_dentries;
    ulong partial_security_descriptors;
    ulong no_security_descriptors;
    ulong num_set_short_name_failures;
    ulong num_remove_short_name_failures;
    ulong num_system_compression_failures;
    ulong num_system_compression_exclusions;
    ulong num_object_id_failures;
    ulong num_xattr_failures;
    u64 windows_build_number;
    _Bool tried_to_enable_short_names;
};

typedef struct anon_struct_20_2_36221a7d anon_struct_20_2_36221a7d, *Panon_struct_20_2_36221a7d;

typedef struct _FILE_PROVIDER_EXTERNAL_INFO_V1 _FILE_PROVIDER_EXTERNAL_INFO_V1, *P_FILE_PROVIDER_EXTERNAL_INFO_V1;

typedef struct _FILE_PROVIDER_EXTERNAL_INFO_V1 FILE_PROVIDER_EXTERNAL_INFO_V1;

struct _FILE_PROVIDER_EXTERNAL_INFO_V1 {
    DWORD Version;
    DWORD Algorithm;
    DWORD Flags;
};

struct anon_struct_20_2_36221a7d {
    WOF_EXTERNAL_INFO wof_info;
    FILE_PROVIDER_EXTERNAL_INFO_V1 file_info;
};

typedef enum filesystem {
    NONE=0,
    EXT2=1,
    BTRFS=2,
    VFAT=3,
    NTFS=4,
    XFS=5,
    UFS1=6,
    UFS2=7
} filesystem;

typedef struct lcpit_matchfinder lcpit_matchfinder, *Plcpit_matchfinder;

typedef union anon_union_8_2_e243ec9f_for_lcpit_matchfinder_3 anon_union_8_2_e243ec9f_for_lcpit_matchfinder_3, *Panon_union_8_2_e243ec9f_for_lcpit_matchfinder_3;

union anon_union_8_2_e243ec9f_for_lcpit_matchfinder_3 {
    u32 *intervals;
    u64 *intervals64;
};

struct lcpit_matchfinder {
    _Bool huge_mode;
    u32 cur_pos;
    u32 *pos_data;
    union anon_union_8_2_e243ec9f_for_lcpit_matchfinder_3 field_3;
    u32 min_match_len;
    u32 nice_match_len;
    u32 next[2];
    u32 orig_nice_match_len;
};

typedef enum _VDS_LUN_RESERVE_MODE {
    VDS_LRM_NONE=0,
    VDS_LRM_EXCLUSIVE_RW=1,
    VDS_LRM_EXCLUSIVE_RO=2,
    VDS_LRM_SHARED_RO=3,
    VDS_LRM_SHARED_RW=4
} _VDS_LUN_RESERVE_MODE;

typedef struct _VDS_DISK_PROP _VDS_DISK_PROP, *P_VDS_DISK_PROP;

typedef struct _VDS_DISK_PROP VDS_DISK_PROP;

typedef GUID VDS_OBJECT_ID;

typedef enum _VDS_DISK_STATUS {
    VDS_DS_UNKNOWN=0,
    VDS_DS_ONLINE=1,
    VDS_DS_NOT_READY=2,
    VDS_DS_NO_MEDIA=3,
    VDS_DS_OFFLINE=4,
    VDS_DS_FAILED=5,
    VDS_DS_MISSING=6
} _VDS_DISK_STATUS;

typedef enum _VDS_DISK_STATUS VDS_DISK_STATUS;

typedef enum _VDS_LUN_RESERVE_MODE VDS_LUN_RESERVE_MODE;

typedef enum _VDS_HEALTH {
    VDS_H_UNKNOWN=0,
    VDS_H_HEALTHY=1,
    VDS_H_REBUILDING=2,
    VDS_H_STALE=3,
    VDS_H_FAILING=4,
    VDS_H_FAILING_REDUNDANCY=5,
    VDS_H_FAILED_REDUNDANCY=6,
    VDS_H_FAILED_REDUNDANCY_FAILING=7,
    VDS_H_FAILED=8,
    VDS_H_REPLACED=9,
    VDS_H_PENDING_FAILURE=10,
    VDS_H_DEGRADED=11
} _VDS_HEALTH;

typedef enum _VDS_HEALTH VDS_HEALTH;

typedef enum _VDS_STORAGE_BUS_TYPE {
    VDSBusTypeUnknown=0,
    VDSBusTypeScsi=1,
    VDSBusTypeAtapi=2,
    VDSBusTypeAta=3,
    VDSBusType1394=4,
    VDSBusTypeSsa=5,
    VDSBusTypeFibre=6,
    VDSBusTypeUsb=7,
    VDSBusTypeRAID=8,
    VDSBusTypeiScsi=9,
    VDSBusTypeMaxReserved=127
} _VDS_STORAGE_BUS_TYPE;

typedef enum _VDS_STORAGE_BUS_TYPE VDS_STORAGE_BUS_TYPE;

typedef enum _VDS_PARTITION_STYLE {
    VDS_PST_UNKNOWN=0,
    VDS_PST_MBR=1,
    VDS_PST_GPT=2
} _VDS_PARTITION_STYLE;

typedef enum _VDS_PARTITION_STYLE VDS_PARTITION_STYLE;

typedef union anon_union_16_2_11bdecc2_for__VDS_DISK_PROP_13 anon_union_16_2_11bdecc2_for__VDS_DISK_PROP_13, *Panon_union_16_2_11bdecc2_for__VDS_DISK_PROP_13;

union anon_union_16_2_11bdecc2_for__VDS_DISK_PROP_13 {
    DWORD dwSignature;
    GUID DiskGuid;
};

struct _VDS_DISK_PROP {
    VDS_OBJECT_ID id;
    VDS_DISK_STATUS status;
    VDS_LUN_RESERVE_MODE ReserveMode;
    VDS_HEALTH health;
    DWORD dwDeviceType;
    DWORD dwMediaType;
    ULONGLONG ullSize;
    ULONG ulBytesPerSector;
    ULONG ulSectorsPerTrack;
    ULONG ulTracksPerCylinder;
    ULONG ulFlags;
    VDS_STORAGE_BUS_TYPE BusType;
    VDS_PARTITION_STYLE PartitionStyle;
    union anon_union_16_2_11bdecc2_for__VDS_DISK_PROP_13 field_13;
    LPWSTR pwszDiskAddress;
    LPWSTR pwszName;
    LPWSTR pwszFriendlyName;
    LPWSTR pwszAdaptorName;
    LPWSTR pwszDevicePath;
};

typedef struct _CREATE_PARTITION_PARAMETERS _CREATE_PARTITION_PARAMETERS, *P_CREATE_PARTITION_PARAMETERS;

typedef union anon_union_112_2_d2260c33_for__CREATE_PARTITION_PARAMETERS_1 anon_union_112_2_d2260c33_for__CREATE_PARTITION_PARAMETERS_1, *Panon_union_112_2_d2260c33_for__CREATE_PARTITION_PARAMETERS_1;

typedef struct anon_struct_2_2_6db1989b_for_MbrPartInfo anon_struct_2_2_6db1989b_for_MbrPartInfo, *Panon_struct_2_2_6db1989b_for_MbrPartInfo;

typedef struct anon_struct_112_4_a935f84d_for_GptPartInfo anon_struct_112_4_a935f84d_for_GptPartInfo, *Panon_struct_112_4_a935f84d_for_GptPartInfo;

struct anon_struct_2_2_6db1989b_for_MbrPartInfo {
    BYTE partitionType;
    BOOLEAN bootIndicator;
};

struct anon_struct_112_4_a935f84d_for_GptPartInfo {
    GUID partitionType;
    GUID partitionId;
    ULONGLONG attributes;
    WCHAR name[36];
};

union anon_union_112_2_d2260c33_for__CREATE_PARTITION_PARAMETERS_1 {
    struct anon_struct_2_2_6db1989b_for_MbrPartInfo MbrPartInfo;
    struct anon_struct_112_4_a935f84d_for_GptPartInfo GptPartInfo;
};

struct _CREATE_PARTITION_PARAMETERS {
    VDS_PARTITION_STYLE style;
    union anon_union_112_2_d2260c33_for__CREATE_PARTITION_PARAMETERS_1 field_1;
};

typedef enum _VDS_QUERY_PROVIDER_FLAG {
    VDS_QUERY_SOFTWARE_PROVIDERS=1,
    VDS_QUERY_HARDWARE_PROVIDERS=2
} _VDS_QUERY_PROVIDER_FLAG;

typedef struct _VDS_PACK_PROP _VDS_PACK_PROP, *P_VDS_PACK_PROP;

typedef struct _VDS_PACK_PROP VDS_PACK_PROP;

typedef enum _VDS_PACK_STATUS {
    VDS_PS_UNKNOWN=0,
    VDS_PS_ONLINE=1,
    VDS_PS_OFFLINE=4
} _VDS_PACK_STATUS;

typedef enum _VDS_PACK_STATUS VDS_PACK_STATUS;

struct _VDS_PACK_PROP {
    VDS_OBJECT_ID id;
    LPWSTR pwszName;
    VDS_PACK_STATUS status;
    ULONG ulFlags;
};

typedef struct _VDS_PARTITION_PROP _VDS_PARTITION_PROP, *P_VDS_PARTITION_PROP;

typedef struct _VDS_PARTITION_PROP VDS_PARTITION_PROP;

typedef union anon_union_112_2_439a9213_for__VDS_PARTITION_PROP_5 anon_union_112_2_439a9213_for__VDS_PARTITION_PROP_5, *Panon_union_112_2_439a9213_for__VDS_PARTITION_PROP_5;

typedef struct _VDS_PARTITION_INFO_MBR _VDS_PARTITION_INFO_MBR, *P_VDS_PARTITION_INFO_MBR;

typedef struct _VDS_PARTITION_INFO_MBR VDS_PARTITION_INFO_MBR;

typedef struct _VDS_PARTITION_INFO_GPT _VDS_PARTITION_INFO_GPT, *P_VDS_PARTITION_INFO_GPT;

typedef struct _VDS_PARTITION_INFO_GPT VDS_PARTITION_INFO_GPT;

struct _VDS_PARTITION_INFO_GPT {
    GUID partitionType;
    GUID partitionId;
    ULONGLONG attributes;
    WCHAR name[36];
};

struct _VDS_PARTITION_INFO_MBR {
    BYTE partitionType;
    BOOLEAN bootIndicator;
    BOOLEAN recognizedPartition;
    DWORD hiddenSectors;
};

union anon_union_112_2_439a9213_for__VDS_PARTITION_PROP_5 {
    VDS_PARTITION_INFO_MBR Mbr;
    VDS_PARTITION_INFO_GPT Gpt;
};

struct _VDS_PARTITION_PROP {
    VDS_PARTITION_STYLE PartitionStyle;
    ULONG ulFlags;
    ULONG ulPartitionNumber;
    ULONGLONG ullOffset;
    ULONGLONG ullSize;
    union anon_union_112_2_439a9213_for__VDS_PARTITION_PROP_5 field_5;
};

typedef enum _VDS_TRANSITION_STATE {
    VDS_TS_UNKNOWN=0,
    VDS_TS_STABLE=1,
    VDS_TS_EXTENDING=2,
    VDS_TS_SHRINKING=3,
    VDS_TS_RECONFIGING=4,
    VDS_TS_RESTRIPING=8
} _VDS_TRANSITION_STATE;

typedef enum _VDS_TRANSITION_STATE VDS_TRANSITION_STATE;

typedef enum _VDS_VOLUME_TYPE {
    VDS_VT_UNKNOWN=0,
    VDS_VT_SIMPLE=10,
    VDS_VT_SPAN=11,
    VDS_VT_STRIPE=12,
    VDS_VT_MIRROR=13,
    VDS_VT_PARITY=14
} _VDS_VOLUME_TYPE;

typedef enum _VDS_VOLUME_TYPE VDS_VOLUME_TYPE;

typedef enum _VDS_OBJECT_TYPE {
    VDS_OT_UNKNOWN=0,
    VDS_OT_PROVIDER=1,
    VDS_OT_PACK=10,
    VDS_OT_VOLUME=11,
    VDS_OT_VOLUME_PLEX=12,
    VDS_OT_DISK=13,
    VDS_OT_SUB_SYSTEM=30,
    VDS_OT_CONTROLLER=31,
    VDS_OT_DRIVE=32,
    VDS_OT_LUN=33,
    VDS_OT_LUN_PLEX=34,
    VDS_OT_PORT=35,
    VDS_OT_PORTAL=36,
    VDS_OT_TARGET=37,
    VDS_OT_PORTAL_GROUP=38,
    VDS_OT_STORAGE_POOL=39,
    VDS_OT_HBAPORT=90,
    VDS_OT_INIT_ADAPTER=91,
    VDS_OT_INIT_PORTAL=92,
    VDS_OT_ASYNC=100,
    VDS_OT_ENUM=101,
    VDS_OT_VDISK=200,
    VDS_OT_OPEN_VDISK=201
} _VDS_OBJECT_TYPE;

typedef enum _VDS_OBJECT_TYPE VDS_OBJECT_TYPE;

typedef struct _CHANGE_ATTRIBUTES_PARAMETERS _CHANGE_ATTRIBUTES_PARAMETERS, *P_CHANGE_ATTRIBUTES_PARAMETERS;

typedef struct _CHANGE_ATTRIBUTES_PARAMETERS CHANGE_ATTRIBUTES_PARAMETERS;

typedef union anon_union_8_2_d2260c33_for__CHANGE_ATTRIBUTES_PARAMETERS_1 anon_union_8_2_d2260c33_for__CHANGE_ATTRIBUTES_PARAMETERS_1, *Panon_union_8_2_d2260c33_for__CHANGE_ATTRIBUTES_PARAMETERS_1;

typedef struct anon_struct_1_1_22a1315d_for_MbrPartInfo anon_struct_1_1_22a1315d_for_MbrPartInfo, *Panon_struct_1_1_22a1315d_for_MbrPartInfo;

typedef struct anon_struct_8_1_b5a5f315_for_GptPartInfo anon_struct_8_1_b5a5f315_for_GptPartInfo, *Panon_struct_8_1_b5a5f315_for_GptPartInfo;

struct anon_struct_8_1_b5a5f315_for_GptPartInfo {
    ULONGLONG attributes;
};

struct anon_struct_1_1_22a1315d_for_MbrPartInfo {
    BOOLEAN bootIndicator;
};

union anon_union_8_2_d2260c33_for__CHANGE_ATTRIBUTES_PARAMETERS_1 {
    struct anon_struct_1_1_22a1315d_for_MbrPartInfo MbrPartInfo;
    struct anon_struct_8_1_b5a5f315_for_GptPartInfo GptPartInfo;
};

struct _CHANGE_ATTRIBUTES_PARAMETERS {
    VDS_PARTITION_STYLE style;
    union anon_union_8_2_d2260c33_for__CHANGE_ATTRIBUTES_PARAMETERS_1 field_1;
};

typedef struct _VDS_PROVIDER_PROP _VDS_PROVIDER_PROP, *P_VDS_PROVIDER_PROP;

typedef struct _VDS_PROVIDER_PROP VDS_PROVIDER_PROP;

typedef enum _VDS_PROVIDER_TYPE {
    VDS_PT_UNKNOWN=0,
    VDS_PT_SOFTWARE=1,
    VDS_PT_HARDWARE=2,
    VDS_PT_VIRTUALDISK=3,
    VDS_PT_MAX=4
} _VDS_PROVIDER_TYPE;

typedef enum _VDS_PROVIDER_TYPE VDS_PROVIDER_TYPE;

struct _VDS_PROVIDER_PROP {
    VDS_OBJECT_ID id;
    LPWSTR pwszName;
    GUID guidVersionId;
    LPWSTR pwszVersion;
    VDS_PROVIDER_TYPE type;
    ULONG ulFlags;
    ULONG ulStripeSizeFlags;
    SHORT sRebuildPriority;
};

typedef struct _VDS_FILE_SYSTEM_TYPE_PROP _VDS_FILE_SYSTEM_TYPE_PROP, *P_VDS_FILE_SYSTEM_TYPE_PROP;

typedef struct _VDS_FILE_SYSTEM_TYPE_PROP VDS_FILE_SYSTEM_TYPE_PROP;

typedef enum _VDS_FILE_SYSTEM_TYPE {
    VDS_FST_UNKNOWN=0,
    VDS_FST_RAW=1,
    VDS_FST_FAT=2,
    VDS_FST_FAT32=3,
    VDS_FST_NTFS=4,
    VDS_FST_CDFS=5,
    VDS_FST_UDF=6,
    VDS_FST_EXFAT=7
} _VDS_FILE_SYSTEM_TYPE;

typedef enum _VDS_FILE_SYSTEM_TYPE VDS_FILE_SYSTEM_TYPE;

struct _VDS_FILE_SYSTEM_TYPE_PROP {
    VDS_FILE_SYSTEM_TYPE type;
    WCHAR wszName[8];
    ULONG ulFlags;
    ULONG ulCompressionFlags;
    ULONG ulMaxLableLength;
    LPWSTR pwszIllegalLabelCharSet;
};

typedef struct _VDS_ASYNC_OUTPUT _VDS_ASYNC_OUTPUT, *P_VDS_ASYNC_OUTPUT;

typedef struct _VDS_ASYNC_OUTPUT VDS_ASYNC_OUTPUT;

typedef enum _VDS_ASYNC_OUTPUT_TYPE {
    VDS_ASYNCOUT_UNKNOWN=0,
    VDS_ASYNCOUT_CREATEVOLUME=1,
    VDS_ASYNCOUT_EXTENDVOLUME=2,
    VDS_ASYNCOUT_SHRINKVOLUME=3,
    VDS_ASYNCOUT_ADDVOLUMEPLEX=4,
    VDS_ASYNCOUT_BREAKVOLUMEPLEX=5,
    VDS_ASYNCOUT_REMOVEVOLUMEPLEX=6,
    VDS_ASYNCOUT_REPAIRVOLUMEPLEX=7,
    VDS_ASYNCOUT_RECOVERPACK=8,
    VDS_ASYNCOUT_REPLACEDISK=9,
    VDS_ASYNCOUT_CREATEPARTITION=10,
    VDS_ASYNCOUT_CLEAN=11,
    VDS_ASYNCOUT_CREATELUN=50,
    VDS_ASYNCOUT_ADDLUNPLEX=52,
    VDS_ASYNCOUT_REMOVELUNPLEX=53,
    VDS_ASYNCOUT_EXTENDLUN=54,
    VDS_ASYNCOUT_SHRINKLUN=55,
    VDS_ASYNCOUT_RECOVERLUN=56,
    VDS_ASYNCOUT_LOGINTOTARGET=60,
    VDS_ASYNCOUT_LOGOUTFROMTARGET=61,
    VDS_ASYNCOUT_CREATETARGET=62,
    VDS_ASYNCOUT_CREATEPORTALGROUP=63,
    VDS_ASYNCOUT_DELETETARGET=64,
    VDS_ASYNCOUT_ADDPORTAL=65,
    VDS_ASYNCOUT_REMOVEPORTAL=66,
    VDS_ASYNCOUT_DELETEPORTALGROUP=67,
    VDS_ASYNCOUT_FORMAT=101,
    VDS_ASYNCOUT_CREATE_VDISK=200,
    VDS_ASYNCOUT_ATTACH_VDISK=201,
    VDS_ASYNCOUT_COMPACT_VDISK=202,
    VDS_ASYNCOUT_MERGE_VDISK=203,
    VDS_ASYNCOUT_EXPAND_VDISK=204
} _VDS_ASYNC_OUTPUT_TYPE;

typedef enum _VDS_ASYNC_OUTPUT_TYPE VDS_ASYNC_OUTPUT_TYPE;

typedef union anon_union_24_7_954ef915_for__VDS_ASYNC_OUTPUT_1 anon_union_24_7_954ef915_for__VDS_ASYNC_OUTPUT_1, *Panon_union_24_7_954ef915_for__VDS_ASYNC_OUTPUT_1;

typedef struct anon_struct_24_2_c499c8e4_for_cp anon_struct_24_2_c499c8e4_for_cp, *Panon_struct_24_2_c499c8e4_for_cp;

typedef struct anon_struct_8_1_7630bea6_for_cv anon_struct_8_1_7630bea6_for_cv, *Panon_struct_8_1_7630bea6_for_cv;

typedef struct anon_struct_8_1_7630bea6_for_bvp anon_struct_8_1_7630bea6_for_bvp, *Panon_struct_8_1_7630bea6_for_bvp;

typedef struct anon_struct_8_1_30687a1d_for_cl anon_struct_8_1_30687a1d_for_cl, *Panon_struct_8_1_30687a1d_for_cl;

typedef struct anon_struct_8_1_c46f0ccf_for_ct anon_struct_8_1_c46f0ccf_for_ct, *Panon_struct_8_1_c46f0ccf_for_ct;

typedef struct anon_struct_8_1_22353cef_for_cpg anon_struct_8_1_22353cef_for_cpg, *Panon_struct_8_1_22353cef_for_cpg;

typedef struct anon_struct_8_1_a0093fef_for_cvd anon_struct_8_1_a0093fef_for_cvd, *Panon_struct_8_1_a0093fef_for_cvd;

struct anon_struct_8_1_30687a1d_for_cl {
    struct IUnknown *pLunUnk;
};

struct anon_struct_8_1_22353cef_for_cpg {
    struct IUnknown *pPortalGroupUnk;
};

struct anon_struct_24_2_c499c8e4_for_cp {
    ULONGLONG ullOffset;
    VDS_OBJECT_ID volumeId;
};

struct anon_struct_8_1_c46f0ccf_for_ct {
    struct IUnknown *pTargetUnk;
};

struct anon_struct_8_1_7630bea6_for_bvp {
    struct IUnknown *pVolumeUnk;
};

struct anon_struct_8_1_7630bea6_for_cv {
    struct IUnknown *pVolumeUnk;
};

struct anon_struct_8_1_a0093fef_for_cvd {
    struct IUnknown *pVDiskUnk;
};

union anon_union_24_7_954ef915_for__VDS_ASYNC_OUTPUT_1 {
    struct anon_struct_24_2_c499c8e4_for_cp cp;
    struct anon_struct_8_1_7630bea6_for_cv cv;
    struct anon_struct_8_1_7630bea6_for_bvp bvp;
    struct anon_struct_8_1_30687a1d_for_cl cl;
    struct anon_struct_8_1_c46f0ccf_for_ct ct;
    struct anon_struct_8_1_22353cef_for_cpg cpg;
    struct anon_struct_8_1_a0093fef_for_cvd cvd;
};

struct _VDS_ASYNC_OUTPUT {
    VDS_ASYNC_OUTPUT_TYPE type;
    union anon_union_24_7_954ef915_for__VDS_ASYNC_OUTPUT_1 field_1;
};

typedef enum _VDS_VOLUME_STATUS {
    VDS_VS_UNKNOWN=0,
    VDS_VS_ONLINE=1,
    VDS_VS_NO_MEDIA=3,
    VDS_VS_OFFLINE=4,
    VDS_VS_FAILED=5
} _VDS_VOLUME_STATUS;

typedef enum _VDS_VOLUME_STATUS VDS_VOLUME_STATUS;

typedef enum _VDS_DISK_EXTENT_TYPE {
    VDS_DET_UNKNOWN=0,
    VDS_DET_FREE=1,
    VDS_DET_DATA=2,
    VDS_DET_OEM=3,
    VDS_DET_ESP=4,
    VDS_DET_MSR=5,
    VDS_DET_LDM=6,
    VDS_DET_CLUSTER=7,
    VDS_DET_UNUSABLE=32767
} _VDS_DISK_EXTENT_TYPE;

typedef struct _VDS_INPUT_DISK _VDS_INPUT_DISK, *P_VDS_INPUT_DISK;

struct _VDS_INPUT_DISK {
    VDS_OBJECT_ID diskId;
    ULONGLONG ullSize;
    VDS_OBJECT_ID plexId;
    ULONG memberIdx;
};

typedef struct _CREATE_PARTITION_PARAMETERS CREATE_PARTITION_PARAMETERS;

typedef struct _VDS_DRIVE_LETTER_PROP _VDS_DRIVE_LETTER_PROP, *P_VDS_DRIVE_LETTER_PROP;

typedef struct _VDS_DRIVE_LETTER_PROP VDS_DRIVE_LETTER_PROP;

struct _VDS_DRIVE_LETTER_PROP {
    WCHAR wcLetter;
    VDS_OBJECT_ID volumeId;
    ULONG ulFlags;
    WINBOOL bUsed;
};

typedef struct _VDS_DISK_EXTENT _VDS_DISK_EXTENT, *P_VDS_DISK_EXTENT;

typedef struct _VDS_DISK_EXTENT VDS_DISK_EXTENT;

typedef enum _VDS_DISK_EXTENT_TYPE VDS_DISK_EXTENT_TYPE;

struct _VDS_DISK_EXTENT {
    VDS_OBJECT_ID diskId;
    VDS_DISK_EXTENT_TYPE type;
    ULONGLONG ullOffset;
    ULONGLONG ullSize;
    VDS_OBJECT_ID volumeId;
    VDS_OBJECT_ID plexId;
    ULONG memberIdx;
};

typedef struct _VDS_INPUT_DISK VDS_INPUT_DISK;

typedef struct _VDS_SERVICE_PROP _VDS_SERVICE_PROP, *P_VDS_SERVICE_PROP;

typedef struct _VDS_SERVICE_PROP VDS_SERVICE_PROP;

struct _VDS_SERVICE_PROP {
    LPWSTR pwszVersion;
    ULONG ulFlags;
};

typedef struct _VDS_VOLUME_PROP _VDS_VOLUME_PROP, *P_VDS_VOLUME_PROP;

struct _VDS_VOLUME_PROP {
    VDS_OBJECT_ID id;
    VDS_VOLUME_TYPE type;
    VDS_VOLUME_STATUS status;
    VDS_HEALTH health;
    VDS_TRANSITION_STATE TransitionState;
    ULONGLONG ullSize;
    ULONG ulFlags;
    VDS_FILE_SYSTEM_TYPE RecommendedFileSystemType;
    LPWSTR pwszName;
};

typedef struct _VDS_VOLUME_PROP VDS_VOLUME_PROP;

typedef enum xa_misc_enum_t {
    XA_PERM_RSYS=1,
    XA_PERM_XSYS=4,
    XA_PERM_RUSR=16,
    XA_PERM_XUSR=64,
    XA_PERM_RGRP=256,
    XA_PERM_ALL_READ=273,
    ISO_XA_MARKER_OFFSET=1024,
    XA_PERM_XGRP=1024,
    XA_PERM_ALL_EXEC=1092,
    XA_PERM_ALL_ALL=1365,
    XA_ATTR_MODE2FORM1=2048,
    XA_FORM1_FILE=3413,
    XA_ATTR_MODE2FORM2=4096,
    XA_PERM_ROTH=4096,
    XA_FORM2_FILE=5461,
    XA_ATTR_INTERLEAVED=8192,
    XA_ATTR_CDDA=16384,
    XA_PERM_XOTH=16384,
    XA_ATTR_DIRECTORY=32768,
    XA_FORM1_DIR=36181
} xa_misc_enum_t;

typedef struct INetworkConnectionVtbl INetworkConnectionVtbl, *PINetworkConnectionVtbl;

typedef struct INetworkConnection INetworkConnection, *PINetworkConnection;

typedef struct INetwork INetwork, *PINetwork;

typedef enum NLM_CONNECTIVITY {
    NLM_CONNECTIVITY_DISCONNECTED=0,
    NLM_CONNECTIVITY_IPV4_NOTRAFFIC=1,
    NLM_CONNECTIVITY_IPV6_NOTRAFFIC=2,
    NLM_CONNECTIVITY_IPV4_SUBNET=16,
    NLM_CONNECTIVITY_IPV4_LOCALNETWORK=32,
    NLM_CONNECTIVITY_IPV4_INTERNET=64,
    NLM_CONNECTIVITY_IPV6_SUBNET=256,
    NLM_CONNECTIVITY_IPV6_LOCALNETWORK=512,
    NLM_CONNECTIVITY_IPV6_INTERNET=1024
} NLM_CONNECTIVITY;

typedef enum NLM_DOMAIN_TYPE {
    NLM_DOMAIN_TYPE_NON_DOMAIN_NETWORK=0,
    NLM_DOMAIN_TYPE_DOMAIN_NETWORK=1,
    NLM_DOMAIN_TYPE_DOMAIN_AUTHENTICATED=2
} NLM_DOMAIN_TYPE;

typedef struct INetworkVtbl INetworkVtbl, *PINetworkVtbl;

typedef struct IEnumNetworkConnections IEnumNetworkConnections, *PIEnumNetworkConnections;

typedef enum NLM_NETWORK_CATEGORY {
    NLM_NETWORK_CATEGORY_PUBLIC=0,
    NLM_NETWORK_CATEGORY_PRIVATE=1,
    NLM_NETWORK_CATEGORY_DOMAIN_AUTHENTICATED=2
} NLM_NETWORK_CATEGORY;

typedef struct IEnumNetworkConnectionsVtbl IEnumNetworkConnectionsVtbl, *PIEnumNetworkConnectionsVtbl;

struct IEnumNetworkConnections {
    struct IEnumNetworkConnectionsVtbl *lpVtbl;
};

struct INetworkConnectionVtbl {
    HRESULT (*QueryInterface)(struct INetworkConnection *, IID *, void **);
    ULONG (*AddRef)(struct INetworkConnection *);
    ULONG (*Release)(struct INetworkConnection *);
    HRESULT (*GetTypeInfoCount)(struct INetworkConnection *, UINT *);
    HRESULT (*GetTypeInfo)(struct INetworkConnection *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct INetworkConnection *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct INetworkConnection *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetNetwork)(struct INetworkConnection *, struct INetwork **);
    HRESULT (*get_IsConnectedToInternet)(struct INetworkConnection *, VARIANT_BOOL *);
    HRESULT (*get_IsConnected)(struct INetworkConnection *, VARIANT_BOOL *);
    HRESULT (*GetConnectivity)(struct INetworkConnection *, enum NLM_CONNECTIVITY *);
    HRESULT (*GetConnectionId)(struct INetworkConnection *, GUID *);
    HRESULT (*GetAdapterId)(struct INetworkConnection *, GUID *);
    HRESULT (*GetDomainType)(struct INetworkConnection *, enum NLM_DOMAIN_TYPE *);
};

struct INetworkVtbl {
    HRESULT (*QueryInterface)(struct INetwork *, IID *, void **);
    ULONG (*AddRef)(struct INetwork *);
    ULONG (*Release)(struct INetwork *);
    HRESULT (*GetTypeInfoCount)(struct INetwork *, UINT *);
    HRESULT (*GetTypeInfo)(struct INetwork *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct INetwork *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct INetwork *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetName)(struct INetwork *, BSTR *);
    HRESULT (*SetName)(struct INetwork *, BSTR);
    HRESULT (*GetDescription)(struct INetwork *, BSTR *);
    HRESULT (*SetDescription)(struct INetwork *, BSTR);
    HRESULT (*GetNetworkId)(struct INetwork *, GUID *);
    HRESULT (*GetDomainType)(struct INetwork *, enum NLM_DOMAIN_TYPE *);
    HRESULT (*GetNetworkConnections)(struct INetwork *, struct IEnumNetworkConnections **);
    HRESULT (*GetTimeCreatedAndConnected)(struct INetwork *, DWORD *, DWORD *, DWORD *, DWORD *);
    HRESULT (*get_IsConnectedToInternet)(struct INetwork *, VARIANT_BOOL *);
    HRESULT (*get_IsConnected)(struct INetwork *, VARIANT_BOOL *);
    HRESULT (*GetConnectivity)(struct INetwork *, enum NLM_CONNECTIVITY *);
    HRESULT (*GetCategory)(struct INetwork *, enum NLM_NETWORK_CATEGORY *);
    HRESULT (*SetCategory)(struct INetwork *, enum NLM_NETWORK_CATEGORY);
};

struct INetworkConnection {
    struct INetworkConnectionVtbl *lpVtbl;
};

struct INetwork {
    struct INetworkVtbl *lpVtbl;
};

struct IEnumNetworkConnectionsVtbl {
    HRESULT (*QueryInterface)(struct IEnumNetworkConnections *, IID *, void **);
    ULONG (*AddRef)(struct IEnumNetworkConnections *);
    ULONG (*Release)(struct IEnumNetworkConnections *);
    HRESULT (*GetTypeInfoCount)(struct IEnumNetworkConnections *, UINT *);
    HRESULT (*GetTypeInfo)(struct IEnumNetworkConnections *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IEnumNetworkConnections *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IEnumNetworkConnections *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*get__NewEnum)(struct IEnumNetworkConnections *, struct IEnumVARIANT **);
    HRESULT (*Next)(struct IEnumNetworkConnections *, ULONG, struct INetworkConnection **, ULONG *);
    HRESULT (*Skip)(struct IEnumNetworkConnections *, ULONG);
    HRESULT (*Reset)(struct IEnumNetworkConnections *);
    HRESULT (*Clone)(struct IEnumNetworkConnections *, struct IEnumNetworkConnections **);
};

typedef struct INetworkListManager INetworkListManager, *PINetworkListManager;

typedef struct INetworkListManagerVtbl INetworkListManagerVtbl, *PINetworkListManagerVtbl;

typedef enum NLM_ENUM_NETWORK {
    NLM_ENUM_NETWORK_CONNECTED=1,
    NLM_ENUM_NETWORK_DISCONNECTED=2,
    NLM_ENUM_NETWORK_ALL=3
} NLM_ENUM_NETWORK;

typedef struct IEnumNetworks IEnumNetworks, *PIEnumNetworks;

typedef struct IEnumNetworksVtbl IEnumNetworksVtbl, *PIEnumNetworksVtbl;

struct INetworkListManagerVtbl {
    HRESULT (*QueryInterface)(struct INetworkListManager *, IID *, void **);
    ULONG (*AddRef)(struct INetworkListManager *);
    ULONG (*Release)(struct INetworkListManager *);
    HRESULT (*GetTypeInfoCount)(struct INetworkListManager *, UINT *);
    HRESULT (*GetTypeInfo)(struct INetworkListManager *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct INetworkListManager *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct INetworkListManager *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetNetworks)(struct INetworkListManager *, enum NLM_ENUM_NETWORK, struct IEnumNetworks **);
    HRESULT (*GetNetwork)(struct INetworkListManager *, GUID, struct INetwork **);
    HRESULT (*GetNetworkConnections)(struct INetworkListManager *, struct IEnumNetworkConnections **);
    HRESULT (*GetNetworkConnection)(struct INetworkListManager *, GUID, struct INetworkConnection **);
    HRESULT (*IsConnectedToInternet)(struct INetworkListManager *, VARIANT_BOOL *);
    HRESULT (*IsConnected)(struct INetworkListManager *, VARIANT_BOOL *);
    HRESULT (*GetConnectivity)(struct INetworkListManager *, enum NLM_CONNECTIVITY *);
};

struct IEnumNetworks {
    struct IEnumNetworksVtbl *lpVtbl;
};

struct IEnumNetworksVtbl {
    HRESULT (*QueryInterface)(struct IEnumNetworks *, IID *, void **);
    ULONG (*AddRef)(struct IEnumNetworks *);
    ULONG (*Release)(struct IEnumNetworks *);
    HRESULT (*GetTypeInfoCount)(struct IEnumNetworks *, UINT *);
    HRESULT (*GetTypeInfo)(struct IEnumNetworks *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IEnumNetworks *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IEnumNetworks *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*get__NewEnum)(struct IEnumNetworks *, struct IEnumVARIANT **);
    HRESULT (*Next)(struct IEnumNetworks *, ULONG, struct INetwork **, ULONG *);
    HRESULT (*Skip)(struct IEnumNetworks *, ULONG);
    HRESULT (*Reset)(struct IEnumNetworks *);
    HRESULT (*Clone)(struct IEnumNetworks *, struct IEnumNetworks **);
};

struct INetworkListManager {
    struct INetworkListManagerVtbl *lpVtbl;
};

typedef enum ZSTD_ErrorCode {
    ZSTD_error_no_error=0,
    ZSTD_error_GENERIC=1,
    ZSTD_error_prefix_unknown=10,
    ZSTD_error_version_unsupported=12,
    ZSTD_error_frameParameter_unsupported=14,
    ZSTD_error_frameParameter_windowTooLarge=16,
    ZSTD_error_corruption_detected=20,
    ZSTD_error_checksum_wrong=22,
    ZSTD_error_literals_headerWrong=24,
    ZSTD_error_dictionary_corrupted=30,
    ZSTD_error_dictionary_wrong=32,
    ZSTD_error_dictionaryCreation_failed=34,
    ZSTD_error_parameter_unsupported=40,
    ZSTD_error_parameter_combination_unsupported=41,
    ZSTD_error_parameter_outOfBound=42,
    ZSTD_error_tableLog_tooLarge=44,
    ZSTD_error_maxSymbolValue_tooLarge=46,
    ZSTD_error_maxSymbolValue_tooSmall=48,
    ZSTD_error_stabilityCondition_notRespected=50,
    ZSTD_error_stage_wrong=60,
    ZSTD_error_init_missing=62,
    ZSTD_error_memory_allocation=64,
    ZSTD_error_workSpace_tooSmall=66,
    ZSTD_error_dstSize_tooSmall=70,
    ZSTD_error_srcSize_wrong=72,
    ZSTD_error_dstBuffer_null=74,
    ZSTD_error_noForwardProgress_destFull=80,
    ZSTD_error_noForwardProgress_inputEmpty=82,
    ZSTD_error_frameIndex_tooLarge=100,
    ZSTD_error_seekableIO=102,
    ZSTD_error_dstBuffer_wrong=104,
    ZSTD_error_srcBuffer_wrong=105,
    ZSTD_error_sequenceProducer_failed=106,
    ZSTD_error_externalSequences_invalid=107,
    ZSTD_error_maxCode=120
} ZSTD_ErrorCode;

typedef struct rb_root rb_root, *Prb_root;

typedef struct rb_node rb_node, *Prb_node;

struct rb_node {
    uintptr_t rb_parent_color;
    struct rb_node *rb_right;
    struct rb_node *rb_left;
};

struct rb_root {
    struct rb_node *rb_node;
};

typedef void (*rb_augment_f)(struct rb_node *, void *);

typedef struct ezxml *ezxml_t.conflict;

typedef CHAR *DEVINSTID_A;

typedef DWORD DEVNODE;

typedef DWORD RETURN_TYPE;

typedef DEVNODE *PDEVINST;

typedef RETURN_TYPE CONFIGRET;

typedef DWORD DEVINST;

typedef struct read_bb_record read_bb_record, *Pread_bb_record;

struct read_bb_record {
    ext2_badblocks_list bb_list;
    errcode_t err;
};

typedef ulonglong *PULONG_PTR;

typedef ULONG_PTR *PDWORD_PTR;

typedef struct lzms_input_bitstream lzms_input_bitstream, *Plzms_input_bitstream;

typedef u64 bitbuf_t;

struct lzms_input_bitstream {
    bitbuf_t bitbuf;
    uint bitsleft;
    u8 *next;
    u8 *begin;
};

typedef struct lzms_range_decoder lzms_range_decoder, *Plzms_range_decoder;

struct lzms_range_decoder {
    u32 range;
    u32 code;
    u8 *next;
    u8 *end;
};

typedef struct lzms_decompressor lzms_decompressor, *Plzms_decompressor;

typedef union anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0 anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0, *Panon_union_262144_2_ee12f3ad_for_lzms_decompressor_0;

typedef struct anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0 anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0, *Panon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0;

typedef struct lzms_huffman_rebuild_info lzms_huffman_rebuild_info, *Plzms_huffman_rebuild_info;

typedef union anon_union_3196_2_964a447d_for_anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0_16 anon_union_3196_2_964a447d_for_anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0_16, *Panon_union_3196_2_964a447d_for_anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0_16;

union anon_union_3196_2_964a447d_for_anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0_16 {
    u32 codewords[799];
    u16 working_space[831];
};

struct lzms_huffman_rebuild_info {
    uint num_syms_until_rebuild;
    uint num_syms;
    uint rebuild_freq;
    u32 *codewords;
    u32 *freqs;
    u16 *decode_table;
    uint table_bits;
};

struct anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0 {
    struct lzms_probabilites probs;
    u16 literal_decode_table[1302];
    u32 literal_freqs[256];
    undefined field3_0x292c;
    undefined field4_0x292d;
    undefined field5_0x292e;
    undefined field6_0x292f;
    struct lzms_huffman_rebuild_info literal_rebuild_info;
    u16 lz_offset_decode_table[2854];
    u32 lz_offset_freqs[799];
    struct lzms_huffman_rebuild_info lz_offset_rebuild_info;
    undefined field11_0x4c58;
    undefined field12_0x4c59;
    undefined field13_0x4c5a;
    undefined field14_0x4c5b;
    undefined field15_0x4c5c;
    undefined field16_0x4c5d;
    undefined field17_0x4c5e;
    undefined field18_0x4c5f;
    u16 length_decode_table[618];
    u32 length_freqs[54];
    undefined field21_0x520c;
    undefined field22_0x520d;
    undefined field23_0x520e;
    undefined field24_0x520f;
    struct lzms_huffman_rebuild_info length_rebuild_info;
    u16 delta_offset_decode_table[2854];
    u32 delta_offset_freqs[799];
    struct lzms_huffman_rebuild_info delta_offset_rebuild_info;
    undefined field29_0x7538;
    undefined field30_0x7539;
    undefined field31_0x753a;
    undefined field32_0x753b;
    undefined field33_0x753c;
    undefined field34_0x753d;
    undefined field35_0x753e;
    undefined field36_0x753f;
    u16 delta_power_decode_table[128];
    u32 delta_power_freqs[8];
    struct lzms_huffman_rebuild_info delta_power_rebuild_info;
    union anon_union_3196_2_964a447d_for_anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0_16 field_16;
    undefined field41_0x830c;
    undefined field42_0x830d;
    undefined field43_0x830e;
    undefined field44_0x830f;
};

union anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0 {
    struct anon_struct_33552_17_60021dc8_for_anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0_0 field_0;
    s32 last_target_usages[65536];
};

struct lzms_decompressor {
    union anon_union_262144_2_ee12f3ad_for_lzms_decompressor_0 field_0;
};

typedef struct lookup_struct lookup_struct, *Plookup_struct;

struct lookup_struct {
    char *name;
    int len;
    ext2_ino_t *inode;
    int found;
};

typedef struct VSS_SNAPSHOT_PROP VSS_SNAPSHOT_PROP, *PVSS_SNAPSHOT_PROP;

typedef GUID VSS_ID;

typedef WCHAR *VSS_PWSZ;

typedef LONGLONG VSS_TIMESTAMP;

typedef enum VSS_SNAPSHOT_STATE {
    VSS_SS_UNKNOWN=0,
    VSS_SS_PREPARING=1,
    VSS_SS_PROCESSING_PREPARE=2,
    VSS_SS_PREPARED=3,
    VSS_SS_PROCESSING_PRECOMMIT=4,
    VSS_SS_PRECOMMITTED=5,
    VSS_SS_PROCESSING_COMMIT=6,
    VSS_SS_COMMITTED=7,
    VSS_SS_PROCESSING_POSTCOMMIT=8,
    VSS_SS_PROCESSING_PREFINALCOMMIT=9,
    VSS_SS_PREFINALCOMMITTED=10,
    VSS_SS_PROCESSING_POSTFINALCOMMIT=11,
    VSS_SS_CREATED=12,
    VSS_SS_ABORTED=13,
    VSS_SS_DELETED=14,
    VSS_SS_POSTCOMMITTED=15,
    VSS_SS_COUNT=16
} VSS_SNAPSHOT_STATE;

struct VSS_SNAPSHOT_PROP {
    VSS_ID m_SnapshotId;
    VSS_ID m_SnapshotSetId;
    LONG m_lSnapshotsCount;
    VSS_PWSZ m_pwszSnapshotDeviceObject;
    VSS_PWSZ m_pwszOriginalVolumeName;
    VSS_PWSZ m_pwszOriginatingMachine;
    VSS_PWSZ m_pwszServiceMachine;
    VSS_PWSZ m_pwszExposedName;
    VSS_PWSZ m_pwszExposedPath;
    VSS_ID m_ProviderId;
    LONG m_lSnapshotAttributes;
    VSS_TIMESTAMP m_tsCreationTimestamp;
    enum VSS_SNAPSHOT_STATE m_eStatus;
};

typedef struct IVssBackupComponents IVssBackupComponents, *PIVssBackupComponents;

typedef struct IVssBackupComponentsVTable IVssBackupComponentsVTable, *PIVssBackupComponentsVTable;

typedef enum VSS_BACKUP_TYPE {
    VSS_BT_UNDEFINED=0,
    VSS_BT_FULL=1,
    VSS_BT_INCREMENTAL=2,
    VSS_BT_DIFFERENTIAL=3,
    VSS_BT_LOG=4,
    VSS_BT_COPY=5,
    VSS_BT_OTHER=6
} VSS_BACKUP_TYPE;

typedef struct IVssAsync IVssAsync, *PIVssAsync;

typedef struct IVssAsyncVTable IVssAsyncVTable, *PIVssAsyncVTable;

struct IVssBackupComponents {
    struct IVssBackupComponentsVTable *vtable;
};

struct IVssBackupComponentsVTable {
    void *QueryInterface;
    void *AddRef;
    ULONG (*Release)(struct IVssBackupComponents *);
    void *GetWriterComponentsCount;
    void *GetWriterComponents;
    HRESULT (*InitializeForBackup)(struct IVssBackupComponents *, BSTR);
    HRESULT (*SetBackupState)(struct IVssBackupComponents *, BOOLEAN, BOOLEAN, enum VSS_BACKUP_TYPE, BOOLEAN);
    void *InitializeForRestore;
    void *SetRestoreState;
    HRESULT (*GatherWriterMetadata)(struct IVssBackupComponents *, struct IVssAsync **);
    void *GetWriterMetadataCount;
    void *GetWriterMetadata;
    void *FreeWriterMetadata;
    void *AddComponent;
    HRESULT (*PrepareForBackup)(struct IVssBackupComponents *, struct IVssAsync **);
    void *AbortBackup;
    void *GatherWriterStatus;
    void *GetWriterStatusCount;
    void *FreeWriterStatus;
    void *GetWriterStatus;
    void *SetBackupSucceeded;
    void *SetBackupOptions;
    void *SetSelectedForRestore;
    void *SetRestoreOptions;
    void *SetAdditionalRestores;
    void *SetPreviousBackupStamp;
    void *SaveAsXML;
    void *BackupComplete;
    void *AddAlternativeLocationMapping;
    void *AddRestoreSubcomponent;
    void *SetFileRestoreStatus;
    void *AddNewTarget;
    void *SetRangesFilePath;
    void *PreRestore;
    void *PostRestore;
    HRESULT (*SetContext)(struct IVssBackupComponents *, LONG);
    HRESULT (*StartSnapshotSet)(struct IVssBackupComponents *, VSS_ID *);
    HRESULT (*AddToSnapshotSet)(struct IVssBackupComponents *, VSS_PWSZ, VSS_ID, VSS_ID *);
    HRESULT (*DoSnapshotSet)(struct IVssBackupComponents *, struct IVssAsync **);
    void *DeleteSnapshots;
    void *ImportSnapshots;
    void *BreakSnapshotSet;
    HRESULT (*GetSnapshotProperties)(struct IVssBackupComponents *, VSS_ID, struct VSS_SNAPSHOT_PROP *);
    void *Query;
    void *IsVolumeSupported;
    void *DisableWriterClasses;
    void *EnableWriterClasses;
    void *DisableWriterInstances;
    void *ExposeSnapshot;
    void *RevertToSnapshot;
    void *QueryRevertStatus;
};

struct IVssAsyncVTable {
    void *QueryInterface;
    void *AddRef;
    ULONG (*Release)(struct IVssAsync *);
    void *Cancel;
    HRESULT (*Wait)(struct IVssAsync *, DWORD);
    void *QueryStatus;
};

struct IVssAsync {
    struct IVssAsyncVTable *vtable;
};

typedef struct vss_snapshot_internal vss_snapshot_internal, *Pvss_snapshot_internal;

struct vss_snapshot_internal {
    struct vss_snapshot base;
    struct IVssBackupComponents *vss;
    struct VSS_SNAPSHOT_PROP props;
};

typedef struct HUF_ReadDTableX2_Workspace HUF_ReadDTableX2_Workspace, *PHUF_ReadDTableX2_Workspace;

typedef struct sortedSymbol_t sortedSymbol_t, *PsortedSymbol_t;

struct sortedSymbol_t {
    BYTE symbol;
};

struct HUF_ReadDTableX2_Workspace {
    U32 rankVal[12][13];
    U32 rankStats[13];
    U32 rankStart0[15];
    struct sortedSymbol_t sortedSymbol[256];
    BYTE weightList[256];
    U32 calleeWksp[219];
};

typedef size_t (*HUF_DecompressUsingDTableFn)(void *, size_t, void *, size_t, HUF_DTable *);

typedef struct HUF_DecompressFastArgs HUF_DecompressFastArgs, *PHUF_DecompressFastArgs;

struct HUF_DecompressFastArgs {
    BYTE *ip[4];
    BYTE *op[4];
    U64 bits[4];
    void *dt;
    BYTE *ilowest;
    BYTE *oend;
    BYTE *iend[4];
};

typedef U32 rankValCol_t[13];

typedef struct HUF_ReadDTableX1_Workspace HUF_ReadDTableX1_Workspace, *PHUF_ReadDTableX1_Workspace;

struct HUF_ReadDTableX1_Workspace {
    U32 rankVal[13];
    U32 rankStart[13];
    U32 statsWksp[219];
    BYTE symbols[256];
    BYTE huffWeight[256];
};

typedef struct HUF_DEltX2 HUF_DEltX2, *PHUF_DEltX2;

struct HUF_DEltX2 {
    U16 sequence;
    BYTE nbBits;
    BYTE length;
};

typedef struct HUF_DEltX1 HUF_DEltX1, *PHUF_DEltX1;

struct HUF_DEltX1 {
    BYTE nbBits;
    BYTE byte;
};

typedef void (*HUF_DecompressFastLoopFn)(struct HUF_DecompressFastArgs *);

typedef struct algo_time_t algo_time_t, *Palgo_time_t;

struct algo_time_t {
    U32 tableTime;
    U32 decode256Time;
};

typedef struct DTableDesc DTableDesc, *PDTableDesc;

struct DTableDesc {
    BYTE maxTableLog;
    BYTE tableType;
    BYTE tableLog;
    BYTE reserved;
};

typedef struct anon_struct_96_3_4f5dc632 anon_struct_96_3_4f5dc632, *Panon_struct_96_3_4f5dc632;

typedef struct anon_struct_8_3_02863089_for_hdr anon_struct_8_3_02863089_for_hdr, *Panon_struct_8_3_02863089_for_hdr;

struct anon_struct_8_3_02863089_for_hdr {
    le32 rptag;
    le16 rpdatalen;
    le16 rpreserved;
};

struct anon_struct_96_3_4f5dc632 {
    struct anon_struct_8_3_02863089_for_hdr hdr;
    WOF_EXTERNAL_INFO wof_info;
    struct wim_provider_rpdata wim_info;
};


// WARNING! conflicting data type names: /DWARF/winnls.h/UILANGUAGE_ENUMPROCW - /winnls.h/UILANGUAGE_ENUMPROCW


// WARNING! conflicting data type names: /DWARF/winnls.h/LCTYPE - /winnls.h/LCTYPE

typedef struct hc_matchfinder hc_matchfinder, *Phc_matchfinder;

struct hc_matchfinder {
    u16 hash3_tab[32768];
    u16 hash4_tab[65536];
    u16 next_tab[0];
};

typedef struct dir_context dir_context, *Pdir_context;

typedef struct ext2_dir_entry ext2_dir_entry, *Pext2_dir_entry;

struct ext2_dir_entry {
    __u32 inode;
    __u16 rec_len;
    __u16 name_len;
    char name[255];
};

struct dir_context {
    ext2_ino_t dir;
    int flags;
    char *buf;
    uint buflen;
    int (*func)(ext2_ino_t, int, struct ext2_dir_entry *, int, int, char *, void *);
    void *priv_data;
    errcode_t errcode;
};

typedef struct ext3_extent_header ext3_extent_header, *Pext3_extent_header;

struct ext3_extent_header {
    __le16 eh_magic;
    __le16 eh_entries;
    __le16 eh_max;
    __le16 eh_depth;
    __le32 eh_generation;
};

typedef struct ext3_extent_tail ext3_extent_tail, *Pext3_extent_tail;

struct ext3_extent_tail {
    __le32 et_checksum;
};

typedef struct ext3_extent ext3_extent, *Pext3_extent;

struct ext3_extent {
    __le32 ee_block;
    __le16 ee_len;
    __le16 ee_start_hi;
    __le32 ee_start;
};

typedef struct ext3_extent_idx ext3_extent_idx, *Pext3_extent_idx;

struct ext3_extent_idx {
    __le32 ei_block;
    __le32 ei_leaf;
    __le16 ei_leaf_hi;
    __le16 ei_unused;
};

typedef struct lzma_header_t lzma_header_t, *Plzma_header_t;

struct lzma_header_t {
    uint8_t pos;
    uint32_t dict_size;
    uint64_t dst_size;
};

typedef struct rc_t rc_t, *Prc_t;

struct rc_t {
    int fd;
    uint8_t *ptr;
    uint8_t *buffer_end;
    uint32_t code;
    uint32_t range;
    uint32_t bound;
};

typedef size_t aliased_word_t;

typedef struct append_dentry_ctx append_dentry_ctx, *Pappend_dentry_ctx;

struct append_dentry_ctx {
    struct wim_dentry **dentries;
    size_t num_dentries;
    size_t num_alloc_dentries;
};

typedef struct kb_default kb_default, *Pkb_default;

struct kb_default {
    char *name;
    ULONG default_cp;
};

typedef struct kb_list kb_list, *Pkb_list;

struct kb_list {
    size_t size;
    char **list;
};

typedef struct cp_list cp_list, *Pcp_list;

struct cp_list {
    ULONG cp;
    char *name;
};

typedef struct mbr_type_t mbr_type_t, *Pmbr_type_t;

struct mbr_type_t {
    uint8_t type;
    char *name;
};


// WARNING! conflicting data type names: /DWARF/setupapi.h/_SP_CLASSINSTALL_HEADER - /setupapi.h/_SP_CLASSINSTALL_HEADER

typedef struct _SP_CLASSINSTALL_HEADER SP_CLASSINSTALL_HEADER;


// WARNING! conflicting data type names: /DWARF/setupapi.h/_SP_DEVICE_INTERFACE_DATA - /setupapi.h/_SP_DEVICE_INTERFACE_DATA


// WARNING! conflicting data type names: /DWARF/setupapi.h/_SP_DEVINFO_DATA - /setupapi.h/_SP_DEVINFO_DATA

typedef struct _SP_DEVINFO_DATA SP_DEVINFO_DATA;


// WARNING! conflicting data type names: /DWARF/setupapi.h/_SP_DEVICE_INTERFACE_DETAIL_DATA_A - /setupapi.h/_SP_DEVICE_INTERFACE_DETAIL_DATA_A

typedef struct _SP_PROPCHANGE_PARAMS _SP_PROPCHANGE_PARAMS, *P_SP_PROPCHANGE_PARAMS;

typedef struct _SP_PROPCHANGE_PARAMS SP_PROPCHANGE_PARAMS;

struct _SP_PROPCHANGE_PARAMS {
    SP_CLASSINSTALL_HEADER ClassInstallHeader;
    DWORD StateChange;
    DWORD Scope;
    DWORD HwProfile;
};

typedef struct _SP_DEVICE_INTERFACE_DATA SP_DEVICE_INTERFACE_DATA;


// WARNING! conflicting data type names: /DWARF/setupapi.h/PSP_CLASSINSTALL_HEADER - /setupapi.h/PSP_CLASSINSTALL_HEADER


// WARNING! conflicting data type names: /DWARF/setupapi.h/PSP_DEVICE_INTERFACE_DATA - /setupapi.h/PSP_DEVICE_INTERFACE_DATA


// WARNING! conflicting data type names: /DWARF/setupapi.h/PSP_DEVICE_INTERFACE_DETAIL_DATA_A - /setupapi.h/PSP_DEVICE_INTERFACE_DETAIL_DATA_A


// WARNING! conflicting data type names: /DWARF/setupapi.h/PSP_DEVINFO_DATA - /setupapi.h/PSP_DEVINFO_DATA

typedef struct xpress_optimum_node xpress_optimum_node, *Pxpress_optimum_node;

struct xpress_optimum_node {
    u32 cost_to_end;
    u32 item;
};

typedef struct xpress_compressor xpress_compressor, *Pxpress_compressor;

typedef union anon_union_264224_2_ecfd7102_for_xpress_compressor_6 anon_union_264224_2_ecfd7102_for_xpress_compressor_6, *Panon_union_264224_2_ecfd7102_for_xpress_compressor_6;

typedef struct anon_struct_196616_2_66214fd5_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_0 anon_struct_196616_2_66214fd5_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_0, *Panon_struct_196616_2_66214fd5_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_0;

typedef struct anon_struct_264224_6_29a333e3_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_1 anon_struct_264224_6_29a333e3_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_1, *Panon_struct_264224_6_29a333e3_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_1;

typedef struct xpress_item xpress_item, *Pxpress_item;

struct anon_struct_264224_6_29a333e3_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_1 {
    struct xpress_optimum_node *optimum_nodes;
    struct lz_match *match_cache;
    struct lz_match *cache_overflow_mark;
    uint num_optim_passes;
    u32 costs[512];
    struct bt_matchfinder bt_mf;
};

struct anon_struct_196616_2_66214fd5_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_0 {
    struct xpress_item *chosen_items;
    struct hc_matchfinder hc_mf;
};

union anon_union_264224_2_ecfd7102_for_xpress_compressor_6 {
    struct anon_struct_196616_2_66214fd5_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_0 field_0;
    struct anon_struct_264224_6_29a333e3_for_anon_union_264224_2_ecfd7102_for_xpress_compressor_6_1 field_1;
};

struct xpress_compressor {
    size_t (*impl)(struct xpress_compressor *, void *, size_t, void *, size_t);
    u32 freqs[512];
    u32 codewords[512];
    u8 lens[512];
    uint nice_match_length;
    uint max_search_depth;
    union anon_union_264224_2_ecfd7102_for_xpress_compressor_6 field_6;
};

struct xpress_item {
    u64 data;
};

typedef struct xpress_output_bitstream xpress_output_bitstream, *Pxpress_output_bitstream;

struct xpress_output_bitstream {
    u32 bitbuf;
    u32 bitcount;
    u8 *start;
    u8 *next_bits;
    u8 *next_bits2;
    u8 *next_byte;
    u8 *end;
};

typedef int (*_cdio_list_iterfunc_t)(void *, void *);

typedef struct _DRIVE_LAYOUT_INFORMATION_EX _DRIVE_LAYOUT_INFORMATION_EX, *P_DRIVE_LAYOUT_INFORMATION_EX;

typedef union anon_union_40_2_439a9213_for__DRIVE_LAYOUT_INFORMATION_EX_2 anon_union_40_2_439a9213_for__DRIVE_LAYOUT_INFORMATION_EX_2, *Panon_union_40_2_439a9213_for__DRIVE_LAYOUT_INFORMATION_EX_2;

typedef struct _PARTITION_INFORMATION_EX _PARTITION_INFORMATION_EX, *P_PARTITION_INFORMATION_EX;

typedef struct _PARTITION_INFORMATION_EX PARTITION_INFORMATION_EX;

typedef struct _DRIVE_LAYOUT_INFORMATION_MBR _DRIVE_LAYOUT_INFORMATION_MBR, *P_DRIVE_LAYOUT_INFORMATION_MBR;

typedef struct _DRIVE_LAYOUT_INFORMATION_MBR DRIVE_LAYOUT_INFORMATION_MBR;

typedef struct _DRIVE_LAYOUT_INFORMATION_GPT _DRIVE_LAYOUT_INFORMATION_GPT, *P_DRIVE_LAYOUT_INFORMATION_GPT;

typedef struct _DRIVE_LAYOUT_INFORMATION_GPT DRIVE_LAYOUT_INFORMATION_GPT;

typedef enum _PARTITION_STYLE {
    PARTITION_STYLE_MBR=0,
    PARTITION_STYLE_GPT=1,
    PARTITION_STYLE_RAW=2
} _PARTITION_STYLE;

typedef enum _PARTITION_STYLE PARTITION_STYLE;

typedef union anon_union_112_2_439a9213_for__PARTITION_INFORMATION_EX_6 anon_union_112_2_439a9213_for__PARTITION_INFORMATION_EX_6, *Panon_union_112_2_439a9213_for__PARTITION_INFORMATION_EX_6;

typedef struct _PARTITION_INFORMATION_MBR _PARTITION_INFORMATION_MBR, *P_PARTITION_INFORMATION_MBR;

typedef struct _PARTITION_INFORMATION_MBR PARTITION_INFORMATION_MBR;

typedef struct _PARTITION_INFORMATION_GPT _PARTITION_INFORMATION_GPT, *P_PARTITION_INFORMATION_GPT;

typedef struct _PARTITION_INFORMATION_GPT PARTITION_INFORMATION_GPT;

struct _DRIVE_LAYOUT_INFORMATION_GPT {
    GUID DiskId;
    LARGE_INTEGER StartingUsableOffset;
    LARGE_INTEGER UsableLength;
    DWORD MaxPartitionCount;
};

struct _DRIVE_LAYOUT_INFORMATION_MBR {
    DWORD Signature;
};

union anon_union_40_2_439a9213_for__DRIVE_LAYOUT_INFORMATION_EX_2 {
    DRIVE_LAYOUT_INFORMATION_MBR Mbr;
    DRIVE_LAYOUT_INFORMATION_GPT Gpt;
};

struct _PARTITION_INFORMATION_GPT {
    GUID PartitionType;
    GUID PartitionId;
    DWORD64 Attributes;
    WCHAR Name[36];
};

struct _PARTITION_INFORMATION_MBR {
    BYTE PartitionType;
    BOOLEAN BootIndicator;
    BOOLEAN RecognizedPartition;
    DWORD HiddenSectors;
    GUID PartitionId;
};

union anon_union_112_2_439a9213_for__PARTITION_INFORMATION_EX_6 {
    PARTITION_INFORMATION_MBR Mbr;
    PARTITION_INFORMATION_GPT Gpt;
};

struct _PARTITION_INFORMATION_EX {
    PARTITION_STYLE PartitionStyle;
    LARGE_INTEGER StartingOffset;
    LARGE_INTEGER PartitionLength;
    DWORD PartitionNumber;
    BOOLEAN RewritePartition;
    BOOLEAN IsServicePartition;
    union anon_union_112_2_439a9213_for__PARTITION_INFORMATION_EX_6 field_6;
};

struct _DRIVE_LAYOUT_INFORMATION_EX {
    DWORD PartitionStyle;
    DWORD PartitionCount;
    union anon_union_40_2_439a9213_for__DRIVE_LAYOUT_INFORMATION_EX_2 field_2;
    PARTITION_INFORMATION_EX PartitionEntry[1];
};

typedef struct _DISK_EXTENT _DISK_EXTENT, *P_DISK_EXTENT;

typedef struct _DISK_EXTENT DISK_EXTENT;

struct _DISK_EXTENT {
    DWORD DiskNumber;
    LARGE_INTEGER StartingOffset;
    LARGE_INTEGER ExtentLength;
};

typedef struct _VOLUME_DISK_EXTENTS _VOLUME_DISK_EXTENTS, *P_VOLUME_DISK_EXTENTS;

typedef struct _VOLUME_DISK_EXTENTS VOLUME_DISK_EXTENTS;

struct _VOLUME_DISK_EXTENTS {
    DWORD NumberOfDiskExtents;
    DISK_EXTENT Extents[1];
};

typedef struct _DISK_GEOMETRY_EX _DISK_GEOMETRY_EX, *P_DISK_GEOMETRY_EX;

typedef struct _DISK_GEOMETRY_EX *PDISK_GEOMETRY_EX;

typedef struct _DISK_GEOMETRY _DISK_GEOMETRY, *P_DISK_GEOMETRY;

typedef struct _DISK_GEOMETRY DISK_GEOMETRY;

struct _DISK_GEOMETRY {
    LARGE_INTEGER Cylinders;
    MEDIA_TYPE MediaType;
    DWORD TracksPerCylinder;
    DWORD SectorsPerTrack;
    DWORD BytesPerSector;
};

struct _DISK_GEOMETRY_EX {
    DISK_GEOMETRY Geometry;
    LARGE_INTEGER DiskSize;
    BYTE Data[1];
};

typedef struct _FILE_FS_PERSISTENT_VOLUME_INFORMATION _FILE_FS_PERSISTENT_VOLUME_INFORMATION, *P_FILE_FS_PERSISTENT_VOLUME_INFORMATION;

typedef struct _FILE_FS_PERSISTENT_VOLUME_INFORMATION FILE_FS_PERSISTENT_VOLUME_INFORMATION;

struct _FILE_FS_PERSISTENT_VOLUME_INFORMATION {
    ULONG VolumeFlags;
    ULONG FlagMask;
    ULONG Version;
    ULONG Reserved;
};

typedef struct _FILE_OBJECTID_BUFFER _FILE_OBJECTID_BUFFER, *P_FILE_OBJECTID_BUFFER;

typedef struct _FILE_OBJECTID_BUFFER FILE_OBJECTID_BUFFER;

typedef union anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1 anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1, *Panon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1;

typedef struct anon_struct_48_3_efcab57b_for_anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1_0 anon_struct_48_3_efcab57b_for_anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1_0, *Panon_struct_48_3_efcab57b_for_anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1_0;

struct anon_struct_48_3_efcab57b_for_anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1_0 {
    BYTE BirthVolumeId[16];
    BYTE BirthObjectId[16];
    BYTE DomainId[16];
};

union anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1 {
    struct anon_struct_48_3_efcab57b_for_anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1_0 field_0;
    BYTE ExtendedInfo[48];
};

struct _FILE_OBJECTID_BUFFER {
    BYTE ObjectId[16];
    union anon_union_48_2_b4a7ac65_for__FILE_OBJECTID_BUFFER_1 field_1;
};

typedef struct _CREATE_DISK_MBR _CREATE_DISK_MBR, *P_CREATE_DISK_MBR;

typedef struct _CREATE_DISK_MBR CREATE_DISK_MBR;

struct _CREATE_DISK_MBR {
    DWORD Signature;
};

typedef struct _CREATE_DISK _CREATE_DISK, *P_CREATE_DISK;

typedef struct _CREATE_DISK CREATE_DISK;

typedef union anon_union_20_2_439a9213_for__CREATE_DISK_1 anon_union_20_2_439a9213_for__CREATE_DISK_1, *Panon_union_20_2_439a9213_for__CREATE_DISK_1;

typedef struct _CREATE_DISK_GPT _CREATE_DISK_GPT, *P_CREATE_DISK_GPT;

typedef struct _CREATE_DISK_GPT CREATE_DISK_GPT;

struct _CREATE_DISK_GPT {
    GUID DiskId;
    DWORD MaxPartitionCount;
};

union anon_union_20_2_439a9213_for__CREATE_DISK_1 {
    CREATE_DISK_MBR Mbr;
    CREATE_DISK_GPT Gpt;
};

struct _CREATE_DISK {
    PARTITION_STYLE PartitionStyle;
    union anon_union_20_2_439a9213_for__CREATE_DISK_1 field_1;
};

typedef struct _PARTITION_INFORMATION _PARTITION_INFORMATION, *P_PARTITION_INFORMATION;

typedef struct _PARTITION_INFORMATION PARTITION_INFORMATION;

struct _PARTITION_INFORMATION {
    LARGE_INTEGER StartingOffset;
    LARGE_INTEGER PartitionLength;
    DWORD HiddenSectors;
    DWORD PartitionNumber;
    BYTE PartitionType;
    BOOLEAN BootIndicator;
    BOOLEAN RecognizedPartition;
    BOOLEAN RewritePartition;
};

typedef struct _DRIVE_LAYOUT_INFORMATION_EX DRIVE_LAYOUT_INFORMATION_EX;

typedef struct _DISK_GEOMETRY_EX DISK_GEOMETRY_EX;

typedef struct STARTING_VCN_INPUT_BUFFER STARTING_VCN_INPUT_BUFFER, *PSTARTING_VCN_INPUT_BUFFER;

struct STARTING_VCN_INPUT_BUFFER {
    LARGE_INTEGER StartingVcn;
};

typedef struct _DRIVE_LAYOUT_INFORMATION_EX *PDRIVE_LAYOUT_INFORMATION_EX;

typedef struct tagged_item_header tagged_item_header, *Ptagged_item_header;

struct tagged_item_header {
    le32 tag;
    le32 length;
    u8 data[0];
};

typedef struct wimlib_unix_data_disk wimlib_unix_data_disk, *Pwimlib_unix_data_disk;

struct wimlib_unix_data_disk {
    le32 uid;
    le32 gid;
    le32 mode;
    le32 rdev;
};

typedef struct wimlib_unix_data wimlib_unix_data, *Pwimlib_unix_data;

struct wimlib_unix_data {
    u32 uid;
    u32 gid;
    u32 mode;
    u32 rdev;
};

typedef enum D3D10_FEATURE_LEVEL1 {
    D3D10_FEATURE_LEVEL_9_1=37120,
    D3D10_FEATURE_LEVEL_9_2=37376,
    D3D10_FEATURE_LEVEL_9_3=37632,
    D3D10_FEATURE_LEVEL_10_0=40960,
    D3D10_FEATURE_LEVEL_10_1=41216
} D3D10_FEATURE_LEVEL1;

typedef XXH64_hash_t xxh_u64;

typedef uint8_t xxh_u8;

typedef struct XXH64_canonical_t XXH64_canonical_t, *PXXH64_canonical_t;

struct XXH64_canonical_t {
    uchar digest[8];
};

typedef enum XXH_alignment {
    XXH_aligned=0,
    XXH_unaligned=1
} XXH_alignment;

typedef struct XXH32_canonical_t XXH32_canonical_t, *PXXH32_canonical_t;

struct XXH32_canonical_t {
    uchar digest[4];
};

typedef XXH32_hash_t xxh_u32;

typedef struct XXH32_state_s XXH32_state_s, *PXXH32_state_s;

typedef struct XXH32_state_s XXH32_state_t;

struct XXH32_state_s {
    XXH32_hash_t total_len_32;
    XXH32_hash_t large_len;
    XXH32_hash_t v[4];
    XXH32_hash_t mem32[4];
    XXH32_hash_t memsize;
    XXH32_hash_t reserved;
};

typedef enum XXH_errorcode {
    XXH_OK=0,
    XXH_ERROR=1
} XXH_errorcode;

typedef xxh_u64 xxh_unalign64;

typedef xxh_u32 xxh_unalign32;

typedef enum tagCOINITBASE {
    COINITBASE_MULTITHREADED=0
} tagCOINITBASE;

typedef struct regex_parse_context regex_parse_context, *Pregex_parse_context;

struct regex_parse_context {
    char *sp;
    cregex_node_t *stack;
    cregex_node_t *output;
};

typedef struct HDROP__ HDROP__, *PHDROP__;

typedef struct HDROP__ *HDROP;

struct HDROP__ {
    int unused;
};

typedef struct _SHFILEOPSTRUCTW _SHFILEOPSTRUCTW, *P_SHFILEOPSTRUCTW;

typedef WORD FILEOP_FLAGS;

struct _SHFILEOPSTRUCTW {
    HWND hwnd;
    UINT wFunc;
    LPCWSTR pFrom;
    LPCWSTR pTo;
    FILEOP_FLAGS fFlags;
    WINBOOL fAnyOperationsAborted;
    LPVOID hNameMappings;
    PCWSTR lpszProgressTitle;
};

typedef struct _SHFILEOPSTRUCTW SHFILEOPSTRUCTW;

typedef struct _SHFILEOPSTRUCTW *LPSHFILEOPSTRUCTW;

typedef struct xml_out_buf xml_out_buf, *Pxml_out_buf;

struct xml_out_buf {
    tchar *buf;
    size_t count;
    size_t capacity;
    _Bool oom;
};

typedef struct generic_img_private_t generic_img_private_t, *Pgeneric_img_private_t;

struct generic_img_private_t {
    char *source_name;
    _Bool init;
    _Bool toc_init;
    _Bool b_cdtext_error;
    int ioctls_debugged;
    CdioDataSource_t *data_source;
    int fd;
    track_t i_first_track;
    track_t i_tracks;
    uint8_t u_joliet_level;
    iso9660_pvd_t pvd;
    iso9660_svd_t svd;
    CdIo_t *cdio;
    cdtext_t *cdtext;
    struct track_flags_t track_flags[100];
    uchar scsi_mmc_sense[263];
    int scsi_mmc_sense_valid;
    char *scsi_tuple;
};

typedef struct NOW_THATS_WHAT_I_CALL_AN_OVERLAPPED NOW_THATS_WHAT_I_CALL_AN_OVERLAPPED, *PNOW_THATS_WHAT_I_CALL_AN_OVERLAPPED;

struct NOW_THATS_WHAT_I_CALL_AN_OVERLAPPED {
    ULONG_PTR Internal[2];
    ULONG64 Offset;
    HANDLE hEvent;
    BOOL bOffsetUpdated;
};

typedef struct ASYNC_FD ASYNC_FD, *PASYNC_FD;

struct ASYNC_FD {
    HANDLE hFile;
    INT iStatus;
    struct NOW_THATS_WHAT_I_CALL_AN_OVERLAPPED Overlapped;
};

typedef enum processor_vendor {
    VENDOR_INTEL=1,
    VENDOR_AMD=2,
    VENDOR_ZHAOXIN=3,
    BUILTIN_VENDOR_MAX=4,
    VENDOR_OTHER=4,
    VENDOR_CENTAUR=5,
    VENDOR_CYRIX=6,
    VENDOR_NSC=7,
    VENDOR_MAX=8
} processor_vendor;

typedef enum processor_features {
    FEATURE_CMOV=0,
    FEATURE_MMX=1,
    FEATURE_POPCNT=2,
    FEATURE_SSE=3,
    FEATURE_SSE2=4,
    FEATURE_SSE3=5,
    FEATURE_SSSE3=6,
    FEATURE_SSE4_1=7,
    FEATURE_SSE4_2=8,
    FEATURE_AVX=9,
    FEATURE_AVX2=10,
    FEATURE_SSE4_A=11,
    FEATURE_FMA4=12,
    FEATURE_XOP=13,
    FEATURE_FMA=14,
    FEATURE_AVX512F=15,
    FEATURE_BMI=16,
    FEATURE_BMI2=17,
    FEATURE_AES=18,
    FEATURE_PCLMUL=19,
    FEATURE_AVX512VL=20,
    FEATURE_AVX512BW=21,
    FEATURE_AVX512DQ=22,
    FEATURE_AVX512CD=23,
    FEATURE_AVX512VBMI=26,
    FEATURE_AVX512IFMA=27,
    FEATURE_AVX512VPOPCNTDQ=30,
    FEATURE_AVX512VBMI2=31,
    FEATURE_GFNI=32,
    FEATURE_VPCLMULQDQ=33,
    FEATURE_AVX512VNNI=34,
    FEATURE_AVX512BITALG=35,
    FEATURE_AVX512BF16=36,
    FEATURE_AVX512VP2INTERSECT=37,
    FEATURE_3DNOW=38,
    FEATURE_3DNOWP=39,
    FEATURE_ADX=40,
    FEATURE_ABM=41,
    FEATURE_CLDEMOTE=42,
    FEATURE_CLFLUSHOPT=43,
    FEATURE_CLWB=44,
    FEATURE_CLZERO=45,
    FEATURE_CMPXCHG16B=46,
    FEATURE_CMPXCHG8B=47,
    FEATURE_ENQCMD=48,
    FEATURE_F16C=49,
    FEATURE_FSGSBASE=50,
    FEATURE_FXSAVE=51,
    FEATURE_HLE=52,
    FEATURE_IBT=53,
    FEATURE_LAHF_LM=54,
    FEATURE_LM=55,
    FEATURE_LWP=56,
    FEATURE_LZCNT=57,
    FEATURE_MOVBE=58,
    FEATURE_MOVDIR64B=59,
    FEATURE_MOVDIRI=60,
    FEATURE_MWAITX=61,
    FEATURE_OSXSAVE=62,
    FEATURE_PCONFIG=63,
    FEATURE_PKU=64,
    FEATURE_PRFCHW=66,
    FEATURE_PTWRITE=67,
    FEATURE_RDPID=68,
    FEATURE_RDRND=69,
    FEATURE_RDSEED=70,
    FEATURE_RTM=71,
    FEATURE_SERIALIZE=72,
    FEATURE_SGX=73,
    FEATURE_SHA=74,
    FEATURE_SHSTK=75,
    FEATURE_TBM=76,
    FEATURE_TSXLDTRK=77,
    FEATURE_VAES=78,
    FEATURE_WAITPKG=79,
    FEATURE_WBNOINVD=80,
    FEATURE_XSAVE=81,
    FEATURE_XSAVEC=82,
    FEATURE_XSAVEOPT=83,
    FEATURE_XSAVES=84,
    FEATURE_AMX_TILE=85,
    FEATURE_AMX_INT8=86,
    FEATURE_AMX_BF16=87,
    FEATURE_UINTR=88,
    FEATURE_HRESET=89,
    FEATURE_KL=90,
    FEATURE_AESKLE=91,
    FEATURE_WIDEKL=92,
    FEATURE_AVXVNNI=93,
    FEATURE_AVX512FP16=94,
    FEATURE_X86_64_BASELINE=95,
    FEATURE_X86_64_V2=96,
    FEATURE_X86_64_V3=97,
    FEATURE_X86_64_V4=98,
    FEATURE_AVXIFMA=99,
    FEATURE_AVXVNNIINT8=100,
    FEATURE_AVXNECONVERT=101,
    FEATURE_CMPCCXADD=102,
    FEATURE_AMX_FP16=103,
    FEATURE_PREFETCHI=104,
    FEATURE_RAOINT=105,
    FEATURE_AMX_COMPLEX=106,
    FEATURE_AVXVNNIINT16=107,
    FEATURE_SM3=108,
    FEATURE_SHA512=109,
    FEATURE_SM4=110,
    FEATURE_APX_F=111,
    FEATURE_USER_MSR=112,
    FEATURE_AVX10_1_256=113,
    FEATURE_AVX10_1=114,
    FEATURE_AVX10_2=116,
    FEATURE_AMX_AVX512=117,
    FEATURE_AMX_TF32=118,
    FEATURE_AMX_TRANSPOSE=119,
    FEATURE_AMX_FP8=120,
    FEATURE_MOVRS=121,
    FEATURE_AMX_MOVRS=122,
    CPU_FEATURE_MAX=123
} processor_features;

typedef enum processor_subtypes {
    INTEL_COREI7_NEHALEM=1,
    INTEL_COREI7_WESTMERE=2,
    INTEL_COREI7_SANDYBRIDGE=3,
    AMDFAM10H_BARCELONA=4,
    AMDFAM10H_SHANGHAI=5,
    AMDFAM10H_ISTANBUL=6,
    AMDFAM15H_BDVER1=7,
    AMDFAM15H_BDVER2=8,
    AMDFAM15H_BDVER3=9,
    AMDFAM15H_BDVER4=10,
    AMDFAM17H_ZNVER1=11,
    INTEL_COREI7_IVYBRIDGE=12,
    INTEL_COREI7_HASWELL=13,
    INTEL_COREI7_BROADWELL=14,
    INTEL_COREI7_SKYLAKE=15,
    INTEL_COREI7_SKYLAKE_AVX512=16,
    INTEL_COREI7_CANNONLAKE=17,
    INTEL_COREI7_ICELAKE_CLIENT=18,
    INTEL_COREI7_ICELAKE_SERVER=19,
    AMDFAM17H_ZNVER2=20,
    INTEL_COREI7_CASCADELAKE=21,
    INTEL_COREI7_TIGERLAKE=22,
    INTEL_COREI7_COOPERLAKE=23,
    INTEL_COREI7_SAPPHIRERAPIDS=24,
    INTEL_COREI7_ALDERLAKE=25,
    AMDFAM19H_ZNVER3=26,
    INTEL_COREI7_ROCKETLAKE=27,
    ZHAOXIN_FAM7H_LUJIAZUI=28,
    AMDFAM19H_ZNVER4=29,
    INTEL_COREI7_GRANITERAPIDS=30,
    INTEL_COREI7_GRANITERAPIDS_D=31,
    INTEL_COREI7_ARROWLAKE=32,
    INTEL_COREI7_ARROWLAKE_S=33,
    INTEL_COREI7_PANTHERLAKE=34,
    ZHAOXIN_FAM7H_YONGFENG=35,
    AMDFAM1AH_ZNVER5=36,
    ZHAOXIN_FAM7H_SHIJIDADAO=37,
    INTEL_COREI7_DIAMONDRAPIDS=38,
    CPU_SUBTYPE_MAX=39
} processor_subtypes;

typedef enum processor_types {
    INTEL_BONNELL=1,
    INTEL_CORE2=2,
    INTEL_COREI7=3,
    AMDFAM10H=4,
    AMDFAM15H=5,
    INTEL_SILVERMONT=6,
    AMD_BTVER1=8,
    AMD_BTVER2=9,
    AMDFAM17H=10,
    INTEL_GOLDMONT=12,
    INTEL_GOLDMONT_PLUS=13,
    INTEL_TREMONT=14,
    AMDFAM19H=15,
    ZHAOXIN_FAM7H=16,
    INTEL_SIERRAFOREST=17,
    INTEL_GRANDRIDGE=18,
    INTEL_CLEARWATERFOREST=19,
    AMDFAM1AH=20,
    BUILTIN_CPU_TYPE_MAX=21,
    CPU_TYPE_MAX=21
} processor_types;

typedef struct fat_dirent fat_dirent, *Pfat_dirent;

struct fat_dirent {
    le8_t name[11];
    le8_t attribute;
    le8_t caseflags;
    le8_t ctime_ms;
    le32_t ctime;
    le16_t atime;
    le16_t clusthi;
    le32_t mtime;
    le16_t clustlo;
    le32_t size;
};

typedef struct fat_bootsect fat_bootsect, *Pfat_bootsect;

typedef union anon_union_474_2_fca3c3db_for_u anon_union_474_2_fca3c3db_for_u, *Panon_union_474_2_fca3c3db_for_u;

typedef struct anon_struct_474_7_6958ab40_for_fat16 anon_struct_474_7_6958ab40_for_fat16, *Panon_struct_474_7_6958ab40_for_fat16;

typedef struct anon_struct_474_14_15468307_for_fat32 anon_struct_474_14_15468307_for_fat32, *Panon_struct_474_14_15468307_for_fat32;

struct anon_struct_474_14_15468307_for_fat32 {
    le32_t bpb_fatsz32;
    le16_t bpb_extflags;
    le16_t bpb_fsver;
    le32_t bpb_rootclus;
    le16_t bpb_fsinfo;
    le16_t bpb_bkbootsec;
    char bpb_reserved[12];
    le8_t bsDriveNumber;
    le8_t bsReserved1;
    le8_t bsBootSignature;
    le32_t bsVolumeID;
    char bsVolumeLabel[11];
    char bsFileSysType[8];
    le8_t bsCode[420];
};

struct anon_struct_474_7_6958ab40_for_fat16 {
    le8_t bsDriveNumber;
    le8_t bsReserved1;
    le8_t bsBootSignature;
    le32_t bsVolumeID;
    char bsVolumeLabel[11];
    char bsFileSysType[8];
    le8_t bsCode[448];
};

union anon_union_474_2_fca3c3db_for_u {
    struct anon_struct_474_7_6958ab40_for_fat16 fat16;
    struct anon_struct_474_14_15468307_for_fat32 fat32;
};

struct fat_bootsect {
    le8_t bsJump[3];
    char bsOemName[8];
    le16_t bsBytesPerSec;
    le8_t bsSecPerClust;
    le16_t bsResSectors;
    le8_t bsFATs;
    le16_t bsRootDirEnts;
    le16_t bsSectors;
    le8_t bsMedia;
    le16_t bsFATsecs;
    le16_t bsSecPerTrack;
    le16_t bsHeads;
    le32_t bsHiddenSecs;
    le32_t bsHugeSectors;
    union anon_union_474_2_fca3c3db_for_u u;
    le16_t bsSignature;
};

typedef struct temp_blob_table temp_blob_table, *Ptemp_blob_table;

struct temp_blob_table {
    struct hlist_head *table;
    size_t capacity;
};

typedef void (*func_ptr)(void);


// WARNING! conflicting data type names: /DWARF/windef.h/tagPOINT - /WinDef.h/tagPOINT

typedef struct tagPOINT *LPPOINT;

typedef struct HHOOK__ HHOOK__, *PHHOOK__;

struct HHOOK__ {
    int unused;
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

typedef struct tagSIZE SIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct tagSIZE *LPSIZE;


// WARNING! conflicting data type names: /DWARF/windef.h/tagRECT - /WinDef.h/tagRECT


// WARNING! conflicting data type names: /DWARF/windef.h/LPRECT - /WinDef.h/LPRECT

typedef void *HGDIOBJ;

typedef struct HHOOK__ *HHOOK;

typedef HICON HCURSOR;


// WARNING! conflicting data type names: /DWARF/windef.h/HBITMAP - /WinDef.h/HBITMAP

typedef struct ext2_xattr_handle ext2_xattr_handle, *Pext2_xattr_handle;

typedef struct ext2_xattr ext2_xattr, *Pext2_xattr;

struct ext2_xattr {
    char *name;
    void *value;
    uint value_len;
    ext2_ino_t ea_ino;
};

struct ext2_xattr_handle {
    errcode_t magic;
    ext2_filsys fs;
    struct ext2_xattr *attrs;
    int capacity;
    int count;
    int ibody_count;
    ext2_ino_t ino;
    uint flags;
};

typedef struct ea_name_index ea_name_index, *Pea_name_index;

struct ea_name_index {
    int index;
    char *name;
};

typedef enum blob_location {
    BLOB_NONEXISTENT=0,
    BLOB_IN_WIM=1,
    BLOB_IN_FILE_ON_DISK=2,
    BLOB_IN_ATTACHED_BUFFER=3,
    BLOB_IN_WINDOWS_FILE=4
} blob_location;

typedef struct blob_descriptor_disk blob_descriptor_disk, *Pblob_descriptor_disk;

struct blob_descriptor_disk {
    struct wim_reshdr_disk reshdr;
    le16 part_number;
    le32 refcnt;
    u8 hash[20];
};

typedef struct iterate_blob_context iterate_blob_context, *Piterate_blob_context;

struct iterate_blob_context {
    wimlib_iterate_lookup_table_callback_t cb;
    void *user_ctx;
};

typedef struct input_bitstream input_bitstream, *Pinput_bitstream;

struct input_bitstream {
    u32 bitbuf;
    u32 bitsleft;
    u8 *next;
    u8 *end;
};

typedef struct xpress_decompressor xpress_decompressor, *Pxpress_decompressor;

typedef union anon_union_5136_2_8294f102_for_xpress_decompressor_0 anon_union_5136_2_8294f102_for_xpress_decompressor_0, *Panon_union_5136_2_8294f102_for_xpress_decompressor_0;

union anon_union_5136_2_8294f102_for_xpress_decompressor_0 {
    u16 decode_table[2566];
    u8 lens[512];
    undefined1 field2[5136]; // Automatically generated padding to match DWARF declared size
};

struct xpress_decompressor {
    union anon_union_5136_2_8294f102_for_xpress_decompressor_0 field_0;
    u16 working_space[544];
};

typedef longlong (*unpacker_t)(struct transformer_state_t *);

typedef struct mmp_struct mmp_struct, *Pmmp_struct;

struct mmp_struct {
    __u32 mmp_magic;
    __u32 mmp_seq;
    __u64 mmp_time;
    __u8 mmp_nodename[64];
    __u8 mmp_bdevname[32];
    __u16 mmp_check_interval;
    __u16 mmp_pad1;
    __u32 mmp_pad2[226];
    __u32 mmp_checksum;
};

typedef struct ext2_dir_entry_tail ext2_dir_entry_tail, *Pext2_dir_entry_tail;

struct ext2_dir_entry_tail {
    __u32 det_reserved_zero1;
    __u16 det_rec_len;
    __u16 det_reserved_name_len;
    __u32 det_checksum;
};

typedef struct ext4_group_desc ext4_group_desc, *Pext4_group_desc;

struct ext4_group_desc {
    __u32 bg_block_bitmap;
    __u32 bg_inode_bitmap;
    __u32 bg_inode_table;
    __u16 bg_free_blocks_count;
    __u16 bg_free_inodes_count;
    __u16 bg_used_dirs_count;
    __u16 bg_flags;
    __u32 bg_exclude_bitmap_lo;
    __u16 bg_block_bitmap_csum_lo;
    __u16 bg_inode_bitmap_csum_lo;
    __u16 bg_itable_unused;
    __u16 bg_checksum;
    __u32 bg_block_bitmap_hi;
    __u32 bg_inode_bitmap_hi;
    __u32 bg_inode_table_hi;
    __u16 bg_free_blocks_count_hi;
    __u16 bg_free_inodes_count_hi;
    __u16 bg_used_dirs_count_hi;
    __u16 bg_itable_unused_hi;
    __u32 bg_exclude_bitmap_hi;
    __u16 bg_block_bitmap_csum_hi;
    __u16 bg_inode_bitmap_csum_hi;
    __u32 bg_reserved;
};

typedef struct ext2_inode_large ext2_inode_large, *Pext2_inode_large;

struct ext2_inode_large {
    __u16 i_mode;
    __u16 i_uid;
    __u32 i_size;
    __u32 i_atime;
    __u32 i_ctime;
    __u32 i_mtime;
    __u32 i_dtime;
    __u16 i_gid;
    __u16 i_links_count;
    __u32 i_blocks;
    __u32 i_flags;
    union anon_union_4_2_b8acc1ea_for_osd1 osd1;
    __u32 i_block[15];
    __u32 i_generation;
    __u32 i_file_acl;
    __u32 i_size_high;
    __u32 i_faddr;
    union anon_union_12_2_b8acc20a_for_osd2 osd2;
    __u16 i_extra_isize;
    __u16 i_checksum_hi;
    __u32 i_ctime_extra;
    __u32 i_mtime_extra;
    __u32 i_atime_extra;
    __u32 i_crtime;
    __u32 i_crtime_extra;
    __u32 i_version_hi;
    __u32 i_projid;
};

typedef struct ext2_dx_tail ext2_dx_tail, *Pext2_dx_tail;

struct ext2_dx_tail {
    __le32 dt_reserved;
    __le32 dt_checksum;
};

typedef struct ext2_dx_root_info ext2_dx_root_info, *Pext2_dx_root_info;

struct ext2_dx_root_info {
    __u32 reserved_zero;
    __u8 hash_version;
    __u8 info_length;
    __u8 indirect_levels;
    __u8 unused_flags;
};

typedef struct ext2_group_desc ext2_group_desc, *Pext2_group_desc;

struct ext2_group_desc {
    __u32 bg_block_bitmap;
    __u32 bg_inode_bitmap;
    __u32 bg_inode_table;
    __u16 bg_free_blocks_count;
    __u16 bg_free_inodes_count;
    __u16 bg_used_dirs_count;
    __u16 bg_flags;
    __u32 bg_exclude_bitmap_lo;
    __u16 bg_block_bitmap_csum_lo;
    __u16 bg_inode_bitmap_csum_lo;
    __u16 bg_itable_unused;
    __u16 bg_checksum;
};

typedef struct anon_struct_4_2_d7da828e anon_struct_4_2_d7da828e, *Panon_struct_4_2_d7da828e;

struct anon_struct_4_2_d7da828e {
    u16 id;
    u16 name_start_offset;
};

typedef struct windows_info_ctx windows_info_ctx, *Pwindows_info_ctx;

struct windows_info_ctx {
    struct WIMStruct *wim;
    int image;
    _Bool oom_encountered;
    _Bool debug_enabled;
};

typedef struct ext2_ext_attr_entry ext2_ext_attr_entry, *Pext2_ext_attr_entry;

struct ext2_ext_attr_entry {
    __u8 e_name_len;
    __u8 e_name_index;
    __u16 e_value_offs;
    __u32 e_value_inum;
    __u32 e_value_size;
    __u32 e_hash;
};

typedef struct ext2_ext_attr_header ext2_ext_attr_header, *Pext2_ext_attr_header;

struct ext2_ext_attr_header {
    __u32 h_magic;
    __u32 h_refcount;
    __u32 h_blocks;
    __u32 h_hash;
    __u32 h_checksum;
    __u32 h_reserved[3];
};

typedef enum CASE_SENSITIVITY_TYPE {
    WIMLIB_CASE_PLATFORM_DEFAULT=0,
    WIMLIB_CASE_SENSITIVE=1,
    WIMLIB_CASE_INSENSITIVE=2
} CASE_SENSITIVITY_TYPE;

typedef struct iso_path_table_s iso_path_table_s, *Piso_path_table_s;

typedef struct iso_path_table_s iso_path_table_t;

struct iso_path_table_s {
    uint8_t name_len;
    uint8_t xa_len;
    uint32_t extent;
    uint16_t parent;
    char name[0];
};

typedef struct iso_volume_descriptor_s iso_volume_descriptor_s, *Piso_volume_descriptor_s;

typedef struct iso_volume_descriptor_s iso_volume_descriptor_t;

struct iso_volume_descriptor_s {
    uint8_t type;
    char id[5];
    uint8_t version;
    char data[2041];
};

typedef struct integrity_table integrity_table, *Pintegrity_table;

struct integrity_table {
    u32 size;
    u32 num_entries;
    u32 chunk_size;
    u8 sha1sums[0][20];
};


// WARNING! conflicting data type names: /DWARF/shtypes.h/_ITEMIDLIST - /shtypes.h/_ITEMIDLIST


// WARNING! conflicting data type names: /DWARF/shtypes.h/LPCITEMIDLIST - /shtypes.h/LPCITEMIDLIST


// WARNING! conflicting data type names: /DWARF/shtypes.h/ITEMIDLIST - /shtypes.h/ITEMIDLIST

typedef GUID KNOWNFOLDERID;


// WARNING! conflicting data type names: /DWARF/shtypes.h/LPITEMIDLIST - /shtypes.h/LPITEMIDLIST


// WARNING! conflicting data type names: /DWARF/shtypes.h/SHITEMID - /shtypes.h/SHITEMID


// WARNING! conflicting data type names: /DWARF/shtypes.h/_SHITEMID - /shtypes.h/_SHITEMID

typedef struct seq_t seq_t, *Pseq_t;

struct seq_t {
    size_t litLength;
    size_t matchLength;
    size_t offset;
};

typedef struct seqState_t seqState_t, *PseqState_t;

typedef struct ZSTD_fseState ZSTD_fseState, *PZSTD_fseState;

struct ZSTD_fseState {
    size_t state;
    struct ZSTD_seqSymbol *table;
};

struct seqState_t {
    struct BIT_DStream_t DStream;
    struct ZSTD_fseState stateLL;
    struct ZSTD_fseState stateOffb;
    struct ZSTD_fseState stateML;
    size_t prevOffset[3];
};

typedef enum ZSTD_longOffset_e {
    ZSTD_lo_isRegularOffset=0,
    ZSTD_lo_isLongOffset=1
} ZSTD_longOffset_e;

typedef struct ZSTD_OffsetInfo ZSTD_OffsetInfo, *PZSTD_OffsetInfo;

struct ZSTD_OffsetInfo {
    uint longOffsetShare;
    uint maxNbAdditionalBits;
};

typedef struct set_badblock_record set_badblock_record, *Pset_badblock_record;

struct set_badblock_record {
    ext2_badblocks_iterate bb_iter;
    int bad_block_count;
    blk_t *ind_blocks;
    int max_ind_blocks;
    int ind_blocks_size;
    int ind_blocks_ptr;
    char *block_buf;
    errcode_t err;
};

typedef struct ext2fs_rb_private ext2fs_rb_private, *Pext2fs_rb_private;

typedef struct bmap_rb_extent bmap_rb_extent, *Pbmap_rb_extent;

struct ext2fs_rb_private {
    struct rb_root root;
    struct bmap_rb_extent *wcursor;
    struct bmap_rb_extent *rcursor;
    struct bmap_rb_extent *rcursor_next;
};

struct bmap_rb_extent {
    struct rb_node node;
    __u64 start;
    __u64 count;
};

typedef char * * (*_f__p__acmdln)(void);


// WARNING! conflicting data type names: /DWARF/errhandlingapi.h/PTOP_LEVEL_EXCEPTION_FILTER - /winbase.h/PTOP_LEVEL_EXCEPTION_FILTER


// WARNING! conflicting data type names: /DWARF/errhandlingapi.h/LPTOP_LEVEL_EXCEPTION_FILTER - /winbase.h/LPTOP_LEVEL_EXCEPTION_FILTER

typedef struct IVdsAsyncVtbl IVdsAsyncVtbl, *PIVdsAsyncVtbl;

typedef struct IVdsAsync IVdsAsync, *PIVdsAsync;

struct IVdsAsyncVtbl {
    HRESULT (*QueryInterface)(struct IVdsAsync *, IID *, void **);
    ULONG (*AddRef)(struct IVdsAsync *);
    ULONG (*Release)(struct IVdsAsync *);
    HRESULT (*Cancel)(struct IVdsAsync *);
    HRESULT (*Wait)(struct IVdsAsync *, HRESULT *, VDS_ASYNC_OUTPUT *);
    HRESULT (*QueryStatus)(struct IVdsAsync *, HRESULT *, ULONG *);
};

struct IVdsAsync {
    struct IVdsAsyncVtbl *lpVtbl;
};

typedef struct IVdsDiskVtbl IVdsDiskVtbl, *PIVdsDiskVtbl;

typedef struct IVdsDisk IVdsDisk, *PIVdsDisk;

typedef struct IVdsPack IVdsPack, *PIVdsPack;

typedef struct IVdsPackVtbl IVdsPackVtbl, *PIVdsPackVtbl;

typedef struct IVdsProvider IVdsProvider, *PIVdsProvider;

typedef struct IEnumVdsObject IEnumVdsObject, *PIEnumVdsObject;

typedef struct IVdsProviderVtbl IVdsProviderVtbl, *PIVdsProviderVtbl;

typedef struct IEnumVdsObjectVtbl IEnumVdsObjectVtbl, *PIEnumVdsObjectVtbl;

struct IVdsDiskVtbl {
    HRESULT (*QueryInterface)(struct IVdsDisk *, IID *, void **);
    ULONG (*AddRef)(struct IVdsDisk *);
    ULONG (*Release)(struct IVdsDisk *);
    HRESULT (*GetProperties)(struct IVdsDisk *, VDS_DISK_PROP *);
    HRESULT (*GetPack)(struct IVdsDisk *, struct IVdsPack **);
    HRESULT (*GetIdentificationData)(struct IVdsDisk *, void *);
    HRESULT (*QueryExtents)(struct IVdsDisk *, VDS_DISK_EXTENT **, LONG *);
    HRESULT (*ConvertStyle)(struct IVdsDisk *, VDS_PARTITION_STYLE);
    HRESULT (*SetFlags)(struct IVdsDisk *, ULONG);
    HRESULT (*ClearFlags)(struct IVdsDisk *, ULONG);
};

struct IVdsPack {
    struct IVdsPackVtbl *lpVtbl;
};

struct IVdsProviderVtbl {
    HRESULT (*QueryInterface)(struct IVdsProvider *, IID *, void **);
    ULONG (*AddRef)(struct IVdsProvider *);
    ULONG (*Release)(struct IVdsProvider *);
    HRESULT (*GetProperties)(struct IVdsProvider *, VDS_PROVIDER_PROP *);
};

struct IEnumVdsObject {
    struct IEnumVdsObjectVtbl *lpVtbl;
};

struct IEnumVdsObjectVtbl {
    HRESULT (*QueryInterface)(struct IEnumVdsObject *, IID *, void **);
    ULONG (*AddRef)(struct IEnumVdsObject *);
    ULONG (*Release)(struct IEnumVdsObject *);
    HRESULT (*Next)(struct IEnumVdsObject *, ULONG, struct IUnknown **, ULONG *);
    HRESULT (*Skip)(struct IEnumVdsObject *, ULONG);
    HRESULT (*Reset)(struct IEnumVdsObject *);
    HRESULT (*Clone)(struct IEnumVdsObject *, struct IEnumVdsObject **);
};

struct IVdsPackVtbl {
    HRESULT (*QueryInterface)(struct IVdsPack *, IID *, void **);
    ULONG (*AddRef)(struct IVdsPack *);
    ULONG (*Release)(struct IVdsPack *);
    HRESULT (*GetProperties)(struct IVdsPack *, VDS_PACK_PROP *);
    HRESULT (*GetProvider)(struct IVdsPack *, struct IVdsProvider **);
    HRESULT (*QueryVolumes)(struct IVdsPack *, struct IEnumVdsObject **);
    HRESULT (*QueryDisks)(struct IVdsPack *, struct IEnumVdsObject **);
    HRESULT (*CreateVolume)(struct IVdsPack *, VDS_VOLUME_TYPE, VDS_INPUT_DISK *, LONG, ULONG, struct IVdsAsync **);
    HRESULT (*AddDisk)(struct IVdsPack *, VDS_OBJECT_ID, VDS_PARTITION_STYLE, BOOL);
    HRESULT (*MigrateDisks)(struct IVdsPack *, VDS_OBJECT_ID *, LONG, VDS_OBJECT_ID, BOOL, BOOL, HRESULT *, BOOL *);
    HRESULT (*ReplaceDisk)(struct IVdsPack *, VDS_OBJECT_ID, VDS_OBJECT_ID, struct IVdsAsync **);
    HRESULT (*RemoveMissingDisk)(struct IVdsPack *, VDS_OBJECT_ID);
    HRESULT (*Recover)(struct IVdsPack *, struct IVdsAsync **);
};

struct IVdsProvider {
    struct IVdsProviderVtbl *lpVtbl;
};

struct IVdsDisk {
    struct IVdsDiskVtbl *lpVtbl;
};

typedef struct VOLUME_DISK_EXTENTS_REDEF VOLUME_DISK_EXTENTS_REDEF, *PVOLUME_DISK_EXTENTS_REDEF;

struct VOLUME_DISK_EXTENTS_REDEF {
    DWORD NumberOfDiskExtents;
    DISK_EXTENT Extents[8];
};

typedef struct IVdsVolumeVtbl IVdsVolumeVtbl, *PIVdsVolumeVtbl;

typedef struct IVdsVolume IVdsVolume, *PIVdsVolume;

struct IVdsVolume {
    struct IVdsVolumeVtbl *lpVtbl;
};

struct IVdsVolumeVtbl {
    HRESULT (*QueryInterface)(struct IVdsVolume *, IID *, void **);
    ULONG (*AddRef)(struct IVdsVolume *);
    ULONG (*Release)(struct IVdsVolume *);
    HRESULT (*GetProperties)(struct IVdsVolume *, VDS_VOLUME_PROP *);
    HRESULT (*GetPack)(struct IVdsVolume *, struct IVdsPack **);
    HRESULT (*QueryPlexes)(struct IVdsVolume *, struct IEnumVdsObject **);
    HRESULT (*Extend)(struct IVdsVolume *, VDS_INPUT_DISK *, LONG, struct IVdsAsync **);
    HRESULT (*Shrink)(struct IVdsVolume *, ULONGLONG, struct IVdsAsync **);
    HRESULT (*AddPlex)(struct IVdsVolume *, VDS_OBJECT_ID, struct IVdsAsync **);
    HRESULT (*BreakPlex)(struct IVdsVolume *, VDS_OBJECT_ID, struct IVdsAsync **);
    HRESULT (*RemovePlex)(struct IVdsVolume *, VDS_OBJECT_ID, struct IVdsAsync **);
    HRESULT (*Delete)(struct IVdsVolume *, BOOL);
    HRESULT (*SetFlags)(struct IVdsVolume *, ULONG, BOOL);
    HRESULT (*ClearFlags)(struct IVdsVolume *, ULONG);
};

typedef struct _DRIVE_LAYOUT_INFORMATION_EX4 _DRIVE_LAYOUT_INFORMATION_EX4, *P_DRIVE_LAYOUT_INFORMATION_EX4;

typedef struct _DRIVE_LAYOUT_INFORMATION_EX4 DRIVE_LAYOUT_INFORMATION_EX4;

typedef union anon_union_40_2_439a9213_for_Type anon_union_40_2_439a9213_for_Type, *Panon_union_40_2_439a9213_for_Type;

union anon_union_40_2_439a9213_for_Type {
    DRIVE_LAYOUT_INFORMATION_MBR Mbr;
    DRIVE_LAYOUT_INFORMATION_GPT Gpt;
};

struct _DRIVE_LAYOUT_INFORMATION_EX4 {
    DWORD PartitionStyle;
    DWORD PartitionCount;
    union anon_union_40_2_439a9213_for_Type Type;
    PARTITION_INFORMATION_EX PartitionEntry[16];
};

typedef struct IVdsServiceLoader IVdsServiceLoader, *PIVdsServiceLoader;

typedef struct IVdsServiceLoaderVtbl IVdsServiceLoaderVtbl, *PIVdsServiceLoaderVtbl;

typedef struct IVdsService IVdsService, *PIVdsService;

typedef struct IVdsServiceVtbl IVdsServiceVtbl, *PIVdsServiceVtbl;

typedef struct IVdsAdviseSink IVdsAdviseSink, *PIVdsAdviseSink;

struct IVdsServiceLoader {
    struct IVdsServiceLoaderVtbl *lpVtbl;
};

struct IVdsServiceVtbl {
    HRESULT (*QueryInterface)(struct IVdsService *, IID *, void **);
    ULONG (*AddRef)(struct IVdsService *);
    ULONG (*Release)(struct IVdsService *);
    HRESULT (*IsServiceReady)(struct IVdsService *);
    HRESULT (*WaitForServiceReady)(struct IVdsService *);
    HRESULT (*GetProperties)(struct IVdsService *, VDS_SERVICE_PROP *);
    HRESULT (*QueryProviders)(struct IVdsService *, DWORD, struct IEnumVdsObject **);
    HRESULT (*QueryMaskedDisks)(struct IVdsService *, struct IEnumVdsObject **);
    HRESULT (*QueryUnallocatedDisks)(struct IVdsService *, struct IEnumVdsObject **);
    HRESULT (*GetObjectW)(struct IVdsService *, VDS_OBJECT_ID, VDS_OBJECT_TYPE, struct IUnknown **);
    HRESULT (*QueryDriveLetters)(struct IVdsService *, WCHAR, DWORD, VDS_DRIVE_LETTER_PROP *);
    HRESULT (*QueryFileSystemTypes)(struct IVdsService *, VDS_FILE_SYSTEM_TYPE_PROP **, LONG *);
    HRESULT (*Reenumerate)(struct IVdsService *);
    HRESULT (*Refresh)(struct IVdsService *);
    HRESULT (*CleanupObsoleteMountPoints)(struct IVdsService *);
    HRESULT (*Advise)(struct IVdsService *, struct IVdsAdviseSink *, DWORD *);
    HRESULT (*Unadvise)(struct IVdsService *, DWORD);
    HRESULT (*Reboot)(struct IVdsService *);
    HRESULT (*SetFlags)(struct IVdsService *, ULONG);
    HRESULT (*ClearFlags)(struct IVdsService *, ULONG);
};

struct IVdsServiceLoaderVtbl {
    HRESULT (*QueryInterface)(struct IVdsServiceLoader *, IID *, void **);
    ULONG (*AddRef)(struct IVdsServiceLoader *);
    ULONG (*Release)(struct IVdsServiceLoader *);
    HRESULT (*LoadService)(struct IVdsServiceLoader *, LPWSTR, struct IVdsService **);
};

struct IVdsAdviseSink {
};

struct IVdsService {
    struct IVdsServiceVtbl *lpVtbl;
};

typedef struct IVdsVolumeMF3 IVdsVolumeMF3, *PIVdsVolumeMF3;

typedef struct IVdsVolumeMF3Vtbl IVdsVolumeMF3Vtbl, *PIVdsVolumeMF3Vtbl;

struct IVdsVolumeMF3Vtbl {
    HRESULT (*QueryInterface)(struct IVdsVolumeMF3 *, IID *, void **);
    ULONG (*AddRef)(struct IVdsVolumeMF3 *);
    ULONG (*Release)(struct IVdsVolumeMF3 *);
    HRESULT (*QueryVolumeGuidPathnames)(struct IVdsVolumeMF3 *, LPWSTR **, ULONG *);
    HRESULT (*FormatEx2)(struct IVdsVolumeMF3 *, LPWSTR, USHORT, ULONG, LPWSTR, DWORD, struct IVdsAsync **);
    HRESULT (*OfflineVolume)(struct IVdsVolumeMF3 *);
};

struct IVdsVolumeMF3 {
    struct IVdsVolumeMF3Vtbl *lpVtbl;
};

typedef struct IVdsSwProvider IVdsSwProvider, *PIVdsSwProvider;

typedef struct IVdsSwProviderVtbl IVdsSwProviderVtbl, *PIVdsSwProviderVtbl;

struct IVdsSwProvider {
    struct IVdsSwProviderVtbl *lpVtbl;
};

struct IVdsSwProviderVtbl {
    HRESULT (*QueryInterface)(struct IVdsSwProvider *, IID *, void **);
    ULONG (*AddRef)(struct IVdsSwProvider *);
    ULONG (*Release)(struct IVdsSwProvider *);
    HRESULT (*QueryPacks)(struct IVdsSwProvider *, struct IEnumVdsObject **);
    HRESULT (*CreatePack)(struct IVdsSwProvider *, struct IVdsPack **);
};

typedef struct IVdsAdvancedDisk IVdsAdvancedDisk, *PIVdsAdvancedDisk;

typedef struct IVdsAdvancedDiskVtbl IVdsAdvancedDiskVtbl, *PIVdsAdvancedDiskVtbl;

struct IVdsAdvancedDisk {
    struct IVdsAdvancedDiskVtbl *lpVtbl;
};

struct IVdsAdvancedDiskVtbl {
    HRESULT (*QueryInterface)(struct IVdsAdvancedDisk *, IID *, void **);
    ULONG (*AddRef)(struct IVdsAdvancedDisk *);
    ULONG (*Release)(struct IVdsAdvancedDisk *);
    HRESULT (*GetPartitionProperties)(struct IVdsAdvancedDisk *, ULONGLONG, VDS_PARTITION_PROP *);
    HRESULT (*QueryPartitions)(struct IVdsAdvancedDisk *, VDS_PARTITION_PROP **, LONG *);
    HRESULT (*CreatePartition)(struct IVdsAdvancedDisk *, ULONGLONG, ULONGLONG, CREATE_PARTITION_PARAMETERS *, struct IVdsAsync **);
    HRESULT (*DeletePartition)(struct IVdsAdvancedDisk *, ULONGLONG, BOOL, BOOL);
    HRESULT (*ChangeAttributes)(struct IVdsAdvancedDisk *, ULONGLONG, CHANGE_ATTRIBUTES_PARAMETERS *);
    HRESULT (*AssignDriveLetter)(struct IVdsAdvancedDisk *, ULONGLONG, WCHAR);
    HRESULT (*DeleteDriveLetter)(struct IVdsAdvancedDisk *, ULONGLONG, WCHAR);
    HRESULT (*GetDriveLetter)(struct IVdsAdvancedDisk *, ULONGLONG, WCHAR *);
    HRESULT (*FormatPartition)(struct IVdsAdvancedDisk *, ULONGLONG, VDS_FILE_SYSTEM_TYPE, LPWSTR, DWORD, BOOL, BOOL, BOOL, struct IVdsAsync **);
    HRESULT (*Clean)(struct IVdsAdvancedDisk *, BOOL, BOOL, BOOL, struct IVdsAsync **);
};

typedef struct anon_struct_8_2_eb911d7e anon_struct_8_2_eb911d7e, *Panon_struct_8_2_eb911d7e;

struct anon_struct_8_2_eb911d7e {
    ULONG Allowed;
    ULONG Default;
};

typedef struct anon_struct_88_3_bb5bb3a0 anon_struct_88_3_bb5bb3a0, *Panon_struct_88_3_bb5bb3a0;

struct anon_struct_88_3_bb5bb3a0 {
    wchar_t Name[36];
    uint64_t Offset;
    uint64_t Size;
};

typedef struct STORAGE_DEVICE_NUMBER_REDEF STORAGE_DEVICE_NUMBER_REDEF, *PSTORAGE_DEVICE_NUMBER_REDEF;

struct STORAGE_DEVICE_NUMBER_REDEF {
    DWORD DeviceType;
    ULONG DeviceNumber;
    ULONG PartitionNumber;
};

typedef struct RUFUS_DRIVE_INFO RUFUS_DRIVE_INFO, *PRUFUS_DRIVE_INFO;

struct RUFUS_DRIVE_INFO {
    LONGLONG DiskSize;
    DWORD DeviceNumber;
    DWORD SectorsPerTrack;
    DWORD SectorSize;
    DWORD FirstDataSector;
    MEDIA_TYPE MediaType;
    int PartitionStyle;
    int nPartitions;
    struct anon_struct_88_3_bb5bb3a0 Partition[16];
    int FSType;
    char proposed_label[16];
    BOOL has_protective_mbr;
    BOOL has_mbr_uefi_marker;
    struct anon_struct_8_2_eb911d7e ClusterSize[9];
};

typedef enum ix86_tune_indices {
    X86_TUNE_SCHEDULE=0,
    X86_TUNE_PARTIAL_REG_DEPENDENCY=1,
    X86_TUNE_SSE_PARTIAL_REG_DEPENDENCY=2,
    X86_TUNE_SSE_PARTIAL_REG_FP_CONVERTS_DEPENDENCY=3,
    X86_TUNE_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY=4,
    X86_TUNE_DEST_FALSE_DEP_FOR_GLC=5,
    X86_TUNE_SSE_SPLIT_REGS=6,
    X86_TUNE_PARTIAL_FLAG_REG_STALL=7,
    X86_TUNE_MOVX=8,
    X86_TUNE_MEMORY_MISMATCH_STALL=9,
    X86_TUNE_FUSE_CMP_AND_BRANCH_32=10,
    X86_TUNE_FUSE_CMP_AND_BRANCH_64=11,
    X86_TUNE_FUSE_CMP_AND_BRANCH_SOFLAGS=12,
    X86_TUNE_FUSE_ALU_AND_BRANCH=13,
    X86_TUNE_FUSE_MOV_AND_ALU=14,
    X86_TUNE_FUSE_ALU_AND_BRANCH_MEM=15,
    X86_TUNE_FUSE_ALU_AND_BRANCH_MEM_IMM=16,
    X86_TUNE_FUSE_ALU_AND_BRANCH_RIP_RELATIVE=17,
    X86_TUNE_ACCUMULATE_OUTGOING_ARGS=18,
    X86_TUNE_PROLOGUE_USING_MOVE=19,
    X86_TUNE_EPILOGUE_USING_MOVE=20,
    X86_TUNE_USE_LEAVE=21,
    X86_TUNE_PUSH_MEMORY=22,
    X86_TUNE_SINGLE_PUSH=23,
    X86_TUNE_DOUBLE_PUSH=24,
    X86_TUNE_SINGLE_POP=25,
    X86_TUNE_DOUBLE_POP=26,
    X86_TUNE_PAD_SHORT_FUNCTION=27,
    X86_TUNE_PAD_RETURNS=28,
    X86_TUNE_FOUR_JUMP_LIMIT=29,
    X86_TUNE_ALIGN_TIGHT_LOOPS=30,
    X86_TUNE_SOFTWARE_PREFETCHING_BENEFICIAL=31,
    X86_TUNE_LCP_STALL=32,
    X86_TUNE_READ_MODIFY=33,
    X86_TUNE_USE_INCDEC=34,
    X86_TUNE_INTEGER_DFMODE_MOVES=35,
    X86_TUNE_OPT_AGU=36,
    X86_TUNE_AVOID_LEA_FOR_ADDR=37,
    X86_TUNE_SLOW_IMUL_IMM32_MEM=38,
    X86_TUNE_SLOW_IMUL_IMM8=39,
    X86_TUNE_AVOID_MEM_OPND_FOR_CMOVE=40,
    X86_TUNE_SINGLE_STRINGOP=41,
    X86_TUNE_PREFER_KNOWN_REP_MOVSB_STOSB=42,
    X86_TUNE_MISALIGNED_MOVE_STRING_PRO_EPILOGUES=43,
    X86_TUNE_USE_SAHF=44,
    X86_TUNE_USE_CLTD=45,
    X86_TUNE_USE_BT=46,
    X86_TUNE_AVOID_FALSE_DEP_FOR_BMI=47,
    X86_TUNE_AVOID_FALSE_DEP_FOR_TZCNT=48,
    X86_TUNE_AVOID_FALSE_DEP_FOR_BLS=49,
    X86_TUNE_ADJUST_UNROLL=50,
    X86_TUNE_ONE_IF_CONV_INSN=51,
    X86_TUNE_AVOID_MFENCE=52,
    X86_TUNE_EXPAND_ABS=53,
    X86_TUNE_USE_HIMODE_FIOP=54,
    X86_TUNE_USE_SIMODE_FIOP=55,
    X86_TUNE_USE_FFREEP=56,
    X86_TUNE_EXT_80387_CONSTANTS=57,
    X86_TUNE_GENERAL_REGS_SSE_SPILL=58,
    X86_TUNE_SSE_UNALIGNED_LOAD_OPTIMAL=59,
    X86_TUNE_SSE_UNALIGNED_STORE_OPTIMAL=60,
    X86_TUNE_SSE_PACKED_SINGLE_INSN_OPTIMAL=61,
    X86_TUNE_SSE_TYPELESS_STORES=62,
    X86_TUNE_SSE_LOAD0_BY_PXOR=63,
    X86_TUNE_INTER_UNIT_MOVES_TO_VEC=64,
    X86_TUNE_INTER_UNIT_MOVES_FROM_VEC=65,
    X86_TUNE_INTER_UNIT_CONVERSIONS=66,
    X86_TUNE_SPLIT_MEM_OPND_FOR_FP_CONVERTS=67,
    X86_TUNE_USE_VECTOR_FP_CONVERTS=68,
    X86_TUNE_USE_VECTOR_CONVERTS=69,
    X86_TUNE_SLOW_PSHUFB=70,
    X86_TUNE_AVOID_4BYTE_PREFIXES=71,
    X86_TUNE_USE_GATHER_2PARTS=72,
    X86_TUNE_USE_SCATTER_2PARTS=73,
    X86_TUNE_USE_GATHER_4PARTS=74,
    X86_TUNE_USE_SCATTER_4PARTS=75,
    X86_TUNE_USE_GATHER_8PARTS=76,
    X86_TUNE_USE_SCATTER_8PARTS=77,
    X86_TUNE_AVOID_128FMA_CHAINS=78,
    X86_TUNE_AVOID_256FMA_CHAINS=79,
    X86_TUNE_AVOID_512FMA_CHAINS=80,
    X86_TUNE_V2DF_REDUCTION_PREFER_HADDPD=81,
    X86_TUNE_SSE_MOVCC_USE_BLENDV=82,
    X86_TUNE_AVX256_UNALIGNED_LOAD_OPTIMAL=83,
    X86_TUNE_AVX256_UNALIGNED_STORE_OPTIMAL=84,
    X86_TUNE_AVX256_SPLIT_REGS=85,
    X86_TUNE_AVX128_OPTIMAL=86,
    X86_TUNE_AVX256_OPTIMAL=87,
    X86_TUNE_AVX256_AVOID_VEC_PERM=88,
    X86_TUNE_AVX512_SPLIT_REGS=89,
    X86_TUNE_AVX256_MOVE_BY_PIECES=90,
    X86_TUNE_AVX256_STORE_BY_PIECES=91,
    X86_TUNE_AVX512_MOVE_BY_PIECES=92,
    X86_TUNE_AVX512_STORE_BY_PIECES=93,
    X86_TUNE_AVX512_TWO_EPILOGUES=94,
    X86_TUNE_DOUBLE_WITH_ADD=95,
    X86_TUNE_ALWAYS_FANCY_MATH_387=96,
    X86_TUNE_UNROLL_STRLEN=97,
    X86_TUNE_SHIFT1=98,
    X86_TUNE_ZERO_EXTEND_WITH_AND=99,
    X86_TUNE_PROMOTE_HIMODE_IMUL=100,
    X86_TUNE_FAST_PREFIX=101,
    X86_TUNE_READ_MODIFY_WRITE=102,
    X86_TUNE_MOVE_M1_VIA_OR=103,
    X86_TUNE_NOT_UNPAIRABLE=104,
    X86_TUNE_PARTIAL_REG_STALL=105,
    X86_TUNE_PARTIAL_MEMORY_READ_STALL=106,
    X86_TUNE_PROMOTE_QIMODE=107,
    X86_TUNE_PROMOTE_HI_REGS=108,
    X86_TUNE_HIMODE_MATH=109,
    X86_TUNE_SPLIT_LONG_MOVES=110,
    X86_TUNE_USE_XCHGB=111,
    X86_TUNE_USE_MOV0=112,
    X86_TUNE_NOT_VECTORMODE=113,
    X86_TUNE_AVOID_VECTOR_DECODE=114,
    X86_TUNE_BRANCH_PREDICTION_HINTS_TAKEN=115,
    X86_TUNE_BRANCH_PREDICTION_HINTS_NOT_TAKEN=116,
    X86_TUNE_QIMODE_MATH=117,
    X86_TUNE_PROMOTE_QI_REGS=118,
    X86_TUNE_SLOW_STC=119,
    X86_TUNE_USE_RCR=120,
    X86_TUNE_LAST=121
} ix86_tune_indices;

typedef enum ix86_arch_indices {
    X86_ARCH_CMOV=0,
    X86_ARCH_CMPXCHG=1,
    X86_ARCH_CMPXCHG8B=2,
    X86_ARCH_XADD=3,
    X86_ARCH_BSWAP=4,
    X86_ARCH_LAST=5
} ix86_arch_indices;

typedef struct bb_struct_u64_iterate bb_struct_u64_iterate, *Pbb_struct_u64_iterate;

typedef struct bb_struct_u64_iterate *bb_u64_iterate;

typedef struct bb_struct_u64_list bb_struct_u64_list, *Pbb_struct_u64_list;

typedef struct bb_struct_u64_list *bb_u64_list;

struct bb_struct_u64_iterate {
    int magic;
    bb_u64_list bb;
    int ptr;
};

struct bb_struct_u64_list {
    int magic;
    int num;
    int size;
    uint64_t *list;
    int badblocks_flags;
};

typedef struct bb_struct_u64_list *bb_badblocks_list;

typedef enum error_types {
    READ_ERROR=0,
    WRITE_ERROR=1,
    CORRUPTION_ERROR=2
} error_types;

typedef struct badblocks_report badblocks_report, *Pbadblocks_report;

struct badblocks_report {
    uint32_t bb_count;
    uint32_t num_read_errors;
    uint32_t num_write_errors;
    uint32_t num_corruption_errors;
};

typedef struct bb_struct_u64_iterate *bb_badblocks_iterate;

typedef enum op_type {
    OP_READ=0,
    OP_WRITE=1
} op_type;

typedef struct _stat64.conflict _stat64.conflict, *P_stat64.conflict;

struct _stat64.conflict {
    _dev_t st_dev;
    _ino_t st_ino;
    ushort st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    longlong st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
};


// WARNING! conflicting data type names: /DWARF/_mingw_stat64.h/_stat64 - /wchar.h/_stat64

typedef void (*switch_t)(char *, uint64_t);

typedef void (*printf_t)(char *, ...);

typedef int (*read_t)(int, void *, uint);

typedef void (*progress_t)(uint64_t);

typedef int (*write_t)(int, void *, uint);

typedef struct posix_acl_xattr_entry posix_acl_xattr_entry, *Pposix_acl_xattr_entry;

struct posix_acl_xattr_entry {
    __le16 e_tag;
    __le16 e_perm;
    __le32 e_id;
};

typedef struct posix_acl_xattr_header posix_acl_xattr_header, *Pposix_acl_xattr_header;

struct posix_acl_xattr_header {
    __le32 a_version;
    struct posix_acl_xattr_entry a_entries[0];
};

typedef struct ext4_acl_entry ext4_acl_entry, *Pext4_acl_entry;

struct ext4_acl_entry {
    __le16 e_tag;
    __le16 e_perm;
    __le32 e_id;
};

typedef struct ext4_acl_header ext4_acl_header, *Pext4_acl_header;

struct ext4_acl_header {
    __le32 a_version;
};


// WARNING! conflicting data type names: /DWARF/minwinbase.h/SECURITY_ATTRIBUTES - /winbase.h/SECURITY_ATTRIBUTES

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _WIN32_FIND_DATAA WIN32_FIND_DATAA;

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};


// WARNING! conflicting data type names: /DWARF/minwinbase.h/_OVERLAPPED - /winbase.h/_OVERLAPPED


// WARNING! conflicting data type names: /DWARF/minwinbase.h/_SECURITY_ATTRIBUTES - /winbase.h/_SECURITY_ATTRIBUTES

typedef RTL_CRITICAL_SECTION CRITICAL_SECTION;


// WARNING! conflicting data type names: /DWARF/minwinbase.h/LPWIN32_FIND_DATAW - /winbase.h/LPWIN32_FIND_DATAW


// WARNING! conflicting data type names: /DWARF/minwinbase.h/LPTHREAD_START_ROUTINE - /winbase.h/LPTHREAD_START_ROUTINE


// WARNING! conflicting data type names: /DWARF/minwinbase.h/LPOVERLAPPED - /winbase.h/LPOVERLAPPED


// WARNING! conflicting data type names: /DWARF/minwinbase.h/LPSECURITY_ATTRIBUTES - /winbase.h/LPSECURITY_ATTRIBUTES


// WARNING! conflicting data type names: /DWARF/minwinbase.h/_WIN32_FIND_DATAW - /winbase.h/_WIN32_FIND_DATAW

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _OVERLAPPED OVERLAPPED;


// WARNING! conflicting data type names: /DWARF/minwinbase.h/LPCRITICAL_SECTION - /winbase.h/LPCRITICAL_SECTION


// WARNING! conflicting data type names: /DWARF/minwinbase.h/PTHREAD_START_ROUTINE - /winbase.h/PTHREAD_START_ROUTINE

typedef struct _WIN32_FIND_DATAW WIN32_FIND_DATAW;


// WARNING! conflicting data type names: /DWARF/minwinbase.h/PCRITICAL_SECTION - /winbase.h/PCRITICAL_SECTION


// WARNING! conflicting data type names: /DWARF/minwinbase.h/LPSYSTEMTIME - /winbase.h/LPSYSTEMTIME

typedef union anon_union_8_2_36f7020d_for__OVERLAPPED_2 anon_union_8_2_36f7020d_for__OVERLAPPED_2, *Panon_union_8_2_36f7020d_for__OVERLAPPED_2;

typedef struct anon_struct_8_2_9677ec3f_for_anon_union_8_2_36f7020d_for__OVERLAPPED_2_0 anon_struct_8_2_9677ec3f_for_anon_union_8_2_36f7020d_for__OVERLAPPED_2_0, *Panon_struct_8_2_9677ec3f_for_anon_union_8_2_36f7020d_for__OVERLAPPED_2_0;

struct anon_struct_8_2_9677ec3f_for_anon_union_8_2_36f7020d_for__OVERLAPPED_2_0 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union anon_union_8_2_36f7020d_for__OVERLAPPED_2 {
    struct anon_struct_8_2_9677ec3f_for_anon_union_8_2_36f7020d_for__OVERLAPPED_2_0 field_0;
    PVOID Pointer;
};

typedef struct xlate.conflict xlate.conflict, *Pxlate.conflict;

struct xlate.conflict {
    int (*func)(struct ext2_dir_entry *, int, int, char *, void *);
    void *real_private;
};

typedef struct libfat_sector libfat_sector, *Plibfat_sector;

struct libfat_sector {
    libfat_sector_t n;
    struct libfat_sector *next;
    char data[0];
};

typedef struct libfat_filesystem libfat_filesystem, *Plibfat_filesystem;

typedef enum fat_type {
    FAT12=0,
    FAT16=1,
    FAT28=2
} fat_type;

struct libfat_filesystem {
    int (*read)(intptr_t, void *, size_t, libfat_sector_t);
    intptr_t readptr;
    enum fat_type fat_type;
    uint clustsize;
    int clustshift;
    int32_t endcluster;
    int32_t rootcluster;
    libfat_sector_t fat;
    libfat_sector_t rootdir;
    libfat_sector_t data;
    libfat_sector_t end;
    struct libfat_sector *sectors;
};

typedef enum streaming_operation {
    not_streaming=0,
    is_streaming=1
} streaming_operation;

typedef enum update_progress_type {
    UPT_PERCENT=0,
    UPT_SPEED=1,
    UPT_ETA=2,
    UPT_MAX=3
} update_progress_type;

typedef struct bar_progress bar_progress, *Pbar_progress;

typedef struct bar_progress_hist bar_progress_hist, *Pbar_progress_hist;

struct bar_progress_hist {
    uint64_t pos;
    uint64_t times[20];
    uint64_t bytes[20];
    uint64_t total_time;
    uint64_t total_bytes;
};

struct bar_progress {
    uint64_t total_length;
    uint64_t count;
    uint64_t last_screen_update;
    uint64_t dltime;
    struct bar_progress_hist hist;
    uint64_t recent_start;
    uint64_t recent_bytes;
    BOOL stalled;
    uint64_t last_eta_time;
    int last_eta_value;
};


// WARNING! conflicting data type names: /DWARF/processthreadsapi.h/_PROCESS_INFORMATION - /winbase.h/_PROCESS_INFORMATION


// WARNING! conflicting data type names: /DWARF/processthreadsapi.h/_STARTUPINFOA - /winbase.h/_STARTUPINFOA

typedef struct _STARTUPINFOA STARTUPINFOA;


// WARNING! conflicting data type names: /DWARF/processthreadsapi.h/LPSTARTUPINFOA - /winbase.h/LPSTARTUPINFOA


// WARNING! conflicting data type names: /DWARF/processthreadsapi.h/_STARTUPINFOW - /winbase.h/_STARTUPINFOW

typedef STARTUPINFOA STARTUPINFO;

typedef struct _PROCESS_INFORMATION *PPROCESS_INFORMATION;


// WARNING! conflicting data type names: /DWARF/processthreadsapi.h/LPSTARTUPINFOW - /winbase.h/LPSTARTUPINFOW


// WARNING! conflicting data type names: /DWARF/processthreadsapi.h/LPPROCESS_INFORMATION - /winbase.h/LPPROCESS_INFORMATION

typedef struct _PROCESS_INFORMATION PROCESS_INFORMATION;

typedef struct _STARTUPINFOW STARTUPINFOW;

typedef struct anon_struct_16_2_9375ef56 anon_struct_16_2_9375ef56, *Panon_struct_16_2_9375ef56;

struct anon_struct_16_2_9375ef56 {
    char *name;
    u32 feature;
};

typedef struct STOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS STOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS, *PSTOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS;

typedef union anon_union_120_2_aea0fec2_for_STOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS_1 anon_union_120_2_aea0fec2_for_STOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS_1, *Panon_union_120_2_aea0fec2_for_STOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS_1;

union anon_union_120_2_aea0fec2_for_STOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS_1 {
    struct anon_struct_48_6_b5625a42_for_Version1 Version1;
    struct anon_struct_120_11_9ae5752e_for_Version2 Version2;
};

struct STOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS {
    CREATE_VIRTUAL_DISK_VERSION Version;
    union anon_union_120_2_aea0fec2_for_STOPGAP_CREATE_VIRTUAL_DISK_PARAMETERS_1 field_1;
};

typedef struct comp_assoc comp_assoc, *Pcomp_assoc;

struct comp_assoc {
    char *ext;
    uint8_t type;
};


// WARNING! conflicting data type names: /DWARF/vhd.c/SaveImage/anon_enum_32 - /DWARF/format.h/anon_enum_32

typedef longlong __m128i_u[2];

typedef ulonglong __v2du[2];

typedef char __v16qi[16];

typedef int __v4si[4];

typedef longlong __m128i[2];

typedef longlong __v2di[2];

typedef uint __v4su[4];

typedef short __v8hi[8];


// WARNING! conflicting data type names: /DWARF/setjmp.h/SETJMP_FLOAT128 - /setjmp.h/SETJMP_FLOAT128


// WARNING! conflicting data type names: /DWARF/setjmp.h/_SETJMP_FLOAT128 - /setjmp.h/_SETJMP_FLOAT128

typedef struct ext2fs_default_t ext2fs_default_t, *Pext2fs_default_t;

struct ext2fs_default_t {
    uint64_t max_size;
    uint32_t block_size;
    uint32_t inode_size;
    uint32_t inode_ratio;
};

typedef enum GROUPBOXSTATES {
    GBS_NORMAL=1,
    GBS_DISABLED=2
} GROUPBOXSTATES;

typedef enum FILLSTATES {
    PBFS_NORMAL=1,
    PBFS_ERROR=2,
    PBFS_PAUSED=3,
    PBFS_PARTIAL=4
} FILLSTATES;

typedef enum BUTTONPARTS {
    BP_PUSHBUTTON=1,
    BP_RADIOBUTTON=2,
    BP_CHECKBOX=3,
    BP_GROUPBOX=4,
    BP_USERBUTTON=5,
    BP_COMMANDLINK=6,
    BP_COMMANDLINKGLYPH=7
} BUTTONPARTS;

typedef enum RADIOBUTTONSTATES {
    RBS_UNCHECKEDNORMAL=1,
    RBS_UNCHECKEDHOT=2,
    RBS_UNCHECKEDPRESSED=3,
    RBS_UNCHECKEDDISABLED=4,
    RBS_CHECKEDNORMAL=5,
    RBS_CHECKEDHOT=6,
    RBS_CHECKEDPRESSED=7,
    RBS_CHECKEDDISABLED=8
} RADIOBUTTONSTATES;

typedef enum PROGRESSPARTS {
    PP_BAR=1,
    PP_BARVERT=2,
    PP_CHUNK=3,
    PP_CHUNKVERT=4,
    PP_FILL=5,
    PP_FILLVERT=6,
    PP_PULSEOVERLAY=7,
    PP_MOVEOVERLAY=8,
    PP_PULSEOVERLAYVERT=9,
    PP_MOVEOVERLAYVERT=10,
    PP_TRANSPARENTBAR=11,
    PP_TRANSPARENTBARVERT=12
} PROGRESSPARTS;


// WARNING! conflicting data type names: /DWARF/guiddef.h/_GUID - /guiddef.h/_GUID

typedef GUID.conflict FMTID;


// WARNING! conflicting data type names: /DWARF/guiddef.h/CLSID - /guiddef.h/CLSID

typedef GUID.conflict IID.conflict;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CRYPT_OBJID_BLOB - /wincrypt.h/CRYPT_OBJID_BLOB


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CMSG_SIGNER_INFO - /wincrypt.h/_CMSG_SIGNER_INFO

typedef struct _CMSG_SIGNER_INFO *PCMSG_SIGNER_INFO;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CTL_CONTEXT - /wincrypt.h/CTL_CONTEXT


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CMSG_SIGNER_INFO - /wincrypt.h/CMSG_SIGNER_INFO

typedef WINBOOL (*PFN_CMSG_STREAM_OUTPUT)(void *, BYTE *, DWORD, WINBOOL);

typedef ULONG_PTR HCRYPTKEY;

typedef struct _CERT_REVOCATION_CRL_INFO _CERT_REVOCATION_CRL_INFO, *P_CERT_REVOCATION_CRL_INFO;

typedef struct _CRL_CONTEXT _CRL_CONTEXT, *P_CRL_CONTEXT;

typedef struct _CRL_CONTEXT CRL_CONTEXT;

typedef CRL_CONTEXT *PCCRL_CONTEXT;

typedef struct _CRL_ENTRY _CRL_ENTRY, *P_CRL_ENTRY;

typedef struct _CRL_ENTRY *PCRL_ENTRY;

typedef struct _CRL_INFO _CRL_INFO, *P_CRL_INFO;

typedef struct _CRL_INFO *PCRL_INFO;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CRYPT_INTEGER_BLOB - /wincrypt.h/CRYPT_INTEGER_BLOB


// WARNING! conflicting data type names: /DWARF/wincrypt.h/PCERT_EXTENSION - /wincrypt.h/PCERT_EXTENSION


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CRYPT_ALGORITHM_IDENTIFIER - /wincrypt.h/CRYPT_ALGORITHM_IDENTIFIER


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CERT_NAME_BLOB - /wincrypt.h/CERT_NAME_BLOB

struct _CERT_REVOCATION_CRL_INFO {
    DWORD cbSize;
    PCCRL_CONTEXT pBaseCrlContext;
    PCCRL_CONTEXT pDeltaCrlContext;
    PCRL_ENTRY pCrlEntry;
    WINBOOL fDeltaCrlEntry;
};

struct _CRL_ENTRY {
    CRYPT_INTEGER_BLOB SerialNumber;
    FILETIME RevocationDate;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
};

struct _CRL_INFO {
    DWORD dwVersion;
    CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
    CERT_NAME_BLOB Issuer;
    FILETIME ThisUpdate;
    FILETIME NextUpdate;
    DWORD cCRLEntry;
    PCRL_ENTRY rgCRLEntry;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
};

struct _CRL_CONTEXT {
    DWORD dwCertEncodingType;
    BYTE *pbCrlEncoded;
    DWORD cbCrlEncoded;
    PCRL_INFO pCrlInfo;
    HCERTSTORE hCertStore;
};


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CRYPT_BIT_BLOB - /wincrypt.h/_CRYPT_BIT_BLOB

typedef ULONG_PTR HCRYPTHASH;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CERT_PUBLIC_KEY_INFO - /wincrypt.h/CERT_PUBLIC_KEY_INFO


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CERT_CONTEXT - /wincrypt.h/CERT_CONTEXT


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CRYPTOAPI_BLOB - /wincrypt.h/_CRYPTOAPI_BLOB

typedef struct _CRYPTOAPI_BLOB CRYPT_DER_BLOB;

typedef struct _CERT_CHAIN_CONTEXT _CERT_CHAIN_CONTEXT, *P_CERT_CHAIN_CONTEXT;

typedef struct _CERT_CHAIN_CONTEXT CERT_CHAIN_CONTEXT;

typedef CERT_CHAIN_CONTEXT *PCCERT_CHAIN_CONTEXT;

typedef struct _CERT_TRUST_STATUS _CERT_TRUST_STATUS, *P_CERT_TRUST_STATUS;

typedef struct _CERT_TRUST_STATUS CERT_TRUST_STATUS;

typedef struct _CERT_SIMPLE_CHAIN _CERT_SIMPLE_CHAIN, *P_CERT_SIMPLE_CHAIN;

typedef struct _CERT_SIMPLE_CHAIN *PCERT_SIMPLE_CHAIN;

typedef struct _CERT_CHAIN_ELEMENT _CERT_CHAIN_ELEMENT, *P_CERT_CHAIN_ELEMENT;

typedef struct _CERT_CHAIN_ELEMENT *PCERT_CHAIN_ELEMENT;

typedef struct _CERT_TRUST_LIST_INFO _CERT_TRUST_LIST_INFO, *P_CERT_TRUST_LIST_INFO;

typedef struct _CERT_TRUST_LIST_INFO *PCERT_TRUST_LIST_INFO;

typedef CERT_CONTEXT *PCCERT_CONTEXT;

typedef struct _CERT_REVOCATION_INFO _CERT_REVOCATION_INFO, *P_CERT_REVOCATION_INFO;

typedef struct _CERT_REVOCATION_INFO *PCERT_REVOCATION_INFO;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CTL_USAGE - /wincrypt.h/_CTL_USAGE

typedef struct _CTL_USAGE *PCERT_ENHKEY_USAGE;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/PCTL_ENTRY - /wincrypt.h/PCTL_ENTRY


// WARNING! conflicting data type names: /DWARF/wincrypt.h/PCCTL_CONTEXT - /wincrypt.h/PCCTL_CONTEXT

typedef struct _CERT_REVOCATION_CRL_INFO *PCERT_REVOCATION_CRL_INFO;

struct _CERT_TRUST_STATUS {
    DWORD dwErrorStatus;
    DWORD dwInfoStatus;
};

struct _CERT_SIMPLE_CHAIN {
    DWORD cbSize;
    CERT_TRUST_STATUS TrustStatus;
    DWORD cElement;
    PCERT_CHAIN_ELEMENT *rgpElement;
    PCERT_TRUST_LIST_INFO pTrustListInfo;
    WINBOOL fHasRevocationFreshnessTime;
    DWORD dwRevocationFreshnessTime;
};

struct _CERT_REVOCATION_INFO {
    DWORD cbSize;
    DWORD dwRevocationResult;
    LPCSTR pszRevocationOid;
    LPVOID pvOidSpecificInfo;
    WINBOOL fHasFreshnessTime;
    DWORD dwFreshnessTime;
    PCERT_REVOCATION_CRL_INFO pCrlInfo;
};

struct _CERT_CHAIN_ELEMENT {
    DWORD cbSize;
    PCCERT_CONTEXT pCertContext;
    CERT_TRUST_STATUS TrustStatus;
    PCERT_REVOCATION_INFO pRevocationInfo;
    PCERT_ENHKEY_USAGE pIssuanceUsage;
    PCERT_ENHKEY_USAGE pApplicationUsage;
    LPCWSTR pwszExtendedErrorInfo;
};

struct _CERT_CHAIN_CONTEXT {
    DWORD cbSize;
    CERT_TRUST_STATUS TrustStatus;
    DWORD cChain;
    PCERT_SIMPLE_CHAIN *rgpChain;
    DWORD cLowerQualityChainContext;
    PCCERT_CHAIN_CONTEXT *rgpLowerQualityChainContext;
    WINBOOL fHasRevocationFreshnessTime;
    DWORD dwRevocationFreshnessTime;
    DWORD dwCreateFlags;
    GUID ChainId;
};

struct _CERT_TRUST_LIST_INFO {
    DWORD cbSize;
    PCTL_ENTRY pCtlEntry;
    PCCTL_CONTEXT pCtlContext;
};


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CERT_INFO - /wincrypt.h/_CERT_INFO


// WARNING! conflicting data type names: /DWARF/wincrypt.h/PCTL_INFO - /wincrypt.h/PCTL_INFO


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CRYPT_ATTRIBUTES - /wincrypt.h/CRYPT_ATTRIBUTES


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CTL_USAGE - /wincrypt.h/CTL_USAGE


// WARNING! conflicting data type names: /DWARF/wincrypt.h/PCRYPT_ATTRIBUTE - /wincrypt.h/PCRYPT_ATTRIBUTE

typedef struct _CRYPT_CONTENT_INFO _CRYPT_CONTENT_INFO, *P_CRYPT_CONTENT_INFO;

struct _CRYPT_CONTENT_INFO {
    LPSTR pszObjId;
    CRYPT_DER_BLOB Content;
};


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CRYPT_ATTRIBUTE - /wincrypt.h/_CRYPT_ATTRIBUTE


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CTL_INFO - /wincrypt.h/_CTL_INFO

typedef struct _CERT_CHAIN_PARA _CERT_CHAIN_PARA, *P_CERT_CHAIN_PARA;

typedef struct _CERT_USAGE_MATCH _CERT_USAGE_MATCH, *P_CERT_USAGE_MATCH;

typedef struct _CERT_USAGE_MATCH CERT_USAGE_MATCH;

typedef struct _CTL_USAGE CERT_ENHKEY_USAGE;

struct _CERT_USAGE_MATCH {
    DWORD dwType;
    CERT_ENHKEY_USAGE Usage;
};

struct _CERT_CHAIN_PARA {
    DWORD cbSize;
    CERT_USAGE_MATCH RequestedUsage;
};


// WARNING! conflicting data type names: /DWARF/wincrypt.h/PCRYPT_ATTR_BLOB - /wincrypt.h/PCRYPT_ATTR_BLOB


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CERT_EXTENSION - /wincrypt.h/_CERT_EXTENSION

typedef ULONG_PTR HCRYPTPROV;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CTL_ENTRY - /wincrypt.h/_CTL_ENTRY

typedef void (*PFN_CRYPT_FREE)(LPVOID);

typedef struct _CRYPT_DECODE_PARA _CRYPT_DECODE_PARA, *P_CRYPT_DECODE_PARA;

typedef LPVOID (*PFN_CRYPT_ALLOC)(size_t);

struct _CRYPT_DECODE_PARA {
    DWORD cbSize;
    PFN_CRYPT_ALLOC pfnAlloc;
    PFN_CRYPT_FREE pfnFree;
};

typedef struct _CMSG_STREAM_INFO _CMSG_STREAM_INFO, *P_CMSG_STREAM_INFO;

struct _CMSG_STREAM_INFO {
    DWORD cbContent;
    PFN_CMSG_STREAM_OUTPUT pfnStreamOutput;
    void *pvArg;
};

typedef struct _CRYPT_CONTENT_INFO *PCRYPT_CONTENT_INFO;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CRYPT_ATTRIBUTES - /wincrypt.h/_CRYPT_ATTRIBUTES


// WARNING! conflicting data type names: /DWARF/wincrypt.h/PCERT_INFO - /wincrypt.h/PCERT_INFO


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CERT_CONTEXT - /wincrypt.h/_CERT_CONTEXT


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CRYPT_DATA_BLOB - /wincrypt.h/CRYPT_DATA_BLOB


// WARNING! conflicting data type names: /DWARF/wincrypt.h/CRYPT_BIT_BLOB - /wincrypt.h/CRYPT_BIT_BLOB

typedef struct _CERT_CHAIN_PARA CERT_CHAIN_PARA;

typedef struct _CMSG_STREAM_INFO *PCMSG_STREAM_INFO;

typedef struct _CRYPT_DECODE_PARA *PCRYPT_DECODE_PARA;

typedef struct _CERT_CHAIN_PARA *PCERT_CHAIN_PARA;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CTL_CONTEXT - /wincrypt.h/_CTL_CONTEXT

typedef HANDLE HCERTCHAINENGINE;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CRYPT_ALGORITHM_IDENTIFIER - /wincrypt.h/_CRYPT_ALGORITHM_IDENTIFIER

typedef struct _CERT_INFO CERT_INFO;

typedef ULONG_PTR HCRYPTPROV_LEGACY;


// WARNING! conflicting data type names: /DWARF/wincrypt.h/_CERT_PUBLIC_KEY_INFO - /wincrypt.h/_CERT_PUBLIC_KEY_INFO

typedef WORD INTERNET_PORT;

typedef struct URL_COMPONENTSA URL_COMPONENTSA, *PURL_COMPONENTSA;

typedef enum INTERNET_SCHEME {
    INTERNET_SCHEME_PARTIAL=-2,
    INTERNET_SCHEME_UNKNOWN=-1,
    INTERNET_SCHEME_DEFAULT=0,
    INTERNET_SCHEME_FIRST=1,
    INTERNET_SCHEME_FTP=1,
    INTERNET_SCHEME_GOPHER=2,
    INTERNET_SCHEME_HTTP=3,
    INTERNET_SCHEME_HTTPS=4,
    INTERNET_SCHEME_FILE=5,
    INTERNET_SCHEME_NEWS=6,
    INTERNET_SCHEME_MAILTO=7,
    INTERNET_SCHEME_SOCKS=8,
    INTERNET_SCHEME_JAVASCRIPT=9,
    INTERNET_SCHEME_VBSCRIPT=10,
    INTERNET_SCHEME_LAST=11,
    INTERNET_SCHEME_RES=11
} INTERNET_SCHEME;

struct URL_COMPONENTSA {
    DWORD dwStructSize;
    LPSTR lpszScheme;
    DWORD dwSchemeLength;
    enum INTERNET_SCHEME nScheme;
    LPSTR lpszHostName;
    DWORD dwHostNameLength;
    INTERNET_PORT nPort;
    LPSTR lpszUserName;
    DWORD dwUserNameLength;
    LPSTR lpszPassword;
    DWORD dwPasswordLength;
    LPSTR lpszUrlPath;
    DWORD dwUrlPathLength;
    LPSTR lpszExtraInfo;
    DWORD dwExtraInfoLength;
};

typedef LPVOID HINTERNET;

typedef struct URL_COMPONENTSA *LPURL_COMPONENTSA;

typedef enum ZSTD_ErrorCode ERR_enum;

typedef void (*_PVFV)(void);

typedef int (*_PIFV)(void);

typedef struct VTSI_FOOTER VTSI_FOOTER, *PVTSI_FOOTER;

struct VTSI_FOOTER {
    uint64_t magic;
    uint16_t version_major;
    uint16_t version_minor;
    uint64_t disk_size;
    uint32_t disk_signature;
    uint32_t foot_chksum;
    uint32_t segment_num;
    uint32_t segment_chksum;
    uint64_t segment_offset;
    uint8_t reserved[468];
};

typedef struct VTSI_SEGMENT VTSI_SEGMENT, *PVTSI_SEGMENT;

struct VTSI_SEGMENT {
    uint64_t disk_start_sector;
    uint64_t sector_num;
    uint64_t data_offset;
};

typedef struct fat_boot_sector fat_boot_sector, *Pfat_boot_sector;

typedef union anon_union_468_2_313de69b_for_fat_boot_sector_14 anon_union_468_2_313de69b_for_fat_boot_sector_14, *Panon_union_468_2_313de69b_for_fat_boot_sector_14;

typedef struct anon_struct_468_7_5acf76d1_for_bs16 anon_struct_468_7_5acf76d1_for_bs16, *Panon_struct_468_7_5acf76d1_for_bs16;

typedef struct anon_struct_468_14_a4bb9c4d_for_bs32 anon_struct_468_14_a4bb9c4d_for_bs32, *Panon_struct_468_14_a4bb9c4d_for_bs32;

struct anon_struct_468_14_a4bb9c4d_for_bs32 {
    uint32_t FATSz32;
    uint16_t ExtFlags;
    uint16_t FSVer;
    uint32_t RootClus;
    uint16_t FSInfo;
    uint16_t BkBootSec;
    uint8_t Reserved0[12];
    uint8_t DriveNumber;
    uint8_t Reserved1;
    uint8_t BootSignature;
    uint32_t VolumeID;
    char VolumeLabel[11];
    char FileSysType[8];
    uint8_t Code[414];
};

struct anon_struct_468_7_5acf76d1_for_bs16 {
    uint8_t DriveNumber;
    uint8_t Reserved1;
    uint8_t BootSignature;
    uint32_t VolumeID;
    char VolumeLabel[11];
    char FileSysType[8];
    uint8_t Code[442];
};

union anon_union_468_2_313de69b_for_fat_boot_sector_14 {
    struct anon_struct_468_7_5acf76d1_for_bs16 bs16;
    struct anon_struct_468_14_a4bb9c4d_for_bs32 bs32;
};

struct fat_boot_sector {
    uint8_t bsJump[3];
    char bsOemName[8];
    uint16_t bsBytesPerSec;
    uint8_t bsSecPerClust;
    uint16_t bsResSectors;
    uint8_t bsFATs;
    uint16_t bsRootDirEnts;
    uint16_t bsSectors;
    uint8_t bsMedia;
    uint16_t bsFATsecs;
    uint16_t bsSecPerTrack;
    uint16_t bsHeads;
    uint32_t bsHiddenSecs;
    uint32_t bsHugeSectors;
    union anon_union_468_2_313de69b_for_fat_boot_sector_14 field_14;
    uint32_t bsMagic;
    uint16_t bsForwardPtr;
    uint16_t bsSignature;
};

typedef struct ntfs_boot_sector ntfs_boot_sector, *Pntfs_boot_sector;

struct ntfs_boot_sector {
    uint8_t bsJump[3];
    char bsOemName[8];
    uint16_t bsBytesPerSec;
    uint8_t bsSecPerClust;
    uint16_t bsResSectors;
    uint8_t bsZeroed_0[3];
    uint16_t bsZeroed_1;
    uint8_t bsMedia;
    uint16_t bsZeroed_2;
    uint16_t bsUnused_0;
    uint16_t bsUnused_1;
    uint32_t bsUnused_2;
    uint32_t bsZeroed_3;
    uint32_t bsUnused_3;
    uint64_t bsTotalSectors;
    uint64_t bsMFTLogicalClustNr;
    uint64_t bsMFTMirrLogicalClustNr;
    uint8_t bsClustPerMFTrecord;
    uint8_t bsUnused_4[3];
    uint8_t bsClustPerIdxBuf;
    uint8_t bsUnused_5[3];
    uint64_t bsVolSerialNr;
    uint32_t bsUnused_6;
    uint8_t Code[420];
    uint32_t bsMagic;
    uint16_t bsForwardPtr;
    uint16_t bsSignature;
};

typedef struct patch_area patch_area, *Ppatch_area;

struct patch_area {
    uint32_t magic;
    uint32_t instance;
    uint16_t data_sectors;
    uint16_t adv_sectors;
    uint32_t dwords;
    uint32_t checksum;
    uint16_t maxtransfer;
    uint16_t epaoffset;
};

typedef struct ext_patch_area ext_patch_area, *Pext_patch_area;

struct ext_patch_area {
    uint16_t advptroffset;
    uint16_t diroffset;
    uint16_t dirlen;
    uint16_t subvoloffset;
    uint16_t subvollen;
    uint16_t secptroffset;
    uint16_t secptrcnt;
    uint16_t sect1ptr0;
    uint16_t sect1ptr1;
    uint16_t raidpatch;
};

typedef struct syslinux_extent syslinux_extent, *Psyslinux_extent;

struct syslinux_extent {
    uint64_t lba;
    uint16_t len;
};

typedef struct lzms_adaptive_state lzms_adaptive_state, *Plzms_adaptive_state;

struct lzms_adaptive_state {
    u32 recent_lz_offsets[4];
    u32 prev_lz_offset;
    u32 upcoming_lz_offset;
    u32 recent_delta_pairs[4];
    u32 prev_delta_pair;
    u32 upcoming_delta_pair;
    u8 main_state;
    u8 match_state;
    u8 lz_state;
    u8 lz_rep_states[2];
    u8 delta_state;
    u8 delta_rep_states[2];
    undefined field12_0x38;
    undefined field13_0x39;
    undefined field14_0x3a;
    undefined field15_0x3b;
    undefined field16_0x3c;
    undefined field17_0x3d;
    undefined field18_0x3e;
    undefined field19_0x3f;
};

typedef struct lzms_output_bitstream lzms_output_bitstream, *Plzms_output_bitstream;

struct lzms_output_bitstream {
    u64 bitbuf;
    uint bitcount;
    u8 *begin;
    u8 *next;
};

typedef struct lzms_item lzms_item, *Plzms_item;

struct lzms_item {
    u32 length;
    u32 source;
};

typedef struct lzms_optimum_node lzms_optimum_node, *Plzms_optimum_node;

struct lzms_optimum_node {
    u32 cost;
    uint num_extra_items;
    struct lzms_item item;
    struct lzms_item extra_items[2];
    undefined field4_0x20;
    undefined field5_0x21;
    undefined field6_0x22;
    undefined field7_0x23;
    undefined field8_0x24;
    undefined field9_0x25;
    undefined field10_0x26;
    undefined field11_0x27;
    undefined field12_0x28;
    undefined field13_0x29;
    undefined field14_0x2a;
    undefined field15_0x2b;
    undefined field16_0x2c;
    undefined field17_0x2d;
    undefined field18_0x2e;
    undefined field19_0x2f;
    undefined field20_0x30;
    undefined field21_0x31;
    undefined field22_0x32;
    undefined field23_0x33;
    undefined field24_0x34;
    undefined field25_0x35;
    undefined field26_0x36;
    undefined field27_0x37;
    undefined field28_0x38;
    undefined field29_0x39;
    undefined field30_0x3a;
    undefined field31_0x3b;
    undefined field32_0x3c;
    undefined field33_0x3d;
    undefined field34_0x3e;
    undefined field35_0x3f;
    struct lzms_adaptive_state state;
};

typedef struct lzms_range_encoder lzms_range_encoder, *Plzms_range_encoder;

struct lzms_range_encoder {
    u64 lower_bound;
    u32 range_size;
    u16 cache;
    u32 cache_size;
    u8 *begin;
    u8 *next;
    u8 *end;
};

typedef struct lzms_compressor lzms_compressor, *Plzms_compressor;

typedef union anon_union_879488_2_ee12f3ad_for_lzms_compressor_8 anon_union_879488_2_ee12f3ad_for_lzms_compressor_8, *Panon_union_879488_2_ee12f3ad_for_lzms_compressor_8;

typedef struct anon_struct_879488_34_b994b6cc_for_anon_union_879488_2_ee12f3ad_for_lzms_compressor_8_0 anon_struct_879488_34_b994b6cc_for_anon_union_879488_2_ee12f3ad_for_lzms_compressor_8_0, *Panon_struct_879488_34_b994b6cc_for_anon_union_879488_2_ee12f3ad_for_lzms_compressor_8_0;

typedef struct lzms_huffman_rebuild_info.conflict lzms_huffman_rebuild_info.conflict, *Plzms_huffman_rebuild_info.conflict;

struct lzms_huffman_rebuild_info.conflict {
    uint num_syms_until_rebuild;
    uint num_syms;
    uint rebuild_freq;
    u32 *codewords;
    u8 *lens;
    u32 *freqs;
};

struct anon_struct_879488_34_b994b6cc_for_anon_union_879488_2_ee12f3ad_for_lzms_compressor_8_0 {
    struct lz_match matches[255];
    u32 delta_hash_table[131072];
    u32 next_delta_hashes[6];
    undefined field3_0x80810;
    undefined field4_0x80811;
    undefined field5_0x80812;
    undefined field6_0x80813;
    undefined field7_0x80814;
    undefined field8_0x80815;
    undefined field9_0x80816;
    undefined field10_0x80817;
    undefined field11_0x80818;
    undefined field12_0x80819;
    undefined field13_0x8081a;
    undefined field14_0x8081b;
    undefined field15_0x8081c;
    undefined field16_0x8081d;
    undefined field17_0x8081e;
    undefined field18_0x8081f;
    undefined field19_0x80820;
    undefined field20_0x80821;
    undefined field21_0x80822;
    undefined field22_0x80823;
    undefined field23_0x80824;
    undefined field24_0x80825;
    undefined field25_0x80826;
    undefined field26_0x80827;
    undefined field27_0x80828;
    undefined field28_0x80829;
    undefined field29_0x8082a;
    undefined field30_0x8082b;
    undefined field31_0x8082c;
    undefined field32_0x8082d;
    undefined field33_0x8082e;
    undefined field34_0x8082f;
    undefined field35_0x80830;
    undefined field36_0x80831;
    undefined field37_0x80832;
    undefined field38_0x80833;
    undefined field39_0x80834;
    undefined field40_0x80835;
    undefined field41_0x80836;
    undefined field42_0x80837;
    undefined field43_0x80838;
    undefined field44_0x80839;
    undefined field45_0x8083a;
    undefined field46_0x8083b;
    undefined field47_0x8083c;
    undefined field48_0x8083d;
    undefined field49_0x8083e;
    undefined field50_0x8083f;
    struct lzms_optimum_node optimum_nodes[2559];
    u32 fast_length_cost_tab[256];
    struct lzms_range_encoder rc;
    struct lzms_output_bitstream os;
    uint main_state;
    uint match_state;
    uint lz_state;
    uint lz_rep_states[2];
    uint delta_state;
    uint delta_rep_states[2];
    struct lzms_probabilites probs;
    struct lzms_huffman_rebuild_info.conflict literal_rebuild_info;
    u32 literal_codewords[256];
    u8 literal_lens[256];
    u32 literal_freqs[256];
    struct lzms_huffman_rebuild_info.conflict lz_offset_rebuild_info;
    u32 lz_offset_codewords[799];
    u8 lz_offset_lens[799];
    undefined field69_0xd401b;
    u32 lz_offset_freqs[799];
    struct lzms_huffman_rebuild_info.conflict length_rebuild_info;
    u32 length_codewords[54];
    u8 length_lens[54];
    undefined field74_0xd4dce;
    undefined field75_0xd4dcf;
    u32 length_freqs[54];
    struct lzms_huffman_rebuild_info.conflict delta_offset_rebuild_info;
    u32 delta_offset_codewords[799];
    u8 delta_offset_lens[799];
    undefined field80_0xd5e6b;
    u32 delta_offset_freqs[799];
    struct lzms_huffman_rebuild_info.conflict delta_power_rebuild_info;
    u32 delta_power_codewords[8];
    u8 delta_power_lens[8];
    u32 delta_power_freqs[8];
    undefined field86_0xd6b58;
    undefined field87_0xd6b59;
    undefined field88_0xd6b5a;
    undefined field89_0xd6b5b;
    undefined field90_0xd6b5c;
    undefined field91_0xd6b5d;
    undefined field92_0xd6b5e;
    undefined field93_0xd6b5f;
    undefined field94_0xd6b60;
    undefined field95_0xd6b61;
    undefined field96_0xd6b62;
    undefined field97_0xd6b63;
    undefined field98_0xd6b64;
    undefined field99_0xd6b65;
    undefined field100_0xd6b66;
    undefined field101_0xd6b67;
    undefined field102_0xd6b68;
    undefined field103_0xd6b69;
    undefined field104_0xd6b6a;
    undefined field105_0xd6b6b;
    undefined field106_0xd6b6c;
    undefined field107_0xd6b6d;
    undefined field108_0xd6b6e;
    undefined field109_0xd6b6f;
    undefined field110_0xd6b70;
    undefined field111_0xd6b71;
    undefined field112_0xd6b72;
    undefined field113_0xd6b73;
    undefined field114_0xd6b74;
    undefined field115_0xd6b75;
    undefined field116_0xd6b76;
    undefined field117_0xd6b77;
    undefined field118_0xd6b78;
    undefined field119_0xd6b79;
    undefined field120_0xd6b7a;
    undefined field121_0xd6b7b;
    undefined field122_0xd6b7c;
    undefined field123_0xd6b7d;
    undefined field124_0xd6b7e;
    undefined field125_0xd6b7f;
};

union anon_union_879488_2_ee12f3ad_for_lzms_compressor_8 {
    struct anon_struct_879488_34_b994b6cc_for_anon_union_879488_2_ee12f3ad_for_lzms_compressor_8_0 field_0;
    s32 last_target_usages[65536];
};

struct lzms_compressor {
    struct lcpit_matchfinder mf;
    u8 *in_buffer;
    size_t in_nbytes;
    _Bool try_lit_lzrep0;
    _Bool try_lzrep_lit_lzrep0;
    _Bool try_lzmatch_lit_lzrep0;
    _Bool use_delta_matches;
    _Bool destructive;
    undefined field8_0x45;
    undefined field9_0x46;
    undefined field10_0x47;
    undefined field11_0x48;
    undefined field12_0x49;
    undefined field13_0x4a;
    undefined field14_0x4b;
    undefined field15_0x4c;
    undefined field16_0x4d;
    undefined field17_0x4e;
    undefined field18_0x4f;
    undefined field19_0x50;
    undefined field20_0x51;
    undefined field21_0x52;
    undefined field22_0x53;
    undefined field23_0x54;
    undefined field24_0x55;
    undefined field25_0x56;
    undefined field26_0x57;
    undefined field27_0x58;
    undefined field28_0x59;
    undefined field29_0x5a;
    undefined field30_0x5b;
    undefined field31_0x5c;
    undefined field32_0x5d;
    undefined field33_0x5e;
    undefined field34_0x5f;
    undefined field35_0x60;
    undefined field36_0x61;
    undefined field37_0x62;
    undefined field38_0x63;
    undefined field39_0x64;
    undefined field40_0x65;
    undefined field41_0x66;
    undefined field42_0x67;
    undefined field43_0x68;
    undefined field44_0x69;
    undefined field45_0x6a;
    undefined field46_0x6b;
    undefined field47_0x6c;
    undefined field48_0x6d;
    undefined field49_0x6e;
    undefined field50_0x6f;
    undefined field51_0x70;
    undefined field52_0x71;
    undefined field53_0x72;
    undefined field54_0x73;
    undefined field55_0x74;
    undefined field56_0x75;
    undefined field57_0x76;
    undefined field58_0x77;
    undefined field59_0x78;
    undefined field60_0x79;
    undefined field61_0x7a;
    undefined field62_0x7b;
    undefined field63_0x7c;
    undefined field64_0x7d;
    undefined field65_0x7e;
    undefined field66_0x7f;
    union anon_union_879488_2_ee12f3ad_for_lzms_compressor_8 field_8;
    u8 fast_length_slot_tab[256];
    u8 offset_slot_tab_1[58533];
    undefined field70_0xe51a5;
    u16 offset_slot_tab_2[1952];
    u16 offset_slot_tab_3[18011];
    undefined field73_0xeed9c;
    undefined field74_0xeed9d;
    undefined field75_0xeed9e;
    undefined field76_0xeed9f;
    undefined field77_0xeeda0;
    undefined field78_0xeeda1;
    undefined field79_0xeeda2;
    undefined field80_0xeeda3;
    undefined field81_0xeeda4;
    undefined field82_0xeeda5;
    undefined field83_0xeeda6;
    undefined field84_0xeeda7;
    undefined field85_0xeeda8;
    undefined field86_0xeeda9;
    undefined field87_0xeedaa;
    undefined field88_0xeedab;
    undefined field89_0xeedac;
    undefined field90_0xeedad;
    undefined field91_0xeedae;
    undefined field92_0xeedaf;
    undefined field93_0xeedb0;
    undefined field94_0xeedb1;
    undefined field95_0xeedb2;
    undefined field96_0xeedb3;
    undefined field97_0xeedb4;
    undefined field98_0xeedb5;
    undefined field99_0xeedb6;
    undefined field100_0xeedb7;
    undefined field101_0xeedb8;
    undefined field102_0xeedb9;
    undefined field103_0xeedba;
    undefined field104_0xeedbb;
    undefined field105_0xeedbc;
    undefined field106_0xeedbd;
    undefined field107_0xeedbe;
    undefined field108_0xeedbf;
};

typedef enum symbolEncodingType_e {
    set_basic=0,
    set_rle=1,
    set_compressed=2,
    set_repeat=3
} symbolEncodingType_e;

typedef struct blockProperties_t blockProperties_t, *PblockProperties_t;

struct blockProperties_t {
    enum blockType_e blockType;
    U32 lastBlock;
    U32 origSize;
};

typedef enum ZSTD_overlap_e {
    ZSTD_no_overlap=0,
    ZSTD_overlap_src_before_dst=1
} ZSTD_overlap_e;

typedef struct ZSTD_frameSizeInfo ZSTD_frameSizeInfo, *PZSTD_frameSizeInfo;

struct ZSTD_frameSizeInfo {
    size_t nbBlocks;
    size_t compressedSize;
    ulonglong decompressedBound;
};

typedef struct _EXPLICIT_ACCESS_W _EXPLICIT_ACCESS_W, *P_EXPLICIT_ACCESS_W;

typedef enum _ACCESS_MODE {
    NOT_USED_ACCESS=0,
    GRANT_ACCESS=1,
    SET_ACCESS=2,
    DENY_ACCESS=3,
    REVOKE_ACCESS=4,
    SET_AUDIT_SUCCESS=5,
    SET_AUDIT_FAILURE=6
} _ACCESS_MODE;

typedef enum _ACCESS_MODE ACCESS_MODE;

typedef struct _TRUSTEE_W _TRUSTEE_W, *P_TRUSTEE_W;

typedef struct _TRUSTEE_W TRUSTEE_W;

typedef enum _MULTIPLE_TRUSTEE_OPERATION {
    NO_MULTIPLE_TRUSTEE=0,
    TRUSTEE_IS_IMPERSONATE=1
} _MULTIPLE_TRUSTEE_OPERATION;

typedef enum _MULTIPLE_TRUSTEE_OPERATION MULTIPLE_TRUSTEE_OPERATION;

typedef enum _TRUSTEE_FORM {
    TRUSTEE_IS_SID=0,
    TRUSTEE_IS_NAME=1,
    TRUSTEE_BAD_FORM=2,
    TRUSTEE_IS_OBJECTS_AND_SID=3,
    TRUSTEE_IS_OBJECTS_AND_NAME=4
} _TRUSTEE_FORM;

typedef enum _TRUSTEE_FORM TRUSTEE_FORM;

typedef enum _TRUSTEE_TYPE {
    TRUSTEE_IS_UNKNOWN=0,
    TRUSTEE_IS_USER=1,
    TRUSTEE_IS_GROUP=2,
    TRUSTEE_IS_DOMAIN=3,
    TRUSTEE_IS_ALIAS=4,
    TRUSTEE_IS_WELL_KNOWN_GROUP=5,
    TRUSTEE_IS_DELETED=6,
    TRUSTEE_IS_INVALID=7,
    TRUSTEE_IS_COMPUTER=8
} _TRUSTEE_TYPE;

typedef enum _TRUSTEE_TYPE TRUSTEE_TYPE;

struct _TRUSTEE_W {
    struct _TRUSTEE_W *pMultipleTrustee;
    MULTIPLE_TRUSTEE_OPERATION MultipleTrusteeOperation;
    TRUSTEE_FORM TrusteeForm;
    TRUSTEE_TYPE TrusteeType;
    LPWSTR ptstrName;
};

struct _EXPLICIT_ACCESS_W {
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAccessMode;
    DWORD grfInheritance;
    TRUSTEE_W Trustee;
};

typedef enum _SE_OBJECT_TYPE {
    SE_UNKNOWN_OBJECT_TYPE=0,
    SE_FILE_OBJECT=1,
    SE_SERVICE=2,
    SE_PRINTER=3,
    SE_REGISTRY_KEY=4,
    SE_LMSHARE=5,
    SE_KERNEL_OBJECT=6,
    SE_WINDOW_OBJECT=7,
    SE_DS_OBJECT=8,
    SE_DS_OBJECT_ALL=9,
    SE_PROVIDER_DEFINED_OBJECT=10,
    SE_WMIGUID_OBJECT=11,
    SE_REGISTRY_WOW64_32KEY=12
} _SE_OBJECT_TYPE;

typedef struct _EXPLICIT_ACCESS_W *PEXPLICIT_ACCESS_W;

typedef struct _EXPLICIT_ACCESS_W EXPLICIT_ACCESSW;

typedef enum _SE_OBJECT_TYPE SE_OBJECT_TYPE;

typedef EXPLICIT_ACCESSW EXPLICIT_ACCESS;

typedef struct ext2_bitmap_ops ext2_bitmap_ops, *Pext2_bitmap_ops;

typedef struct ext2fs_struct_generic_bitmap_64 ext2fs_struct_generic_bitmap_64, *Pext2fs_struct_generic_bitmap_64;

typedef struct ext2fs_struct_generic_bitmap_64 *ext2fs_generic_bitmap_64;

struct ext2_bitmap_ops {
    int type;
    errcode_t (*new_bmap)(ext2_filsys, ext2fs_generic_bitmap_64);
    void (*free_bmap)(ext2fs_generic_bitmap_64);
    errcode_t (*copy_bmap)(ext2fs_generic_bitmap_64, ext2fs_generic_bitmap_64);
    errcode_t (*resize_bmap)(ext2fs_generic_bitmap_64, __u64, __u64);
    int (*mark_bmap)(ext2fs_generic_bitmap_64, __u64);
    int (*unmark_bmap)(ext2fs_generic_bitmap_64, __u64);
    int (*test_bmap)(ext2fs_generic_bitmap_64, __u64);
    void (*mark_bmap_extent)(ext2fs_generic_bitmap_64, __u64, uint);
    void (*unmark_bmap_extent)(ext2fs_generic_bitmap_64, __u64, uint);
    int (*test_clear_bmap_extent)(ext2fs_generic_bitmap_64, __u64, uint);
    errcode_t (*set_bmap_range)(ext2fs_generic_bitmap_64, __u64, size_t, void *);
    errcode_t (*get_bmap_range)(ext2fs_generic_bitmap_64, __u64, size_t, void *);
    void (*clear_bmap)(ext2fs_generic_bitmap_64);
    void (*print_stats)(ext2fs_generic_bitmap_64);
    errcode_t (*find_first_zero)(ext2fs_generic_bitmap_64, __u64, __u64, __u64 *);
    errcode_t (*find_first_set)(ext2fs_generic_bitmap_64, __u64, __u64, __u64 *);
};

struct ext2fs_struct_generic_bitmap_64 {
    errcode_t magic;
    ext2_filsys fs;
    struct ext2_bitmap_ops *bitmap_ops;
    int flags;
    __u64 start;
    __u64 end;
    __u64 real_end;
    int cluster_bits;
    char *description;
    void *private;
    errcode_t base_error_code;
};


// WARNING! conflicting data type names: /winnt.h/_TOKEN_PRIVILEGES - /DWARF/winnt.h/_TOKEN_PRIVILEGES


// WARNING! conflicting data type names: /winnt.h/LUID_AND_ATTRIBUTES - /DWARF/winnt.h/LUID_AND_ATTRIBUTES


// WARNING! conflicting data type names: /winnt.h/_LUID - /DWARF/winnt.h/_LUID


// WARNING! conflicting data type names: /winnt.h/PSID_IDENTIFIER_AUTHORITY - /DWARF/winnt.h/PSID_IDENTIFIER_AUTHORITY


// WARNING! conflicting data type names: /winnt.h/_OSVERSIONINFOEXA - /DWARF/winnt.h/_OSVERSIONINFOEXA


// WARNING! conflicting data type names: /winnt.h/PLUID - /DWARF/winnt.h/PLUID


// WARNING! conflicting data type names: /winnt.h/PACL - /DWARF/winnt.h/PACL


// WARNING! conflicting data type names: /winnt.h/LPCSTR - /DWARF/winnt.h/LPCSTR


// WARNING! conflicting data type names: /winnt.h/PMEMORY_BASIC_INFORMATION - /DWARF/winnt.h/PMEMORY_BASIC_INFORMATION


// WARNING! conflicting data type names: /winnt.h/PLONG - /DWARF/winnt.h/PLONG


// WARNING! conflicting data type names: /winnt.h/LUID - /DWARF/winnt.h/LUID


// WARNING! conflicting data type names: /winnt.h/_LUID_AND_ATTRIBUTES - /DWARF/winnt.h/_LUID_AND_ATTRIBUTES


// WARNING! conflicting data type names: /winnt.h/PULARGE_INTEGER - /DWARF/winnt.h/PULARGE_INTEGER


// WARNING! conflicting data type names: /winnt.h/_OSVERSIONINFOA - /DWARF/winnt.h/_OSVERSIONINFOA


// WARNING! conflicting data type names: /winnt.h/_OSVERSIONINFOEXW - /DWARF/winnt.h/_OSVERSIONINFOEXW


// WARNING! conflicting data type names: /winnt.h/LPOSVERSIONINFOA - /DWARF/winnt.h/LPOSVERSIONINFOA


// WARNING! conflicting data type names: /winnt.h/PTOKEN_PRIVILEGES - /DWARF/winnt.h/PTOKEN_PRIVILEGES


// WARNING! conflicting data type names: /winnt.h/ACCESS_MASK - /DWARF/winnt.h/ACCESS_MASK


// WARNING! conflicting data type names: /winnt.h/TOKEN_INFORMATION_CLASS - /DWARF/winnt.h/TOKEN_INFORMATION_CLASS


// WARNING! conflicting data type names: /winnt.h/_MEMORY_BASIC_INFORMATION - /DWARF/winnt.h/_MEMORY_BASIC_INFORMATION


// WARNING! conflicting data type names: /winnt.h/LPOSVERSIONINFOEXW - /DWARF/winnt.h/LPOSVERSIONINFOEXW


// WARNING! conflicting data type names: /winnt.h/PCWSTR - /DWARF/winnt.h/PCWSTR


// WARNING! conflicting data type names: /winnt.h/SECURITY_INFORMATION - /DWARF/winnt.h/SECURITY_INFORMATION


// WARNING! conflicting data type names: /winnt.h/BOOLEAN - /wtypes.h/BOOLEAN


// WARNING! conflicting data type names: /winnt.h/PCSTR - /DWARF/winnt.h/PCSTR


// WARNING! conflicting data type names: /winnt.h/_TOKEN_INFORMATION_CLASS - /DWARF/winnt.h/_TOKEN_INFORMATION_CLASS


// WARNING! conflicting data type names: /winnt.h/PLARGE_INTEGER - /DWARF/winnt.h/PLARGE_INTEGER


// WARNING! conflicting data type names: /winnt.h/PSTR - /DWARF/winnt.h/PSTR


// WARNING! conflicting data type names: /winnt.h/LPOSVERSIONINFOEXA - /DWARF/winnt.h/LPOSVERSIONINFOEXA


// WARNING! conflicting data type names: /winnt.h/LCID - /DWARF/winnt.h/LCID


// WARNING! conflicting data type names: /winnt.h/PHANDLE - /DWARF/winnt.h/PHANDLE


// WARNING! conflicting data type names: /DOS/IMAGE_DOS_HEADER - /DWARF/winnt.h/IMAGE_DOS_HEADER


// WARNING! conflicting data type names: /wincrypt.h/PFN_CMSG_STREAM_OUTPUT - /DWARF/wincrypt.h/PFN_CMSG_STREAM_OUTPUT


// WARNING! conflicting data type names: /wincrypt.h/_CERT_REVOCATION_CRL_INFO - /DWARF/wincrypt.h/_CERT_REVOCATION_CRL_INFO


// WARNING! conflicting data type names: /wincrypt.h/PCCRL_CONTEXT - /DWARF/wincrypt.h/PCCRL_CONTEXT


// WARNING! conflicting data type names: /wincrypt.h/PCCERT_CHAIN_CONTEXT - /DWARF/wincrypt.h/PCCERT_CHAIN_CONTEXT


// WARNING! conflicting data type names: /wincrypt.h/PCERT_CHAIN_ELEMENT - /DWARF/wincrypt.h/PCERT_CHAIN_ELEMENT


// WARNING! conflicting data type names: /wincrypt.h/_CERT_SIMPLE_CHAIN - /DWARF/wincrypt.h/_CERT_SIMPLE_CHAIN


// WARNING! conflicting data type names: /wincrypt.h/PCCERT_CONTEXT - /DWARF/wincrypt.h/PCCERT_CONTEXT


// WARNING! conflicting data type names: /wincrypt.h/CERT_CHAIN_CONTEXT - /DWARF/wincrypt.h/CERT_CHAIN_CONTEXT


// WARNING! conflicting data type names: /wincrypt.h/_CERT_CHAIN_PARA - /DWARF/wincrypt.h/_CERT_CHAIN_PARA


// WARNING! conflicting data type names: /wincrypt.h/PCERT_REVOCATION_CRL_INFO - /DWARF/wincrypt.h/PCERT_REVOCATION_CRL_INFO


// WARNING! conflicting data type names: /wincrypt.h/_CERT_USAGE_MATCH - /DWARF/wincrypt.h/_CERT_USAGE_MATCH


// WARNING! conflicting data type names: /wincrypt.h/_CERT_REVOCATION_INFO - /DWARF/wincrypt.h/_CERT_REVOCATION_INFO


// WARNING! conflicting data type names: /wincrypt.h/CERT_TRUST_STATUS - /DWARF/wincrypt.h/CERT_TRUST_STATUS


// WARNING! conflicting data type names: /wincrypt.h/PCRL_INFO - /DWARF/wincrypt.h/PCRL_INFO


// WARNING! conflicting data type names: /wincrypt.h/_CRL_ENTRY - /DWARF/wincrypt.h/_CRL_ENTRY


// WARNING! conflicting data type names: /wincrypt.h/PCRL_ENTRY - /DWARF/wincrypt.h/PCRL_ENTRY


// WARNING! conflicting data type names: /wincrypt.h/PCERT_TRUST_LIST_INFO - /DWARF/wincrypt.h/PCERT_TRUST_LIST_INFO


// WARNING! conflicting data type names: /wincrypt.h/_CRL_INFO - /DWARF/wincrypt.h/_CRL_INFO


// WARNING! conflicting data type names: /wincrypt.h/_CERT_CHAIN_ELEMENT - /DWARF/wincrypt.h/_CERT_CHAIN_ELEMENT


// WARNING! conflicting data type names: /wincrypt.h/PCERT_ENHKEY_USAGE - /DWARF/wincrypt.h/PCERT_ENHKEY_USAGE


// WARNING! conflicting data type names: /wincrypt.h/PFN_CRYPT_FREE - /DWARF/wincrypt.h/PFN_CRYPT_FREE


// WARNING! conflicting data type names: /wincrypt.h/_CRYPT_DECODE_PARA - /DWARF/wincrypt.h/_CRYPT_DECODE_PARA


// WARNING! conflicting data type names: /wincrypt.h/_CMSG_STREAM_INFO - /DWARF/wincrypt.h/_CMSG_STREAM_INFO


// WARNING! conflicting data type names: /wincrypt.h/CERT_USAGE_MATCH - /DWARF/wincrypt.h/CERT_USAGE_MATCH


// WARNING! conflicting data type names: /wincrypt.h/PCERT_SIMPLE_CHAIN - /DWARF/wincrypt.h/PCERT_SIMPLE_CHAIN


// WARNING! conflicting data type names: /wincrypt.h/PCMSG_STREAM_INFO - /DWARF/wincrypt.h/PCMSG_STREAM_INFO


// WARNING! conflicting data type names: /wincrypt.h/PCERT_REVOCATION_INFO - /DWARF/wincrypt.h/PCERT_REVOCATION_INFO


// WARNING! conflicting data type names: /wincrypt.h/PCRYPT_DECODE_PARA - /DWARF/wincrypt.h/PCRYPT_DECODE_PARA


// WARNING! conflicting data type names: /wincrypt.h/CERT_ENHKEY_USAGE - /DWARF/wincrypt.h/CERT_ENHKEY_USAGE


// WARNING! conflicting data type names: /wincrypt.h/PCERT_CHAIN_PARA - /DWARF/wincrypt.h/PCERT_CHAIN_PARA


// WARNING! conflicting data type names: /wincrypt.h/CRL_CONTEXT - /DWARF/wincrypt.h/CRL_CONTEXT


// WARNING! conflicting data type names: /wincrypt.h/PFN_CRYPT_ALLOC - /DWARF/wincrypt.h/PFN_CRYPT_ALLOC


// WARNING! conflicting data type names: /wincrypt.h/_CERT_TRUST_LIST_INFO - /DWARF/wincrypt.h/_CERT_TRUST_LIST_INFO


// WARNING! conflicting data type names: /wincrypt.h/_CERT_CHAIN_CONTEXT - /DWARF/wincrypt.h/_CERT_CHAIN_CONTEXT


// WARNING! conflicting data type names: /wincrypt.h/_CERT_TRUST_STATUS - /DWARF/wincrypt.h/_CERT_TRUST_STATUS


// WARNING! conflicting data type names: /wincrypt.h/_CRL_CONTEXT - /DWARF/wincrypt.h/_CRL_CONTEXT


// WARNING! conflicting data type names: /time.h/tm - /DWARF/time.h/tm


// WARNING! conflicting data type names: /basetsd.h/PDWORD_PTR - /DWARF/basetsd.h/PDWORD_PTR


// WARNING! conflicting data type names: /commctrl.h/HIMAGELIST - /DWARF/commctrl.h/HIMAGELIST


// WARNING! conflicting data type names: /commctrl.h/_IMAGELIST - /DWARF/_UNCATEGORIZED_/_IMAGELIST


// WARNING! conflicting data type names: /commctrl.h/SUBCLASSPROC - /DWARF/commctrl.h/SUBCLASSPROC


// WARNING! conflicting data type names: /WinDef.h/LPPOINT - /DWARF/windef.h/LPPOINT

typedef RECT *LPCRECT;


// WARNING! conflicting data type names: /WinDef.h/SIZE - /DWARF/windef.h/SIZE


// WARNING! conflicting data type names: /WinDef.h/tagSIZE - /DWARF/windef.h/tagSIZE


// WARNING! conflicting data type names: /WinDef.h/HINSTANCE - /DWARF/minwindef.h/HINSTANCE


// WARNING! conflicting data type names: /WinDef.h/HMODULE - /DWARF/minwindef.h/HMODULE


// WARNING! conflicting data type names: /WinDef.h/FARPROC - /DWARF/minwindef.h/FARPROC


// WARNING! conflicting data type names: /WinDef.h/H