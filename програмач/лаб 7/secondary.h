#include "cdevice.h"
class AudioPlayer : virtual public Device// клас сканнер,унасідуємо від 1 класу+ пишем virtual   шоб могти переоприділити віртуальний метод
{
protected:
	int volume;
	string song;
public:
	void SetVolume(int volume) {
		this->volume = volume;
	}
	int GetVolume() {
		return volume;
	}
	void SetSong(string song) {
		this->song = song;
	}
	string GetSong() {
		return song;
	}
	void CheckVolume() {
		cout << "Я Програю Пісню " << GetSong() << endl;
		if (volume < 5) {
			ChangeVolumeLevel();
		}
		if (volume > 20) {
			ChangeVolumeLevel();
		}
	}
	void ChangeVolumeLevel() {
		if (volume < 5) {
			cout << "Рівень гучності невеликий. Ви хочете збільшити його?(yes/no)" << endl;
				string choose;
			    cin >> choose;
				if (choose == "yes") {
					int level;
					cout << "Введіть значення збільшення?" << endl;
					cin >> level;
					volume += level;
					cout << "Ваш поточний рівень:" << volume << endl;
				}		
		}
		if (volume > 20) {
			string choose;
			cout<<"Рівень гучності великий. Це дуже небезпечно для вашого здоров'я. Ви хочете зменшити його?(yes/no)"<<endl;
			cin >> choose;
			if (choose == "yes") {
				int level;
				cout << "Введіть значення зменшення?" << endl;
				cin >> level;
				volume -= level;
				cout << "Ваш поточний рівень гучності:" << volume << endl;
			}
		}
	}
	
	AudioPlayer&operator=(const AudioPlayer&obj) {//перегрузка =
		this->model = obj.model;
		this->voltage = new int(*obj.voltage);
		this->volume = obj.volume;
		this->song = obj.song;
		return *this;
	}
	
};


class VideoPlayer : virtual public Device// та сама суть шо і в 2 класі
{

protected:
	string NameOFVideo;
	int quality;

public:
	void SetVideoName(string name) {
		this->NameOFVideo = name;
	}
	string GetVideoName() {
		return NameOFVideo;
	}

	void SetQuality() {
		this->quality =quality;
		cout << "Введіть якість відео: " << endl;
		cin >> quality;
		PlayVideo();
	}
	int GetQuality() {
		return quality;
	}

	void PlayVideo() {
		cout << "Зараз відтворюється відео: " << GetVideoName() << endl;
		if (quality < 480) {
			srand(time(0));
			cout << "Відео низької якості, бажаєте збільшити якість відео?(yes/no)" << endl;
			string choose;
			cin >> choose;
			if (choose == "yes") {
				quality += (rand() % 1000);
				cout << "Поточна якість відео: " << quality << endl;
			}
		}
		if (quality >720 ) {
			cout << "Рівень якості хороший. Насолоджуйтесь! " << endl;
		}
	}
	
	VideoPlayer&operator=(const VideoPlayer&obj) {//перегрузка =
		this->model = obj.model;
		this->voltage = new int(*obj.voltage);
		this->NameOFVideo = obj.NameOFVideo;
		this->quality = obj.quality;
		return *this;
	}
	
};

