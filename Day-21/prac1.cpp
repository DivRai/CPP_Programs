#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst;
	int i;
	for(i=0;i<10;i++)
		lst.push_back(i);
	cout << "Size = " << lst.size() << endl;
	cout << endl << "Contents: ";
	list<int>::iterator p = lst.begin();
	
	while(p!=lst.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << "\n\n";
	p = lst.begin();
	
	while(p!=lst.end())
	{
		*p = *p + 50;
		p++;
	}
	cout << "Contents modified: ";
	p = lst.begin();
	
	while(p!=lst.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	return 0;
}