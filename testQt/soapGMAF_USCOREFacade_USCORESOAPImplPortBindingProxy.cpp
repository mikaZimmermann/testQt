/* soapGMAF_USCOREFacade_USCORESOAPImplPortBindingProxy.cpp
   Generated by gSOAP 2.8.124 for gmafHeader

gSOAP XML Web services tools
Copyright (C) 2000-2022, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapGMAF_USCOREFacade_USCORESOAPImplPortBindingProxy.h"

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(const GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(_soap->imode, _soap->omode);
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(struct soap *_soap, const char *soap_endpoint_url)
{	this->soap = _soap;
	this->soap_own = false;
	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(_soap->imode, _soap->omode);
	soap_endpoint = soap_endpoint_url;
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(const char *soap_endpoint_url)
{	this->soap = soap_new();
	this->soap_own = true;
	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = soap_endpoint_url;
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(iomode, iomode);
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(const char *soap_endpoint_url, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(iomode, iomode);
	soap_endpoint = soap_endpoint_url;
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(imode, omode);
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::~GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy()
{	if (this->soap_own)
	{	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::destroy();
		soap_free(this->soap);
	}
}

void GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        { "SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL },
        { "SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL },
        { "xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL },
        { "xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL },
        { "ns1", "http://api.gmaf.swa.de/", NULL, NULL },
        { NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy *GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::copy()
{	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy *dup = SOAP_NEW_UNMANAGED(GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy);
	if (dup)
	{	soap_done(dup->soap);
		soap_copy_context(dup->soap, this->soap);
	}
	return dup;
}

GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy& GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::operator=(const GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
		this->soap_endpoint = rhs.soap_endpoint;
	}
	return *this;
}

void GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

::SOAP_ENV__Header *GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_header()
{	return this->soap->header;
}

::SOAP_ENV__Fault *GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_fault_subcode()
{	return ::soap_fault_subcode(this->soap);
}

const char *GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_fault_string()
{	return ::soap_fault_string(this->soap);
}

const char *GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_fault_detail()
{	return ::soap_fault_detail(this->soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_close_socket()
{	return ::soap_closesock(this->soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_force_close_socket()
{	return ::soap_force_closesock(this->soap);
}

void GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_getAuthToken(const char *soap_endpoint_url, const char *soap_action, ns1__getAuthToken *ns1__getAuthToken_)
{
	struct __ns1__getAuthToken soap_tmp___ns1__getAuthToken;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/getAuthTokenRequest";
	soap_tmp___ns1__getAuthToken.ns1__getAuthToken_ = ns1__getAuthToken_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__getAuthToken(soap, &soap_tmp___ns1__getAuthToken);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getAuthToken(soap, &soap_tmp___ns1__getAuthToken, "-ns1:getAuthToken", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getAuthToken(soap, &soap_tmp___ns1__getAuthToken, "-ns1:getAuthToken", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_getAuthToken(ns1__getAuthTokenResponse &ns1__getAuthTokenResponse_)
{
	ns1__getAuthTokenResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getAuthTokenResponse_.soap_get(soap, "ns1:getAuthTokenResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_getCollection(const char *soap_endpoint_url, const char *soap_action, ns1__getCollection *ns1__getCollection_)
{
	struct __ns1__getCollection soap_tmp___ns1__getCollection;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/getCollectionRequest";
	soap_tmp___ns1__getCollection.ns1__getCollection_ = ns1__getCollection_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__getCollection(soap, &soap_tmp___ns1__getCollection);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getCollection(soap, &soap_tmp___ns1__getCollection, "-ns1:getCollection", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getCollection(soap, &soap_tmp___ns1__getCollection, "-ns1:getCollection", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_getCollection(ns1__getCollectionResponse &ns1__getCollectionResponse_)
{
	ns1__getCollectionResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getCollectionResponse_.soap_get(soap, "ns1:getCollectionResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_processAssetFromFile(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromFile *ns1__processAssetFromFile_)
{
	struct __ns1__processAssetFromFile soap_tmp___ns1__processAssetFromFile;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/processAssetFromFileRequest";
	soap_tmp___ns1__processAssetFromFile.ns1__processAssetFromFile_ = ns1__processAssetFromFile_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__processAssetFromFile(soap, &soap_tmp___ns1__processAssetFromFile);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__processAssetFromFile(soap, &soap_tmp___ns1__processAssetFromFile, "-ns1:processAssetFromFile", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__processAssetFromFile(soap, &soap_tmp___ns1__processAssetFromFile, "-ns1:processAssetFromFile", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_processAssetFromFile(ns1__processAssetFromFileResponse &ns1__processAssetFromFileResponse_)
{
	ns1__processAssetFromFileResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__processAssetFromFileResponse_.soap_get(soap, "ns1:processAssetFromFileResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_processAssetFromBytes(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromBytes *ns1__processAssetFromBytes_)
{
	struct __ns1__processAssetFromBytes soap_tmp___ns1__processAssetFromBytes;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/processAssetFromBytesRequest";
	soap_tmp___ns1__processAssetFromBytes.ns1__processAssetFromBytes_ = ns1__processAssetFromBytes_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__processAssetFromBytes(soap, &soap_tmp___ns1__processAssetFromBytes);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__processAssetFromBytes(soap, &soap_tmp___ns1__processAssetFromBytes, "-ns1:processAssetFromBytes", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__processAssetFromBytes(soap, &soap_tmp___ns1__processAssetFromBytes, "-ns1:processAssetFromBytes", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_processAssetFromBytes(ns1__processAssetFromBytesResponse &ns1__processAssetFromBytesResponse_)
{
	ns1__processAssetFromBytesResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__processAssetFromBytesResponse_.soap_get(soap, "ns1:processAssetFromBytesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_processAssetFromURL(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromURL *ns1__processAssetFromURL_)
{
	struct __ns1__processAssetFromURL soap_tmp___ns1__processAssetFromURL;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/processAssetFromURLRequest";
	soap_tmp___ns1__processAssetFromURL.ns1__processAssetFromURL_ = ns1__processAssetFromURL_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__processAssetFromURL(soap, &soap_tmp___ns1__processAssetFromURL);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__processAssetFromURL(soap, &soap_tmp___ns1__processAssetFromURL, "-ns1:processAssetFromURL", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__processAssetFromURL(soap, &soap_tmp___ns1__processAssetFromURL, "-ns1:processAssetFromURL", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_processAssetFromURL(ns1__processAssetFromURLResponse &ns1__processAssetFromURLResponse_)
{
	ns1__processAssetFromURLResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__processAssetFromURLResponse_.soap_get(soap, "ns1:processAssetFromURLResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_getOrGenerateGraphCode(const char *soap_endpoint_url, const char *soap_action, ns1__getOrGenerateGraphCode *ns1__getOrGenerateGraphCode_)
{
	struct __ns1__getOrGenerateGraphCode soap_tmp___ns1__getOrGenerateGraphCode;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/getOrGenerateGraphCodeRequest";
	soap_tmp___ns1__getOrGenerateGraphCode.ns1__getOrGenerateGraphCode_ = ns1__getOrGenerateGraphCode_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__getOrGenerateGraphCode(soap, &soap_tmp___ns1__getOrGenerateGraphCode);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getOrGenerateGraphCode(soap, &soap_tmp___ns1__getOrGenerateGraphCode, "-ns1:getOrGenerateGraphCode", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getOrGenerateGraphCode(soap, &soap_tmp___ns1__getOrGenerateGraphCode, "-ns1:getOrGenerateGraphCode", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_getOrGenerateGraphCode(ns1__getOrGenerateGraphCodeResponse &ns1__getOrGenerateGraphCodeResponse_)
{
	ns1__getOrGenerateGraphCodeResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getOrGenerateGraphCodeResponse_.soap_get(soap, "ns1:getOrGenerateGraphCodeResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_setProcessingPlugins(const char *soap_endpoint_url, const char *soap_action, ns1__setProcessingPlugins *ns1__setProcessingPlugins_)
{
	struct __ns1__setProcessingPlugins soap_tmp___ns1__setProcessingPlugins;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/setProcessingPluginsRequest";
	soap_tmp___ns1__setProcessingPlugins.ns1__setProcessingPlugins_ = ns1__setProcessingPlugins_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__setProcessingPlugins(soap, &soap_tmp___ns1__setProcessingPlugins);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__setProcessingPlugins(soap, &soap_tmp___ns1__setProcessingPlugins, "-ns1:setProcessingPlugins", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__setProcessingPlugins(soap, &soap_tmp___ns1__setProcessingPlugins, "-ns1:setProcessingPlugins", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_setProcessingPlugins(ns1__setProcessingPluginsResponse &ns1__setProcessingPluginsResponse_)
{
	ns1__setProcessingPluginsResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__setProcessingPluginsResponse_.soap_get(soap, "ns1:setProcessingPluginsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_getRecommendedAssets(const char *soap_endpoint_url, const char *soap_action, ns1__getRecommendedAssets *ns1__getRecommendedAssets_)
{
	struct __ns1__getRecommendedAssets soap_tmp___ns1__getRecommendedAssets;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/getRecommendedAssetsRequest";
	soap_tmp___ns1__getRecommendedAssets.ns1__getRecommendedAssets_ = ns1__getRecommendedAssets_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__getRecommendedAssets(soap, &soap_tmp___ns1__getRecommendedAssets);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getRecommendedAssets(soap, &soap_tmp___ns1__getRecommendedAssets, "-ns1:getRecommendedAssets", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getRecommendedAssets(soap, &soap_tmp___ns1__getRecommendedAssets, "-ns1:getRecommendedAssets", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_getRecommendedAssets(ns1__getRecommendedAssetsResponse &ns1__getRecommendedAssetsResponse_)
{
	ns1__getRecommendedAssetsResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getRecommendedAssetsResponse_.soap_get(soap, "ns1:getRecommendedAssetsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::send_getSimilarAssets(const char *soap_endpoint_url, const char *soap_action, ns1__getSimilarAssets *ns1__getSimilarAssets_)
{
	struct __ns1__getSimilarAssets soap_tmp___ns1__getSimilarAssets;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8481/gmaf/gmafApi";
	if (soap_action == NULL)
		soap_action = "http://api.gmaf.swa.de/GMAF_Facade/getSimilarAssetsRequest";
	soap_tmp___ns1__getSimilarAssets.ns1__getSimilarAssets_ = ns1__getSimilarAssets_;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__getSimilarAssets(soap, &soap_tmp___ns1__getSimilarAssets);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSimilarAssets(soap, &soap_tmp___ns1__getSimilarAssets, "-ns1:getSimilarAssets", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSimilarAssets(soap, &soap_tmp___ns1__getSimilarAssets, "-ns1:getSimilarAssets", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy::recv_getSimilarAssets(ns1__getSimilarAssetsResponse &ns1__getSimilarAssetsResponse_)
{
	ns1__getSimilarAssetsResponse_.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSimilarAssetsResponse_.soap_get(soap, "ns1:getSimilarAssetsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
