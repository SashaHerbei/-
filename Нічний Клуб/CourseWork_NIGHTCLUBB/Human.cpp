
#include "Human.h"

Human::Human(){
	this->age = 0;
	this->name = "Unknown";
	this->sex = "Unknown";
	this->money = 0;
}

Human::Human(int age, string name, string sex, int money, bool dancing) {
	this->age = age;
	this->name = name;
	this->sex = sex;
	this->money = money;
	this->dancing = dancing;
}

void Human::setAllHuman() {
	cout << "Enter name: " << endl;
	cin >> name;
	cout << "Enter age: " << endl;
	cin >> age;
	cout << "Enter sex: " << endl;
	cin >> sex;
}

void Human::setAge(int age) {
	this->age = age;
}

int Human::getAge() {
	return age;
}

void Human::setName(string name) {
	this->name = name;
}

string Human::getName(){
	return name;
}

void Human::setSex(string sex) {
	this->sex = sex;
}

string Human::getSex() {
	return sex;
}

void Human::setMoney(int money) {
	this->money = money;
}

int Human::getMoney() {
	return money;
}

void Human::setAllVisitor() {
	setAllHuman();
}

void Human::setDancing(bool dancing) {
	this->dancing = dancing;
}

bool Human::getDancing() {
	return dancing;
}

void Human::addVisitor() {
	Human *t;
	t = new Human;
	t->setAllVisitor();
	visitors.push_back(*t);
	visitorCount++;
}

bool Human::showVisitors() {
	if (visitorCount != 0) {
		int count = 1;
		cout << "Pick visitor: " << endl;
		for (it = visitors.begin(); it != visitors.end(); it++) {
			cout << setw(5) << count << ": ";
			string name = it->getName();
			cout << name << endl;
			count++;
		}
		return true;
	}
	else {
		cout << "No visitors, add some!" << endl;
		return false;
	}
}

int Human::pickVisitor() {
	int choice;
	//cout << "Pick Human:" << endl;
	if (showVisitors() == true) {
		cin >> choice;
		choice--;
		return choice;
	}

	else {
		cout << "There is no visitors available, add some!" << endl;
	}
}

void Human::setVisitorCount(int visitorCount) {
	this->visitorCount = visitorCount;
}

int Human::getVisitorCount() {
	return visitorCount;
}

Human::~Human(){}
