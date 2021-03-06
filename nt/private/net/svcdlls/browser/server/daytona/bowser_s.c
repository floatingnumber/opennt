#include "precomp.h"
#pragma hdrstop
/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Feb 06 05:28:40 2015
 */
/* Compiler settings for .\bowser.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "bowser.h"

#define TYPE_FORMAT_STRING_SIZE   571                               
#define PROC_FORMAT_STRING_SIZE   157                               

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;

extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;

/* Standard interface: browser, ver. 0.0,
   GUID={0x6BFFD098,0xA112,0x3610,{0x98,0x33,0x01,0x28,0x92,0x02,0x01,0x62}} */


extern RPC_DISPATCH_TABLE browser_DispatchTable;

static const RPC_SERVER_INTERFACE browser___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x6BFFD098,0xA112,0x3610,{0x98,0x33,0x01,0x28,0x92,0x02,0x01,0x62}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &browser_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE browser_ServerIfHandle = (RPC_IF_HANDLE)& browser___RpcServerInterface;

extern const MIDL_STUB_DESC browser_StubDesc;

void __RPC_STUB
browser_I_BrowserrServerEnum(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *ClientName;
    wchar_t __RPC_FAR *Domain;
    LPSERVER_ENUM_STRUCT InfoStruct;
    DWORD PreferedMaximumLength;
    LPDWORD ResumeHandle;
    BROWSER_IDENTIFY_HANDLE ServerName;
    DWORD ServerType;
    LPDWORD TotalEntries;
    wchar_t __RPC_FAR *TransportName;
    DWORD _M44;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    ServerName = 0;
    TransportName = 0;
    ClientName = 0;
    InfoStruct = 0;
    TotalEntries = 0;
    Domain = 0;
    ResumeHandle = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&TransportName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ClientName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrComplexStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                        (unsigned char __RPC_FAR * __RPC_FAR *)&InfoStruct,
                                        (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208],
                                        (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            PreferedMaximumLength = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            ServerType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&Domain,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ResumeHandle,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[226],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        TotalEntries = &_M44;
        
        _RetVal = I_BrowserrServerEnum(
                               ServerName,
                               TransportName,
                               ClientName,
                               InfoStruct,
                               PreferedMaximumLength,
                               TotalEntries,
                               ServerType,
                               Domain,
                               ResumeHandle);
        
        _StubMsg.BufferLength = 0U + 11U + 14U + 7U;
        NdrComplexStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                    (unsigned char __RPC_FAR *)InfoStruct,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrComplexStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                  (unsigned char __RPC_FAR *)InfoStruct,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *TotalEntries;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ResumeHandle,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[226] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)InfoStruct,
                        &__MIDL_TypeFormatString.Format[4] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrDebugCall(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD DebugFunction;
    DWORD OptionalValue;
    BROWSER_IDENTIFY_HANDLE ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    ServerName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[34] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            DebugFunction = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            OptionalValue = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = I_BrowserrDebugCall(
                              ServerName,
                              DebugFunction,
                              OptionalValue);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrQueryOtherDomains(
    PRPC_MESSAGE _pRpcMessage )
{
    LPSERVER_ENUM_STRUCT InfoStruct;
    BROWSER_IDENTIFY_HANDLE ServerName;
    LPDWORD TotalEntries;
    DWORD _M45;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    ServerName = 0;
    InfoStruct = 0;
    TotalEntries = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[44] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrComplexStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                        (unsigned char __RPC_FAR * __RPC_FAR *)&InfoStruct,
                                        (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208],
                                        (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        TotalEntries = &_M45;
        
        _RetVal = I_BrowserrQueryOtherDomains(
                                      ServerName,
                                      InfoStruct,
                                      TotalEntries);
        
        _StubMsg.BufferLength = 0U + 11U + 7U;
        NdrComplexStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                    (unsigned char __RPC_FAR *)InfoStruct,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrComplexStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                  (unsigned char __RPC_FAR *)InfoStruct,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *TotalEntries;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)InfoStruct,
                        &__MIDL_TypeFormatString.Format[4] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrResetNetlogonState(
    PRPC_MESSAGE _pRpcMessage )
{
    BROWSER_IDENTIFY_HANDLE ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    ServerName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[58] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = I_BrowserrResetNetlogonState(ServerName);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrDebugTrace(
    PRPC_MESSAGE _pRpcMessage )
{
    BROWSER_IDENTIFY_HANDLE ServerName;
    LPSTR TraceString;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    ServerName = 0;
    TraceString = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[64] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&TraceString,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[232],
                                           (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = I_BrowserrDebugTrace(ServerName,TraceString);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrQueryStatistics(
    PRPC_MESSAGE _pRpcMessage )
{
    LPBROWSER_STATISTICS _M46;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    BROWSER_IDENTIFY_HANDLE servername;
    LPBROWSER_STATISTICS __RPC_FAR *statistics;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    servername = 0;
    statistics = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[74] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&servername,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        statistics = &_M46;
        _M46 = 0;
        
        _RetVal = I_BrowserrQueryStatistics(servername,statistics);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)statistics,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[234] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)statistics,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[234] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)statistics,
                        &__MIDL_TypeFormatString.Format[234] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrResetStatistics(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    BROWSER_IDENTIFY_HANDLE servername;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    servername = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[58] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&servername,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = I_BrowserrResetStatistics(servername);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_NetrBrowserStatisticsClear(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    BROWSER_IDENTIFY_HANDLE servername;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    servername = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[58] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&servername,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = NetrBrowserStatisticsClear(servername);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_NetrBrowserStatisticsGet(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD Level;
    LPBROWSER_STATISTICS_STRUCT StatisticsStruct;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    BROWSER_IDENTIFY_HANDLE servername;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    servername = 0;
    StatisticsStruct = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[84] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&servername,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            Level = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrComplexStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                        (unsigned char __RPC_FAR * __RPC_FAR *)&StatisticsStruct,
                                        (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[456],
                                        (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = NetrBrowserStatisticsGet(
                                   servername,
                                   Level,
                                   StatisticsStruct);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrComplexStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                    (unsigned char __RPC_FAR *)StatisticsStruct,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[456] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrComplexStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                  (unsigned char __RPC_FAR *)StatisticsStruct,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[456] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)StatisticsStruct,
                        &__MIDL_TypeFormatString.Format[284] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrSetNetlogonState(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *DomainName;
    wchar_t __RPC_FAR *EmulatedComputerName;
    DWORD Role;
    BROWSER_IDENTIFY_HANDLE ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    ServerName = 0;
    DomainName = 0;
    EmulatedComputerName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[96] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&DomainName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[472],
                                           (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&EmulatedComputerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            Role = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = I_BrowserrSetNetlogonState(
                                     ServerName,
                                     DomainName,
                                     EmulatedComputerName,
                                     Role);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrQueryEmulatedDomains(
    PRPC_MESSAGE _pRpcMessage )
{
    PBROWSER_EMULATED_DOMAIN_CONTAINER EmulatedDomains;
    BROWSER_IDENTIFY_HANDLE ServerName;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    ServerName = 0;
    EmulatedDomains = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&EmulatedDomains,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[550],
                                       (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = I_BrowserrQueryEmulatedDomains(ServerName,EmulatedDomains);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)EmulatedDomains,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[550] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)EmulatedDomains,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[550] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EmulatedDomains,
                        &__MIDL_TypeFormatString.Format[474] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
browser_I_BrowserrServerEnumEx(
    PRPC_MESSAGE _pRpcMessage )
{
    wchar_t __RPC_FAR *ClientName;
    wchar_t __RPC_FAR *Domain;
    wchar_t __RPC_FAR *FirstNameToReturn;
    LPSERVER_ENUM_STRUCT InfoStruct;
    DWORD PreferedMaximumLength;
    BROWSER_IDENTIFY_HANDLE ServerName;
    DWORD ServerType;
    LPDWORD TotalEntries;
    wchar_t __RPC_FAR *TransportName;
    DWORD _M47;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &browser_StubDesc);
    
    ServerName = 0;
    TransportName = 0;
    ClientName = 0;
    InfoStruct = 0;
    TotalEntries = 0;
    Domain = 0;
    FirstNameToReturn = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[122] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&TransportName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ClientName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrComplexStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                        (unsigned char __RPC_FAR * __RPC_FAR *)&InfoStruct,
                                        (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208],
                                        (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            PreferedMaximumLength = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            ServerType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&Domain,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&FirstNameToReturn,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        TotalEntries = &_M47;
        
        _RetVal = I_BrowserrServerEnumEx(
                                 ServerName,
                                 TransportName,
                                 ClientName,
                                 InfoStruct,
                                 PreferedMaximumLength,
                                 TotalEntries,
                                 ServerType,
                                 Domain,
                                 FirstNameToReturn);
        
        _StubMsg.BufferLength = 0U + 11U + 7U;
        NdrComplexStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                    (unsigned char __RPC_FAR *)InfoStruct,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrComplexStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                  (unsigned char __RPC_FAR *)InfoStruct,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[208] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *TotalEntries;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)InfoStruct,
                        &__MIDL_TypeFormatString.Format[4] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC browser_StubDesc = 
    {
    (void __RPC_FAR *)& browser___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x10001, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    0,
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static RPC_DISPATCH_FUNCTION browser_table[] =
    {
    browser_I_BrowserrServerEnum,
    browser_I_BrowserrDebugCall,
    browser_I_BrowserrQueryOtherDomains,
    browser_I_BrowserrResetNetlogonState,
    browser_I_BrowserrDebugTrace,
    browser_I_BrowserrQueryStatistics,
    browser_I_BrowserrResetStatistics,
    browser_NetrBrowserStatisticsClear,
    browser_NetrBrowserStatisticsGet,
    browser_I_BrowserrSetNetlogonState,
    browser_I_BrowserrQueryEmulatedDomains,
    browser_I_BrowserrServerEnumEx,
    0
    };
RPC_DISPATCH_TABLE browser_DispatchTable = 
    {
    12,
    browser_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  2 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  4 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  6 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  8 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 10 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 12 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 16 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0xde ),	/* Type Offset=222 */
/* 22 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 26 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 28 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 30 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */
/* 32 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 38 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 44 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 46 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 48 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 52 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0xde ),	/* Type Offset=222 */
/* 56 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 58 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 60 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 62 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 66 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 68 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 70 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */
/* 72 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 78 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 82 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 86 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 88 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 92 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */
/* 94 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 96 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 98 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 100 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 102 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */
/* 104 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 108 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 114 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 116 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 118 */	NdrFcShort( 0x1da ),	/* Type Offset=474 */
/* 120 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 122 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 124 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 126 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 128 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 130 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 134 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 136 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 138 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 140 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 142 */	NdrFcShort( 0xde ),	/* Type Offset=222 */
/* 144 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 146 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 148 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 150 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 154 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  2 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0x0,	/* FC_RP */
/*  6 */	NdrFcShort( 0xca ),	/* Offset= 202 (208) */
/*  8 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 10 */	0x8,		/* 8 */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x2 ),	/* Offset= 2 (16) */
/* 16 */	NdrFcShort( 0x4 ),	/* 4 */
/* 18 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 20 */	NdrFcLong( 0x64 ),	/* 100 */
/* 24 */	NdrFcShort( 0xa ),	/* Offset= 10 (34) */
/* 26 */	NdrFcLong( 0x65 ),	/* 101 */
/* 30 */	NdrFcShort( 0x50 ),	/* Offset= 80 (110) */
/* 32 */	NdrFcShort( 0x0 ),	/* Offset= 0 (32) */
/* 34 */	
			0x12, 0x0,	/* FC_UP */
/* 36 */	NdrFcShort( 0x36 ),	/* Offset= 54 (90) */
/* 38 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 46 */	NdrFcShort( 0x4 ),	/* 4 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 52 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 56 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 58 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x18,		/* 24 */
			0x0,		/*  */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 68 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 70 */	NdrFcShort( 0x8 ),	/* 8 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x1 ),	/* 1 */
/* 76 */	NdrFcShort( 0x4 ),	/* 4 */
/* 78 */	NdrFcShort( 0x4 ),	/* 4 */
/* 80 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 82 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 86 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (38) */
			0x5b,		/* FC_END */
/* 90 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 92 */	NdrFcShort( 0x8 ),	/* 8 */
/* 94 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 96 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 98 */	NdrFcShort( 0x4 ),	/* 4 */
/* 100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 102 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 104 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (58) */
/* 106 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 108 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 110 */	
			0x12, 0x0,	/* FC_UP */
/* 112 */	NdrFcShort( 0x4c ),	/* Offset= 76 (188) */
/* 114 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x18 ),	/* 24 */
/* 118 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 122 */	NdrFcShort( 0x4 ),	/* 4 */
/* 124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 126 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 128 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 130 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 132 */	NdrFcShort( 0x14 ),	/* 20 */
/* 134 */	NdrFcShort( 0x14 ),	/* 20 */
/* 136 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 138 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 144 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 146 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 148 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 150 */	NdrFcShort( 0x18 ),	/* 24 */
/* 152 */	0x18,		/* 24 */
			0x0,		/*  */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 160 */	NdrFcShort( 0x18 ),	/* 24 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x2 ),	/* 2 */
/* 166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 170 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 172 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 174 */	NdrFcShort( 0x14 ),	/* 20 */
/* 176 */	NdrFcShort( 0x14 ),	/* 20 */
/* 178 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 184 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffb9 ),	/* Offset= -71 (114) */
			0x5b,		/* FC_END */
/* 188 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 194 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 196 */	NdrFcShort( 0x4 ),	/* 4 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 202 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (148) */
/* 204 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 206 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 208 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* Offset= 0 (214) */
/* 216 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 218 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff2d ),	/* Offset= -211 (8) */
			0x5b,		/* FC_END */
/* 222 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 224 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 226 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 228 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 230 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 232 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 234 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (238) */
/* 238 */	
			0x12, 0x0,	/* FC_UP */
/* 240 */	NdrFcShort( 0x8 ),	/* Offset= 8 (248) */
/* 242 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 246 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 248 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 250 */	NdrFcShort( 0x60 ),	/* 96 */
/* 252 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (242) */
/* 256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 258 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (242) */
/* 260 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 262 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (242) */
/* 264 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 266 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 268 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 270 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 272 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 274 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 276 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 278 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 280 */	0x4,		/* 4 */
			NdrFcShort( 0xffffffd9 ),	/* Offset= -39 (242) */
			0x5b,		/* FC_END */
/* 284 */	
			0x11, 0x0,	/* FC_RP */
/* 286 */	NdrFcShort( 0xaa ),	/* Offset= 170 (456) */
/* 288 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 290 */	0x8,		/* 8 */
			0x0,		/*  */
/* 292 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (296) */
/* 296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 298 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 300 */	NdrFcLong( 0x64 ),	/* 100 */
/* 304 */	NdrFcShort( 0xa ),	/* Offset= 10 (314) */
/* 306 */	NdrFcLong( 0x65 ),	/* 101 */
/* 310 */	NdrFcShort( 0x42 ),	/* Offset= 66 (376) */
/* 312 */	NdrFcShort( 0x0 ),	/* Offset= 0 (312) */
/* 314 */	
			0x12, 0x0,	/* FC_UP */
/* 316 */	NdrFcShort( 0x28 ),	/* Offset= 40 (356) */
/* 318 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 320 */	NdrFcShort( 0x30 ),	/* 48 */
/* 322 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 324 */	NdrFcShort( 0xffffffae ),	/* Offset= -82 (242) */
/* 326 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0xffffffaa ),	/* Offset= -86 (242) */
/* 330 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 332 */	NdrFcShort( 0xffffffa6 ),	/* Offset= -90 (242) */
/* 334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 336 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 338 */	0x4,		/* 4 */
			NdrFcShort( 0xffffff9f ),	/* Offset= -97 (242) */
			0x5b,		/* FC_END */
/* 342 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 344 */	NdrFcShort( 0x30 ),	/* 48 */
/* 346 */	0x18,		/* 24 */
			0x0,		/*  */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 352 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (318) */
/* 354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 356 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 360 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 362 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 364 */	NdrFcShort( 0x4 ),	/* 4 */
/* 366 */	NdrFcShort( 0x4 ),	/* 4 */
/* 368 */	0x12, 0x0,	/* FC_UP */
/* 370 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (342) */
/* 372 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 374 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 376 */	
			0x12, 0x0,	/* FC_UP */
/* 378 */	NdrFcShort( 0x3a ),	/* Offset= 58 (436) */
/* 380 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 382 */	NdrFcShort( 0x58 ),	/* 88 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* Offset= 0 (386) */
/* 388 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 390 */	NdrFcShort( 0xffffff6c ),	/* Offset= -148 (242) */
/* 392 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 394 */	NdrFcShort( 0xffffff68 ),	/* Offset= -152 (242) */
/* 396 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 398 */	NdrFcShort( 0xffffff64 ),	/* Offset= -156 (242) */
/* 400 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 402 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 404 */	0x4,		/* 4 */
			NdrFcShort( 0xffffff5d ),	/* Offset= -163 (242) */
			0x8,		/* FC_LONG */
/* 408 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 414 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 416 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 418 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	0x18,		/* 24 */
			0x0,		/*  */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 430 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 432 */	NdrFcShort( 0xffffffcc ),	/* Offset= -52 (380) */
/* 434 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 436 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 440 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 442 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 444 */	NdrFcShort( 0x4 ),	/* 4 */
/* 446 */	NdrFcShort( 0x4 ),	/* 4 */
/* 448 */	0x12, 0x0,	/* FC_UP */
/* 450 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (418) */
/* 452 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 454 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 456 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* Offset= 0 (462) */
/* 464 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 466 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff4d ),	/* Offset= -179 (288) */
			0x5b,		/* FC_END */
/* 470 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 472 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 474 */	
			0x11, 0x0,	/* FC_RP */
/* 476 */	NdrFcShort( 0x4a ),	/* Offset= 74 (550) */
/* 478 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 480 */	NdrFcShort( 0xc ),	/* 12 */
/* 482 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 484 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 492 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 494 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 496 */	NdrFcShort( 0x4 ),	/* 4 */
/* 498 */	NdrFcShort( 0x4 ),	/* 4 */
/* 500 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 502 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 504 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 506 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 508 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 510 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 512 */	NdrFcShort( 0xc ),	/* 12 */
/* 514 */	0x18,		/* 24 */
			0x0,		/*  */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 520 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 522 */	NdrFcShort( 0xc ),	/* 12 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x2 ),	/* 2 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 534 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 536 */	NdrFcShort( 0x4 ),	/* 4 */
/* 538 */	NdrFcShort( 0x4 ),	/* 4 */
/* 540 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 542 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 544 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 546 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffbb ),	/* Offset= -69 (478) */
			0x5b,		/* FC_END */
/* 550 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 556 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 558 */	NdrFcShort( 0x4 ),	/* 4 */
/* 560 */	NdrFcShort( 0x4 ),	/* 4 */
/* 562 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 564 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (510) */
/* 566 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 568 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };
