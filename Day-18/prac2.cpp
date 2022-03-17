// Function template 2

#include<iostream>
using namespace std;

template<class T,class U>
U multiply(T n1, U n2)
{
	U rs;
	rs = n1*n2;
	return rs;
}

int main()
{
	int A = 10, B = 20, C;
	double a = 2.2, b = 2.5, c, d, e;
	
	C = multiply(A,B);
	cout << "Result: " << C << endl;
	
	c = multiply(a,b);
	cout << "Result: " << c << endl;
	
	d = multiply(A,b);
	cout << "Result: " << d << endl;
	
	e = multiply(a,B);
	cout << "Result: " << e << endl;
	return 0;
}
