//
//  ViewMatrix.cpp
//  shaderTest
//
//  Created by Chikashi Miyama on 28/07/14.
//
//

#include "ViewMatrix.h"

void ViewMatrix::setup(){
    
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
    modelMatrix.translate(-0.1, 0.1, 0); // move the triangle
    viewMatrix.makeIdentityMatrix();
    viewMatrix.makeLookAtViewMatrix(ofVec3f(0.0, 0.0, 5.0), ofVec3f(0.0,0.0,0.0), ofVec3f(0.0,1.0,0.0)); // setup camera
    projectionMatrix.makeIdentityMatrix();
    projectionMatrix.makePerspectiveMatrix(60, 1.3333, 0.01, 1000);

    triangleVbo.setVertexData(vertices, 3, GL_STATIC_DRAW);
    triangleVbo.setColorData(colors, 3, GL_STATIC_DRAW);
    
    shader.load("ViewMatrix");
}

void ViewMatrix::update(){
    
}

void ViewMatrix::draw(){
    shader.begin();

    shader.setUniformMatrix4f("modelMatrix",modelMatrix);
    shader.setUniformMatrix4f("viewMatrix",viewMatrix);
    shader.setUniformMatrix4f("projectionMatrix", projectionMatrix);

    triangleVbo.draw(GL_TRIANGLES, 0, 3);
    shader.end();
}