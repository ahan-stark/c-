#include<iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl
int max(int x, int y);      //prototype(consists of formal arguments)
int main()                  //Function caller
{
int a,b,c;
cout<<"enter 2 integers"<<endl; 
cin>>a>>b;
c=max(a,b); //functioncall  
cout<<c<<endl;
}
int max(int x, int y)            //function definition
{
if(x>y)
{
return x;                         //function
}
else
return y;
}