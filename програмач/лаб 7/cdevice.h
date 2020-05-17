 #include <iostream>
#include<string>
#include"time.h"
using namespace std;

class Device {// базовий клас від якого наслідуєм класи 2,3
protected:
	int *voltage;// напруга
	string model;

public:
	Device() {
		voltage = new int(0);
	}

	virtual~Device() {
		delete voltage;
	}
	Device(const Device&object) {//  конструктор копіювання,викликавши його ми копіюємо дані з попереднього об'єкту в новий 
		this->model = object.model;//і потім юзаєм оператор присвоєннф
		this->voltage = new int(*object.voltage);
	}
	virtual void TurnOn() = 0;//віртуальний метод
	virtual void  CheckVolume() {//для реалізації динамічного поліморфізму нам треба переориділити ті методи,що будуть юзатись в класах 2 і 3\
	
	}
	virtual void PlayVideo() {
	
	}

	void SetModel(string Model) {
		this->model = Model;
	}
	string GetModel() {
		return model;
	}
	void SetVoltage(int Voltage) {
		voltage = new int(Voltage);
	}
	int GetVoltage() {
		return *voltage;
	}
	Device&operator=(const Device&obj) {//перегрузка =
		this->model = obj.model;
		this->voltage = new int(*obj.voltage);
		return *this;
	}
};
