#include<iostream>
int x;  // Global variable
#define cout std::cout
#define endl std::endl
int main()
{
    x=10;   // Initialized once
    cout<<"the first value of x="<<x<<endl;
    x=20;   // Initializedagain
    cout<<"Intialized value of x="<<x;

}