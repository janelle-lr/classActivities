// virtualFunctionEx.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class DailyMood {
public:
    virtual void currentFeeling() { //without virtual keyword main function will print mood 3 times.
        cout << "Mood" << endl;
    }

};

class Sad :public DailyMood {
public:
    //redefining currentFeeling function in Sad derived class, this will override the same function in the base class & will print 
    //Sad vibes instead of mood when called in the main function
    void currentFeeling() {
        cout << "Sad vibes" << endl; 
    }
};

class Stressed :public DailyMood {
public:
    void currentFeeling() {
        cout << "Stressed vibes" << endl;
    }
};

class Vibing :public DailyMood {
public:
    void currentFeeling() {
        cout << "Vibing vibes" << endl;
    }
};

int main()
{
    Sad sd;
    Stressed strsd;
    Vibing vbs;
    //DailyMood pointer array
    DailyMood* dmPtr[3] = {&sd, &strsd, &vbs};

    for (int i = 0; i < 3; i++) {
        dmPtr[i]->currentFeeling();//calling currentFeeling functionin each derived class
    }

    return 0;
}
