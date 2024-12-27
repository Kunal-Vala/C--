#include <iostream>
using namespace std;

template <class T1, class T2>
class Number {
public:
    T1 num1;
    T2 num2;
    Number(T1 n1, T2 n2) {
        num1 = n1;
        num2 = n2;
    }
    void display() {
        cout << "The value of num1 is: " << num1 << endl;
        cout << "The value of num2 is: " << num2 << endl;
    }
};

template <class T1, class T2>
class Calculator : public Number<T1, T2> {
public:
    Calculator(T1 a, T2 b) : Number<T1, T2>(a, b) {}
    
    T1 add() {
        return this->num1 + this->num2;
    }

    T1 sub() {
        return this->num1 - this->num2;
    }

    T1 mul() {
        return this->num1 * this->num2;
    }

    T1 div() {
        return this->num1 / this->num2;
    }

    int mod() {
        return static_cast<int>(this->num1) % static_cast<int>(this->num2);
    }

    void display() {
        cout << "The value of num1 is: " << this->num1 << endl;
        cout << "The value of num2 is: " << this->num2 << endl;
        cout << "The sum is: " << add() << endl;
        cout << "The difference is: " << sub() << endl;
        cout << "The product is: " << mul() << endl;
        cout << "The division is: " << div() << endl;
        cout << "The mod is: " << mod() << endl;
    }
};

int main() {
    Calculator<int, int> c1(10, 5);
    c1.display();
    cout<<endl << endl;
    Calculator<int, float> c2(10, 5.5);
    c2.display();
    cout<<endl << endl;

    Calculator<float, float> c3(10.5, 5.5);
    c3.display();

    return 0;
}