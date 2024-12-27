#include <iostream>
#include <map>
#include <string>
#include "map.h"

using namespace std;

void display(std::map<std::string, int> &marksMap)
{
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
}

int main()
{

    // Map is an associative array
    map<string, int> marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    marksMap.insert({{"Rohan", 89}, {"Akshat", 46}});
    display(marksMap);


    return 0;
}


