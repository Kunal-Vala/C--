#include <iostream>
using namespace std;

class Base{
    public:
        int x;
        void display(){
            cout << "Base -->  Base Class value is : " << x << endl;
        }
};

class Derived : public Base{
    public:
    int y ;
    void display(){
        cout << "Derived --> Base class value is : " << x << endl << "Derived class value is : " << y << endl;
    }
};


int main() {
    Base * b_ptr;
    Derived * d_ptr;
    Base b;
    Derived d;
    b_ptr = &d;
    b_ptr->x = 100;
    b_ptr->display();
    d_ptr = &d;
    // d_ptr = &b;         // reverse is not possible
    d_ptr->x = 200;
    d_ptr->y = 300;
    d_ptr->display();

    return 0;
}