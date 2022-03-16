// Read and write example

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fp;
	char buf[100];
	int pos;
	
	fp.open("data2.txt",ios::out|ios::ate);
	cout << "Writing to a file..." << endl;
	fp << "Line one" << endl;
	fp << "Line two" << endl;
	
	pos = fp.tellp();
	cout << "Current Position : " << pos << endl;
	fp.seekp(-7,ios::cur);
	fp << endl << "Random Data";
	fp.seekp(7,ios::beg);
	
	fp << "Hello world";
	fp.close();
	cout << "Done writing" << endl;
	fp.open("data2.txt");
	cout << "\nReading the file..." << endl;
	fp.seekg(0);
	while(fp.getline(buf,100))
		cout << buf << endl;
	pos = fp.tellg();
	cout << "Pos pointer is at : " << pos << endl;
	
	return 0;
}


