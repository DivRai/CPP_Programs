#include<iostream>
using namespace std;

class base
{
	int i,j;
	public:
		
		void set (int a, int b)
		{	i=a; j=b; }
		
		void show()
		{	cout << i << " " << j << endl;	}
};

class derived : public base		// Here if we make private then code will give error
{
	int k;
	public:
	
		derived(int x)
		{	k = x;	}

		void showk()
		{	cout << k << endl;	}
};

int main()
{
	derived ob(3);
	//base ob;
	ob.set(1,2);
	ob.show();

	return 0;
}
