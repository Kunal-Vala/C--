#include <iostream>
using namespace std;

template < class T1 = int, class T2 = float, class T3 = char>
class Template{
    public:
    T1 a;
    T2 b;
    T3 c;
    Template(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
    }
};

int main() {
    Template<> t1(1, 1.1, 'c');
    t1.display();
    cout<<endl;
    Template<float, char, char> t2(1.1, 'c', 'd');
    t2.display();
    cout<<endl;
    Template<int, char, char> t3('A', 'b', 97);    // ---> ASCII value of 'a' is 97 and A is 65
    t3.display();
    cout<<endl;
    Template<float> t4(1.1, 1.1, 'c');  
    t4.display();
    cout<<endl;
    Template<float, char> t5(1.1, 'c', 'd');
    t5.display();
    return 0;
}