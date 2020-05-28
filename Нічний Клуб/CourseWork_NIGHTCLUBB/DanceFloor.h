#pragma once
#include "DJ.h"
class DanceFloor : virtual public DJ {
protected:
	int peopleDancing;
public:
	DanceFloor();
	void addPeopleToFloor();
	void changeDJ();
	~DanceFloor();
};

