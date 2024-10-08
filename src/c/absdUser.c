/*
 * IDENTIFICATION:
 * stub generated by bootstrap_cmds-129
 * OPTIONS: 
 */
#define	__MIG_check__Reply__absd_subsystem__ 1

#include "absd.h"

/* TODO: #include <mach/mach.h> */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
extern void mach_msg_destroy(mach_msg_header_t *);
#ifdef __cplusplus
}
#endif /* __cplusplus */

#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif

#ifndef	__MachMsgErrorWithTimeout
#define	__MachMsgErrorWithTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	case MACH_SEND_TIMED_OUT: \
	case MACH_RCV_TIMED_OUT: \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithTimeout */

#ifndef	__MachMsgErrorWithoutTimeout
#define	__MachMsgErrorWithoutTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithoutTimeout */

#ifndef	__DeclareSendRpc
#define	__DeclareSendRpc(_NUM_, _NAME_)
#endif	/* __DeclareSendRpc */

#ifndef	__BeforeSendRpc
#define	__BeforeSendRpc(_NUM_, _NAME_)
#endif	/* __BeforeSendRpc */

#ifndef	__AfterSendRpc
#define	__AfterSendRpc(_NUM_, _NAME_)
#endif	/* __AfterSendRpc */

#ifndef	__DeclareSendSimple
#define	__DeclareSendSimple(_NUM_, _NAME_)
#endif	/* __DeclareSendSimple */

#ifndef	__BeforeSendSimple
#define	__BeforeSendSimple(_NUM_, _NAME_)
#endif	/* __BeforeSendSimple */

#ifndef	__AfterSendSimple
#define	__AfterSendSimple(_NUM_, _NAME_)
#endif	/* __AfterSendSimple */

#define msgh_request_port	msgh_remote_port
#define msgh_reply_port		msgh_local_port



#if ( __MigTypeCheck )
#if __MIG_check__Reply__absd_subsystem__
#if !defined(__MIG_check__Reply__NACInit_t__defined)
#define __MIG_check__Reply__NACInit_t__defined

mig_internal kern_return_t __MIG_check__Reply__NACInit_t(__Reply__NACInit_t *Out0P)
{

	typedef __Reply__NACInit_t __Reply __attribute__((unused));
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 1300) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (Out0P->Head.msgh_request_port != MACH_PORT_NULL) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */
	if (msgh_simple) {
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->session_request.type != MACH_MSG_OOL_DESCRIPTOR) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if __MigTypeCheck
	if (Out0P->session_request.size != Out0P->session_requestCnt)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__NACInit_t__defined) */
#endif /* __MIG_check__Reply__absd_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine NACInit */
mig_external kern_return_t rawNACInit
(
	mach_port_t server,
	uint32_t magic,
	vm_offset_t cert,
	mach_msg_type_number_t certCnt,
	uint64_t *context,
	vm_offset_t *session_request,
	mach_msg_type_number_t *session_requestCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t cert;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t magic;
		mach_msg_type_number_t certCnt;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t session_request;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t context;
		mach_msg_type_number_t session_requestCnt;
		mach_msg_trailer_t trailer;
	} Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t session_request;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t context;
		mach_msg_type_number_t session_requestCnt;
	} __Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__NACInit_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__NACInit_t__defined */

	__DeclareSendRpc(1200, "NACInit")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t certTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->cert = certTemplate;
	InP->cert.address = (void *)(cert);
	InP->cert.size = certCnt;
#else	/* UseStaticTemplates */
	InP->cert.address = (void *)(cert);
	InP->cert.size = certCnt;
	InP->cert.deallocate =  FALSE;
	InP->cert.copy = MACH_MSG_VIRTUAL_COPY;
	InP->cert.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->magic = magic;

	InP->certCnt = certCnt;

	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_id = 1200;
	InP->Head.msgh_reserved = 0;
	
/* BEGIN VOUCHER CODE */

#ifdef USING_VOUCHERS
	if (voucher_mach_msg_set != NULL) {
		voucher_mach_msg_set(&InP->Head);
	}
#endif // USING_VOUCHERS
	
/* END VOUCHER CODE */

	__BeforeSendRpc(1200, "NACInit")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(1200, "NACInit")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
	}
	if (msg_result != MACH_MSG_SUCCESS) {
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__NACInit_t__defined)
	check_result = __MIG_check__Reply__NACInit_t((__Reply__NACInit_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS) {
		mach_msg_destroy(&Out0P->Head);
		{ return check_result; }
	}
#endif	/* defined(__MIG_check__Reply__NACInit_t__defined) */

	*context = Out0P->context;

	*session_request = (vm_offset_t)(Out0P->session_request.address);
	*session_requestCnt = Out0P->session_requestCnt;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck )
#if __MIG_check__Reply__absd_subsystem__
#if !defined(__MIG_check__Reply__NACKeyEstablishment_t__defined)
#define __MIG_check__Reply__NACKeyEstablishment_t__defined

mig_internal kern_return_t __MIG_check__Reply__NACKeyEstablishment_t(__Reply__NACKeyEstablishment_t *Out0P)
{

	typedef __Reply__NACKeyEstablishment_t __Reply __attribute__((unused));
	if (Out0P->Head.msgh_id != 1301) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (Out0P->Head.msgh_request_port != MACH_PORT_NULL) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */
	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__NACKeyEstablishment_t__defined) */
#endif /* __MIG_check__Reply__absd_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine NACKeyEstablishment */
mig_external kern_return_t rawNACKeyEstablishment
(
	mach_port_t server,
	uint32_t magic,
	uint64_t context,
	vm_offset_t session_response,
	mach_msg_type_number_t session_responseCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t session_response;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t magic;
		uint64_t context;
		mach_msg_type_number_t session_responseCnt;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__NACKeyEstablishment_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__NACKeyEstablishment_t__defined */

	__DeclareSendRpc(1201, "NACKeyEstablishment")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t session_responseTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->session_response = session_responseTemplate;
	InP->session_response.address = (void *)(session_response);
	InP->session_response.size = session_responseCnt;
#else	/* UseStaticTemplates */
	InP->session_response.address = (void *)(session_response);
	InP->session_response.size = session_responseCnt;
	InP->session_response.deallocate =  FALSE;
	InP->session_response.copy = MACH_MSG_VIRTUAL_COPY;
	InP->session_response.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->magic = magic;

	InP->context = context;

	InP->session_responseCnt = session_responseCnt;

	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_id = 1201;
	InP->Head.msgh_reserved = 0;
	
/* BEGIN VOUCHER CODE */

#ifdef USING_VOUCHERS
	if (voucher_mach_msg_set != NULL) {
		voucher_mach_msg_set(&InP->Head);
	}
#endif // USING_VOUCHERS
	
/* END VOUCHER CODE */

	__BeforeSendRpc(1201, "NACKeyEstablishment")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(1201, "NACKeyEstablishment")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
	}
	if (msg_result != MACH_MSG_SUCCESS) {
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__NACKeyEstablishment_t__defined)
	check_result = __MIG_check__Reply__NACKeyEstablishment_t((__Reply__NACKeyEstablishment_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS) {
		mach_msg_destroy(&Out0P->Head);
		{ return check_result; }
	}
#endif	/* defined(__MIG_check__Reply__NACKeyEstablishment_t__defined) */

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck )
#if __MIG_check__Reply__absd_subsystem__
#if !defined(__MIG_check__Reply__NACSign_t__defined)
#define __MIG_check__Reply__NACSign_t__defined

mig_internal kern_return_t __MIG_check__Reply__NACSign_t(__Reply__NACSign_t *Out0P)
{

	typedef __Reply__NACSign_t __Reply __attribute__((unused));
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 1302) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (Out0P->Head.msgh_request_port != MACH_PORT_NULL) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */
	if (msgh_simple) {
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->signature.type != MACH_MSG_OOL_DESCRIPTOR) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

#if __MigTypeCheck
	if (Out0P->signature.size != Out0P->signatureCnt)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__NACSign_t__defined) */
#endif /* __MIG_check__Reply__absd_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine NACSign */
mig_external kern_return_t rawNACSign
(
	mach_port_t server,
	uint32_t magic,
	uint64_t context,
	vm_offset_t data,
	mach_msg_type_number_t dataCnt,
	vm_offset_t *signature,
	mach_msg_type_number_t *signatureCnt
)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t magic;
		uint64_t context;
		mach_msg_type_number_t dataCnt;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t signature;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t signatureCnt;
		mach_msg_trailer_t trailer;
	} Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t signature;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t signatureCnt;
	} __Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__NACSign_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__NACSign_t__defined */

	__DeclareSendRpc(1202, "NACSign")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->data = dataTemplate;
	InP->data.address = (void *)(data);
	InP->data.size = dataCnt;
#else	/* UseStaticTemplates */
	InP->data.address = (void *)(data);
	InP->data.size = dataCnt;
	InP->data.deallocate =  FALSE;
	InP->data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->magic = magic;

	InP->context = context;

	InP->dataCnt = dataCnt;

	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_id = 1202;
	InP->Head.msgh_reserved = 0;
	
/* BEGIN VOUCHER CODE */

#ifdef USING_VOUCHERS
	if (voucher_mach_msg_set != NULL) {
		voucher_mach_msg_set(&InP->Head);
	}
#endif // USING_VOUCHERS
	
/* END VOUCHER CODE */

	__BeforeSendRpc(1202, "NACSign")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(1202, "NACSign")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
	}
	if (msg_result != MACH_MSG_SUCCESS) {
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__NACSign_t__defined)
	check_result = __MIG_check__Reply__NACSign_t((__Reply__NACSign_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS) {
		mach_msg_destroy(&Out0P->Head);
		{ return check_result; }
	}
#endif	/* defined(__MIG_check__Reply__NACSign_t__defined) */

	*signature = (vm_offset_t)(Out0P->signature.address);
	*signatureCnt = Out0P->signatureCnt;

	return KERN_SUCCESS;
}
