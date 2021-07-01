#include<iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl
void exchange(int x, int y); 
int main( )
{
int a, b;
cout<<"enter values for A and B"<<endl;
cin>>a>>b;
cout<<"Values before swapping"<<endl<<"A="<<a<<endl<<"B="<<b<<endl;
exchange(a,b);

}
void exchange(int x, int y)
{
int temp;
temp=x;
x=y;
y=temp;
cout<<"Values after swapping"<<endl;
cout<<"A="<<x<<endl<<"B="<<y<<endl;
}