#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	char str[] = "I love C++ programming";
	vector<char>v, v2(30);
	int i;
	for(i=0;str[i];i++)
		v.push_back(str[i]);
	cout << "Input sequence:\n";
	for(i=0;i<v.size();i++)
		cout << v[i] << endl;
	
	// remove all spaces
	remove_copy(v.begin(),v.end(),v2.begin(),' ');
	
	// (itr first, itr last, itr target, char_to_remove)
	cout << "\n\n" << "Result after removing spaces:\n";
	
	for(i=0;i<v2.size();i++)
		cout << v2[i];
	cout << "\n\n";
	
	return 0;
}
