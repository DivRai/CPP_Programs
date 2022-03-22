// Vector insert() and erase() function 
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v = { 10, 15, 20, 25 };

	// inserts 5 at front
	auto it = v.insert(v.begin(), 5);
	
	// inserts 1 at front
	v.insert(it, 1);

	int i = 6;
	// inserts 30 at i-th index
	it = v.insert(v.begin() + i, 30);

	cout << "The vector elements after insertion are:"<<endl;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout<<endl;
	
	// erase first element
	it = v.begin();
	v.erase(it);
	
	// erase last element
	it = v.end();
	v.erase(--it);
	
	cout << endl << "The vector elements after erase are:"<<endl;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout<<endl;
	return 0;
}

