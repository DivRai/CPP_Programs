// Word count

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin;
	fin.open("file.txt");
	int count=0;
	char word[30];
	if(!fin)
		cout<<"The File cannot open";
	else
	{
		while(!fin.eof())
		{
			fin >> word;
			count++;
		}
	}
	cout << "Total words: " << count << endl;
	fin.close();
	return 0;
}


