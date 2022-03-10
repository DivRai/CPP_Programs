// Virtual Function Program 2

#include<iostream>
using namespace std;

class Base
{
	public:
	virtual void function()
	{	cout << "Base virtual" << endl;	}
};

class Derive1 : public Base
{
	public:
	void function()
	{	cout << "Derive1 Virtual" << endl;	}
};

class Derive2 : public Base
{
	public:
	void display()
	{	cout << "Derive2" << endl;	}
};

int main()
{
	Derive1 d1;
	Derive2 d2;
	d2.function();
	d1.function();
	return 0;
}

