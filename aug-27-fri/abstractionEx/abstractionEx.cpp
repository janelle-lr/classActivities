// abstractionEx.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//parent class
class Smartphone {//since this class has at least one pure virtual function, it is classfied as an abstract class - you can't make an instance (object)
            //of an abstract class but you can make pointers of an abstract class
public:
    virtual void takeASelfie() = 0;//pure virtual function, the implementation of this function will not be provided in this class - the classes inheriting
                                   //from this class will need to provide an implementation of their own
    virtual void makeACall() = 0;
};

//child class
class Android : public Smartphone {
public:
    void takeASelfie() {//implementation of pure virtual function from parent class, this overrider is needed to be able to use instances of this child class
        cout << "Android selfie" << endl;
    }

    void makeACall() {//implementation of pure virtual function from parent class
        cout << "Android call" << endl;
    }
};

//child class
class Iphone : public Smartphone {
    void takeASelfie() {//implementation of pure virtual function from parent class
        cout << "iPhone selfie" << endl;
    }

    void makeACall() {//implementation of pure virtual function from parent class
        cout << "iPhone call" << endl;
    }
};

int main()
{
    Smartphone* s1 = new Android();
    Smartphone* s2 = new Iphone();

    s1->takeASelfie();
    s1->makeACall();

    s2->takeASelfie();
    s2->makeACall();

    return 0;
}

//abstraction is the idea of hiding complex details behind simple procedures.
//an abstract class provides an interface so that whoever wants to use the class can use the class without needing to know any complex details about how the 
//functionalities are implemented. instead they have a simple interface that lists all the functionalities that can be used and it's a simple way of using 
//those functionalities.
/*in the context of an e-commerce website: the parent class would be the front end UI that the user can see and the pure virtual functions are the actions 
you can take on an e-commerce website (i.e. addToShoppingCart, checkoutItems) you can kinda see them as like guidelines or mayhaps a rubric? for what you
need to include in order to make an e-commerce website kinda. The child classes could be the online shops (i.e. Asos, Yesstyle) and the functions inside are
the 'backend' parts of the website where the developers of each website decide how they want implement the functions(adding to shopping cart, checking out the items)
without needed to know what the other developers of the other website are doing - they only need to know the functionalities of an e-commerce website (which is 
provided by the parent class)*/