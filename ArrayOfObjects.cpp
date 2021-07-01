#include <iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl
class c1
{
    int i;

public:
    void get_i(int j)
    {
        i = j;
    }
    void show()
    {
        cout << i << endl;
    }
};
int main()
{
    c1 obj[10]; //declared array ofobjects
    for (int i = 0; i < 10; i++)
        obj[i].get_i(i);
    for (int i = 0; i < 10; i++)
        obj[i].show();
}