// Class templates with static variables

#include<iostream>
using namespace std;

template<class T>
class Addition
{
	public:
	void add(T n1,T n2)
	{
		static int i=10;
		cout << ++i << endl;
		return;
	}
};

int main()
{
	int a,b;
	
	Addition<int>ob1;
	ob1.add(a,b);
	
	Addition<int>ob2;
	ob2.add(a,b);
	
	Addition<double>ob3;
	ob3.add(a,b);
	return 0;
}
