/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString;

@interface SUScriptDialog : SUScriptObject  {
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    id _textFields;
    NSString *_title;
}

@property(retain) NSString * body;
@property(retain) id buttons;
@property(retain) NSNumber * cancelButtonIndex;
@property(retain) id textFields;
@property(retain) NSString * title;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)setButtons:(id)arg1;
- (void)showFromDOMElement:(id)arg1;
- (void)showSheet;
- (void)_logSheetWarnings;
- (id)_nativeDialog;
- (id)textFields;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setTextFields:(id)arg1;
- (void)dealloc;
- (void)setBody:(id)arg1;
- (id)buttons;
- (void)dismiss;
- (id)body;
- (id)title;
- (void)show;
- (void)setCancelButtonIndex:(id)arg1;
- (id)cancelButtonIndex;
- (void)setTitle:(id)arg1;
- (id)attributeKeys;

@end
