// Exception handling and inheritance
// Catch Order: Derived and Base
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
	catch(Derived d)
	{ cout << "Derived object caught" << endl; }
	catch(Base b)
	{ cout << "Base object caught" << endl; }	
	return 0;
}
