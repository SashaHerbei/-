// labka3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

// заповнення масиву одиницями
void fill_array_one(int**, size_t);
// заповнення масиву по схемі
void fill_array_scheme(int**, size_t);
// вивід масиву
void print_array(int**, size_t);


int main() {
    size_t n;
    int** my_arr;

    cout << "Enter size" << endl;
    cin >> n;


    my_arr = new int* [n];

    for (size_t i = 0; i < n; i++)
        my_arr[i] = new int[n];

    cout << "Filled with 1\n" << endl;
    fill_array_one(my_arr, n);
    print_array(my_arr, n);

    cout << "Filled according to the scheme\n" << endl;
    fill_array_scheme(my_arr, n);
    print_array(my_arr, n);

    for (size_t i = 0; i < n; i++)
        delete[] my_arr[i];

    delete[] my_arr;

    return 0;
}

void fill_array_one(int** arr, size_t n) {
    for (size_t i = 0; i < n; ++i)
        for (size_t j = 0; j < n; ++j)
            arr[i][j] = 1;
}

void fill_array_scheme(int** arr, size_t n) {
    for (size_t i = 0; i < n / 2; ++i) {
        for (size_t j = n / 2; j < n; ++j) {
            if (j + i >= n - 1)
                arr[i][j] = 0;
        }
    }
    for (size_t i = n / 2; i < n; ++i) {
        for (size_t j = n / 2; j < n; j++) {
            if (j >= i)
                arr[i][j] = 0;
        }
    }
}



void print_array(int** array, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j)
            cout << setw(2) << array[i][j];
        cout << endl;
    }
}