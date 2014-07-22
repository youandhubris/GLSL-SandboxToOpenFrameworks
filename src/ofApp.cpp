#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofDisableArbTex();
    
    glslsandbox.load("shader/glslsandbox");
    
    color_noise.loadImage("textures/color_noise.jpg");
    gray_rock.loadImage("textures/gray_rock.jpg");
    shell.loadImage("textures/shell.jpg");
    vulcanic_rock.loadImage("textures/vulcanic_rock.jpg");
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
    
    glslsandbox.begin();
    glslsandbox.setUniform2f("resolution", ofGetWidth(), ofGetHeight());
    glslsandbox.setUniform1f("time", ofGetElapsedTimef());
    glslsandbox.setUniform2f("mouse", mouseX, mouseY);
    glslsandbox.setUniformTexture("iChannel0", color_noise, 1);
    glslsandbox.setUniformTexture("iChannel1", gray_rock, 2);
    glslsandbox.setUniformTexture("iChannel2", shell, 3);
    glslsandbox.setUniformTexture("iChannel3", vulcanic_rock, 4);
    
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    
    glslsandbox.end();
    
    /* TO DO
    NEW: This 'uniform' vec2 indicates the size of the visible area of the virtual surface.
    uniform vec2 surfaceSize;
     */
    
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
