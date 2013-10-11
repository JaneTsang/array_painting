#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    
    ofBackground(255, 255, 255);
//
//    for(int i=0; i<NUM; i++){
//        pos[i]=i*5;
//
//}
//ofSetBackgroundAuto(FALSE);
    
}




//------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    
    
    x1=700+mouseX;
   //
   // ofSetColor(0);
    // ofRect(50,50,1500,1500);
    for (int i=1; i<NUM; i=i+2) {
      
        float yy=mouseY*0.4;
        
        x1=x1*sqrt(2)/2;
        
        //x1+=5;
    
        ofPushMatrix();
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
      
        int f= i%2;
        ofSetColor(f*255);
        float r = ofMap(yy/10, 0,60, 0, 360);
        ofRotateZ(r);
        ofRect(0,0,x1*2,x1*2);
 
//        ofSetColor((f+1)*255);
//        ofCircle(0,0, x1);
        
        int ff= (i+1)%2;
        ofSetColor(ff*255);
       ofCircle(0,0, x1);
   
        
        ofPopMatrix();
  
 }
    
    
    
//        if (i%2==0) {
//            
//        
//        ofSetColor(255);
//           
//            ofTriangle(250, 50, pos[i],500,  500, 500);
//        }
//            else{
//                ofSetColor(0);
//           
//                ofTriangle(250, 50, pos[i], 500,500, 500);
//
//                ofTriangle(2, 2, 4, 4, 4, 4);
//                
//        }
//
//    }
//    
//    for (int i=0; i<NUM; i++) {
//        if (i%2==0) {
//            
//            
//            ofSetColor(255);
//            
//            ofTriangle(250, 50, 500,500,  500, pos[i]);
//        }
//        else{
//            ofSetColor(0);
//            
//            ofTriangle(250, 50, 500, 500,500, pos[i]);
//            
//            ofTriangle(2, 2, 4, 4, 4, 4);
//            
//        }
        
   


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
