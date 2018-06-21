//
//  FeedFinder.h
//  FeedFinder
//
//  Created by Brent Simmons on 3/7/16.
//  Copyright © 2016 Ranchero Software, LLC. All rights reserved.
//

#import <AppKit/AppKit.h>

//! Project version number for FeedFinder.
FOUNDATION_EXPORT double FeedFinderVersionNumber;

//! Project version string for FeedFinder.
FOUNDATION_EXPORT const unsigned char FeedFinderVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FeedFinder/PublicHeader.h>


/* Given a URL, find one or more feeds.

Download URL
	If is feed, return URL
	If is web page, find possible feeds in web page
		Download each possible URL
		If URL is feed, add to URLs list
		return URLs list
*/
