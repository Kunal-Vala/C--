#include <cmath>
#include <cstdio>n
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int age;
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person {
public:
    int publications, cur_id;
    static int id_counter;
    Professor() {
        cur_id = ++id_counter;
    }
    void getdata() override {
        cin >> name >> age >> publications;
    }
    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
int Professor::id_counter = 0;

class Student : public Person {
public:
    int marks[6], cur_id;
    static int id_counter;
    Student() {
        cur_id = ++id_counter;
    }
    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};
int Student::id_counter = 0;

int main() {
    int size;
    cin >> size;
    vector<Person*> persons(size);

    for (int i = 0; i < size; i++) {
        int ask;
        cin >> ask;
        if (ask == 1) {
            persons[i] = new Professor();
        } else if (ask == 2) {
            persons[i] = new Student();
        }
        persons[i]->getdata();
    }

    for (int i = 0; i < size; i++) {
        persons[i]->putdata();
        delete persons[i];
    }

    return 0;
}