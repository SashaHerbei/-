#include "Header1.h"
class Alarm : public Clock
{
private:
	int WakeUpHour;
	int WakeUpMinute;
	int WakeUpDay;
	bool Work;
	string UpDay;
	string WakeUp;
	int* Start_H = new int;
	int* Start_M = new int;
	int Res_H, Res_M, Des_D;
public:
	Alarm() :Clock() {
		Work = true;
		WakeUpHour = 7;
		WakeUpMinute = 30;
		WakeUpDay = 1;
	}
	Alarm& operator =(Alarm& other) {
		this->Work = other.Work;
		this->WakeUpHour = other.WakeUpHour;
		this->WakeUpMinute = other.WakeUpMinute;
		this->WakeUpDay = other.WakeUpDay;
		return *this;
	}
	bool Start() {
		cout << "Будильник Готовий До Налаштування!\n";
		return true;
	}
	bool Close() {
		cout << "Будильник Успішно Завершено\n";
		return true;
	}
	void SleepTime() {
		SetStart();
		if (WakeUpHour > *Start_H) {
			Res_H = WakeUpHour - *Start_H;
			if (WakeUpMinute > *Start_M)
				Res_M = WakeUpMinute - *Start_M;
			if (WakeUpMinute < *Start_M) {
				Res_H--;
				Res_M = 60 - *Start_M + WakeUpMinute;
			}
		}
		if (WakeUpHour < *Start_H) {
			Res_H = 24 - *Start_H + WakeUpHour;
			if (WakeUpMinute > *Start_M)
				Res_M = WakeUpMinute - *Start_M;
			if (WakeUpMinute < *Start_M) {
				Res_H--;
				Res_M = 60 - *Start_M + WakeUpMinute;
			}
		}
		if (WakeUpHour == *Start_H) {
			Res_H = 0;
			Res_M = WakeUpMinute - *Start_M;
		}
		cout << "Сон Триватиме = " << Res_H << "год. " << Res_M << "хв.\n";
	}
	void ToWakeUp() {
		if (WakeUpHour > *Hour) {
			Res_H = WakeUpHour - *Hour;
			if (WakeUpMinute > Minute)
				Res_M = WakeUpMinute - Minute;
			if (WakeUpMinute < Minute) {
				Res_H--;
				Res_M = 60 - Minute + WakeUpMinute;
			}
		}
		if (WakeUpHour < *Hour) {
			Res_H = 24 - *Hour + WakeUpHour;
			if (WakeUpMinute > Minute)
				Res_M = WakeUpMinute - Minute;
			if (WakeUpMinute < Minute) {
				Res_H--;
				Res_M = 60 - Minute + WakeUpMinute;
			}
		}
		if (WakeUpHour == *Hour) {
			Res_H = 0;
			Res_M = WakeUpMinute - Minute;
		}
		cout << "До Дзвінка Будильника Залишилось: " << Res_H << "год. " << Res_M << "хв.\n";
	}
	void SetStart() {
		cout << "Введіть Годину Початку Сну:\n";
		cin >> *Start_H;
		cout << "Введіть Хвилину Початку Сну:\n";
		cin >> *Start_M;
	}

	void SetWakeUp(int h, int m) {
		WakeUpHour = h;
		WakeUpMinute = m;
	}
	string GetWakeUp() {
		if (WakeUpHour == 24)
			WakeUpHour = 0;
		if (WakeUpHour < 10) {
			WakeUp = "0";
			WakeUp += to_string(WakeUpHour);
		}
		else
			WakeUp = to_string(WakeUpHour);
		WakeUp += ":";
		if (WakeUpMinute < 10)
			WakeUp += "0";
		WakeUp += to_string(WakeUpMinute);
		if ((WakeUpMinute >= 60) || (WakeUpMinute < 0))
			WakeUp = "Error Time";
		if ((WakeUpHour > 24) || (WakeUpHour < 0))
			WakeUp = "Error Time";
		return WakeUp;
	}
	void SetWakeUpDay(int argumet) {
		WakeUpDay = argumet;
	}
	string GetWakeUpDay() {
		if (WakeUpDay == 1)
			UpDay = "Понеділок";
		if (WakeUpDay == 2)
			UpDay = "Вівторок";
		if (WakeUpDay == 3)
			UpDay = "Середа";
		if (WakeUpDay == 4)
			UpDay = "Четвер";
		if (WakeUpDay == 5)
			UpDay = "П'ятниця";
		if (WakeUpDay == 6)
			UpDay = "Субота";
		if (WakeUpDay == 7)
			UpDay = "Неділя";
		if ((WakeUpDay > 7) || (WakeUpDay < 1))
			UpDay = "Error Day";
		return UpDay;
	}
	void SetWork(int k) {
		if (k == 1)
			Work = true;
		else
			Work = false;
	}
	bool GetWork() {
		return Work;
	}
	void Show() {
		GetDay();
		GetTime();
		GetWakeUp();
		GetWork();
		GetWakeUpDay();
		cout << "Будильник:\n";
		cout << "Зараз:\n";
		Print();
		cout << "--------------------------\n";
		if (Work == true) {
			cout << "Будильник Встановлено\n";
			cout << "Час Дзінка:\n";
			cout << "День = " << UpDay << endl;
			cout << "Час = " << WakeUp << endl;
		}
		if (Work == false)
			cout << "Будильник Не Встановлено\n";
	}

};
