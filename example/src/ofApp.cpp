#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
    pStart = ofPoint(100, 100);
	vStart = ofVec2f(0, -500);
	pEnd = ofPoint(600, 400);
	vEnd = ofVec2f(-500, 0);
	hi.setStartPoint(pStart, vStart);
	hi.setEndPoint(pEnd, vEnd);
	velocity = 0.0005f;
}

//--------------------------------------------------------------
void ofApp::update(){
	time += velocity;
	if (time > 1.0) time = 0.0f;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetHexColor(0x00FF00);
    ofDrawCircle(pStart, 5);
    ofDrawCircle(pEnd, 5);
    
    ofSetHexColor(0xFF00FF);
    ofDrawLine(pStart, pStart + vStart * 0.1);
    ofDrawLine(pEnd, pEnd + vEnd * 0.1);
    
	ofSetHexColor(0xFF0000);
	ofDrawCircle(hi.getPoint(time), 10);
	ofSetColor(255);
	ofDrawBitmapString(ofToString(time), 10, 10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
