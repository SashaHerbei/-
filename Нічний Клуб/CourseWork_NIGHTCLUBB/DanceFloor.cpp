#include "DanceFloor.h"

DanceFloor::DanceFloor() {}

void DanceFloor::addPeopleToFloor() {
	int choice = pickVisitor();
	if (visitors[choice].getDancing() == true) {
		cout << "Visitor already is in dance floor !" << endl;
	}
	else {
		visitors[choice].setDancing(true);
		cout << visitors[choice].getName() << " added to dance floor" << endl;
	}
}

void DanceFloor::changeDJ() {
	string str;
	cout << "Enter new DJ name: " << endl;
	cin >> str;
	setNickName(str);
	cout << "Enter new DJ genre: " << endl;
	cin >> str;
	setGenre(str);
	cout << "New DJ: " << getNickName() << endl;
}

DanceFloor::~DanceFloor() {}
