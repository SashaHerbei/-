
/*

#include "pch.h"
#include "Student.h"
#include <iomanip>


Visitor::Visitor(){
}

void Visitor::setAllVisitor() {
	setAllHuman();
}

void Visitor::addVisitor() {
	Visitor *t;
	t = new Visitor;
	t->setAllVisitor();
	visitors.push_back(*t);
	visitorCount++;
}

bool Visitor::showVisitors() {
	if (visitorCount != 0) {
		int count = 1;
		cout << "Pick Visitor: " << endl;
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

int Visitor::pickVisitor() {
	int choice;
	//cout << "Pick Visitor:" << endl;
	if (showVisitors() == true) {
		cin >> choice;
		choice--;
		return choice;
	}

	else {
		cout << "There is no visitors available, add some!" << endl;
	}
}

Visitor::~Visitor(){
}


*/