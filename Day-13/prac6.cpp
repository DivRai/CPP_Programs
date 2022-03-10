// Homework Assignment

#include<iostream>
using namespace std;

class base
{
	int i;
	public:
	int j,k;
	void seti(int x)	{	i = x;	}
	int geti() {	return i;	}
};

class Derived:private base
{
	/*The next three statements override base's inheritance
	as private and restore j, seti() and geti() to public access*/
	public:
	using base::j;		// make j public again but not k
	using base::seti;		// make seti() public
	using base::geti;		// make geti() public
	//base i;		// illegal, you cannot elevate access
};

int main()
{
	Derived dv1;
	dv1.seti(10);
	cout << dv1.geti()<< endl;
	return 0;
}
