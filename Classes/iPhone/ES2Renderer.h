/*
     File: ES2Renderer.h
 Abstract: The ES2Renderer class creates an OpenGL ES 2.0 context and delegates to its super class, OpenGLRenderer, for creating and drawing the shaders.
  Version: 1.0
*/

#import <QuartzCore/QuartzCore.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>
#import "OpenGLRenderer.h"

@interface ES2Renderer : OpenGLRenderer
{
	
}

- (ES2Renderer* ) initWithContext:(EAGLContext *) context AndDrawable:(id<EAGLDrawable>)drawable;

- (BOOL)resizeFromLayer:(CAEAGLLayer*)layer;



@end

