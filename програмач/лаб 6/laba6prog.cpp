// laba6prog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header1.h"
#include "Header2.h"
#include "Windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Clock MyClock;
	Alarm MyAlarm;
	int choice, hour, minute, day;
	while (true)
	{
		cout << "Налаштувати Годинник – Натисніть 1" << endl;
		cout << "Налаштувати Будильник - Натисніть 2" << endl;
		cout << "Показати Дані - Натисніть 3" << endl;
		cout << "Вихід – Натисніть Будь Яку Іншу Клавішу" << endl;
		cin >> choice;
		//system("cls");
	/*	if(choice == 1)
{
cout<<"Введіть Годину [0-24]\n";
cin>>hour;
cout<<"Введіть Хвилину [0-59]\n";
cin>>minute;
cout<<"Введіть День [1-7]\n";
cin>>day;
MyClock.SetTime(hour,minute);
MyClock.SetDay(day);
}*/
		if (choice == 2) {
			MyAlarm.Start();
			cout << "Введіть Годину [0-24]\n";
			cin >> hour;
			cout << "Введіть Хвилину [0-59]\n";
			cin >> minute;
			cout << "Введіть День [1-7]\n";
			cin >> day;
			MyAlarm.SetTime(hour, minute);
			MyAlarm.SetDay(day);
			cout << "Встановити Будильник?\n";
			cout << "Натисніть 1 - Щоб Відповісти Так\n";
			cout << "Натисніть Будь Яку Іншу Клавішу - Щоб Відповісти Ні\n";
			cin >> day;
			if (day == 1) {
				MyAlarm.SetWork(day);
				cout << "Введіть Годину [0-24]\n";
				cin >> hour;
				cout << "Введіть Хвилину [0-59]\n";
				cin >> minute;
				cout << "Введіть День [1-7]\n";
				cin >> day;
				MyAlarm.SetWakeUp(hour, minute);
				MyAlarm.SetWakeUpDay(day);
				cout << "Дізнатись Час До Дзвінка Будильника?\n";
				cout << "Натисніть 1 - Щоб Відповісти Так\n";
				cout << "Натисніть Будь Яку Іншу Клавішу - Щоб Відповісти Ні\n";
				cin >> day;
				if (day == 1)
					MyAlarm.ToWakeUp();
			}
			else
				MyAlarm.SetWork(0);
			cout << "Дізнатись Тривалість Сну?\n";
			cout << "Натисніть 1 - Щоб Відповісти Так\n";
			cout << "Натисніть Будь Яку Іншу Клавішу - Щоб Відповісти Ні\n";
			cin >> day;
			if (day == 1)
				MyAlarm.SleepTime();
			MyAlarm.Close();
		}
		if (choice == 3) {
			cout << "Годинник:\n";
			//MyClock.Print();
			cout << "--------------------------\n";
			MyAlarm.Show();
		}
		if (choice > 3 || choice < 1)
			break;
	}
	return(0);
}