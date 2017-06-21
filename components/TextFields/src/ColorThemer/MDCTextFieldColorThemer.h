/*
 Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "MaterialThemes.h"
#import "MaterialTextFields.h"

/**
 Used to apply a color scheme to theme MDCTextField.
 */
@interface MDCTextFieldColorThemer : NSObject

/**
 Applies a color scheme to theme a MDCTextField. Use a UIAppearance proxy to apply a color
 scheme to all instances of MDCTextField.

 @param colorScheme The color scheme to apply to MDCTextField.
 @param textField A MDCTextField instance to apply a color scheme.
 */
+ (void)applyColorScheme:(NSObject<MDCColorScheme> *)colorScheme
             toTextField:(MDCTextField *)textField;

/**
 Applies a color scheme to theme a MDCTextInputController.
 
 @param colorScheme The color scheme to apply to MDCTextInputController.
 @param textInputController A MDCTextInputController instance to apply a color scheme.
 */
+ (void)applyColorScheme:(NSObject<MDCColorScheme> *)colorScheme
    toTextInputController:(MDCTextInputController *)textInputController;

@end
