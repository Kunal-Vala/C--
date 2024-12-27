#include <iostream>
using namespace std;


class Student{
    protected:
    int roll_number;
    public:
    void set_roll(int roll){
        roll_number = roll;
    }
    void get_roll(){
        cout << "The roll number is " << roll_number << endl;
    }

};

class Exam : virtual public Student{
    protected:
    float maths, physics , chemistry;
    public:
    void set_marks(float m1, float m2 , float m3){
        maths = m1 ;
        physics = m2;
        chemistry = m3;

    }

    void get_marks(){
        cout << "The marks obtained in maths are " << maths << endl;
        cout << "The marks obtained in physics are " << physics << endl;
        cout << "The marks obtained in chemistry are " << chemistry << endl;
    }
};

class Sports : public virtual Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void get_score(){
        cout << "The sports score is " << score << endl;
    }
};

class Result : public Exam, public Sports{
    private:
    float total;
    public:
    void display(){
        total = maths + physics + chemistry + score;
        get_roll();
        get_marks();
        get_score();
        cout << "The total marks obtained are " << total << endl << endl;

    }

};

int main() {
    Result r1,r2;
    r1.set_roll(1);
    r1.set_marks(90, 95, 100);
    r1.set_score(9);
    r1.display();
    r2.set_roll(2);
    r2.set_marks(80, 85, 90);
    r2.set_score(8);
    r2.display();
    return 0;
}