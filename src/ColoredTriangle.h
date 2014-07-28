//
//  ColoredTriangle.h
//  shaderTest
//
//  Created by Chikashi Miyama on 28/07/14.
//
//

#ifndef __shaderTest__ColoredTriangle__
#define __shaderTest__ColoredTriangle__

#include "ofMain.h"

class ColoredTriangle{
    
    ofShader shader;
    ofVbo triangleVbo;
    
public:
    void setup();
    void update();
    void draw();
};

#endif /* defined(__shaderTest__ColoredTriangle__) */
