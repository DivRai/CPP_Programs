// Class template

#include<iostream>
#include<string.h>
using namespace std;

template<class T>
class Addition
{
	public:
	T add(T n1,T n2)
	{
		T res;
		res = n1 + n2;
		return res;
	}
};

int main()
{
	Addition<int> ob1;
	Addition<long> ob2;
	Addition<string> ob3;
	int a=10,b=20,c;
	long A=1,B=22,C;
	string s1="Divyansh ",s2="Rai",s3;
	
	c = ob1.add(a,b);
	cout << "Sum of int: " << c << endl;
	C = ob2.add(A,B);
	cout << "Sum of long: " << C << endl;
	s3 = ob3.add(s1,s2);
	cout << "Sum of string: " << s3 << endl;
	
	return 0;
}

