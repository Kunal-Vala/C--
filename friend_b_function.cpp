#include <iostream>
using namespace std;
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumreal(complex, complex);
    int sumcomplex(complex, complex);
};

class complex
{
    int a, b;

    // friend int calculator ::sumreal(complex, complex);
    // friend int calculator ::sumcomplex(complex, complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

        public : void setnumber(int n1, int n2)
    {
        a = n1, b = n2;
    }

    void printnumber(void)
    {
        cout << " your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int res = calc.sumreal(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcomplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}

// // Forward declaration

// class Complex;

// class Calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }

//     int sumRealComplex(Complex, Complex);
//     int sumCompComplex(Complex, Complex);
// };

// class Complex
// {
//     int a, b;
//     // Individually declaring functions as friends
//     friend int Calculator ::sumRealComplex(Complex, Complex);
//     friend int Calculator ::sumCompComplex(Complex, Complex);
//     // Aliter: Declaring the entire calculator class as friend
//     friend class Calculator;

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// int Calculator ::sumRealComplex(Complex o1, Complex o2)
// {
//     return (o1.a + o2.a);
// }

// int Calculator ::sumCompComplex(Complex o1, Complex o2)
// {
//     return (o1.b + o2.b);
// }

// int main()
// {
//     Complex o1, o2;
//     o1.setNumber(1, 4);
//     o2.setNumber(5, 7);
//     Calculator calc;
//     int res = calc.sumRealComplex(o1, o2);
//     cout << "The sum of real part of o1 and o2 is " << res << endl;
//     int resc = calc.sumCompComplex(o1, o2);
//     cout << "The sum of complex part of o1 and o2 is " << resc << endl;
//     return 0;
// }
