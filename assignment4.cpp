#include<iostream>
using namespace std;

class book 
{
private:

string title;
string author;
float price;

public:

book()
{
title ="unknown";
author = "unknown";
price = 0.0;
}

book(string t, string a, float p)
{
title = t;
author = a;
price = p;
}

void disp()
{
cout<<"TITLE:"<<title<<endl;
cout<<"AUTHOR: "<<author<<endl;
cout<<"PRICE: "<<price<<endl;
}
};

int main()
{
book b1;
book b2("SUPERMAN", "HENRY CAVIL", 10000);

cout<<"Book 1(default)"<<endl;
b1.disp();

cout <<"_____________________________________________"<<endl<<endl;

cout<<"Book 2 (complete)"<<endl;
b2.disp();

return 0;
}
