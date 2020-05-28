#pragma once

#pragma once

#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include "NightClub.h"
#include <iostream>
using namespace std;

class Menu : virtual public NightClub {
public:

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // used for goto
	COORD CursorPosition; // used for goto

	void gotoXY(int x, int y) {
		CursorPosition.X = x;
		CursorPosition.Y = y;
		SetConsoleCursorPosition(console, CursorPosition);
	}

	int cleanConsole(int x) {
		getchar();
		system("CLS");
		gotoXY(0, 1);
		cout << "->";
		gotoXY(0, 1);
		return 1;
	}

	void visitorMenu(NightClub & obj) {
		system("CLS");
		int menu_item = 0, run, x = 1;
		bool running = true;

		gotoXY(0, 1); cout << "->";

		while (running) {

			gotoXY(2, 0); cout << "Visitor Menu";
			gotoXY(2, 1);  cout << "1) Show visitors";
			gotoXY(2, 2);  cout << "2) Add visitor";
			gotoXY(2, 3);  cout << "3) Remove vistor";
			gotoXY(2, 4); cout << "Close submenu";

			system("pause>nul"); // the >nul bit causes it the print no message

			if (GetAsyncKeyState(VK_DOWN) && x != 11 && x >= 0) //down button pressed
			{
				gotoXY(0, x); cout << "  ";
				x++;
				if (x > 4) {
					x--;
					gotoXY(0, x); cout << "->";
				}
				else {
					gotoXY(0, x); cout << "->";
					menu_item++;
				}
				continue;
			}

			if (GetAsyncKeyState(VK_UP) && x != 7) //up button pressed 
			{
				gotoXY(0, x); cout << "  ";
				x--;

				if (x < 1) {
					x++;
					gotoXY(0, x); cout << "->";
				}
				else {
					gotoXY(0, x); cout << "->";
					menu_item--;
				}
				continue;
			}

			if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

				switch (menu_item) {

				case 0: {

					gotoXY(0, 7);
					obj.showVisitors();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}


				case 1: {
					gotoXY(0, 7);
					obj.addVisitor();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}

				case 2: {
					gotoXY(0, 7);
					//obj.deleteVisitor();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}

				case 3: {
					running = false;
					system("CLS");
				}
				}
			}
		}
	}

	void barMenu(NightClub & obj) {
		system("CLS");
		int menu_item = 0, run, x = 1;
		bool running = true;

		gotoXY(0, 1); cout << "->";

		while (running)
		{
			gotoXY(2, 0); cout << "Bar Menu";
			gotoXY(2, 1);  cout << "1) Show drinks";
			gotoXY(2, 2);  cout << "2) Add drinks";
			gotoXY(2, 3);  cout << "3) Sell drinks";
			gotoXY(2, 4); cout << "Close submenu";

			system("pause>nul"); // the >nul bit causes it the print no message

			if (GetAsyncKeyState(VK_DOWN) && x != 11 && x >= 0) //down button pressed
			{
				gotoXY(0, x); cout << "  ";
				x++;
				if (x > 4) {
					x--;
					gotoXY(0, x); cout << "->";
				}
				else {
					gotoXY(0, x); cout << "->";
					menu_item++;
				}
				continue;

			}

			if (GetAsyncKeyState(VK_UP) && x != 7) //up button pressed 
			{
				gotoXY(0, x); cout << "  ";
				x--;

				if (x < 1) {
					x++;
					gotoXY(0, x); cout << "->";
				}
				else {
					gotoXY(0, x); cout << "->";
					menu_item--;
				}
				continue;
			}

			if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

				switch (menu_item) {

				case 0: {

					gotoXY(0, 7);
					obj.showDrinks();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}


				case 1: {
					gotoXY(0, 7);
					obj.addDrink();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}

				case 2: {
					gotoXY(0, 7);
					obj.sellDrinks();
					x = 1;
					menu_item = 0;
					break;
				}

				case 3: {
					running = false;
					system("CLS");
				}
				}
			}
		}
	}

	void danceFloorMenu(NightClub & obj) {
		system("CLS");
		int menu_item = 0, run, x = 1;
		bool running = true;

		gotoXY(0, 1); cout << "->";

		while (running)
		{
			gotoXY(2, 0); cout << "Dance Floor Menu";
			gotoXY(2, 1);  cout << "1) Change DJ";
			gotoXY(2, 2);  cout << "2) Add people to dance floor";
			gotoXY(2, 3); cout << " 3) Show DJ";
			gotoXY(2, 4); cout << "Close submenu";

			system("pause>nul"); // the >nul bit causes it the print no message

			if (GetAsyncKeyState(VK_DOWN) && x != 11 && x >= 0) //down button pressed
			{
				gotoXY(0, x); cout << "  ";
				x++;
				if (x > 4) {
					x--;
					gotoXY(0, x); cout << "->";
				}
				else {
					gotoXY(0, x); cout << "->";
					menu_item++;
				}
				continue;

			}

			if (GetAsyncKeyState(VK_UP) && x != 7) //up button pressed 
			{
				gotoXY(0, x); cout << "  ";
				x--;

				if (x < 1) {
					x++;
					gotoXY(0, x); cout << "->";
				}
				else {
					gotoXY(0, x); cout << "->";
					menu_item--;
				}
				continue;
			}

			if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

				switch (menu_item) {

				case 0: {

					gotoXY(0, 7);
					obj.changeDJ();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}


				case 1: {
					gotoXY(0, 7);
					obj.addPeopleToFloor();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}

				case 2: {
					gotoXY(0, 7);
					obj.showDJ();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}

				case 3: {
					running = false;
					system("CLS");
				}
				}
			}
		}
	}

	int run()
	{
		NightClub obj;
		int menu_item = 0, run, x = 1;
		bool running = true;

		gotoXY(0, 1); cout << "->";

		while (running)
		{
			//gotoXY(0, 1); cout << "->";
			gotoXY(2, 0);  cout << "Main Menu";
			gotoXY(2, 1);  cout << "1) About NightClub";
			gotoXY(2, 2);  cout << "2) Visitors";
			gotoXY(2, 3);  cout << "3) Dance floor";
			gotoXY(2, 4);  cout << "4) Bar";
			gotoXY(2, 5);  cout << "Quit Program";

			system("pause>nul"); // the >nul bit causes it the print no message

			if (GetAsyncKeyState(VK_DOWN) && x != 11 && x >= 0) //down button pressed
			{
				gotoXY(0, x); cout << "  ";
				x++;
				if (x > 5) {
					x--;
					gotoXY(0, x); cout << "->";
				}
				else {
					gotoXY(0, x); cout << "->";
					menu_item++;
				}
				continue;

			}

			if (GetAsyncKeyState(VK_UP) && x != 7) //up button pressed 
			{
				gotoXY(0, x); cout << "  ";
				x--;

				if (x < 1) {
					x++;
					gotoXY(0, x); cout << "->";
				}
				else {
					gotoXY(0, x); cout << "->";
					menu_item--;
				}
				continue;
			}

			if (GetAsyncKeyState(VK_RETURN)) { // Enter key pressed

				switch (menu_item) {

				case 0: {

					gotoXY(0, 7);
					obj.showNightClub();
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}


				case 1: {
					gotoXY(0, 7);
					visitorMenu(obj);
					x = 1;
					menu_item = 0;
					gotoXY(0, 1); cout << "->";
					break;
				}

				case 2: {
					gotoXY(0, 7);
					danceFloorMenu(obj);
					x = 1;
					menu_item = 0;
					gotoXY(0, 1); cout << "->";
					break;
				}

				case 3: {
					gotoXY(0, 7);
					barMenu(obj);
					cleanConsole(x);
					x = 1;
					menu_item = 0;
					break;
				}

				case 4: {
					running = false;
				}
				}
			}
		}
		return 0;
	}
};