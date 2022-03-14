// Defining new exceptions

#include<iostream>
#include<exception>
using namespace std;

class newException:public exception
{
	public:
	const char * what() const throw()
	{ return ("Divide by zero error!\n"); }
};

int main()
{
	float x,y;
	cout << "Enter x: "; cin >> x;
	cout << "Enter y: "; cin >> y;
	try
	{
		if(y==0)
		{
			newException err;
			throw err;
		}
		else	
			cout << x/y << endl;
	}
	catch(exception& e)
	{ cout << e.what(); }
	return 0;
}
