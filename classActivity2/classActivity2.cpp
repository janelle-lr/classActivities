// classActivity2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Phone {
public:
    float cost;
    int slots;
};

int main()
{
    Phone Y6;
    Phone Y7;

    Y6.cost = 100.00;
    Y6.slots = 2;

    Y7.cost = 200.00;
    Y7.slots = 2;

    cout << "\nY6 Cost : " << Y6.cost << endl;
    cout << "Y6 Number of Slot(s) : " << Y6.slots << endl;

    cout << "\nY7 Cost : " << Y7.cost << endl;
    cout << "Y7 Number of Slot(s) : " << Y7.slots << endl;

}

