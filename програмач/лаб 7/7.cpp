#include "caudiovideoplayer.h"

int main()
{
	cout << "-----------Static polymorphism--------------------" << endl;
	AudioVideoPlayer a;
	a.SetVolume(25);
	a.SetSong("Rammstein");
	a.SetVideoName("MR. Robot");
	a.SetVoltage(20);
	a.SetModel("LG");
	a.SetPrice(4500);
	a.SetCountry("USA");
	a.TurnOn();
	AudioVideoPlayer b = a;// реалізація перегрузки= і самого динамічногшо поліморфізму через вказівник на базовий клас
	b.SetVolume(150);
	b.SetSong("Slipknot");
	b.SetVideoName("Black Mirror");
	cout << "--------------------Dynamic polymorphism-------------------" << endl;
	AudioVideoPlayer *action;
	action = &b;// цьому вказівнику присвоюємо ссилку на об'єкт  b
	action->CheckVolume();// і викликаємо безполяредньо метод грати музику,тобто уникаємо зайвих дій і робим програму гнучкішою
}
