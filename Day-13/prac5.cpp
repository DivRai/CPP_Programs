#include<iostream>
using namespace std;

class convert
{
	protected:
	double val1;	// initial value
	double val2;	// converted value
	public:
	convert(double i)
	{	val1 = i;	}
	double getconv() {	return val2;	}
	double getinit() {	return val1;	}
	virtual void compute()=0;
};

// Liters to Gallons
class l_to_g:public convert
{
	public:
	l_to_g(double i):convert(i) {}
	void compute() 
	{
		val2 = val1/3.7854;
	}
};

// Fahrenheit to Celsius
class f_to_c:public convert
{
	public:
	f_to_c(double i):convert(i) {}
	void compute()
	{	
		val2 = (val1-32)/1.8;
	}
};

int main()
{
	convert *p;
	l_to_g lgob(4);
	f_to_c fcob(70);

	// Use virtual function mechanism to convert
	p = &lgob;
	cout << p->getinit() << " liters is ";
	p->compute();	
	cout << p->getconv() << " gallons\n";
	
	p = &fcob;
	cout << p->getinit() << " in fahrenheit is ";
	p->compute();
	cout << p->getconv() << " celsius\n";

	return 0;
}
