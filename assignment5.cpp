#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rollno;
    int marks;

    student(string name, int rollno, int marks)
    {
        this->name = name;
        this->rollno = rollno;
        this->marks = marks;
    }
    void disp()
    {
        cout << "NAME OF STUDENT:- " << name << endl;
        cout<<"ROLL NO OF STUDENT:- " << rollno << endl;
        cout << "MARKS OF STUDENT:- " << marks << endl;
    }
};

int main()
{
    student s1("AYUSH RAJ SINGH", 15, 99);
    s1.disp();

    return 0;
}
