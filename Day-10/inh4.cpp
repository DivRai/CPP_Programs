// Multiple inheritance

#include<iostream>
using namespace std;

class Liquid
{
	public:

	void func1()
	{
		cout << "Liquid Class" << endl;
	}
};
	
class Fuel
{
	public:
	
	void func2()
	{
		cout << "Fuel Class" << endl;
	}
};

class Petrol: public Liquid, public Fuel
{
	public:

	void func3()
	{
		cout << "Petrol Class" << endl;
	}
};

int main()
{
	Petrol p1;
	
	p1.func1();
	p1.func2();
	p1.func3();
	
	return 0;
}
