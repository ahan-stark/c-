#include <iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl

class Student
{
private:
    char name[10];
    int marks1, marks2;

public:
    void getdata()
    {
        cout << "enter name,marks in two subjects" << endl;
        cin >> name >> marks1 >> marks2;
    }
    void display()
    {
        cout << "name:" << name << endl;
        cout <<"marks1:"<<marks1 << endl<<"marks2:"<< marks2<<endl;
    }
};
int main()
{
    Student obj1;
    obj1.getdata();
    obj1.display();
}