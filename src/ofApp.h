#pragma once

#include "ofMain.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void mouseMoved(int x, int y );
		void mousePressed(int x, int y, int button);
		
		
		//class ofSoundPlayer の　オブジェクトsynth_数字
		ofSoundPlayer  synth_1;
		ofSoundPlayer  synth_2;
		ofSoundPlayer  synth_3;
		ofSoundPlayer  synth_4;
		ofSoundPlayer  synth_5;
		ofSoundPlayer  synth_6;
		ofSoundPlayer  synth_7;
		ofSoundPlayer  synth_8;
		ofSoundPlayer  synth_9;

		//class ofSoundPlayer の　オブジェクトbeats_数字
		ofSoundPlayer  beats_1;
		ofSoundPlayer  beats_2;
		ofSoundPlayer  beats_3;
		ofSoundPlayer  beats_4;
		ofSoundPlayer  beats_5;
		ofSoundPlayer  beats_6;
		ofSoundPlayer  beats_7;
		ofSoundPlayer  beats_8;
		ofSoundPlayer  beats_9;

		//class ofSoundPlayer の　オブジェクトvocals_数字
		ofSoundPlayer  vocals_1;
		ofSoundPlayer  vocals_2;
		ofSoundPlayer  vocals_3;
		ofSoundPlayer  vocals_4;
		ofSoundPlayer  vocals_5;
		ofSoundPlayer  vocals_6;
		ofSoundPlayer  vocals_7;
		ofSoundPlayer  vocals_8;
		ofSoundPlayer  vocals_9;

		
		//背景に表示される画像
		//class ofImage の　オブジェクトimg_vocals_haato_数字
		ofImage img_vocals_haato_1;
		ofImage img_vocals_haato_2;
		ofImage img_vocals_haato_3;
		ofImage img_vocals_haato_4;
		ofImage img_vocals_haato_7;
		ofImage img_vocals_haato_8;

		//マウス移動時に表示される画像
		ofImage img_mouse;
	

        //マウスクリック時に表示される画像
		//class ofImage の　オブジェクトimg_beats_数字
		ofImage img_beats_1;
		ofImage img_beats_2;
		ofImage img_beats_3;
		ofImage img_beats_4;
		ofImage img_beats_5;
		ofImage img_beats_6;
		ofImage img_beats_7;
		ofImage img_beats_8;
		ofImage img_beats_9;

		//class ofImage の　オブジェクトimg_synth_数字
		ofImage img_synth_1;
		ofImage img_synth_2;
		ofImage img_synth_3;
		ofImage img_synth_4;
		ofImage img_synth_5;
		ofImage img_synth_6;
		ofImage img_synth_7;
		ofImage img_synth_8;
		ofImage img_synth_9;

		//class ofImage の　オブジェクトimg_vocals_数字
		ofImage img_vocals_1;
		ofImage img_vocals_2;
		ofImage img_vocals_3;
		ofImage img_vocals_4;
		ofImage img_vocals_5;
		ofImage img_vocals_6;
		ofImage img_vocals_7;
		ofImage img_vocals_8;
		ofImage img_vocals_9;

};
