//
//  ModelMatrix.cpp
//  shaderTest
//
//  Created by Chikashi Miyama on 28/07/14.
//
//

#include "ModelMatrix.h"

void ModelMatrix::setup(){
    

    ofVec3f vertices[3];
    vertices[0].x = -1.0;
    vertices[0].y = -1.0;
    vertices[0].z = 0.0;
    vertices[1].x = 1.0;
    vertices[1].y = -1.0;
    vertices[1].z = 0.0;
    vertices[2].x = 0.0;
    vertices[2].y = 1.0;
    vertices[2].z = 0.0;
    
    ofFloatColor colors[3];
    colors[0].r = 1.0;
    colors[0].g = 0.0;
    colors[0].b = 0.0;
    colors[1].r = 0.0;
    colors[1].g = 1.0;
    colors[1].b = 0.0;
    colors[2].r = 0.0;
    colors[2].g = 0.0;
    colors[2].b = 1.0;
    
    modelMatrix.makeIdentityMatrix();
    modelMatrix.translate(0.5, 0.5, 0); // move the triangle
    triangleVbo.setVertexData(vertices, 3, GL_STATIC_DRAW);
    triangleVbo.setColorData(colors, 3, GL_STATIC_DRAW);
    
    shader.load("ModelMatrix");
}

void ModelMatrix::update(){
    
}

void ModelMatrix::draw(){
    shader.begin();
    // uniform value should be set within  shader.begin() and end().
    shader.setUniformMatrix4f("modelMatrix",modelMatrix);
    triangleVbo.draw(GL_TRIANGLES, 0, 3);
    shader.end();
}