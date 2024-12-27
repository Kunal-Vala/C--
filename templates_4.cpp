
// #include <iostream>
// using namespace std;

// template<class T1, class T2, class T3>
// T3 sum(T1 a, T2 b) {
//     return a + b;
// }

// int main() {
//     cout << "The sum of 3 and 6 is : " << sum<int, int, float>(3, 6) << endl; 
//     cout << "The sum of 3.4 and 6 is : " << sum<double, int, double>(3.4, 6) << endl;
//     cout << "The sum of 3 and 6.4 is : " << sum<int, double, double>(3, 6.4) << endl;
//     cout << "The sum of 3.4 and 6.4 is : " << sum<double, double, int>(3.4, 6.4) << endl;

//     return 0;
// }



#include <iostream>
using namespace std;

template<class T1, class T2>
auto sum(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}

int main() {
    cout << "The sum of 3 and 6 is : " << sum(3, 6) << endl; 
    cout << "The sum of 3.4 and 6 is : " << sum(3.4, 6) << endl;
    cout << "The sum of 3 and 6.4 is : " << sum(3, 6.4) << endl;
    cout << "The sum of 3.4 and 6.4 is : " << sum(3.4, 6.4) << endl;

    return 0;
}