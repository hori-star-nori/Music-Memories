#pragma once

#include "ofMain.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void mouseMoved(int x, int y );
		void mousePressed(int x, int y, int button);
		
		
		//class ofSoundPlayer �́@�I�u�W�F�N�gsynth_����
		ofSoundPlayer  synth_1;
		ofSoundPlayer  synth_2;
		ofSoundPlayer  synth_3;
		ofSoundPlayer  synth_4;
		ofSoundPlayer  synth_5;
		ofSoundPlayer  synth_6;
		ofSoundPlayer  synth_7;
		ofSoundPlayer  synth_8;
		ofSoundPlayer  synth_9;

		//class ofSoundPlayer �́@�I�u�W�F�N�gbeats_����
		ofSoundPlayer  beats_1;
		ofSoundPlayer  beats_2;
		ofSoundPlayer  beats_3;
		ofSoundPlayer  beats_4;
		ofSoundPlayer  beats_5;
		ofSoundPlayer  beats_6;
		ofSoundPlayer  beats_7;
		ofSoundPlayer  beats_8;
		ofSoundPlayer  beats_9;

		//class ofSoundPlayer �́@�I�u�W�F�N�gvocals_����
		ofSoundPlayer  vocals_1;
		ofSoundPlayer  vocals_2;
		ofSoundPlayer  vocals_3;
		ofSoundPlayer  vocals_4;
		ofSoundPlayer  vocals_5;
		ofSoundPlayer  vocals_6;
		ofSoundPlayer  vocals_7;
		ofSoundPlayer  vocals_8;
		ofSoundPlayer  vocals_9;

		
		//�w�i�ɕ\�������摜
		//class ofImage �́@�I�u�W�F�N�gimg_vocals_haato_����
		ofImage img_vocals_haato_1;
		ofImage img_vocals_haato_2;
		ofImage img_vocals_haato_3;
		ofImage img_vocals_haato_4;
		ofImage img_vocals_haato_7;
		ofImage img_vocals_haato_8;

		//�}�E�X�ړ����ɕ\�������摜
		ofImage img_mouse;
	

        //�}�E�X�N���b�N���ɕ\�������摜
		//class ofImage �́@�I�u�W�F�N�gimg_beats_����
		ofImage img_beats_1;
		ofImage img_beats_2;
		ofImage img_beats_3;
		ofImage img_beats_4;
		ofImage img_beats_5;
		ofImage img_beats_6;
		ofImage img_beats_7;
		ofImage img_beats_8;
		ofImage img_beats_9;

		//class ofImage �́@�I�u�W�F�N�gimg_synth_����
		ofImage img_synth_1;
		ofImage img_synth_2;
		ofImage img_synth_3;
		ofImage img_synth_4;
		ofImage img_synth_5;
		ofImage img_synth_6;
		ofImage img_synth_7;
		ofImage img_synth_8;
		ofImage img_synth_9;

		//class ofImage �́@�I�u�W�F�N�gimg_vocals_����
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
