/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "CyteViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class Database;

@interface SectionsController : CyteViewController <UITableViewDataSource, UITableViewDelegate>
{
    Database *database_;
    struct MenesObjectHandle<NSString, 0> key_;
    struct MenesObjectHandle<NSMutableArray, 0> sections_;
    struct MenesObjectHandle<NSMutableArray, 0> filtered_;
    struct MenesObjectHandle<UITableView, 2> list_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)editButtonClicked;
- (void)reloadData;
- (id)initWithDatabase:(id)fp8 source:(id)fp12;
- (void)releaseSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)sectionAtIndexPath:(id)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)updateNavigationItem;
- (id)source;
- (id)navigationURL;

@end
