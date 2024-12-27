#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);

};

void Student::set_roll_number(int roll) {
    roll_number = roll;
}

void Student :: get_roll_number(){
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physiscs;
        float chemistry;
    public:
        void set_marks(float, float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2, float m3){
    maths = m1;
    physiscs = m2;
    chemistry = m3;
}

void Exam :: get_marks(){
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physiscs << endl;
    cout << "The marks obtained in chemistry are: " << chemistry << endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display_result(){
            percentage = (maths + physiscs + chemistry) / 3;
            cout << "The percentage is " << percentage << "%" << endl;
        }
};




int main() {
    Result r1,r2,r3;
    r1.set_roll_number(1);
    r1.set_marks(90.0, 95.0, 98.0);
    r1.get_roll_number();
    r1.get_marks();
    r1.display_result();
    
    r2.set_roll_number(2);
    r2.set_marks(94.0, 87.0, 86.0);
    r2.get_roll_number();
    r2.get_marks();
    r2.display_result();
    
    r3.set_roll_number(3);
    r3.set_marks(79.0, 89.0, 80.0);
    r3.get_roll_number();
    r3.get_marks();
    r3.display_result();
    

    return 0;
}

