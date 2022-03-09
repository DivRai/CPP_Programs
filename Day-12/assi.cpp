#include<iostream>
using namespace std;

class student
{
	private:
	int marks;
	char name[20];

	public:
	int rollno;
	
	int getdata(int j)
	{
		cout << "Enter roll number of student " << j << ": ";
		cin >> rollno;
		cout << "Enter name of student " << j << ": ";
		cin >> name;
		cout << "Enter marks of student " << j << ": ";
		cin >> marks;
		cout << endl;
	}

	void printdata(int j)
	{
		cout << "\nRoll number of student " << j << ": " << rollno << endl;
		cout << "Name of student " << j << ": " << name << endl;
		cout << "Marks of student " << j << ": " << marks << endl;
	}
};

int main()
{
	student st[3];
	student *ptr = st;

	for(int i=0;i<3;i++)
		(ptr+i)->getdata(i+1);
	
	cout << "Student Database" << endl;
	for(int i=0;i<3;i++)
		(ptr+i)->printdata(i+1);

	return 0;
}


