#pragma once

#include "Barman.h"

class Bar : virtual public Barman {
protected:
	vector <string> drink;
	vector <int> price;
	int barProfit;
	fstream drinkName,
		drinkPrice;
	int peopleDrinking;
public:
	Bar();
	void readFileBar();
	void sellDrinks();
	void showDrinks();
	void addDrink();
	void rewriteFileBar();
	void setBarProfit(int barProfit);
	int getBarProfit();
	~Bar();
};

