#include<iostream>
using namespace std;

namespace ns1
{
	int i;
	namespace ns2
	{
		int j;
	}
}

int main()
{
	ns1::i = 19;
	//ns2::j = 10;  Error, ns2 is not in view
	ns1::ns2::j = 10;
	cout << ns1::i << " " << ns1::ns2::j << endl;
	
	using namespace ns1;
	// Now that ns1 is in view, ns2 can be used to refer to j
	cout << i*ns2::j << endl;
	return 0;
}
