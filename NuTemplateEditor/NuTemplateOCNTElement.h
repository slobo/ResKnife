//
//  NuTemplateOCNTElement.h
//  ResKnife (PB2)
//
//  Created by Uli Kusterer on Tue Aug 05 2003.
//  Copyright (c) 2003 M. Uli Kusterer. All rights reserved.
//

#import "NuTemplateElement.h"


@interface NuTemplateOCNTElement : NuTemplateElement
{
	unsigned long		longValue;
}

+(NuTemplateOCNTElement*)	lastParsedElement;
+(void)						setLastParsedElement: (NuTemplateOCNTElement*)e;

-(void)				setLongValue: (unsigned long)n;
-(unsigned long)	longValue;

-(NSString*)	stringValue;
-(void)			setStringValue: (NSString*)str;

@end