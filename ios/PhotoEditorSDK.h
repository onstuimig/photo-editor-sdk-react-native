//
//  PhotoEditorSDK.h
//  FantasticPost
//
//  Created by Michel Albers on 16.08.17.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "React/RCTBridgeModule.h"
#import <React/RCTEventEmitter.h>
#import <PhotoEditorSDK/PhotoEditorSDK-swift.h>

@interface PhotoEditorSDK : RCTEventEmitter <RCTBridgeModule, PESDKPhotoEditViewControllerDelegate>

@end

@interface AnalyticsClient : NSObject <PESDKAnalyticsClient> 
-(nonnull instancetype)initWithMain:(PhotoEditorSDK *)mainClass OBJC_DESIGNATED_INITIALIZER;
@end;
