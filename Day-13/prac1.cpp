// Pointer to derived class

#include<iostream>
using namespace std;

class Base
{
	public:
	int b;

	void show()
	{
		cout << "\nb = " << b;
	}

};

class Derived : public Base
{
	public:
	int d;

	void show()
	{
		cout << "\nb = " << b << "\nd = " << d;
	}
};

int main()
{
	Base *ptr;
	Base b;
	Derived d;

	cout << "Pointer to Base class object";
	ptr = &b;
	ptr->b = 1;
	ptr->show();

	cout << "\nPointer to Derived class object";
	ptr = &d;
	ptr->b = 2;
	//ptr->d = 3;
	ptr->show();
	ptr->show();
	cout<<endl;

	return 0;
}

