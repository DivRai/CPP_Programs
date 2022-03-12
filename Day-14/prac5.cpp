// Exception handling example 3

#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout << "Enter 1st number:" << endl;
	cin >> n1;
	cout << "Enter 2nd number:" << endl;
	cin >> n2;
	float e;
	try
	{
		if(n2!=n1)
		{
			char st;
			float div=(float)n1/n2;
			//int div = n1/n2;
			if(n2==0)
				throw 'e';
			else if(div<1)
				throw st;
			cout << "n1/n2=" << div << endl;
		}
		else
			throw e;
	}

	catch(int e)
	{
		cout << "Exception:Division by zero" << endl;
	}

	catch(char st)
	{
		cout << "Exception:Division is less than 1" << endl;
	}

	catch(...)
	{
			cout << "Exception:Unknown" << endl;
	}
return 0;
}
