#include "Header1.h"
#include<iostream>
#include <ctime>// ��� �������
using namespace std;


CDice::CDice(int zdice1, int zdice2, int zdice3, int zagalne0) {
	dice1 = zdice1;
	dice2 = zdice2;
	dice3 = zdice3;
	zagalne = zagalne0;
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
int CDice::getZagalne() {
	return zagalne;
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
void CDice::setZagalne(int zagalne0) {
	zagalne = zagalne0;
}

void CDice::toss_dices() {
	srand(time(0));

	int zdice1 = 1 + rand() % 6;
	dice1 = zdice1;

	int zdice2 = 1 + rand() % 6;
	dice2 = zdice2;

	int zdice3 = 1 + rand() % 6;
	dice3 = zdice3;

	zagalne = zdice1 + zdice2 + zdice3;

}
void CDice::info() {

	cout << "�������� �� ����i� ����i : " << dice1 << endl;
	cout << "�������� �� ����i� ����i : " << dice2 << endl;
	cout << "�������� �� ����i� ����i : " << dice3 << endl;
	cout << "\n�������� �i���i��� ���i� �i��� ���������� �������: " << zagalne << endl << endl;
	
}


void CDice::nul() {
	int zdice1 = 0;
	int zdice2 = 0;
	int zdice3 = 0;
	int zagalne0 = 0;
	cout << "�������� �� ����i� ����i : " << zdice1 << endl;
	cout << "�������� �� ����i� ����i : " << zdice2 << endl;
	cout << "�������� �� ����i� ����i : " << zdice3 << endl;
	cout << "\n�������� �i���i��� ���i� �i��� ���������� �������: " << zagalne0 << endl << endl;
}