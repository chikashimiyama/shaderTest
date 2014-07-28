//
//  ViewMatrix.h
//  shaderTest
//
//  Created by Chikashi Miyama on 28/07/14.
//
//

#ifndef __shaderTest__ViewMatrix__
#define __shaderTest__ViewMatrix__

#include "ofMain.h"

class ViewMatrix{
    
    ofShader shader;
    ofVbo triangleVbo;
    ofMatrix4x4 modelMatrix;
    ofMatrix4x4 viewMatrix;
    ofMatrix4x4 projectionMatrix;

public:
    void setup();
    void update();
    void draw();
};

#endif /* defined(__shaderTest__ViewMatrix__) */
