// chutatucod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    while (true)
    {
        cout << "Show data - press 1" << endl;
        cout << "Write data - press 2" << endl;
        cout << "Exit - press 3" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
             string name;
             string surname;
             int year;
           
            ifstream infile;
            infile.open("File.txt");
            if (!infile)
            {
                cout << "Cannot open file" << endl;
                return -1;
            }
            cout << setw(9) << "Name" << setw(9) << "Surname"  << setw(9) << "Year" << endl;
            
            while (!infile.eof())
            {
                
                infile >> name;
                infile >> surname;
                infile >> year;
                if (!infile.eof())
                {
                    cout.width(9);
                    cout << name;
                    cout.width(9);
                    cout << surname;
                    cout.width(9);
                    cout << year;
                    cout << endl;
                }
            }
            infile.close();
        }
        if (choice == 2)
        {
            string name;
            string surname;
            int year;
            cin >> name;
            cin >> surname;
            cin >> year;
            fstream outfile("File.txt", ios::app);
            if (!outfile)
            {
                cout << "Cannot open file" << endl;
                return -1;
            }
            outfile.setf(ios::left);
            outfile.width(9);
            outfile << name << ' ';
            outfile.width(9);
            outfile << surname << endl;
            outfile.width(9);
            outfile << year << endl;
            outfile.close();
        }

        if (choice == 3)
        {
            break;
        }
    }
    system("pause");
}