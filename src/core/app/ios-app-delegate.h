/*
* Copyright (c) 2010-2019 Belledonne Communications SARL.
*
* This file is part of Liblinphone.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include <UIKit/UIKit.h>
#include "private.h"

@interface IosAppDelegate : NSObject {
	std::shared_ptr<LinphonePrivate::Core> pcore;
	NSTimer* mIterateTimer;
}

- (void)setCore:(std::shared_ptr<LinphonePrivate::Core>)core;
- (void)onLinphoneCoreStart;
- (void)onLinphoneCoreStop;

@end
