// Nested class all cases

#include<iostream>
using namespace std;

class Base
{
	public:
	
	void showb()
	{ cout << "I am base class function" << endl; }
	
	class Nested1
	{
		public:
		void shown1()
		{ cout << "I am nested class 1 function" << endl; }
	};

	class Nested2
	{
		public:
		void shown2()
		{ cout << "I am nested class 2 function" << endl; }
	};
};

class Derived:public Base
{
	public:
	void showd()
	{ cout << "I am derived class function" << endl; }
};

int main()
{
	Base b1;
	Base::Nested1 n1;
	Base::Nested2 n2;
	Derived derv1;
	Derived::Nested1 dervn1;
	Derived::Nested2 dervn2;

	b1.showb();
	//b1.shown1();		// Base class can't access nested class func
	//b1.shown2();		// Base class can't access nested class func

	//n1.showb();		// Nested class can't access base class func
	n1.shown1();

	//n2.showb();		// Nested class can't access base class func
	n2.shown2();

	derv1.showb();
	//derv1.shown1();		// Derived class can't access nested class func
	//derv1.shown2();		// Derived class can't access nested class func
	derv1.showd();

	//dervn1.showb();		// First Nested class object of Derived class can't access base class func
	dervn1.shown1();
	//dervn1.shown2();	// First Nested class object of Derived class can't access second nested class func
	//dervn1.showd();		// First Nested class object of Derived class can't access derived class func

	//dervn2.showb();		// Second Nested class object of Derived class can't access base class func
	//dervn2.shown1();	// Second Nested class object of Derived class can't access first nested class func
	dervn2.shown2();
	//dervn2.showd();		// Second Nested class object of Derived class can't access derived class func
	return 0;
}
