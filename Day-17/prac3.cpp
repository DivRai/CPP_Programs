// write()

#include<iostream>
#include<fstream>
using namespace std;

class student
{
	public: 
	int roll; char name[25]; float marks;
	void getdata()
	{
		cout << "Enter Roll No: ";
		cin >> roll;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Marks: ";
		cin >> marks;
	}

	void AddRecord()
	{
		fstream f; student stu;
		f.open("student.dat",ios::app|ios::binary);	// binary file
		stu.getdata();
		f.write((char *)&stu, sizeof(stu));
		f.close();
	}
};

int main()
{
	student s;
	char ch = 'n';
	do
	{
		s.AddRecord();
		cout << "Want to add more?(y/n): ";
		cin >> ch;
	}while(ch=='y'||ch=='Y');
	cout << "Updated!!" << endl;
	return 0;
}
