// Exception handling example 5

#include<iostream>
using namespace std;

int main()
{
	float a=1;
	try
	{
		try
		{
			throw a;
		}
		catch(int x)
		{
			cout << "Exception in inner try-catch block " << x;
			throw x;
		}
	}
	catch(float x)
	{
		cout << "Exception in outer try-catch block" << endl;
	}
	return 0;
}
