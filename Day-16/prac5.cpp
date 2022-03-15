// Displaying giving newline

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
			cout << str << '\n' << str2 << endl;
		}
	}
	input.close();

	return 0;
}
