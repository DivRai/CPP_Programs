#include<iostream>
using namespace std;

class Test
{
	int x;
	public:
	void read()
	{
		cout << "Enter a number: ";
		cin>>x;
	}
	class EVEN{};	// abstract class for exception
	class ODD{};
	void check()
	{
		if(x%2==0)
			throw EVEN();	// throwing an object of type EVEN
		else
			throw ODD();	// throwing an object of type ODD
	}
};

int main()
{
	Test t;
	t.read();
	try
	{
		t.check();
	}

	catch(Test::EVEN)	// exception handler block
	{
		cout << "Number is even" << endl;
	}
	catch(Test::ODD)
	{
		cout << "Number is odd" << endl;
	}
	return 0;
}
