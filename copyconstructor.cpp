#include <iostream>
#define cout std::cout
#define cin std::cin
class copycon
{
	int copy_a, copy_b;

public:
	copycon(int x, int y)
	{
		copy_a = x;			//Assign values to constructor
		copy_b = y;
	}
	void display()
	{
		cout << "Values:" << copy_a << "\t" << copy_b<<"\n";
	}
};
int main()
{
	copycon obj(10, 20);
	copycon obj2 = obj ;	//copy constructor
	cout<< "I am a constructor\n";
	obj.display();
	cout << "I am a copy constructor\n";
	obj2.display();
	return 0;
}
