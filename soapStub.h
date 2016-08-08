/* soapStub.h
   Generated by gSOAP 2.8.33 for SDE.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include <string>
#include <vector>
#include <vector>

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20833
# error "GSOAP VERSION 20833 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

class SDEKey;	/* SDE.h:28 */
struct ns__getLoginInfoResponse;	/* SDE.h:36 */
struct ns__getLoginInfo;	/* SDE.h:36 */
struct ns__getRegisteredClassesResponse;	/* SDE.h:37 */
struct ns__getRegisteredClasses;	/* SDE.h:37 */
struct ns__addOnyenResponse;	/* SDE.h:38 */
struct ns__addOnyen;	/* SDE.h:38 */
struct ns__registerClassResponse;	/* SDE.h:39 */
struct ns__registerClass;	/* SDE.h:39 */

/* SDE.h:28 */
#ifndef SOAP_TYPE_SDEKey
#define SOAP_TYPE_SDEKey (8)
/* complex XSD type 'ns:SDEKey': */
class SOAP_CMAC SDEKey {
      public:
        /// Optional element 'sessionKey' of XSD type 'xsd:string'
        std::string sessionKey;	///< default = "0"
        SDEKey();
        virtual ~SDEKey();
      public:
        /// Return unique type id SOAP_TYPE_SDEKey
        virtual int soap_type(void) const { return SOAP_TYPE_SDEKey; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type SDEKey, default initialized and not managed by a soap context
        virtual SDEKey *soap_alloc(void) const { return SOAP_NEW(SDEKey); }
        /// Friend allocator used by soap_new_SDEKey(struct soap*, int)
        friend SOAP_FMAC1 SDEKey * SOAP_FMAC2 soap_instantiate_SDEKey(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:36 */
#ifndef SOAP_TYPE_ns__getLoginInfoResponse
#define SOAP_TYPE_ns__getLoginInfoResponse (18)
/* complex XSD type 'ns:getLoginInfoResponse': */
struct ns__getLoginInfoResponse {
      public:
        /** Required element 'response' of XSD type 'xsd:string' */
        std::string response;
      public:
        /** Return unique type id SOAP_TYPE_ns__getLoginInfoResponse */
        int soap_type() const { return SOAP_TYPE_ns__getLoginInfoResponse; }
        /** Constructor with member initializations */
        ns__getLoginInfoResponse()
        {
        }
        /** Friend allocator used by soap_new_ns__getLoginInfoResponse(struct soap*, int) */
        friend SOAP_FMAC1 ns__getLoginInfoResponse * SOAP_FMAC2 soap_instantiate_ns__getLoginInfoResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:36 */
#ifndef SOAP_TYPE_ns__getLoginInfo
#define SOAP_TYPE_ns__getLoginInfo (19)
/* complex XSD type 'ns:getLoginInfo': */
struct ns__getLoginInfo {
      public:
        /** Optional element 'session' of XSD type 'ns:SDEKey' */
        SDEKey *session;
        /** Optional element 'desiredOnyen' of XSD type 'xsd:string' */
        std::string *desiredOnyen;
      public:
        /** Return unique type id SOAP_TYPE_ns__getLoginInfo */
        int soap_type() const { return SOAP_TYPE_ns__getLoginInfo; }
        /** Constructor with member initializations */
        ns__getLoginInfo()
        {
          session = (SDEKey *)0;
          desiredOnyen = (std::string *)0;
        }
        /** Friend allocator used by soap_new_ns__getLoginInfo(struct soap*, int) */
        friend SOAP_FMAC1 ns__getLoginInfo * SOAP_FMAC2 soap_instantiate_ns__getLoginInfo(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:37 */
#ifndef SOAP_TYPE_ns__getRegisteredClassesResponse
#define SOAP_TYPE_ns__getRegisteredClassesResponse (23)
/* complex XSD type 'ns:getRegisteredClassesResponse': */
struct ns__getRegisteredClassesResponse {
      public:
        /** Required element 'response' of XSD type 'xsd:string' */
        std::vector<std::string> response;
      public:
        /** Return unique type id SOAP_TYPE_ns__getRegisteredClassesResponse */
        int soap_type() const { return SOAP_TYPE_ns__getRegisteredClassesResponse; }
        /** Constructor with member initializations */
        ns__getRegisteredClassesResponse()
        {
        }
        /** Friend allocator used by soap_new_ns__getRegisteredClassesResponse(struct soap*, int) */
        friend SOAP_FMAC1 ns__getRegisteredClassesResponse * SOAP_FMAC2 soap_instantiate_ns__getRegisteredClassesResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:37 */
#ifndef SOAP_TYPE_ns__getRegisteredClasses
#define SOAP_TYPE_ns__getRegisteredClasses (24)
/* complex XSD type 'ns:getRegisteredClasses': */
struct ns__getRegisteredClasses {
      public:
        /** Optional element 'session' of XSD type 'ns:SDEKey' */
        SDEKey *session;
        /** Optional element 'desiredOnyen' of XSD type 'xsd:string' */
        std::string *desiredOnyen;
      public:
        /** Return unique type id SOAP_TYPE_ns__getRegisteredClasses */
        int soap_type() const { return SOAP_TYPE_ns__getRegisteredClasses; }
        /** Constructor with member initializations */
        ns__getRegisteredClasses()
        {
          session = (SDEKey *)0;
          desiredOnyen = (std::string *)0;
        }
        /** Friend allocator used by soap_new_ns__getRegisteredClasses(struct soap*, int) */
        friend SOAP_FMAC1 ns__getRegisteredClasses * SOAP_FMAC2 soap_instantiate_ns__getRegisteredClasses(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:38 */
#ifndef SOAP_TYPE_ns__addOnyenResponse
#define SOAP_TYPE_ns__addOnyenResponse (26)
/* complex XSD type 'ns:addOnyenResponse': */
struct ns__addOnyenResponse {
      public:
        /** Required element 'response' of XSD type 'xsd:string' */
        std::string response;
      public:
        /** Return unique type id SOAP_TYPE_ns__addOnyenResponse */
        int soap_type() const { return SOAP_TYPE_ns__addOnyenResponse; }
        /** Constructor with member initializations */
        ns__addOnyenResponse()
        {
        }
        /** Friend allocator used by soap_new_ns__addOnyenResponse(struct soap*, int) */
        friend SOAP_FMAC1 ns__addOnyenResponse * SOAP_FMAC2 soap_instantiate_ns__addOnyenResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:38 */
#ifndef SOAP_TYPE_ns__addOnyen
#define SOAP_TYPE_ns__addOnyen (27)
/* complex XSD type 'ns:addOnyen': */
struct ns__addOnyen {
      public:
        /** Optional element 'session' of XSD type 'ns:SDEKey' */
        SDEKey *session;
        /** Optional element 'desiredOnyen' of XSD type 'xsd:string' */
        std::string *desiredOnyen;
        /** Optional element 'desiredPassword' of XSD type 'xsd:string' */
        std::string *desiredPassword;
      public:
        /** Return unique type id SOAP_TYPE_ns__addOnyen */
        int soap_type() const { return SOAP_TYPE_ns__addOnyen; }
        /** Constructor with member initializations */
        ns__addOnyen()
        {
          session = (SDEKey *)0;
          desiredOnyen = (std::string *)0;
          desiredPassword = (std::string *)0;
        }
        /** Friend allocator used by soap_new_ns__addOnyen(struct soap*, int) */
        friend SOAP_FMAC1 ns__addOnyen * SOAP_FMAC2 soap_instantiate_ns__addOnyen(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:39 */
#ifndef SOAP_TYPE_ns__registerClassResponse
#define SOAP_TYPE_ns__registerClassResponse (29)
/* complex XSD type 'ns:registerClassResponse': */
struct ns__registerClassResponse {
      public:
        /** Required element 'response' of XSD type 'xsd:string' */
        std::string response;
      public:
        /** Return unique type id SOAP_TYPE_ns__registerClassResponse */
        int soap_type() const { return SOAP_TYPE_ns__registerClassResponse; }
        /** Constructor with member initializations */
        ns__registerClassResponse()
        {
        }
        /** Friend allocator used by soap_new_ns__registerClassResponse(struct soap*, int) */
        friend SOAP_FMAC1 ns__registerClassResponse * SOAP_FMAC2 soap_instantiate_ns__registerClassResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:39 */
#ifndef SOAP_TYPE_ns__registerClass
#define SOAP_TYPE_ns__registerClass (30)
/* complex XSD type 'ns:registerClass': */
struct ns__registerClass {
      public:
        /** Optional element 'session' of XSD type 'ns:SDEKey' */
        SDEKey *session;
        /** Optional element 'desiredOnyen' of XSD type 'xsd:string' */
        std::string *desiredOnyen;
        /** Optional element 'desiredClass' of XSD type 'xsd:string' */
        std::string *desiredClass;
      public:
        /** Return unique type id SOAP_TYPE_ns__registerClass */
        int soap_type() const { return SOAP_TYPE_ns__registerClass; }
        /** Constructor with member initializations */
        ns__registerClass()
        {
          session = (SDEKey *)0;
          desiredOnyen = (std::string *)0;
          desiredClass = (std::string *)0;
        }
        /** Friend allocator used by soap_new_ns__registerClass(struct soap*, int) */
        friend SOAP_FMAC1 ns__registerClass * SOAP_FMAC2 soap_instantiate_ns__registerClass(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* SDE.h:39 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (31)
/* SOAP_ENV__Header: */
struct SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header()
        {
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Header(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* SDE.h:39 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (32)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code()
        {
          SOAP_ENV__Value = (char *)0;
          SOAP_ENV__Subcode = (struct SOAP_ENV__Code *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Code(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* SDE.h:39 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (34)
/* SOAP_ENV__Detail: */
struct SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail()
        {
          __any = (char *)0;
          __type = 0;
          fault = NULL;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Detail(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* SDE.h:39 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (36)
/* SOAP_ENV__Reason: */
struct SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason()
        {
          SOAP_ENV__Text = (char *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Reason(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* SDE.h:39 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (37)
/* SOAP_ENV__Fault: */
struct SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault()
        {
          faultcode = (char *)0;
          faultstring = (char *)0;
          faultactor = (char *)0;
          detail = (struct SOAP_ENV__Detail *)0;
          SOAP_ENV__Code = (struct SOAP_ENV__Code *)0;
          SOAP_ENV__Reason = (struct SOAP_ENV__Reason *)0;
          SOAP_ENV__Node = (char *)0;
          SOAP_ENV__Role = (char *)0;
          SOAP_ENV__Detail = (struct SOAP_ENV__Detail *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Fault(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* SDE.h:23 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

/* SDE.h:23 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* std::string has binding name 'std__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__string
#define SOAP_TYPE_std__string (9)
#endif

/* SDEKey has binding name 'SDEKey' for type 'ns:SDEKey' */
#ifndef SOAP_TYPE_SDEKey
#define SOAP_TYPE_SDEKey (8)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (37)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (36)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (34)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (32)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (31)
#endif

/* struct ns__registerClass has binding name 'ns__registerClass' for type 'ns:registerClass' */
#ifndef SOAP_TYPE_ns__registerClass
#define SOAP_TYPE_ns__registerClass (30)
#endif

/* struct ns__registerClassResponse has binding name 'ns__registerClassResponse' for type 'ns:registerClassResponse' */
#ifndef SOAP_TYPE_ns__registerClassResponse
#define SOAP_TYPE_ns__registerClassResponse (29)
#endif

/* struct ns__addOnyen has binding name 'ns__addOnyen' for type 'ns:addOnyen' */
#ifndef SOAP_TYPE_ns__addOnyen
#define SOAP_TYPE_ns__addOnyen (27)
#endif

/* struct ns__addOnyenResponse has binding name 'ns__addOnyenResponse' for type 'ns:addOnyenResponse' */
#ifndef SOAP_TYPE_ns__addOnyenResponse
#define SOAP_TYPE_ns__addOnyenResponse (26)
#endif

/* struct ns__getRegisteredClasses has binding name 'ns__getRegisteredClasses' for type 'ns:getRegisteredClasses' */
#ifndef SOAP_TYPE_ns__getRegisteredClasses
#define SOAP_TYPE_ns__getRegisteredClasses (24)
#endif

/* struct ns__getRegisteredClassesResponse has binding name 'ns__getRegisteredClassesResponse' for type 'ns:getRegisteredClassesResponse' */
#ifndef SOAP_TYPE_ns__getRegisteredClassesResponse
#define SOAP_TYPE_ns__getRegisteredClassesResponse (23)
#endif

/* struct ns__getLoginInfo has binding name 'ns__getLoginInfo' for type 'ns:getLoginInfo' */
#ifndef SOAP_TYPE_ns__getLoginInfo
#define SOAP_TYPE_ns__getLoginInfo (19)
#endif

/* struct ns__getLoginInfoResponse has binding name 'ns__getLoginInfoResponse' for type 'ns:getLoginInfoResponse' */
#ifndef SOAP_TYPE_ns__getLoginInfoResponse
#define SOAP_TYPE_ns__getLoginInfoResponse (18)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (39)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (38)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (33)
#endif

/* std::string * has binding name 'PointerTostd__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_PointerTostd__string
#define SOAP_TYPE_PointerTostd__string (15)
#endif

/* SDEKey * has binding name 'PointerToSDEKey' for type 'ns:SDEKey' */
#ifndef SOAP_TYPE_PointerToSDEKey
#define SOAP_TYPE_PointerToSDEKey (14)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/* std::vector<std::string>  has binding name 'std__vectorTemplateOfstd__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__vectorTemplateOfstd__string
#define SOAP_TYPE_std__vectorTemplateOfstd__string (20)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
