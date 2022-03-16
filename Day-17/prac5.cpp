#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile;
	outfile.open("data.txt");
	outfile << "This is my file" << endl;
	long pos = outfile.tellp();
	outfile.seekp(pos+6);
	outfile << "Again my file" << endl;
	outfile.close();
	cout << "Done!!" << endl;
	
	return 0;
}
