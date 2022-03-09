// 'This' pointer

#include<iostream>
using namespace std;

class Test
{
	int mark;
	float spi;
	public:
	void setData()
	{
		this->mark = 70;		// Within member function, the members can be accessed directly, without any object or class qualification
		this->spi = 6.5;		// But implicitly members are being accessed using this pointer
	}

	void displayData()
	{
		cout << "Mark = " << mark << endl;
		cout << "spi = " << spi << endl;
	}
};

int main()
{
	Test o1;
	o1.setData();		// When a member function is called, it autom-
	o1.displayData();	// atically passes a pointer to invoking object
	return 0;
}


