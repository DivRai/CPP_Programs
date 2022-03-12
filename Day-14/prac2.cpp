// Quiz question 4

#include<iostream>
using namespace std;

class A
{
	public:
	void displayA() { cout << "display A called" << endl; }
};

class B:public A
{
	public:
	void displayB() { cout << "display B called" << endl; }
};

class C:public B
{
	public:
	void displayC() { cout << "display C called" << endl; }
};

class D:public B, public C
{
	public:
	void displayD() { cout << "display D called" << endl; }
};


int main()
{
	A a;
	B b;
	C c;
	D d;

	c.displayA();
	//b.displayC();
	//b.displayD();
	c.displayB();
	//d.displayB();
	d.displayC();

	return 0;
}



