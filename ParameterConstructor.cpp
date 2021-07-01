#include <iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl
class Cube
{
public:
    int side;

public:
    Cube(int x)
    {
        side = x;
    }
};
int main()
{
    Cube c1(10);
    Cube c2(20);
    Cube c3(30);
    cout << c1.side;
    cout << c2.side;
    cout << c3.side;
}