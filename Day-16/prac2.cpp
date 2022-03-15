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
		while(!input.eof())
		{
			input >> str;
			cout << str << endl;
		}
	}
	cout << endl;
		
	return 0;
}
