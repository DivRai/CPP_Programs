// Displaying giving tab

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream input; 
	string str, str2;
	input.open("data.txt");
	if(!input)
		cout << "File did not open" << endl;
	else
	{
		while(!(input >> str >> str2).eof())
		{
			cout << str << '\t' << str2 << endl;
		}
	}
	input.close();

	return 0;
}
