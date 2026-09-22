#include<iostream>
using namespace std;

class employee
{
    public:
    int emp_id;
    string name;
    float salary;

    employee(int id, string n, float s)
    {
        cout<<"Constructor is called"<<endl;
        emp_id = id;
        name = n;
        salary = s;
    }

    void display()
    {
        cout<<"Employee ID: "<<emp_id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }

    ~employee()
    {
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    employee emp1(420, "DON", 100000);
    emp1.display();

    return 0;
}
