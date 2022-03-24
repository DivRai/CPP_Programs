#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<char,int>m1;
	map<char,int>m2;
	int i;
	
	// put pairs into map
	for(i=0;i<26;i++)
	{
		m1.insert(pair<char,int>('A'+i,65+i));	// For uppercase
		m2.insert(pair<char,int>('a'+i,97+i));    // For lowercase
	}
		
	char ch1,ch2;
	cout << "Enter key(an uppercase letter): ";
	cin >> ch1;
	map<char,int>::iterator p1;
	
	// find value given key
	p1 = m1.find(ch1);
	if(p1!=m1.end())
		cout << "Its ASCII value is " << p1->second << endl;
	else
		cout << "Key not in map.\n";
		
	cout << endl << "Enter key(a lowercase letter): ";
	cin >> ch2;
	map<char,int>::iterator p2;
	p2 = m2.find(ch2);
	if(p2!=m2.end())
		cout << "Its ASCII value is " << p2->second << endl;
	else
		cout << "Key not in map.\n";
	return 0;
}
