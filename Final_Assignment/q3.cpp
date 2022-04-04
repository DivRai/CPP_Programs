#include<iostream>
using namespace std;

int swps(string s)
{

	int sw = 0;

	int o1 = 0, e1 = 0;
	int o2 = 0, e2 = 0;

	int len = s.length();
	for (int i=0;i<len;i++) 
	{
		if (i%2 == 0) 
		{
			if(s[i] == '1')
				e2++;
			else
				e1++;
		}
		else 
		{
			if(s[i] == '1')
				o2++;
			else
				o1++;
		}
	}

	int c1 = min(e1, o2);
	int c2 = min(e2, o1);

	return max(c1, c2)+min(c1, c2);
}

int main()
{
	string str;
	cout << "Enter a binary string: ";
	cin >> str;
	cout << "Number of times substring 01 occurs: ";
	cout << swps(str) << endl;

	return 0;
}
