// Copy content of one file to other

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin,fout;
	string s;
	fin.open("file.txt");
	fout.open("file1.txt");
	char ch;
	
	while(!fin.eof())
	{
		fin.get(ch);
		fout << ch;
		//fin >> s;
		//fout << s << " ";
	}
	
	cout << "Copy done!!" << endl;
	fin.close();
	fout.close();
	return 0;
}


