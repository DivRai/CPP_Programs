// Real delimiting code

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream myfile;
	string str;
	myfile.open("data1.txt");
	if(!myfile)
		cout<<"The File cannot open";
	else
	{
		while(getline(myfile,str,','))
		{
			cout<<str<<endl;
		}
	}
	return 0;
}


