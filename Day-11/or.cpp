#include<iostream>
using namespace std;

class ABC
{
	public:
	void display()
	{
		cout << "This is parent class" << endl;
	}
};

class XYZ:public ABC
{
	public:
	void display()		// overrides the display() method of class ABC
	{
		cout << "This is child class" << endl;
	}
};

int main()
{
	XYZ x;
	x.display();		// method of class XYZ invokes, instead of class ABC
	x.ABC::display();	// can call only functions of parent class like this not any other class
	return 0;
}
