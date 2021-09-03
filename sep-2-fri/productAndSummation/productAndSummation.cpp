// productAndSummation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Input {
public:
    int num1, num2, sum;

    void readInput() {
        newNums:
        cout << "Input two integers to add together: ";
        cin >> num1 >> num2;
        if (num1 <= 0 || num1 >= 1000000 || num2 <= 0 || num2 >= 1000000) {
            cout << "\nInvalid input: please enter a number between 0 to 1000000" << endl;
            goto newNums;
        }
        /*else {
            newNum2:
            cout << "Input integer two: ";
            cin >> num2;
            if (num2 <= 0 || num2 >= 1000000) {
                cout << "\nInvalid input: please enter a number between 0 to 1000000" << endl;
                goto newNum2;
            }
        }*/
    }
};

class Summation : public Input {
public:
    int calculate() {
        readInput();
        sum = num1 + num2;
        cout << "\n" << num1 << " + " << num2 << endl;
        cout << "= " << sum;
        return sum;
    }
};

class Print : public Input {
public:
    Summation sum;
    void display() {
        sum.calculate();
    }
};

int main()
{
    Print print;

    int testCases = 0;
    
    cout << "How many test cases would you like? ";
    cin >> testCases;
    cout << endl;

    for (int i = 0; i < testCases; i++) {
        print.display();
        cout << endl << endl;
    }
}

