#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter the id of employee" << endl;
        cin >> id;
        cout << "Enter Salary :";
        cin >> salary;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl << "The salary of " << id << " is " << salary<< endl;

    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        // fb[i].getId();
    }
    for (int i = 0; i < 4; i++)
    {
        // fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
