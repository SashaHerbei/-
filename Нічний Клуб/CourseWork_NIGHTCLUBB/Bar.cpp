
#include "Bar.h"

Bar::Bar() {
	readFileBar();
};

void Bar::readFileBar() {
	drinkName.open("drinkName.txt");
	drinkPrice.open("drinkPrice.txt");

	string str, strTemp;
	int prc, prcTemp = 0;

	if (drinkName.is_open()) {
		while (true) {
			drinkName >> str;
			if (str == strTemp)
				break;
			else {
				drink.push_back(str);
				strTemp = str;
			}

			drinkPrice >> prc;
			if (prc == prcTemp)
				break;
			else {
				price.push_back(prc);
				prcTemp = prc;
			}
		}
	}

	else
		cout << "File not found!" << endl;

	drinkName.close();
	drinkPrice.close();
}

void Bar::rewriteFileBar() {
	for (int i = 0; i < drink.size(); i++) {
		drink.erase(drink.begin(), drink.end());
		price.erase(price.begin(), price.end());
	}

	readFileBar();
}

void Bar::showDrinks() {
	cout << "Available drinks at the bar" << endl;
	for (int i = 0; i < drink.size(); i++) {
		cout << i + 1 << ": " << drink[i] << " - " << price[i] << "$" << endl;
	}
}

void Bar::addDrink() {
	drinkName.open("drinkName.txt", ios::app);
	drinkPrice.open("drinkPrice.txt", ios::app);

	int choice = 1;
	string nameTemp;
	int priceTemp;

	while (choice == 1) {
		cout << "What drink would you like to add?" << endl;
		cin >> nameTemp;
		cout << "Enter " << nameTemp << " price:" << endl;
		cin >> priceTemp;

		drinkName << nameTemp << endl;
		drinkPrice << " " << priceTemp << " ";

		cout << "Add more ?" << endl << "1 - yes" << endl << "0 - no" << endl;
		cin >> choice;
	}

	drinkName.close();
	drinkPrice.close();

	readFileBar();
}

void Bar::sellDrinks() {
	if (visitorCount != 0) {
		int choice = pickVisitor(),
			choice1;
		cout << "What drink would you like to buy ?" << endl;
		showDrinks();
		cin >> choice1;
		choice1--;
		visitors[choice].setMoney(visitors[choice].getMoney() - price[choice1]);
		cout << drink[choice1] << " successfully bought !" << endl <<
			"Money left: " << visitors[choice].getMoney() << "$" << endl;
		setBarProfit(getBarProfit() + price[choice1]);
	}
	else
		cout << "There is no visitors !" << endl;
}

void Bar::setBarProfit(int barProfit) {
	this->barProfit = barProfit;
}

int Bar::getBarProfit() {
	return barProfit;
}

Bar::~Bar() {};
