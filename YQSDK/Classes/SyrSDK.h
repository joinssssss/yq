//
//  SyrSDK.h
//  SyrSDK
//
//  Created by you1 on 2022/6/29.
//

#import <Foundation/Foundation.h>


/**
 接收并处理来至微博客户端程序的事件消息
 */
@protocol SyrSDKDelegate <NSObject>

/**
   注册SDK 成功
 */
- (void)registerAppSuccess;


/// 注册SDK失败
/// @param string 失败原因
- (void)registerAppError:(NSString *_Nullable)string;

@end

@interface SyrSDK : NSObject

/**
 新的获取当前SDK的版本号
 @return 当前SDK的版本号
 */
+ (NSString *_Nullable)getSyrSDKVersion;

/**
 新的获取当前JumpSDK的版本号
 @return 当前JumpSDK的版本号
 */

+ (NSString *_Nullable)getJumpSDKVersion;

/**
@param appKey 平台第三方应用appKey
@param delegate 注册SDK 回调
*/
+ (void)registerApp:(NSString * __nonnull)appKey delegate:(id<SyrSDKDelegate>_Nullable)delegate;

@end
