// Line count

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin;
	string str;
	fin.open("file.txt");
	int count=0;
	char word[30];
	if(!fin)
		cout<<"The File cannot open";
	else
	{
		while(getline(fin,str))
		{
			count++;
		}
	}
	cout << "Total lines: " << count << endl;
	fin.close();
	return 0;
}


