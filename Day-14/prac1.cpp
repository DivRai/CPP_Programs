// Quiz question 1

#include<iostream>
using namespace std;

class A
{
	public:
	void displayA() { cout << "display A called" << endl; }
};

class B
{
	public:
	void displayB() { cout << "display B called" << endl; }
};

class C:public A
{
	public:
	void displayC() { cout << "display C called" << endl; }
};

class D:public B
{
	public:
	void displayD() { cout << "display D called" << endl; }
};

class E:public C, public D
{
	public:
	void displayE() { cout << "display E called" << endl; }
};

class F:public E
{
	public:
	void displayF() { cout << "display F called" << endl; }
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;

	a.displayA();
	//b.displayA();
	//b.displayC();
	//b.displayD();
	f.displayA();
	f.displayC();
	f.displayB();
	f.displayE();

	return 0;
}



