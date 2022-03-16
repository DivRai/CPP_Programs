// read()

#include<iostream>
#include<fstream>
using namespace std;

class student
{
	public: 
	int roll; char name[25]; float marks;
	void display()
	{
		fstream f; student s;
		f.open("student.dat", ios::in|ios::binary);
		f.read((char *)&s, sizeof(s));
		cout << "Roll no: " << s.roll << endl;
		cout << "Name: " << s.name << endl;
		cout << "Marks: " << s.marks << endl;
		f.close();
	}
};

int main()
{
	student s;
	s.display();
	return 0;
}
