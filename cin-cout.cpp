#include<iostream>
#define cout std::cout
#define cin std::cin
int main()

{
int
a,b;
float k;
char name[30];
cout<< "Enter your name\n";
cin>>name;
cout<< "Enter two Integers and a Float\n"; 
cin>>a>>b>>k;
cout<< "Thank You "<<name<<",you entered\n";
cout<<a<<"\n"<<b<<"\n"<<k<<"\n";
}