#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "SWGCategoryManagedObjectBuilder.h"
#import "SWGTagManagedObjectBuilder.h"

#import "SWGPetManagedObject.h"
#import "SWGPet.h"

/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at <a href=\"http://swagger.io\">http://swagger.io</a> or on irc.freenode.net, #swagger.  For this sample, you can use the api key \"special-key\" to test the authorization filters
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@wordnik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


@interface SWGPetManagedObjectBuilder : NSObject

@property (nonatomic, strong) SWGCategoryManagedObjectBuilder * categoryBuilder;
@property (nonatomic, strong) SWGTagManagedObjectBuilder * tagsBuilder;


-(SWGPetManagedObject*)createNewSWGPetManagedObjectInContext:(NSManagedObjectContext*)context;

-(SWGPetManagedObject*)SWGPetManagedObjectFromSWGPet:(SWGPet*)object context:(NSManagedObjectContext*)context;

-(void)updateSWGPetManagedObject:(SWGPetManagedObject*)object withSWGPet:(SWGPet*)object2;

-(SWGPet*)SWGPetFromSWGPetManagedObject:(SWGPetManagedObject*)obj;

-(void)updateSWGPet:(SWGPet*)object withSWGPetManagedObject:(SWGPetManagedObject*)object2;

@end
