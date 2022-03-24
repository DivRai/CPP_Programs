#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst1, lst2;
	int i;
	for(i=0;i<10;i+=2)
		lst1.push_back(rand()%20);
	for(i=0;i<10;i+=2)
		lst2.push_back(rand()%20);
	
	cout << "Contents of list 1: ";
	list<int>::iterator p = lst1.begin();
	while(p!=lst1.end())
	{
		cout << *p << " ";
		p++;
	}
	
	cout << "\n\n";
	
	cout << "Contents of list 2: ";
	p = lst2.begin();
	while(p!=lst2.end())
	{
		cout << *p << " ";
		p++;
	}
	
	// Sort list 1
	cout << "\n\nSorted list 1: ";
	lst1.sort();
	p = lst1.begin();
	while(p!=lst1.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	
	// Sort list 2
	cout << endl << "Sorted list 2: ";
	lst2.sort();
	p = lst2.begin();
	while(p!=lst2.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	
	// Merging list 1 and list 2
	cout << "\nMerging both the lists..." << endl;
	/* Merge function will print the merged list in sorted order. 
	It will compare the respective elements of both the lists and
	print the smallest one first. */
	lst1.merge(lst2);
	if(lst2.empty())
		cout << "List 2 is now empty" << endl;
	cout << "Contents of list 1 after merge: ";
	p = lst1.begin();
	while(p!=lst1.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	return 0;
}
