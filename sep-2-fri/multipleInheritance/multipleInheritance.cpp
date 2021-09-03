// multipleInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    int a, b;

    void read() {
        cout << "input two numbers : ";
        cin >> a >> b;
    }
};

class B {
public:
    string x;
    void read() {
        cout << "input two words : ";
        cin.ignore();
        getline(cin, x);
    }
};

class C : public A, B {
public:
    void printSum() {
        A::read();
        B::read();
        cout << a << " + " << b << " = " << a + b;
        cout << "\nEntered words equal " << x;
    }

};

int main()
{
    C c;
    int testCases;

    cout << "How many test cases would you like?";
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        c.printSum();
        cout << endl << endl;
    }
}
