#ifndef GRANDPARENT_H 
#define GRANDPARENT_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
class Clock
{
protected:
	//char* Time = new char[100];
	//char* Day = new char[100];
	string Day;
	string Time;
	int* Hour= new int;
	int Minute;
	int DayNumber;
public:
	virtual void  SleepTime() = 0;
	virtual void  ToWakeUp() = 0;
	virtual bool Start() = 0;
	virtual bool Close() = 0;
	Clock()
	{
		*Hour = 12;
		Minute = 30;
		DayNumber = 1;
		Day = "Понеділок";
		Time = "12:30";
	}

	virtual ~Clock()
	{
		//	delete[] Day;
		//	delete[] Time;
	}

	/*Clock operator =(const Clock & other){
		this->Hour=other.Hour;
		return *this;
	}*/
	/*Clock& operator= (const Clock & obj)
	{
		cout << endl;
		return *this;
	}*/

	void SetTime(int h, int m) {
		*Hour = h;
		Minute = m;
	}
	string GetTime() {
		if (*Hour == 24)
			Hour = 0;
		if (*Hour < 10) {
			Time = "0";
			Time += to_string(*Hour);
		}
		else
			Time = to_string(*Hour);
		Time += ":";
		if (Minute < 10)
			Time += "0";
		Time += to_string(Minute);
		if ((Minute >= 60) || (Minute < 0))
			Time = "Error Time";
		if ((*Hour > 24) || (*Hour < 0))
			Time = "Error Time";
		return Time;
	}
	void SetDay(int argumet) {
		DayNumber = argumet;
	}
	string GetDay() {
		if (DayNumber == 1)
			Day = "Понеділок";
		if (DayNumber == 2)
			Day = "Вівторок";
		if (DayNumber == 3)
			Day = "Середа";
		if (DayNumber == 4)
			Day = "Четвер";
		if (DayNumber == 5)
			Day = "П'ятниця";
		if (DayNumber == 6)
			Day = "Субота";
		if (DayNumber == 7)
			Day = "Неділя";
		if ((DayNumber > 7) || (DayNumber < 1))
			Day = "Error Day";
		return Day;
	}
	void Print() {
		GetDay();
		GetTime();
		cout << "День = " << Day << endl;
		cout << "Час = " << Time << endl;
	}

};
#endif