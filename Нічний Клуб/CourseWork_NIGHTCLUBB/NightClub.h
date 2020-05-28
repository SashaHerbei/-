#pragma once
#include "DanceFloor.h"
#include "Bar.h"

class NightClub : virtual public DanceFloor, virtual public Bar {
protected:
	int profit;
	string clubName;
public:
	NightClub();
	void setProfit(int profit);
	int getProfit();
	void setClubName(string clubName);
	string getClubName();
	void showNightClub();
	~NightClub();
};

