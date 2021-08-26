// exceptionHandlingEx.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    cout << "Program Start" << endl;
    try { //start a try block, this block will consist of statements that will be checked for exceptions.
        cout << "Inside try block\n";
        throw 50; //throwing an error, because an error is thrown it means that an exception had occured in the try block. This will cause the
                  //try block to terminate and hand over execution to the catch block and any other statements after the error within the try 
                  // block will not be executed (i.e. cout << "This will not execute")
        cout << "This will not execute";
    }
    catch (double i) { //catch an error, when an exception is caught the catch block of code will execute. If it cannot find a solution to the error
                    //the program will be terminated. The catch data type must be the same data type as the exception otherwise an "exception
                    // unhandled" error will occur (abnormal program termination) and the exception will not be caught
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }
    cout << "End";
    return 0;
}

