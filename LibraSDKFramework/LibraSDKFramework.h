//
//  LibraSDKFramework.h
//  LibraSDKFramework
//
//  Created by 李方健 on 2023/1/5.
//

#import <Foundation/Foundation.h>

//! Project version number for LibraSDKFramework.
FOUNDATION_EXPORT double LibraSDKFrameworkVersionNumber;

//! Project version string for LibraSDKFramework.
FOUNDATION_EXPORT const unsigned char LibraSDKFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LibraSDKFramework/PublicHeader.h>

@interface LibraSDKFramework : NSObject
+ (NSString*) add:(NSString*) file;
+ (NSString*) check:(NSString*) userId :(NSString*) expName;
@end
