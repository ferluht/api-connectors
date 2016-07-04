#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGSettlement
@end

@interface SWGSettlement : SWGObject


@property(nonatomic) NSDate* timestamp;

@property(nonatomic) NSString* symbol;

@property(nonatomic) NSString* settlementType;

@property(nonatomic) NSNumber* settledPrice;

@property(nonatomic) NSNumber* bankrupt;

@property(nonatomic) NSNumber* taxBase;

@property(nonatomic) NSNumber* taxRate;

@end