#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

class Human {
protected:
	int age,
		money;
	string name,
		sex;
	vector <Human> visitors;
	vector <Human>::iterator it;
	int visitorCount;
	bool dancing;
public:
	Human();
	Human(int age, string name, string sex, int money, bool dancing);

	void setAge(int age);
	int getAge();

	void setName(string name);
	string getName();

	void setSex(string sex);
	string getSex();

	void setMoney(int money);
	int getMoney();

	void setDancing(bool dancing);
	bool getDancing();

	void setVisitorCount(int visitorCount);
	int getVisitorCount();

	void setAllHuman();

	void setAllVisitor();
	void addVisitor();
	int pickVisitor();
	bool showVisitors();

	~Human();
};

