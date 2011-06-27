@interface CNSDragStatusView : NSView {
  NSImage *highlightedImage;
  NSImage *normalImage;
}

- (void)setNormalImage:(NSImage *)normalImage highlightedImage:(NSImage *)highlightedImage;

@property (assign) BOOL highlight;
@property (assign) id delegate;

@end
