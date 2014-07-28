//
//  ColoredTriangle.cpp
//  shaderTest
//
//  Created by Chikashi Miyama on 28/07/14.
//
//

#include "ColoredTriangle.h"

void ColoredTriangle::setup(){
    
    // x = -1.0 leftmost , 1.0 rightmost
    // y = -1.0 topmost, 1.0 bottommost
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
    
    triangleVbo.setVertexData(vertices, 3, GL_STATIC_DRAW);
    triangleVbo.setColorData(colors, 3, GL_STATIC_DRAW);
    
    shader.load("ColoredTriangle");
}

void ColoredTriangle::update(){

}

void ColoredTriangle::draw(){
    shader.begin();
    triangleVbo.draw(GL_TRIANGLES, 0, 3);
    shader.end();
}