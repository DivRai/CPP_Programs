// Exception handling example 4

#include<iostream>
using namespace std;

int main()
{
	int a=4;
	float n=4.5;
	double e;
	try
	{
		if(a==1)
			throw a;
		else if(a==2)
			throw 'A';
		else if(a==3)
			throw n;
		else
			throw e;
}

	catch(int a)
	{
		cout << "Exception:Throwing integer exception" << endl;
	}

	catch(char A)
	{
		cout << "Exception:Throwing character exception" << endl;
	}

	catch(float n)
	{
		cout << "Exception:Throwing float exception" << endl;
	}

	catch(...)
	{
		cout << "Exception:Unknown" << endl;
	} 

	return 0;
}
