/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSInputStream, NSDictionary, NSString, NSURL, NSData, NSArray;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSCoding, NSCopying, NSMutableCopying> {
    int _allowedRetryCount;
    unsigned int _cachePolicy;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    BOOL _isITunesStoreRequest;
    unsigned int _networkServiceType;
    NSDictionary *_requestParameters;
    BOOL _requiresExtendedValidationCertificates;
    BOOL _shouldDecodeResponse;
    BOOL _shouldDisableCellularFallback;
    BOOL _shouldProcessProtocol;
    double _timeoutInterval;
    NSString *_urlBagKey;
    int _urlBagType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _urlBagURLBlock;

    NSArray *_urls;
    NSArray *_userAgentComponents;
}

@property(readonly) int allowedRetryCount;
@property(readonly) NSString * clientIdentifier;
@property(readonly) unsigned int cachePolicy;
@property(readonly) long long expectedContentLength;
@property(readonly) NSData * HTTPBody;
@property(readonly) NSDictionary * HTTPHeaders;
@property(readonly) NSString * HTTPMethod;
@property(getter=isITunesStoreRequest,readonly) BOOL ITunesStoreRequest;
@property(readonly) unsigned int networkServiceType;
@property(readonly) NSDictionary * requestParameters;
@property(readonly) double timeoutInterval;
@property(readonly) NSString * URLBagKey;
@property(readonly) NSURL * URL;
@property(readonly) NSArray * userAgentComponents;
@property(readonly) BOOL canBeResolved;
@property(readonly) NSInputStream * HTTPBodyStream;
@property(readonly) BOOL requiresExtendedValidationCertificates;
@property(readonly) BOOL shouldDecodeResponse;
@property(readonly) BOOL shouldDisableCellularFallback;
@property(readonly) BOOL shouldProcessProtocol;
@property(readonly) int URLBagType;
@property(readonly) id URLBagURLBlock;
@property(readonly) NSArray * URLs;


- (id)HTTPBody;
- (id)HTTPMethod;
- (id)initWithURLRequest:(id)arg1;
- (id)_initCommon;
- (id)HTTPHeaders;
- (id)URLBagKey;
- (id)requestParameters;
- (BOOL)canBeResolved;
- (id)clientIdentifier;
- (id)URL;
- (id)initWithURL:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)URLBagURLBlock;
- (BOOL)shouldDisableCellularFallback;
- (BOOL)shouldDecodeResponse;
- (BOOL)requiresExtendedValidationCertificates;
- (BOOL)shouldProcessProtocol;
- (BOOL)isITunesStoreRequest;
- (int)URLBagType;
- (int)allowedRetryCount;
- (id)userAgentComponents;
- (id)copyURLRequest;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)URLs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)HTTPBodyStream;
- (unsigned int)networkServiceType;
- (double)timeoutInterval;
- (unsigned int)cachePolicy;

@end
