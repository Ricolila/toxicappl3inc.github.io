//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSDK_GTMABAddressBook : NSObject
{
    void *addressBook_;
}

+ (id)localizedLabel:(id)arg1;
+ (id)addressBook;
- (id)groupsWithCompositeNameWithPrefix:(id)arg1;
- (id)peopleWithCompositeNameWithPrefix:(id)arg1;
- (id)groupForId:(int)arg1;
- (id)personForId:(int)arg1;
- (void *)addressBookRef;
- (id)groups;
- (id)people;
- (_Bool)removeRecord:(id)arg1;
- (_Bool)addRecord:(id)arg1;
- (_Bool)hasUnsavedChanges;
- (_Bool)save;
- (void)dealloc;
- (id)init;

@end
