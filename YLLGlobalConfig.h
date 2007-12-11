//
//  YLLGlobalConfig.h
//  MacBlueTelnet
//
//  Created by Yung-Luen Lan on 2006/11/12.
//  Copyright 2006 yllan.org. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <ApplicationServices/ApplicationServices.h>
#define NUM_COLOR 10

@interface YLLGlobalConfig : NSObject {
@public
    int _messageCount;
	int _row;
	int _column;
	int _cellWidth;
	int _cellHeight;
    
    int _bgColorIndex;
    int _fgColorIndex;
    
    BOOL _showHiddenText;
	BOOL _blinkTicker;
    BOOL _shouldSmoothFonts;
    BOOL _detectDoubleByte;
    
    CGFloat _chineseFontSize;
    CGFloat _englishFontSize;
    CGFloat _chineseFontPaddingLeft;
    CGFloat _englishFontPaddingLeft;
    CGFloat _chineseFontPaddingBottom;
    CGFloat _englishFontPaddingBottom;
    NSString *_chineseFontName;
    NSString *_englishFontName;
    
	CTFontRef _cCTFont;
	CTFontRef _eCTFont;
	CGFontRef _cCGFont;
	CGFontRef _eCGFont;
	
	NSColor *_colorTable[2][NUM_COLOR];

	CFDictionaryRef _cCTAttribute[2][NUM_COLOR];
	CFDictionaryRef _eCTAttribute[2][NUM_COLOR];
}

- (IBAction) setChineseFont: (id) sender;
- (IBAction) setEnglishFont: (id) sender;

+ (YLLGlobalConfig *) sharedInstance;

- (void) refreshFont;

- (NSArray *) encodingArray;
- (void) setEncodingArray: (NSArray *) a;
- (int)messageCount;
- (void)setMessageCount:(int)value;

- (int)row;
- (void)setRow:(int)value;
- (int)column;
- (void)setColumn:(int)value;
- (int)cellWidth;
- (void)setCellWidth:(int)value;
- (int)cellHeight;
- (void)setCellHeight:(int)value;

- (BOOL)showHiddenText;
- (void)setShowHiddenText:(BOOL)value;
- (BOOL)shouldSmoothFonts;
- (void)setShouldSmoothFonts:(BOOL)value;
- (BOOL)detectDoubleByte;
- (void)setDetectDoubleByte:(BOOL)value;

- (NSColor *) colorAtIndex: (int) i hilite: (BOOL) h ;
- (void) setColor: (NSColor *) c hilite: (BOOL) h atIndex: (int) i ;

- (BOOL)blinkTicker;
- (void)setBlinkTicker:(BOOL)value;
- (void)updateBlinkTicker;

- (CGFloat)chineseFontSize;
- (void)setChineseFontSize:(CGFloat)value;

- (CGFloat)englishFontSize;
- (void)setEnglishFontSize:(CGFloat)value;

- (CGFloat)chineseFontPaddingLeft;
- (void)setChineseFontPaddingLeft:(CGFloat)value;

- (CGFloat)englishFontPaddingLeft;
- (void)setEnglishFontPaddingLeft:(CGFloat)value;

- (CGFloat)chineseFontPaddingBottom;
- (void)setChineseFontPaddingBottom:(CGFloat)value;

- (CGFloat)englishFontPaddingBottom;
- (void)setEnglishFontPaddingBottom:(CGFloat)value;

- (NSString *)chineseFontName;
- (void)setChineseFontName:(NSString *)value;

- (NSString *)englishFontName;
- (void)setEnglishFontName:(NSString *)value;

/* Color */
- (NSColor *) colorBlack ;
- (void) setColorBlack: (NSColor *) c;
- (NSColor *) colorBlackHilite ;
- (void) setColorBlackHilite: (NSColor *) c;

- (NSColor *) colorRed ;
- (void) setColorRed: (NSColor *) c;
- (NSColor *) colorRedHilite ;
- (void) setColorRedHilite: (NSColor *) c;

- (NSColor *) colorGreen ;
- (void) setColorGreen: (NSColor *) c;
- (NSColor *) colorGreenHilite ;
- (void) setColorGreenHilite: (NSColor *) c;

- (NSColor *) colorYellow ;
- (void) setColorYellow: (NSColor *) c;
- (NSColor *) colorYellowHilite ;
- (void) setColorYellowHilite: (NSColor *) c;

- (NSColor *) colorBlue ;
- (void) setColorBlue: (NSColor *) c;
- (NSColor *) colorBlueHilite ;
- (void) setColorBlueHilite: (NSColor *) c;

- (NSColor *) colorMagenta ;
- (void) setColorMagenta: (NSColor *) c;
- (NSColor *) colorMagentaHilite ;
- (void) setColorMagentaHilite: (NSColor *) c;

- (NSColor *) colorCyan ;
- (void) setColorCyan: (NSColor *) c;
- (NSColor *) colorCyanHilite ;
- (void) setColorCyanHilite: (NSColor *) c;

- (NSColor *) colorWhite ;
- (void) setColorWhite: (NSColor *) c;
- (NSColor *) colorWhiteHilite;
- (void) setColorWhiteHilite: (NSColor *) c;

- (NSColor *) colorBG ;
- (void) setColorBG: (NSColor *) c;
- (NSColor *) colorBGHilite ;
- (void) setColorBGHilite: (NSColor *) c;

@end
