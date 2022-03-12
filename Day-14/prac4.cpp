// Exception handling example 2

#include<iostream>
using namespace std;
int main()
{
	int n2,n1;
	try
	{	
		if(n2==0)
			throw n2;
		else
		{
			int result = n1/n2;
			cout << "The result is : " << result << endl;
		}
	}

	catch(int x)
	{
		cout << endl << "Can't divide by : " << endl;
	}

	cout << endl << "End of program" << endl;
}
