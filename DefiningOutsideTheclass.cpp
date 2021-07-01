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
    void getdata();
    void display();
};
void Student::getdata()
{
    cout << "enter name,marks in two subjects" << endl;
    cin >> name >> marks1 >> marks2;
}
void Student::display()
{
    cout << "name:" << name << endl;
    cout << "marks:" << marks1 << ", " << marks2;
}

int main()
{
    Student obj1;
    obj1.getdata();
    obj1.display();
}
