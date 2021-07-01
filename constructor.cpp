#include <iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl
class Cube
{
public:
    int side;

public:
    Cube()
    {
        side = 10;
    }
};
int main()
{
    Cube c; //constructor is going to call
    cout << c.side;
}