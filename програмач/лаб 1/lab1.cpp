// chutatucod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// labka1c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int func(int* array, int length, int number)
{
    int pos = 0;
    int i = 0;
    do
    {
        if (array[i] == number)
            pos = i;
        i++;
    } while (i < length);
    return pos;
}
int func(char* str, char ch)
{
    int pos1 = 0;
    int j = 0;
    do
    {
        if (str[j] == ch)
            pos1 = j;
        j++;
    } while (j < (strlen(str)));
    return pos1;
}
int main() {
    int length = 0; int number = 0;
    int length1 = 0; int j = 0; char ch = 0;
    std::cout << "length = ";
    std::cin >> length;
    int* array = new int[length];
    for (int i = 0; i < length; i++) {
        std::cout << "[" << i << "]" << ": ";
        std::cin >> array[i];
    }
    std::cout << "number = ";
    std::cin >> number;
    std::cout << "position is: " << func(array, length, number);
    delete[] array;
    std::cout << "\nlength1 = ";
    std::cin >> length1;
    char* str = new char[length1 + 1];

    std::cout << "Enter a string";
    std::cin >> str;
    std::cout << "ch = ";
    std::cin >> ch;
    std::cout << "position1 is: " << func(str, ch);
    delete[] str;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
