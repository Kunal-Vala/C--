// #include <iostream>
// #include<fstream>

// using namespace std;

// int main() {
//     string s1,s2;
//     s1 = " kunal vala 😊";

//     ofstream file_out("output.txt");
//     file_out << s1;
//     file_out.close();
//     return 0;
// }

#include <iostream>
#include<fstream>

using namespace std;

int main() {
    string s1,s2;

    ifstream file_in("output.txt");
    // file_in >> s1;
    // cout << s2;    // --> only kunal will be printed as it will stop reading after space
    getline(file_in,s1); // --> kunal vala 😊 will be printed
    cout << s1;
    file_in.close();
    return 0;
}