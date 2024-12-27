#include <iostream>

inline int product (int a, int b)
{
    return(a*b);
}
using namespace std;

float moneyReceived(int currentMoney, float factor=1.04){            // default parameter
    return currentMoney * factor;
}


int func1(int a)
{
    static int b;
    b = b+a;
    return b;
}



// ***************************
// FUNCTION OVERLOADING
int sum(float a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}
















int main(){
    int a = 5, b = 10, c = 45;
    // cout << product(a,b);


// **********************************

    // int money = 100000;
    // cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    // cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";


// **********************************

    // cout<< func1(a)<<endl;
    // cout<< func1(a)<<endl;
    // cout<< func1(a)<<endl;
    // cout<< func1(a)<<endl;
    // cout<< func1(a)<<endl;
    // cout<< func1(a)<<endl;
    // cout<< func1(a)<<endl;
    // cout<< func1(a)<<endl;

// **********************************

    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;


    return 0;
}


