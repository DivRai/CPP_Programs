// Virtual Function Program 1

#include<iostream>
using namespace std;

class Base
{
	public:
	virtual void show()
		{ cout << "Base" << endl; }
};

class Derv1 : public Base
{
	public:
	virtual void show()
		{ cout << "Derv1" << endl; }
};

class Derv2 : public Base
{
	public:
	virtual void show()
		{ cout << "Derv2" << endl; }
};

int main()
{
	Derv1 dv1;
	Derv2 dv2;
	Base *ptr;
	
	ptr = &dv1;
	ptr->show();

	ptr = &dv2;
	ptr->show();
	
	//cout << sizeof(dv1) << endl;

	return 0;
}
