// reading file string by string using eof()

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream input; string str;
	input.open("file.txt");

	if(!input)
		cout << "The file did not open" << endl;
	else
	{
		while(!(input >> str).eof())
		{
			cout << str << endl;
		}
	}
	cout << endl;
		
	return 0;
}
