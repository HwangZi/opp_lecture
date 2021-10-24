/* (과제 4) 다음 코드는 강의자료 p49~53의 adapter 디자인 패턴 적용 JAVA 프로그램을 동일한 로직을 수행하는 C++ 프로그램이다.
	주석처리된 부분을 채워 코드를 완성시키시오.(강의자료의 Java 코드 참고)*/


#include <iostream>

class MediaPlayer {
public:
	virtual void play(std::string audioType, std::string fileName) = 0;
};

class AdvancedMediaPlayer {
public:
	virtual void playVlc(std::string fileName) = 0;
	virtual void playMp4(std::string fileName) = 0;
};

class VlcPlayer : public AdvancedMediaPlayer {
public:
	void playVlc(std::string fileName) {
		std::cout << "Playing vlc file. Name : " + fileName << std::endl;
	}

	void playMp4(std::string fileName) {
		//do nothing
	}
};

class Mp4Player : public AdvancedMediaPlayer {
public:
	void playVlc(std::string fileName) {
		//do nothing
	}

	void playMp4(std::string fileName) {
		std::cout << "Playing mp4 file. Name : " + fileName << std::endl;
	}
};

class MediaAdapter : MediaPlayer {
public:
	// AdvancedMediaPlayer object 생성, C++에서는 object대신 object 포인터를 생성하고 NULL로 초기화 해야함.
	AdvancedMediaPlayer* advancedMusicPlayer = NULL;


	MediaAdapter(std::string audioType) {
		if (!audioType.compare("vlc")) {
			// advancedMusicPlayer 객체에 VlcPlayer object할당
			advancedMusicPlayer = new VlcPlayer();
		}
		else if (!audioType.compare("mp4")) {
			// advancedMusicPlayer 객체에 Mp4Player object 할당
			advancedMusicPlayer = new Mp4Player();
		}
	}

	void play(std::string audioType, std::string fileName) {
		if (!audioType.compare("vlc")) {
			// 선택된 audioType에 따라 advancedMusicPlayer에 할당된 class의 play{audioType} 함수 호출
			advancedMusicPlayer -> playVlc(fileName);
		}
		else if (!audioType.compare("mp4")) {
			// 선택된 audioType에 따라 advancedMusicPlayer에 할당된 class의 play{audioType} 함수 호출
			advancedMusicPlayer -> playMp4(fileName);
		}
	}
};

class AudioPlayer : MediaPlayer {
public:
	// MediaAdapter object 생성, C++에서는 아래의 new 연산자를 사용하기 위해 object대신 object 포인터를 생성해야함.
	MediaAdapter* mediaAdapter = NULL;

	void play(std::string audioType, std::string fileName) {
		if (!audioType.compare("mp3")) {
			std::cout << "Playing mp3 file. Name : " + fileName << std::endl;
		}
		else if (!audioType.compare("vlc") || !audioType.compare("mp4")) {
			// MediaAdapter Class의 object인 mediaAdapter 생성
			// mediaAdapter의 play 호출, mediaAdapter는 포인터이므로 화살표(->) 연산자 활용
			mediaAdapter = new MediaAdapter(audioType);
			mediaAdapter -> play(audioType, fileName);
		}
		else
			std::cout << "Invalid media. : " + audioType + " format not supported" << std::endl;
	}
};

int main() {
	AudioPlayer* audiaPlayer = new AudioPlayer();

	audiaPlayer->play("mp3", "beyond the horizon.mp3");
	audiaPlayer->play("mp4", "alone.mp4");
	audiaPlayer->play("vlc", "far far away.vlc");
	audiaPlayer->play("avi", "mind me.avi");

	return 0;
}
