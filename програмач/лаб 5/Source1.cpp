#include "CDice.h"
#include<iostream>
#include <ctime>// для рандому
#include<stdlib.h>
using namespace std;


	CDice::CDice(int zdice1, int zdice2, int zdice3,  int tosses0, int porivn0) {
		dice1 = zdice1;
		dice2 = zdice2;
		dice3 = zdice3;
		porivn = porivn0;
		tosses = tosses0;
	}


	int CDice::getDice1() {
		return dice1;
	}
	int CDice::getDice2() {
		return dice2;
	}
	int CDice::getDice3() {
		return dice3;
	}
	
	int CDice::getTosses() {
		return tosses;
	}
	int CDice::getPorivn() {
		return porivn;
	}
	


	void CDice::setDice1(int zdice1) {
		dice1 = zdice1;
	}
	void CDice::setDice2(int zdice2) {
		dice2 = zdice2;
	}
	void CDice::SetDice3(int zdice3) {
		dice3 = zdice3;
	}
	void CDice::setTosses(int tosses0) {
		tosses = tosses0;
	}
	void CDice::setPorivn(int porivn0) {
		porivn = porivn0;
	}

	void CDice::toss_dices() {
		srand(time(0));

		int zdice1 = 1 + rand() % 6;
		dice1 = zdice1;

		int zdice2 = 1 + rand() % 6;
		dice2 = zdice2;

		int zdice3 = 1 + rand() % 6;
		dice3 = zdice3;
		
	
	}
	
	


	
	

	
	//реалізація перевантаження операторів ++ += < > = вводу/виводу

	//оператор ++ працює як лічильник, щоб підраховувати кількість зроблених підкидань костей
	CDice& CDice:: operator++() {
		 this->tosses++;
		 return *this;
	}
	CDice&CDice:: operator=(const CDice&dices) {
		this->dice1 = dices.dice2;
		this->dice2 = dices.dice3;
		this->dice3 = dices.dice1;
		this->porivn = dices.tosses;
		this->tosses = dices.porivn;
		return *this;
	}
	bool CDice::  operator >( const CDice &other) {
		return this->dice1 > porivn&& this->dice2 > porivn&& this->dice3 > porivn;
	}
	bool CDice::  operator <(const CDice& odice) {
		return this->dice1 < porivn&&this->dice2>porivn&&this->dice3>porivn;
	}
	CDice& operator += (CDice& dices, CDice& other) {
		dices.dice1 += dices.porivn;
		dices.dice2 += dices.porivn;
		dices.dice3 += dices.porivn;
		dices.tosses += dices.porivn;
		dices.porivn += dices.porivn;
		return dices;

	}
	bool CDice:: operator == (const CDice& other) {  // оператор використовується як допоміжний, щоб зробити коректне порівняння значень
		
		return dice1 == porivn  && dice2 == porivn && dice3 == porivn;

	}

	ostream& operator << (ostream& output,  CDice& obj) {
		output << "Значення на першій кості " << obj.dice1<< endl;
		output << "Значення на другій кості " << obj.dice2 << endl;
		output << "Значення на третій кості " << obj.dice3<< endl;
		output << "Кількість кидань "<< obj.tosses << endl;
		output << "Значення для порівняння "<<obj.porivn<<  endl;
		return output;
	}
	
	istream& operator>> (istream& input, CDice& obj) {
		
		input >> obj.dice1;
		input >> obj.dice2;
		input >> obj.dice3;
		input >> obj.porivn;
		input >> obj.tosses;

		
		return input;
	}