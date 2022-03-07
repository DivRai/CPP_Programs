// Assingment Program

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	public:

	int roll_no;
	char name[50];

	void getRoll(int rn)
	{
		roll_no = rn;
		cout << "\nRoll No. of student is " << roll_no << endl;
	}

	void getName(char str[])
	{
		strcpy(name,str);
		cout << "Name of student is ";
		puts(name);
		cout << endl;
	}

	
};

class test
{
	public:

	int marks[5];
	
	void getMarks(int scores[])
	{
		for(int i=0;i<5;i++)
		{
			marks[i] = scores[i];
			printf("Marks of subject %d is %d\n",i+1,marks[i]);
		}
	}
};

class result: public student, public test
{
	public:

	int totalmarks;
	float percentage;

	int totalMarks()
	{
		int tm=0;
		for(int i=0;i<5;i++)
			tm += marks[i];
		return tm;
	}

	void percent()
	{
		int tm=totalMarks();
		percentage = (float(tm)/500)*100;
		cout << "Percentage is " << percentage << endl;
	}
};

int main()
{
	int rn;
	int marks[5];
	char name[50];
	cout << "Enter roll no. of student " << ": ";
	cin >> rn;
	cout << "Enter name of student " << ": ";
	cin >> name;

	cout << endl;

	for(int i=0;i<5;i++)
	{
		cout << "Enter marks of subject " << i+1 << ": ";
		cin >> marks[i];
	}

	result res1;
	res1.getRoll(rn);
	res1.getName(name);
	res1.getMarks(marks);
	cout << "\nTotal marks is " << res1.totalMarks() << endl;
	res1.percent();

	return 0;
}
