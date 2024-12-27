#include<iostream>

// #include<bits/stdc++.h>                   it gives all the library


// int main()
// {
//     std :: cout << "HELLO WORLD \n"  << "HELLO WORLD"  << std::endl;
//     std:: cout << "My name is " ;
//     std:: cout << "Kunal";
//     return 0;
// }


using namespace std;

// int main()
// {
//     int x,y;
//     cout << "Enter value of x & y :";
//     cin >> x >> y;
//     cout << "Value of x is " << x << endl << "Value of y is " << y;
// }




// int main()
// {   
//     string s1,s2;
//     cin >> s1;
//     cin >> s2;
//     cout << s1;
//     cout << endl;
//     cout << s1 << " " << s2 ;
//     return 0;
// }


// int main()
// {   
//     string str;
//     getline(cin,str);
//     cout << str;
//     return 0;
// }


// int main()
// {   
//     int age ;

//     cout << "Enter your age : ";
//     cin >> age;

//     if (age >= 18)
//     {
//         cout << "You can Vote!";
//     }
//     else{
//         cout << "You cannot vote";
//     }
    
//     return 0;
// }


// int main()
// {

//     int arr[5];

//     cout << "Enter Numbers :";
//     cin >> arr[0] >>  arr[1] >> arr[2] >> arr[3] >> arr[4];

//     cout << arr[4]; 
//     return 0;
// }


int main()
{
    string s = "Kunal";

    int len;
    len = s.size();

    cout << s[0] << s[1];

    s[len - 2] = 'A';

    cout << s[3];
    cout << "\n" << s[len - 1];
    cout << "\n" << s;
    return 0;
}
