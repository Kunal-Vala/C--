#include <iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;
};

class Derive : protected Base{

}; 

int main() {
    
    Base b;
    Derive d;
    // cout << d.a;  // will not work since a is protected
    return 0;
}

/*
For a protected member:
                            Public Derivation                   Private Derivation              protected Derivation
1. Private members            Not Inherited                     Not Inherited                       Not Inherited
2. Protected members            Protected                           private                             Protected
3. Public members               Public                              private                             protected
*/
