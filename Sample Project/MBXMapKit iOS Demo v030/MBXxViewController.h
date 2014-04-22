//
//  MBXxViewController.h
//  MBXMapKit iOS Demo v030
//
//  Created by Will Snook on 3/2/14.
//  Copyright (c) 2014 MapBox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "MBXRasterTileOverlay.h"
#import "MBXOfflineMapDownloader.h"

@interface MBXxViewController : UIViewController <UIActionSheetDelegate, MKMapViewDelegate, MBXRasterTileOverlayDelegate, MBXOfflineMapDownloaderDelegate, UIAlertViewDelegate>

@end
