//
// Created by Chuck Greb on 5/7/13.
// Copyright (c) 2013 E. C. Greb. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>
#import <KIF/KIFTestStep.h>

@interface KIFTestStep (HelloTDDAdditions)

+ (id)stepToVerifyGreeting:(NSString *) expectedLabel;

@end
