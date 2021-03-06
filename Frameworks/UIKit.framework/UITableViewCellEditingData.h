/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCellDeleteConfirmationControl, UITableViewCellReorderControl, UITableViewCell, UIView, UITableViewCellEditControl;

@interface UITableViewCellEditingData : NSObject  {
    UITableViewCell *_cell;
    int _editingStyle;
    UITableViewCellEditControl *_editControl;
    UITableViewCellReorderControl *_reorderControl;
    UITableViewCellDeleteConfirmationControl *_deleteConfirmationControl;
    UIView *_reorderSeparatorView;
}

@property(getter=isDataRequired,readonly) BOOL dataRequired;


- (void)dealloc;
- (BOOL)isDataRequired;
- (id)reorderSeparatorView:(BOOL)arg1;
- (id)reorderControl:(BOOL)arg1;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2;
- (id)deleteConfirmationControl:(BOOL)arg1;
- (id)editControl:(BOOL)arg1;

@end
