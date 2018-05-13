#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <string.h>
#include <stdio.h>



using namespace std;

int main()
{
    char name[256];
    cout << "Input ur name pls sweetie :)\n";
    gets(name);
    cout << "Hi, " << name << "\n_______________________________\n";

    int a, b;
    float  c, d;
    string choice;
    cout << "Do you want to work with integer? (y/n)\n";
    cin >> choice;
    while  ((choice != "y") && (choice != "Y") && (choice != "n") && (choice != "N")) {
        cout << "\nIncorrect input, you silly. Try again.\n";
        cin >> choice;
    }
    if ((choice == "y") || (choice == "Y")) {
    cout << "Please input 1st number\n";
    cin >> a;
    cout << "\nPlease input 2nd number\n";
    cin >> b;
    cout << "\na + b = " << a+b << "\na - b = " << a-b << "\na * b = " << a*b << "\na / b = " << a/b;
    }
    if ((choice == "n") || (choice == "N")) {
    cout << "Please input 1st number\n";
    cin >> c;
    cout << "\nPlease input 2nd number\n";
    cin >> d;
    cout << "\na + b = " << c+d << "\na - b = " << c-d << "\na * b = " << c*d << "\na / b = " << c/d;
    }
}