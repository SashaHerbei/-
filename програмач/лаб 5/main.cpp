// kinzeve.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <ctime>
#include "CDice.h"
#include <Windows.h>
#include<stdlib.h>
#include <iostream>


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	
	CDice dices;
	
	while (true) {
		cout << "- - -  - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		cout << "***Оберiть дiю***" << endl;
		cout << "Кинути костi - натиснiть 1" << endl;
		cout << "Показати результат роботи перевантажених операторів < > ++ виводу (для цього спочатку натисніть 1) - натисніть 2 " << endl;
		cout << "Показати результат роботи перевантажених операторів += = вводу - натисніть 3"<<endl;
		cout << "Завершити- натисніть 4" << endl;
		cout << "- - -  - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - " << endl;

		int func;
		cin >> func;

		if (func == 1) {
			dices.toss_dices();
			++dices; //ілюструє роботу перевантаженого оператора ++

		}
	
		if (func == 2) {
			cout <<"Ви здійснили "<< " "<< dices.tosses<<" "<< " кидань/ння" << endl;
			cout << "Значення за замовчуванням, яке використовуємо для порівняння" << " " << dices.porivn << " " << endl;
			cout << "Значення на костях" <<endl<<"Значення на першій кості: "<< dices.dice1 << endl<< "Значення на другій кості: "<<dices.dice2<<endl<< "Значення на третій кості: " <<dices.dice3<<endl<<endl; // ілюструє роботу перевантаженого оператора виводу
			if (dices.dice1 > dices.porivn) { // ілюструє роботу перевантаженого оператора >
				cout << "Значення на першій кості більше за 4 " << endl << endl;
			}
			else if (dices.dice1 < dices.porivn) {// ілюструє роботу перевантаженого оператора <
				cout << "Значення на першій кості менше  за 4" << endl << endl;
			}
			else if (dices.dice1 == dices.porivn) {// ілюструє роботу перевантаженого оператора <
				cout << "Значення на першій кості дорінює 4" << endl << endl;
			}
			if (dices.dice2 > dices.porivn) {
				cout << "Значення на другій кості більше за 4 " << endl << endl;
			}
			else if (dices.dice2 < dices.porivn) {
				cout << "Значення на другій кості менше  за 4" << endl << endl;
			}
			else if (dices.dice2 == dices.porivn) {// ілюструє роботу перевантаженого оператора <
				cout << "Значення на другій кості дорінює 4" << endl << endl;
			}
			if (dices.dice3 > dices.porivn) {
				cout << "Значення на третій кості більше за 4 " << endl << endl;
			}
			else if (dices.dice3 < dices.porivn) {
				cout << "Значення на третій кості менше  за 4" << endl << endl;
			}
			else if (dices.dice3 == dices.porivn) {// ілюструє роботу перевантаженого оператора <
				cout << "Значення на третій кості дорінює 4" << endl << endl;
			}

		}

		if (func == 3) {
			cout << "Введіть  значення першої кості ";
			cin >> dices.dice1; //ілюструє роботу перевантаженого оператора вводу 

			cout << "Введіть значення другої  кості ";
			cin >> dices.dice2;

			cout << "Введіть значення третьої кості ";
			cin >> dices.dice3;
			cout << "Введіть скільки спроб ви здійснили ";
			cin >> dices.tosses;
			cout << "Змініть значення за замовчуванням ";
			cin >> dices.porivn;

			dices.dice1 += dices.porivn;
			dices.dice2 += dices.porivn;
			dices.dice3 += dices.porivn;
			dices.tosses += dices.porivn;
			dices.porivn += dices.porivn;
			cout << dices << endl<<endl;

			
			cout << "Після переприсвоєння значень одних властивостей іншим " << endl << endl;
			dices.dice1 = dices.dice2;
			dices.dice2 = dices.dice3; // також демонструє роботу перевантаженого оператора =
			dices.dice3 = dices.dice1;
			dices.porivn = dices.tosses;
			dices.tosses = dices.porivn;

			cout << dices;

		}
		
		if (func == 4) {
			break;
		}
		
	}
	system("pause");
}