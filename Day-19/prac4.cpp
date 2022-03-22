// Function template specialization

#include<iostream>
using namespace std;
template<class X>
void swap1(X &a, X &b)
{
	X temp;
	temp=a;
	a=b;
	b=temp;
	cout << "Inside template swap.\n";
}
// overrides the generic version of swap() for int.
void swap1(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout << "Inside int specialization.\n";
}
int main()
{
	int i=10,j=20;
	double x=10.1,y=23.3;
	char a='x',b='z';
	cout << "Original i,j: " << i << " " << j << endl;
	cout << "Original x,y: " << x << " " << y << endl;
	cout << "Original a,b: " << a << " " << b << endl;
	swap1(i,j); //calls explicitly swap()
	swap1(x,y); //calls generic swap()
	swap1(a,b); //calls generic swap()
	cout << "Swapped i,j: " << i << " " << j << endl;
	cout << "Swapped x,y: " << x << " " << y << endl;
	cout << "Swapped a,b: " << a << " " << b << endl;
	return 0;
}
