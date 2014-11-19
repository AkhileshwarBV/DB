//
//  Person.h
//  DB
//
//  Created by Delta Technology on 11/10/14.
//  Copyright (c) 2014 Delta Technology. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * company;
@property (nonatomic, retain) NSString * country;
@property (nonatomic, retain) NSString * department;
@property (nonatomic, retain) NSString * descriptio;
@property (nonatomic, retain) NSString * displayName;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * firstNameAndInitials;
@property (nonatomic, retain) NSNumber * hasEmail;
@property (nonatomic, retain) NSString * homeNumber;
@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSString * info;
@property (nonatomic, retain) NSString * initials;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSString * manager;
@property (nonatomic, retain) NSString * mobileNumber;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * office;
@property (nonatomic, retain) NSString * pOBox;
@property (nonatomic, retain) NSString * postalCode;
@property (nonatomic, retain) NSString * safeDisplayName;
@property (nonatomic, retain) NSString * safeFirstName;
@property (nonatomic, retain) NSString * safeLastName;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * street;
@property (nonatomic, retain) NSString * telephoneNumber;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * titleAndDepartment;
@property (nonatomic, retain) NSString * twitter;
@property (nonatomic, retain) NSString * webpage;

@end
