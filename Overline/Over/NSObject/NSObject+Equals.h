//
// Created by kazuma.ukyo on 12/27/12.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@interface NSObject (Equals)
- (BOOL)isNullObject;
- (BOOL)isArray;
- (BOOL)isDictionary;
- (BOOL)isSet;
- (BOOL)isString;
- (BOOL)isNumber;
@end