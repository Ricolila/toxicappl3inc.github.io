/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "CyteWebViewController.h"

@interface CydiaWebViewController : CyteWebViewController
{
    struct MenesObjectHandle<CydiaObject, 0> cydia_;
}

+ (id)requestWithHeaders:(id)fp8;
+ (void)didClearWindowObject:(id)fp8 forFrame:(id)fp12 withCydia:(id)fp16;
+ (void)addDiversion:(id)fp8;
+ (void)_initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)applicationNameForUserAgent;
- (void)setDelegate:(id)fp8;
- (id)webThreadWebView:(id)fp8 resource:(id)fp12 willSendRequest:(id)fp16 redirectResponse:(id)fp20 fromDataSource:(id)fp24;
- (id)webView:(id)fp8 resource:(id)fp12 willSendRequest:(id)fp16 redirectResponse:(id)fp20 fromDataSource:(id)fp24;
- (id)URLWithURL:(id)fp8;
- (void)_setupMail:(id)fp8;
- (void)webView:(id)fp8 didClearWindowObject:(id)fp12 forFrame:(id)fp16;
- (id)navigationURL;

@end
