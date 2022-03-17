// template function for swap()

#include<iostream>
using namespace std;

template<typename T>
void swap(T *n1, T *n2)
{
	T temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main()
{
	int n1, n2;
	double d1, d2;
	string s1, s2;
	
	cout << "Enter two int numbers: ";
	cin >> n1 >> n2;
	cout << "Numbers before swapping: " << n1 << " " << n2 << endl;
	swap(&n1,&n2);
	cout << "Numbers after swapping: " << n1 << " " << n2 << endl;
	cout<<endl;
	
	cout << "Enter two double numbers: ";
	cin >> d1 >> d2;
	cout << "Numbers before swapping: " << d1 << " " << d2 << endl;
	swap(&d1,&d2);
	cout << "Numbers after swapping: " << d1 << " " << d2 << endl;
	cout<<endl;
	
	cout << "Enter two strings: ";
	cin >> s1 >> s2;
	cout << "Strings before swapping: " << s1 << " " << s2 << endl;
	swap(&s1,&s2);
	cout << "Strings after swapping: " << s1 << " " << s2 << endl;
}
