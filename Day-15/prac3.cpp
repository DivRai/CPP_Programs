// Exception thrown from outside the 'try' block

#include<iostream>
using namespace std;

void Xtest(int test)
{
	cout << "Inside Xtest, test is:" << test << endl;
	if(test) throw test;
}

int main()
{
	cout << "Start" << "\n\n";
	try
	{
		cout << "Inside try block" << endl;
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch(int i)
	{
		cout << "Caught an exception -- value is: ";
		cout << i << endl;
	}
	cout << "\nEnd" << endl;
	return 0;
}
