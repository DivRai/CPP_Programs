// Pointer to derived class

#include<iostream>
using namespace std;

class Base
{
	int x;
	public:

	void func1()
	{
		cout << "Base function" << endl;
	}

};

class Derived : public Base
{
	int y;
	public:

	void func2()
	{
		cout << "Derived function" << endl;
	}
};

int main()
{
	Base *ptr;
	Base b;
	Derived d;
	ptr = &b;
	ptr = &d;
	ptr->func1();
	ptr->func2();
	((derived *)ptr)->func1();
	/*Derived *ptr;
	ptr = &d;
	ptr->func1();
	ptr->func2();*/
	return 0;
}

