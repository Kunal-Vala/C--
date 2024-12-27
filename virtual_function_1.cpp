#include <iostream>
using namespace std;

class Base{
    public:
        int x = 10;
        virtual void display(){
            cout << "Base Class value is : " << x << endl;
        }
};

class Derived : public Base{
    public:
    int y = 20;
    void display(){
        cout << " *DDDD* Base class value is : " << x << "\t" << "Derived class value is : " << y << "*DDDD*" << endl;
    }
};


int main() {
    Base * b_ptr;
    Derived * d_ptr;
    Base b;
    Derived d;
    b_ptr = &d;
    b_ptr->display();              //  --> derived class function is called not the base class function as virtual keyword is used
    d_ptr = &d;
    // d_ptr = &b;         // reverse is not possible
    d_ptr->display();


    return 0;
}