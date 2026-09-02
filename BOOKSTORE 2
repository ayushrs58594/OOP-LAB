#include <iostream>
#include <string>
using namespace std;

class book 
{
    public:
    int bookid;
    string book_title;
    float price;

    book()
    {
        bookid = 0;
        book_title = "nothing";
        price = 0.0;
    }

    book(int i,string t,float p)
    {
        bookid = i;
        book_title = t;
        price = p;
    }

    void display()
    {
        cout<<"=====BOOK DETAILS====="<<endl;
        cout<<"BookID:"<<bookid<<endl;
        cout<<"Book title:"<<book_title<<endl;
        cout<<"Book Price:"<<price<<endl;
    }
};

int main() 
{
    book b1;
    book b2(1001,"OOP",500);
    b1.display();
    b2.display();
    return 0;
}
