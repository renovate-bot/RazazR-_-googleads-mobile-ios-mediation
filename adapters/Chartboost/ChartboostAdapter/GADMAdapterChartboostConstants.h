// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

/// Chartboost mediation network adapter version.
static NSString *const kGADMAdapterChartboostVersion = @"8.5.0.0";

/// Chartboost App ID.
static NSString *const kGADMAdapterChartboostAppID = @"appId";

/// Chartboost App Signature.
static NSString *const kGADMAdapterChartboostAppSignature = @"appSignature";

/// Chartboost Ad Location.
static NSString *const kGADMAdapterChartboostAdLocation = @"adLocation";

/// Chartboost adapter error domain.
static NSString *const kGADMAdapterChartboostErrorDomain = @"com.google.mediation.chartboost";

/// Minimum OS version.
static NSString *const kGADMAdapterChartboostMinimumOSVersion = @"10.0";
