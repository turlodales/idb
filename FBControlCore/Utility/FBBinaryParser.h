/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString *FBBinaryArchitecture NS_STRING_ENUM;

extern FBBinaryArchitecture const FBBinaryArchitecturei386;
extern FBBinaryArchitecture const FBBinaryArchitecturex86_64;
extern FBBinaryArchitecture const FBBinaryArchitectureArm;
extern FBBinaryArchitecture const FBBinaryArchitectureArm64;

/**
 Parsers the Mach-O Header of a binary.
 */
@interface FBBinaryParser : NSObject

/**
 Parses the Mach-O Header of a binary, returning a set of archs.

 @param binaryPath the Path of the Binary to parse.
 @param error an error out for any error that occurred.
 @return a Set of archs if any could be found, nil on error.
 */
+ (nullable NSSet<FBBinaryArchitecture> *)architecturesForBinaryAtPath:(NSString *)binaryPath error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
