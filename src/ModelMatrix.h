//
//  ModelMatrix.h
//  shaderTest
//
//  Created by Chikashi Miyama on 28/07/14.
//
//

#ifndef __shaderTest__ModelMatrix__
#define __shaderTest__ModelMatrix__

#include "ofMain.h"


class ModelMatrix{
    
    ofShader shader;
    ofVbo triangleVbo;
    ofMatrix4x4 modelMatrix;
    
public:
    void setup();
    void update();
    void draw();
};

#endif /* defined(__shaderTest__ModelMatrix__) */
