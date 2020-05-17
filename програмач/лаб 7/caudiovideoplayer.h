#include "secondary.h"
class AudioVideoPlayer : public AudioPlayer, public VideoPlayer {//тут наслідуємо клас 2 і 3

private:
	int price;
	string country;

public:

	void SetCountry(string name) {
		this->country = name;
	}
	string GetCountry() {
		return country;
	}

	void SetPrice(int cost) {
		this->price = cost;
	}
	int GetPrice() {
		return price;
	}


	void TurnOn() //тут переоприділяем метод,але можна було переоприділяти в класах 2,3 залежно від реалізації
	  // сама суть реалізації того,якщо напруга дорівнює 0,то по суті програма не працює далі
	{
		if (!GetVoltage()) {
			cout << "Без електрики" << endl;
		}
		else MultiFunctoinal();
	}

	void Show(){
		cout<<"Модель: "<<GetModel()<<endl;
		cout<<"Країна виробник: "<<GetCountry()<<endl;
		cout<<"Ціна: "<<GetPrice()<<endl;
	}

	void MultiFunctoinal() {

		cout << "Я пристрій, моя модель " << GetModel() << endl;
	Continue:
		cout << "Що ви хочете зробити?(listen/watch/show)" << endl;
		string choose;
		cin >> choose;
		if (choose == "listen") {
			CheckVolume();
		}
		if (choose == "watch"){
			SetQuality();
		}
		if (choose == "show"){
			Show();
		}
		cout << "Хочете робити ще?(yes,no)" << endl;
		string desition;
		cin >> desition;
		if (desition == "yes") {
			goto Continue;
		}

	}
	
	AudioVideoPlayer&operator=(const AudioVideoPlayer&obj) {//перегрузка =
		this->model = obj.model;
		this->voltage = new int(*obj.voltage);
		this->volume = obj.volume;
		this->song = obj.song;
		this->NameOFVideo = obj.NameOFVideo;
		this->quality = obj.quality;
		return *this;
	}

};
