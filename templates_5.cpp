#include <iostream>
using namespace std;

template < class T>

class New{
    public:
    T a;
    New(T x){
        a = x;
    }
    void display();
};


// template <class T, class U>  // --> will give error as both the template of the class and the function are different
template <class T> // --> will work fine
void New<T> :: display(){
    cout<<"The value of a is : "<<a<<endl;
}

template <class T>

void func(T a){
    cout << "Template Function is called." << endl;
}

void func(int a){
    cout << "Non-template Function is called." << endl;
}


int main() {
    New<int> t1(1);
    t1.display();    
    func(4); // Non-template function will be called           // Excat match takes hightest priority
    func(4.4); // Template function will be called

    return 0;
}