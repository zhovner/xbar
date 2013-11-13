//
//  Plugin.h
//  BitBar
//
//  Created by Mat Ryer on 11/12/13.
//  Copyright (c) 2013 Bit Bar. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PluginManager;

@interface Plugin : NSObject

@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *allContent;
@property (nonatomic, assign) NSInteger currentLine;
@property (nonatomic, strong) NSArray *allContentLines;
@property (nonatomic, copy) NSString *errorContent;
@property (nonatomic, assign) BOOL lastCommandWasError;
@property (nonatomic, strong) NSNumber *refreshIntervalSeconds;
@property (readonly, nonatomic, strong) PluginManager* manager;
@property (nonatomic, strong) NSStatusItem *statusItem;
@property (nonatomic, assign) NSInteger cycleLinesIntervalSeconds;

- (id) initWithManager:(PluginManager*)manager;
- (BOOL) isMultiline;

- (BOOL) refreshContentByExecutingCommand;
- (BOOL) refresh;
- (void) cycleLines;

@end