#include<iostream>
#include<typeinfo>
using namespace std;

void demo() throw(int,double)
{
	int n;
	double d;
	cout << "Enter n value: " << endl;
	cin >> n;	
	if(a==1)
		throw a;	// throwing integer exception
	else if(a==2)
		throw 'A';	// throwing character exception
	else if(typeid(a).name()==typeid(d).name())
		throw 4.5;	// throwing float exception
}

int main()
{
	try
	{
		demo();
	}
	catch(int n)
	{
		cout << "Exception caught" << endl;
	}
	cout << "End of program" << endl;
}	
