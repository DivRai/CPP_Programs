#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream myfile;

	myfile.open("file.txt",ios::in);

	if(!myfile)
		cout << "The file cannot open" << endl;
	else
		cout << "The file opened successfully" << endl;
		
	return 0;
}
