#include<iostream>
#define pi 3.14
#define cout std::cout
#define cin std::cin
class fn
{
    public:
            void area(int);
            void area(int,int);
            void area(float,int,int);
};
void fn::area(int a)
{
    cout<<"area of a cicle "<<a;
}
void fn::area(int a,int b)
{
    cout<<"area of a rectangle"<<a+b;
}
void fn::area(float t,int a,int b)
{
    cout<<"area of atriangle"<<t*a*b;
}
int main() 
{
    int ch;
    int a,b,r;
    fn obj;
    cout<<"\n FUNCTION OVERLOADING\n";
    cout<<"\n 1-Area of a circle \n 2-Area of a rectangle\n 3- Area of a triangle\n 4-Exit\n ";
    cout<<"enter your choice\n";
    cin>>ch;
    switch(ch)
{
    case 1:cout<<"enter radius\n";
    cin>>r;
    obj.area(r);
    break;
    case 2:cout<<"enter sides of rectangle";
    cin>>a>>b;
    obj.area(a,b);
    break;
    case 3:cout<<"enter side of triangle";
    cin>>a>>b;
    obj.area(0.5,a,b);
    break;
    case 4:exit(0);
}
return 0;
}