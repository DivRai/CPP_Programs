#include<iostream>
using namespace std;

template<class T1, class T2>
class sample
{
	T1 a;
	T2 b;
	public:
	void getdata()
	{
		cout << "Enter A & B: ";
		cin >> a >> b;
	}
	void display()
	{
		cout << "The values are: a is " << a << " and b is " << b << endl;
	}
};

int main()
{
	sample<int,int> s1;
	sample<int,double> s2;
	sample<double,double> s3;
	cout << "Integer data: " << endl;
	s1.getdata();
	s1.display();
	
	cout<<endl;
	
	cout << "Int and double data: " << endl;
	s2.getdata();
	s2.display();
	
	cout << endl;
	cout << "Double data: " << endl;
	s3.getdata();
	s3.display();
}
