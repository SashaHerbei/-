// kinzeve1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header1.h"
#include <iostream>
#include <ctime>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	CDice dice;
	cout << "Значення за замовчуванням" << endl;
	cout << "Значення на всiх костях: " << dice.getDice1() << endl;
	cout << "Загальна кiлькiсть очкiв: " << dice.getZagalne() << endl << endl;
	CDice dices;
	while (true) {
		cout << "- - -  - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - "<<endl;
		cout << "***Оберiть дiю***" << endl;
		cout << "Кинути костi - натиснiть 1" << endl;
		cout << "Дiзнатись значення на костях"<<endl<<"та загальний рахунок пiсля останнього кидання - натиснiть 2" << endl;
		cout << "Обнулити значення костей та рахунок після останнього кидання - натиснiть 3" << endl;
		cout << "Завершити - натиснiть 4" << endl;
		cout << "- - -  - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - "<<endl;

		int func;
		cin >> func;

		if (func == 1) {
			dices.toss_dices();
		}
		if (func == 2) {
			dices.info();
		}
		if (func == 3) {
			dices.nul();
		}
		if (func == 4) {
			break;
		}

	}
	
}
