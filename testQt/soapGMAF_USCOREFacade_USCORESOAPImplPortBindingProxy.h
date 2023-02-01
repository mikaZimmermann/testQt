/* soapGMAF_USCOREFacade_USCORESOAPImplPortBindingProxy.h
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

#ifndef soapGMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_H
#define soapGMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this proxy and should be deleted by the destructor
        bool soap_own;
        /// Endpoint URL of service 'GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in gmafHeader, if any
        /// Construct a proxy with new managing context
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy();
        /// Copy constructor
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(const GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(struct soap*);
        /// Construct proxy given a shared managing context and endpoint URL
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(struct soap*, const char *soap_endpoint_url);
        /// Constructor taking an endpoint URL
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(const char *soap_endpoint_url);
        /// Constructor taking input and output mode flags for the new managing context
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(const char *soap_endpoint_url, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the constructor
        virtual ~GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy();
        /// Initializer used by constructors
        virtual void GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy *copy();
        /// Copy assignment
        GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy& operator=(const GMAF_USCOREFacade_USCORESOAPImplPortBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault subcode QName string (NULL when absent)
        virtual const char *soap_fault_subcode();
        /// Get SOAP Fault string/reason (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail XML string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        //
        /// Web service synchronous operation 'getAuthToken' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int getAuthToken(ns1__getAuthToken *ns1__getAuthToken_, ns1__getAuthTokenResponse &ns1__getAuthTokenResponse_) { return this->getAuthToken(NULL, NULL, ns1__getAuthToken_, ns1__getAuthTokenResponse_); }
        /// Web service synchronous operation 'getAuthToken' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int getAuthToken(const char *soap_endpoint_url, const char *soap_action, ns1__getAuthToken *ns1__getAuthToken_, ns1__getAuthTokenResponse &ns1__getAuthTokenResponse_) { return this->send_getAuthToken(soap_endpoint_url, soap_action, ns1__getAuthToken_) || this->recv_getAuthToken(ns1__getAuthTokenResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_getAuthToken' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_getAuthToken(const char *soap_endpoint_url, const char *soap_action, ns1__getAuthToken *ns1__getAuthToken_);
        /// Web service asynchronous operation 'recv_getAuthToken' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_getAuthToken(ns1__getAuthTokenResponse &ns1__getAuthTokenResponse_);
        //
        /// Web service synchronous operation 'getCollection' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int getCollection(ns1__getCollection *ns1__getCollection_, ns1__getCollectionResponse &ns1__getCollectionResponse_) { return this->getCollection(NULL, NULL, ns1__getCollection_, ns1__getCollectionResponse_); }
        /// Web service synchronous operation 'getCollection' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int getCollection(const char *soap_endpoint_url, const char *soap_action, ns1__getCollection *ns1__getCollection_, ns1__getCollectionResponse &ns1__getCollectionResponse_) { return this->send_getCollection(soap_endpoint_url, soap_action, ns1__getCollection_) || this->recv_getCollection(ns1__getCollectionResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_getCollection' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_getCollection(const char *soap_endpoint_url, const char *soap_action, ns1__getCollection *ns1__getCollection_);
        /// Web service asynchronous operation 'recv_getCollection' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_getCollection(ns1__getCollectionResponse &ns1__getCollectionResponse_);
        //
        /// Web service synchronous operation 'processAssetFromFile' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int processAssetFromFile(ns1__processAssetFromFile *ns1__processAssetFromFile_, ns1__processAssetFromFileResponse &ns1__processAssetFromFileResponse_) { return this->processAssetFromFile(NULL, NULL, ns1__processAssetFromFile_, ns1__processAssetFromFileResponse_); }
        /// Web service synchronous operation 'processAssetFromFile' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int processAssetFromFile(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromFile *ns1__processAssetFromFile_, ns1__processAssetFromFileResponse &ns1__processAssetFromFileResponse_) { return this->send_processAssetFromFile(soap_endpoint_url, soap_action, ns1__processAssetFromFile_) || this->recv_processAssetFromFile(ns1__processAssetFromFileResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_processAssetFromFile' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_processAssetFromFile(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromFile *ns1__processAssetFromFile_);
        /// Web service asynchronous operation 'recv_processAssetFromFile' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_processAssetFromFile(ns1__processAssetFromFileResponse &ns1__processAssetFromFileResponse_);
        //
        /// Web service synchronous operation 'processAssetFromBytes' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int processAssetFromBytes(ns1__processAssetFromBytes *ns1__processAssetFromBytes_, ns1__processAssetFromBytesResponse &ns1__processAssetFromBytesResponse_) { return this->processAssetFromBytes(NULL, NULL, ns1__processAssetFromBytes_, ns1__processAssetFromBytesResponse_); }
        /// Web service synchronous operation 'processAssetFromBytes' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int processAssetFromBytes(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromBytes *ns1__processAssetFromBytes_, ns1__processAssetFromBytesResponse &ns1__processAssetFromBytesResponse_) { return this->send_processAssetFromBytes(soap_endpoint_url, soap_action, ns1__processAssetFromBytes_) || this->recv_processAssetFromBytes(ns1__processAssetFromBytesResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_processAssetFromBytes' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_processAssetFromBytes(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromBytes *ns1__processAssetFromBytes_);
        /// Web service asynchronous operation 'recv_processAssetFromBytes' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_processAssetFromBytes(ns1__processAssetFromBytesResponse &ns1__processAssetFromBytesResponse_);
        //
        /// Web service synchronous operation 'processAssetFromURL' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int processAssetFromURL(ns1__processAssetFromURL *ns1__processAssetFromURL_, ns1__processAssetFromURLResponse &ns1__processAssetFromURLResponse_) { return this->processAssetFromURL(NULL, NULL, ns1__processAssetFromURL_, ns1__processAssetFromURLResponse_); }
        /// Web service synchronous operation 'processAssetFromURL' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int processAssetFromURL(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromURL *ns1__processAssetFromURL_, ns1__processAssetFromURLResponse &ns1__processAssetFromURLResponse_) { return this->send_processAssetFromURL(soap_endpoint_url, soap_action, ns1__processAssetFromURL_) || this->recv_processAssetFromURL(ns1__processAssetFromURLResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_processAssetFromURL' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_processAssetFromURL(const char *soap_endpoint_url, const char *soap_action, ns1__processAssetFromURL *ns1__processAssetFromURL_);
        /// Web service asynchronous operation 'recv_processAssetFromURL' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_processAssetFromURL(ns1__processAssetFromURLResponse &ns1__processAssetFromURLResponse_);
        //
        /// Web service synchronous operation 'getOrGenerateGraphCode' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int getOrGenerateGraphCode(ns1__getOrGenerateGraphCode *ns1__getOrGenerateGraphCode_, ns1__getOrGenerateGraphCodeResponse &ns1__getOrGenerateGraphCodeResponse_) { return this->getOrGenerateGraphCode(NULL, NULL, ns1__getOrGenerateGraphCode_, ns1__getOrGenerateGraphCodeResponse_); }
        /// Web service synchronous operation 'getOrGenerateGraphCode' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int getOrGenerateGraphCode(const char *soap_endpoint_url, const char *soap_action, ns1__getOrGenerateGraphCode *ns1__getOrGenerateGraphCode_, ns1__getOrGenerateGraphCodeResponse &ns1__getOrGenerateGraphCodeResponse_) { return this->send_getOrGenerateGraphCode(soap_endpoint_url, soap_action, ns1__getOrGenerateGraphCode_) || this->recv_getOrGenerateGraphCode(ns1__getOrGenerateGraphCodeResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_getOrGenerateGraphCode' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_getOrGenerateGraphCode(const char *soap_endpoint_url, const char *soap_action, ns1__getOrGenerateGraphCode *ns1__getOrGenerateGraphCode_);
        /// Web service asynchronous operation 'recv_getOrGenerateGraphCode' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_getOrGenerateGraphCode(ns1__getOrGenerateGraphCodeResponse &ns1__getOrGenerateGraphCodeResponse_);
        //
        /// Web service synchronous operation 'setProcessingPlugins' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int setProcessingPlugins(ns1__setProcessingPlugins *ns1__setProcessingPlugins_, ns1__setProcessingPluginsResponse &ns1__setProcessingPluginsResponse_) { return this->setProcessingPlugins(NULL, NULL, ns1__setProcessingPlugins_, ns1__setProcessingPluginsResponse_); }
        /// Web service synchronous operation 'setProcessingPlugins' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int setProcessingPlugins(const char *soap_endpoint_url, const char *soap_action, ns1__setProcessingPlugins *ns1__setProcessingPlugins_, ns1__setProcessingPluginsResponse &ns1__setProcessingPluginsResponse_) { return this->send_setProcessingPlugins(soap_endpoint_url, soap_action, ns1__setProcessingPlugins_) || this->recv_setProcessingPlugins(ns1__setProcessingPluginsResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_setProcessingPlugins' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_setProcessingPlugins(const char *soap_endpoint_url, const char *soap_action, ns1__setProcessingPlugins *ns1__setProcessingPlugins_);
        /// Web service asynchronous operation 'recv_setProcessingPlugins' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_setProcessingPlugins(ns1__setProcessingPluginsResponse &ns1__setProcessingPluginsResponse_);
        //
        /// Web service synchronous operation 'getRecommendedAssets' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int getRecommendedAssets(ns1__getRecommendedAssets *ns1__getRecommendedAssets_, ns1__getRecommendedAssetsResponse &ns1__getRecommendedAssetsResponse_) { return this->getRecommendedAssets(NULL, NULL, ns1__getRecommendedAssets_, ns1__getRecommendedAssetsResponse_); }
        /// Web service synchronous operation 'getRecommendedAssets' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int getRecommendedAssets(const char *soap_endpoint_url, const char *soap_action, ns1__getRecommendedAssets *ns1__getRecommendedAssets_, ns1__getRecommendedAssetsResponse &ns1__getRecommendedAssetsResponse_) { return this->send_getRecommendedAssets(soap_endpoint_url, soap_action, ns1__getRecommendedAssets_) || this->recv_getRecommendedAssets(ns1__getRecommendedAssetsResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_getRecommendedAssets' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_getRecommendedAssets(const char *soap_endpoint_url, const char *soap_action, ns1__getRecommendedAssets *ns1__getRecommendedAssets_);
        /// Web service asynchronous operation 'recv_getRecommendedAssets' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_getRecommendedAssets(ns1__getRecommendedAssetsResponse &ns1__getRecommendedAssetsResponse_);
        //
        /// Web service synchronous operation 'getSimilarAssets' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int getSimilarAssets(ns1__getSimilarAssets *ns1__getSimilarAssets_, ns1__getSimilarAssetsResponse &ns1__getSimilarAssetsResponse_) { return this->getSimilarAssets(NULL, NULL, ns1__getSimilarAssets_, ns1__getSimilarAssetsResponse_); }
        /// Web service synchronous operation 'getSimilarAssets' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int getSimilarAssets(const char *soap_endpoint_url, const char *soap_action, ns1__getSimilarAssets *ns1__getSimilarAssets_, ns1__getSimilarAssetsResponse &ns1__getSimilarAssetsResponse_) { return this->send_getSimilarAssets(soap_endpoint_url, soap_action, ns1__getSimilarAssets_) || this->recv_getSimilarAssets(ns1__getSimilarAssetsResponse_) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_getSimilarAssets' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_getSimilarAssets(const char *soap_endpoint_url, const char *soap_action, ns1__getSimilarAssets *ns1__getSimilarAssets_);
        /// Web service asynchronous operation 'recv_getSimilarAssets' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_getSimilarAssets(ns1__getSimilarAssetsResponse &ns1__getSimilarAssetsResponse_);
    };
#endif