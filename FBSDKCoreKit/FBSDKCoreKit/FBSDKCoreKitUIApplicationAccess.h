//
//  FBSDKCoreKitUIApplicationAccess.h
//  FBSDKCoreKit
//
//  Created by Aditya Krishnadevan on 21/02/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#ifndef FBSDKCoreKitUIApplicationAccess_h
#define FBSDKCoreKitUIApplicationAccess_h

#import <objc/message.h>

#define FBSDK_SHARED_UIAPP() ((UIApplication *)[NSClassFromString(@"UIApplication") performSelector:@selector(sharedApplication)])

#define FBSDK_SHARED_APP_OPEN_URL(_URL) (((BOOL (*)(id, SEL, NSURL *))objc_msgSend)(FBSDK_SHARED_UIAPP(), @selector(openURL:), _URL))

#endif /* FBSDKCoreKitUIApplicationAccess_h */
