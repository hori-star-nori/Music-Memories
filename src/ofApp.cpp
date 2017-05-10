#include "ofApp.h"

float n =1.5;
float m1 = 4;
float m2 = 7;

float loc_x;
float loc_y;

float X;
float Y;


//--------------------------------------------------------------
void ofApp::setup(){
	
	//マウスクリック時に流れる曲
	//x <= widthStep*3の範囲
	synth_1.load("sounds/01 be with you. (mp3cut.net).mp3");
	synth_2.load("sounds/01 GREEN DAYS (mp3cut.net).mp3");
	synth_3.load("sounds/01 KISSして (mp3cut.net).mp3");
	synth_4.load("sounds/01 Winter Love (mp3cut.net).mp3");
	synth_5.load("sounds/01 ありがとう (mp3cut.net).mp3");
	synth_6.load("sounds/01 こいのうた (mp3cut.net).mp3");
	synth_7.load("sounds/01 ヒカリへ (mp3cut.net).mp3");
	synth_8.load("sounds/01 ヘビーローテーション (mp3cut.net).mp3");
	synth_9.load("sounds/レミオロメン／Flash and Gleam_13 ３月９日  (mp3cut.net).mp3");

	//x >= widthStep*3 && x < widthStep*6の範囲
	beats_1.load("sounds/01 粉雪 (mp3cut.net).mp3");
	beats_2.load("sounds/01 恋愛写真 (mp3cut.net).mp3");
	beats_3.load("sounds/1-05 赤い糸 (mp3cut.net).mp3");
	beats_4.load("sounds/1-10 マイガール (mp3cut.net).mp3");
	beats_5.load("sounds/02 HANABI (mp3cut.net).mp3");
	beats_6.load("sounds/02 ひと恋めぐり (mp3cut.net).mp3");
	beats_7.load("sounds/2-05 Love so sweet (mp3cut.net).mp3");
	beats_8.load("sounds/2-07 Happiness (mp3cut.net).mp3");
	beats_9.load("sounds/2-09 One Love (mp3cut.net).mp3");

	//x >= widthStep * 7 && x < widthStep * 8 && y < heighStep * 1の範囲
	vocals_1.load("sounds/03 かたちあるもの (mp3cut.net).mp3");
	vocals_2.load("sounds/04 First Love (mp3cut.net).mp3");
	vocals_3.load("sounds/04 思い出せなくなるその日まで (mp3cut.net).mp3");
	vocals_4.load("sounds/04 楓 (mp3cut.net).mp3");
	vocals_5.load("sounds/からっぽ (mp3cut.net).mp3");
	vocals_6.load("sounds/10 NAO (mp3cut.net).mp3");
	vocals_7.load("sounds/11 ｂｅｌｉｅｖｅ (mp3cut.net).mp3");
	vocals_8.load("sounds/11 祈り ～ 涙の軌道 (mp3cut.net).mp3");
	vocals_9.load("sounds/いつか (mp3cut.net).mp3");
	
	//背景画像の読み込み
	img_vocals_haato_1.load("ハート1.jpg");
	img_vocals_haato_2.load("ハート2.jpg");
	img_vocals_haato_3.load("ハート3.jpg");
	img_vocals_haato_4.load("ハート4.jpg");
	img_vocals_haato_7.load("ハート7.jpg");
	img_vocals_haato_8.load("ハート8.jpg");

	//マウス移動時の現在地に表示される画像
	img_mouse.load("imag_mouse.png");
	
	
	//マウスクリック時に表示される画
	//x <= widthStep*3の範囲
	img_synth_1.load("SAKURA_1.jpg");// be wity you boa
	img_synth_2.load("S__FAMILY_B.jpg");//Green day 槙原
	img_synth_3.load("S__FAMILY_3.jpg");//Kiss して　
	img_synth_4.load("S__200703_3.jpg");//winter love boa
	img_synth_5.load("S__200503_2.jpg");//ありがとう
	img_synth_6.load("SAKURA_2.jpg");//こいのうた
	img_synth_7.load("S__FAMILY_1.jpg");//ヒカリヘ
	img_synth_8.load("S__FAMILY_2.jpg");//ヘビーローテーション
	img_synth_9.load("S__200503_1.jpg");//レミオロメン　３月９日
	

	//x >= widthStep*3 && x < widthStep*6の範囲
	img_beats_1.load("S__200503_1.jpg");//粉雪
	img_beats_2.load("S__200503_2.jpg");//恋愛写真
	img_beats_3.load("S__200703_2.jpg");//赤い糸
	img_beats_4.load("S__200703_1.jpg");//マイガール　嵐
	img_beats_5.load("S__200107_2.jpg");//HANABI
	img_beats_6.load("S__200504.jpg");//ひと恋めぐり
	img_beats_7.load("S__200503_1.jpg");//嵐　Love so sweet
	img_beats_8.load("S__FAMILY_A.jpg");//嵐　Happiness
	img_beats_9.load("S__BLASS_1.jpg");//嵐　one love
	

	//x >= widthStep * 7 && x < widthStep * 8 && y < heighStep * 1の範囲
	img_vocals_1.load("S__200107_1.jpg");//かたちあるもの
	img_vocals_2.load("S__200504.jpg");//First Love
	img_vocals_3.load("S__200703_2.jpg");//思い出せなくなるその日まで
	img_vocals_4.load("S__FALL_1.jpg");//楓
	img_vocals_5.load("S__FALL_2.jpg");//からっぽ
	img_vocals_6.load("S__200504.jpg");//NAO
	img_vocals_7.load("S__200504.jpg");//ｂｅｌｉｅｖｅ
	img_vocals_8.load("S__200703_1.jpg");//祈り
	img_vocals_9.load("S__200703_3.jpg");//いつか　ゆず
	

	//x <= widthStep*3の範囲
	synth_1.setVolume(1.0f);
	synth_2.setVolume(1.0f);
	synth_3.setVolume(1.0f);
	synth_4.setVolume(1.0f);
	synth_5.setVolume(1.0f);
	synth_6.setVolume(1.0f);
	synth_7.setVolume(1.0f);
	synth_8.setVolume(1.0f);
	synth_9.setVolume(1.0f);

	//x >= widthStep*3 && x < widthStep*6の範囲
	beats_1.setVolume(1.0f);
	beats_2.setVolume(1.0f);
	beats_3.setVolume(1.0f);
	beats_4.setVolume(1.0f);
	beats_5.setVolume(1.0f);
	beats_6.setVolume(1.0f);
	beats_7.setVolume(1.0f);
	beats_8.setVolume(1.0f);
	beats_9.setVolume(1.0f);

	//x >= widthStep * 7 && x < widthStep * 8 && y < heighStep * 1の範囲
	vocals_1.setVolume(1.0f);
	vocals_2.setVolume(1.0f);
	vocals_3.setVolume(1.0f);
	vocals_4.setVolume(1.0f);
	vocals_5.setVolume(1.0f);
	vocals_6.setVolume(1.0f);
	vocals_7.setVolume(1.0f);
	vocals_8.setVolume(1.0f);
	vocals_9.setVolume(1.0f);
	
}

//--------------------------------------------------------------
void ofApp::update(){

	ofBackground(255,255,255);

	// update the sound playing system:
	ofSoundUpdate();

}

//--------------------------------------------------------------
void ofApp::draw(){

	float widthDiv = ofGetWidth() / 3.0f;
	float height = ofGetHeight() / 6;
	float width = widthDiv / 3;


	

	//x <= widthStep*3の範囲 synth:
	//背景の設定
	ofSetHexColor(0xFFFFFF);
	
	img_vocals_haato_1.draw(width * 1, 0, 200, 200);

	img_vocals_haato_2.draw(0, height, 200, 200);
	img_vocals_haato_3.draw(width * 2, height, 200, 200);

	img_vocals_haato_4.draw(width * 1, height * 2, 200, 200);

	img_vocals_haato_7.draw(0, height * 3, 200, 200);
	img_vocals_haato_8.draw(width * 2, height * 3, 200, 200);

	img_vocals_haato_1.draw(width * 1, height * 4, 200, 200);

	img_vocals_haato_2.draw(0, height * 5, 200, 200);
	img_vocals_haato_3.draw(width * 2, height * 5, 180, 180);

	//x >= widthStep*3 && x < widthStep*6の範囲 beats:
	//背景の設定
	ofSetHexColor(0xffffff);
	

	img_vocals_haato_4.draw(width * 3, 0, 200, 200);
	img_vocals_haato_8.draw(width * 5, 0, 200, 200);

	img_vocals_haato_7.draw(width * 4, height * 1, 200, 200);

	img_vocals_haato_1.draw(width * 3, height * 2, 200, 200);
	img_vocals_haato_2.draw(width * 5, height * 2, 200, 200);

	img_vocals_haato_3.draw(width * 4, height * 3, 200, 200);

	img_vocals_haato_4.draw(width * 3, height * 4, 200, 200);
	img_vocals_haato_7.draw(width * 5, height * 4, 200, 200);

	img_vocals_haato_8.draw(width * 4, height * 5, 200, 200);

	//x >= widthStep * 7 && x < widthStep * 8 && y < heighStep * 1の範囲 vocals:
	//背景の設定

	ofSetHexColor(0xFFFFFF);

	img_vocals_haato_7.draw(width * 7, 0, 200, 200);

	img_vocals_haato_1.draw(width * 6, height, 200, 200);
	img_vocals_haato_2.draw(width * 8, height, 200, 200);

	img_vocals_haato_8.draw(width * 7, height * 2, 200, 200);
	
	img_vocals_haato_4.draw(width * 6, height*3, 200, 200);
	img_vocals_haato_7.draw(width * 8, height*3, 200, 200);

	img_vocals_haato_3.draw(width * 7, height*4, 200, 200);

	img_vocals_haato_2.draw(width * 6, height*5, 200, 200);
	img_vocals_haato_1.draw(width * 8, height *5, 180, 180);

	//マウスの現在位置に画像を常に表示
	img_mouse.draw(loc_x-80,loc_y-60,160,120);
	

	//x <= widthStep*3の範囲 synth:
	//マウスクリック時に音楽が再生されたときに画像（写真）を表示する
	if (synth_1.isPlaying()) { 
		ofSetHexColor(0xFFFFFF);

		//マウスクリック時の画像の表示位置、サイズ
		img_synth_1.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);
	}

	else if (synth_2.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_synth_2.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);
    }

	else if (synth_3.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_synth_3.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

			}

	else if (synth_4.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_synth_4.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (synth_5.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_synth_1.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

			}

	else if (synth_6.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_synth_6.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (synth_7.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_synth_7.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (synth_8.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_synth_8.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (synth_9.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_synth_9.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}


	//x >= widthStep*3 && x < widthStep*6の範囲 beats:
	//マウスクリック時に音楽が再生されたときに画像（写真）を表示する

	if (beats_1.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_1.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);
	}

	else if (beats_2.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_2.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (beats_3.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_3.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (beats_4.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_4.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (beats_5.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_5.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (beats_6.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_6.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (beats_7.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_7.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (beats_8.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_8.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (beats_9.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_beats_9.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}


	//x >= widthStep * 7 && x < widthStep * 8 && y < heighStep * 1の範囲 vocals:
	//マウスクリック時に音楽が再生されたときに画像（写真）を表示する

	if (vocals_1.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_1.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);
		
		}

	else if (vocals_2.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_2.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}
	
	else if (vocals_3.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_3.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (vocals_4.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_4.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (vocals_5.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_5.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (vocals_6.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_6.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (vocals_7.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_7.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (vocals_8.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_8.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

	else if (vocals_9.isPlaying()) {
		ofSetHexColor(0xFFFFFF);
		//マウスクリック時の画像の表示位置、サイズ
		img_vocals_9.draw(ofGetWidth() / m1, ofGetHeight() / m2, 1600 / n, 1200 / n);

		}

}


//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
	//マウスの現在位置をloc_x、loc_yに入力
	loc_x = x;
	loc_y = y;
}


//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
	float widthStep = ofGetWidth() / 9.0f;
	float heighStep = ofGetHeight() / 6.0f;

//x <= widthStep*3の範囲
//音楽開始
	if (x >= widthStep * 1 && x < widthStep * 2 && y < heighStep * 1) {
		synth_1.play();
		synth_1.setSpeed(1.0f);

	}
// 音楽停止
	else {
		synth_1.stop(); //synth is stoped

		}

//音楽開始
	if (x < widthStep * 1 && y >= heighStep && y < heighStep * 2) {
		synth_3.play();
		synth_3.setSpeed(1.0f);
	}

// 音楽停止
	else {
		synth_3.stop(); //synth is stoped
	}
	
//音楽開始	
	if (x >= widthStep * 2 && x < widthStep * 3 && y >= heighStep && y < heighStep * 2) {
		synth_4.play();
		synth_4.setSpeed(1.0f);
	}

// 音楽停止
	else {
		synth_4.stop(); //synth is stoped
	}

//音楽開始
	if (x >= widthStep * 1 && x < widthStep * 2 && y >= heighStep * 2 && y < heighStep * 3) {
		synth_5.play();
		synth_5.setSpeed(1.0f);
	}

// 音楽停止
	else {
		synth_5.stop(); //synth is stoped
	}

//音楽開始
	if (x <  widthStep * 1 && y >= heighStep * 3 && y < heighStep * 4) {
		synth_6.play();
		synth_6.setSpeed(1.0f);
    }

// 音楽停止
	else {
		synth_6.stop(); //synth is stoped
	}

//音楽開始
	if (x >= widthStep * 2 && x < widthStep * 3 && y >= heighStep * 3 && y < heighStep * 4) {
		synth_7.play();
		synth_7.setSpeed(1.0f);
	}

// 音楽停止
	else {
		synth_7.stop(); //synth is stoped

	}

//音楽開始
	if (x >= widthStep * 1 && x < widthStep * 2 && y >= heighStep * 4 && y < heighStep * 5) {
		synth_8.play();
		synth_8.setSpeed(1.0f);
	}

// 音楽停止
	else {
		synth_8.stop(); //synth is stoped
	}
	
//音楽開始
if (x <  widthStep * 1 && y >= heighStep * 5 && y < heighStep * 6) {
		synth_9.play();
		synth_9.setSpeed(1.0f);
	}

// 音楽停止
else {
	synth_9.stop(); //synth is stoped
   }

//音楽開始
if (x >= widthStep * 2 && x < widthStep * 3 && y >= heighStep * 5 && y < heighStep * 6) {
	synth_2.play();
	synth_2.setSpeed(1.0f);
 }

// 音楽停止
else {
	synth_2.stop(); //synth is stoped
}

//x >= widthStep*3 && x < widthStep*6の範囲
//音楽開始
if (x >= widthStep * 3 && x < widthStep * 4 && y < heighStep * 1) {
	beats_1.play();
	beats_1.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_1.stop(); //beats is stoped
}

//音楽開始
if (x >= widthStep * 5 && x < widthStep * 6 && y < heighStep * 1) {
	beats_3.play();
	beats_3.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_3.stop(); //beats is stoped
}

//音楽開始
if (x >= widthStep * 4 && x < widthStep * 5 && y >= heighStep && y < heighStep * 2) {
	beats_4.play();
	beats_4.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_4.stop(); //beats is stoped
}

//音楽開始
if (x >= widthStep * 3 && x < widthStep * 4 && y >= heighStep * 2 && y < heighStep * 3) {
	beats_5.play();
	beats_5.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_5.stop(); //beats is stoped
}

//音楽開始
if (x >= widthStep * 5 && x < widthStep * 6 && y >= heighStep * 2 && y < heighStep * 3) {
	beats_6.play();
	beats_6.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_6.stop(); //beats is stoped
}

//音楽開始
if (x >= widthStep * 4 && x < widthStep * 5 && y >= heighStep * 3 && y < heighStep * 4) {
	beats_7.play();
	beats_7.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_7.stop(); //beats is stoped
}

//音楽開始
if (x >= widthStep * 3 && x < widthStep * 4 && y >= heighStep * 4 && y < heighStep * 5) {
	beats_8.play();
	beats_8.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_8.stop(); //beats is stoped
}

//音楽開始
if (x >= widthStep * 5 && x < widthStep * 6 && y >= heighStep * 4 && y < heighStep * 5) {
	beats_9.play();
	beats_9.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_9.stop(); //beats is stoped
}

//音楽開始
if (x >= widthStep * 4 && x < widthStep * 5 && y >= heighStep * 5 && y < heighStep * 6) {
	beats_2.play();
	beats_2.setSpeed(1.0f);
}

// 音楽停止
else {
	beats_2.stop(); //beats is stoped
}


//x >= widthStep * 7 && x < widthStep * 8 && y < heighStep * 1の範囲
//音楽開始
if (x >= widthStep * 7 && x < widthStep * 8 && y < heighStep * 1) {
	vocals_1.play();
	vocals_1.setSpeed(1.0f);
}

// 音楽停止
else {
	vocals_1.stop(); //vocals is stoped
}

//音楽開始
if (x >= widthStep * 6 && x < widthStep * 7 && y >= heighStep && y < heighStep * 2) {
	vocals_3.play();
	vocals_3.setSpeed(1.0f);
}

// 音楽停止
else {
	vocals_3.stop(); //vocals is stoped
}

//音楽開始
if (x >= widthStep * 8 && x < widthStep * 9 && y >= heighStep && y < heighStep * 2) {
	vocals_4.play();
	vocals_4.setSpeed(1.0f);
}

// 音楽停止
else {
	vocals_4.stop(); //vocals is stoped
}

//音楽開始
if (x >= widthStep * 7 && x < widthStep * 8 && y >= heighStep * 2 && y < heighStep * 3) {
	vocals_5.play();
	vocals_5.setSpeed(1.0f);
}

// 音楽停止
else {
	vocals_5.stop(); //vocals is stoped
}

//音楽開始
if (x >= widthStep * 6 && x < widthStep * 7 && y >= heighStep * 3 && y < heighStep * 4) {
	vocals_6.play();
	vocals_6.setSpeed(1.0f);
}

// 音楽停止
else {
	vocals_6.stop(); //vocals is stoped
}

//音楽開始
if (x >= widthStep * 8 && x < widthStep * 9 && y >= heighStep * 3 && y < heighStep * 4) {
	vocals_7.play();
	vocals_7.setSpeed(1.0f);
}

// 音楽停止
else {
	vocals_7.stop(); //vocals is stoped
}

//音楽開始
if (x >= widthStep * 7 && x < widthStep * 8 && y >= heighStep * 4 && y < heighStep * 5) {
	vocals_8.play();
	vocals_8.setSpeed(1.0f);
}

// 音楽停止
else {
	vocals_8.stop(); //vocals is stoped
}

//音楽開始
if (x >= widthStep * 6 && x < widthStep * 7 && y >= heighStep * 5 && y < heighStep * 6) {
	vocals_9.play();
	vocals_9.setSpeed(1.0f);
}
// 音楽停止
else {
	vocals_9.stop(); //vocals is stoped
}

//音楽開始
if (x >= widthStep * 8 && x < widthStep * 9 && y >= heighStep * 5 && y < heighStep * 6) {
	vocals_2.play();
	vocals_2.setSpeed(1.0f);
}
// 音楽停止
else {
	vocals_2.stop(); //vocals is stoped
}

}
