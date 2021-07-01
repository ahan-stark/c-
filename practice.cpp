#include <iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl
void add(int a=10, int b=20,int c=30);
int main()
{
add(1,2,3);
add(1,2,50);
add(10,20,40);
add();
}
void add(int a, int b, int c)
{
cout<<a+b+c<<endl;
}