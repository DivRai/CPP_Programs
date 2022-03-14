// Exception handling and inheritance
// Catch Order: Base and Derived
#include<iostream>
using namespace std;

class Base{};
class Derived:public Base{};

int main()
{
	try
	{
		throw Derived();
	}
	catch(Base b)
	{ cout << "Base object caught" << endl; }
	catch(Derived d)
	{ cout << "Derived object caught" << endl; }
	return 0;
}
