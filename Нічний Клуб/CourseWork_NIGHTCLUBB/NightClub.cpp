#include "NightClub.h"

NightClub::NightClub() {}

void NightClub::setProfit(int profit){
	this->profit = profit;
}

int NightClub::getProfit() {
	return profit;
}

void NightClub::showNightClub() {
	cout << "Club name: " << getClubName() << endl <<
		"Profit: " << getBarProfit() << endl <<
		"Visitor Count: " << getVisitorCount() << endl;
	showDJ();
}

void NightClub::setClubName(string clubName) {
	this->clubName = clubName;
}

string NightClub::getClubName() {
	return clubName;
}

NightClub::~NightClub() {}

