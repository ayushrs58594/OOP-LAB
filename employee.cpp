#include<iostream>
#include<string>
using namespace std;

class employee
{
    public:
    string emp_name;
    int emp_id;
    float emp_salary;

    void input()
    {
        cout<<"Enter employee name: ";
        getline(cin,emp_name);

        cout<<"Enter employee id: ";
        cin>>emp_id;

        cout<<"Enter employee salary: ";
        cin>>emp_salary;

        cin.ignore();

    }

    void display()
    {
        cout<<"------EMPLOYEE DETAILS------"<<endl;
        cout<<"Employee Name: "<<emp_name<<endl;
        cout<<"Employee ID: "<<emp_id<<endl;
        cout<<"Employee Salary: "<<emp_salary<<endl;
    }
};

int main()
{
    employee e1;
    employee e2;
    e1.input();
    e1.display();
    e2.input();
    e2.display();
    return 0;
}
