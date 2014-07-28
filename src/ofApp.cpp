#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    coloredTriangle.setup();
    modelMatrix.setup();
    viewMatrix.setup();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(0, 0, 0);
    coloredTriangle.update();
    modelMatrix.update();
    viewMatrix.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
//    coloredTriangle.draw();
//    modelMatrix.draw();
    viewMatrix.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//
//
//ofVec3f dif1, dif2, cross;
//
//dif1.x = vertices[1].x - vertices[0].x;
//dif1.y = vertices[1].y - vertices[0].y;
//dif1.z = vertices[1].z - vertices[0].z;
//
//// vertex 3 - vertex 2
//dif2.x = vertices[2].x - vertices[1].x;
//dif2.y = vertices[2].y - vertices[1].y;
//dif2.z = vertices[2].z - vertices[1].z;
//
////cross
//
//cross.x = (dif2[1] * dif1[2]) - (dif2[2] * dif1[1]);
//cross.y = (dif2[2] * dif1[0]) - (dif2[0] * dif1[2]);
//cross.z = (dif2[0] * dif1[1]) - (dif2[1] * dif1[0]);
//
//
//float length;
//length = sqrt((cross[0] * cross[0]) + (cross[1] * cross[1]) + (cross[2] * cross[2]));
//
//ofVec3f normals;
//normals.x = cross.x / length;
//normals.y = cross.y / length;
//normals.z = cross.z / length;
//
//ofVec3f vertexNormal[3];
//for(int i = 0;i<3; i++ ){
//    vertexNormal[0].x = normals.x;
//    vertexNormal[0].y = normals.y;
//    vertexNormal[0].z = normals.z;
//}
