/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSMutableAttributedString, NSString;

@interface SCROBrailleChunk : NSObject <NSCopying> {
    NSString *_text;
    NSString *_language;
    int _contractionMode;
    BOOL _showEightDot;
    BOOL _isFocused;
    BOOL _hasTextSelection;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _textSelection;
    int _token;
    BOOL _showDotsSevenAndEight;
    NSMutableAttributedString *_brailleString;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _brailleSelection;
}

@property(readonly) NSString * language;

+ (void)initialize;

- (id)brailleWithIBeamLocation:(int*)arg1 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (int)locationForIndex:(int)arg1;
- (BOOL)isFocusedOrSelected;
- (id)_tableIdentifierForLanguage:(id)arg1;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 token:(int)arg4 focused:(BOOL)arg5 contractionMode:(int)arg6 showEightDot:(BOOL)arg7 showDotsSevenAndEight:(BOOL)arg8;
- (id)language;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)hasSelection;
- (BOOL)focused;
- (void)translate;
- (int)token;

@end
