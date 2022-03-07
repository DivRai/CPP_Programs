// Single level inheritance

#include<iostream>
using namespace std;

class person
{
	public:
		int age,height,weight;

	void getAge(int a)
	{		
		age=a;
		cout << "Age is " << age << endl;
	}
	void getHeight(int h)
	{
		height=h;
		cout << "Height is " << height << endl;
	}
	void getWeight(int w)
	{
		weight=w;
		cout << "Height is " << weight << endl;
	}
};
	
class doctor: public person
{
	public:
		int years;

	void getFunc()
	{
		cout << "I am a doctor" << endl;
	}
	
	void getYears(int y)
	{
		years=y;
		cout << "Graduation is of " << years << " years" << endl;
	}
};

class engineer: public person
{
	public:
		int years;

	void getFunc()
	{
		cout << "I am an engineer" << endl;
	}

	void getYears(int y)
	{
		years=y;
		cout << "Graduation is of " << years << " years" << endl;
	}
};

int main()
{

	int a,h,w,y;
	doctor doc1;
	printf("Enter age: ");
	scanf("%d",&a);
	printf("Enter height: ");
	scanf("%d",&h);
	printf("Enter weight: ");
	scanf("%d",&w);
	printf("Enter graduation years: ");
	scanf("%d",&y);
	cout << endl;
	doc1.getAge(a);
	doc1.getHeight(h);
	doc1.getWeight(w);
	doc1.getYears(y);
	doc1.getFunc();

	engineer eng1;
	printf("\nEnter age: ");
	scanf("%d",&a);
	printf("Enter height: ");
	scanf("%d",&h);
	printf("Enter weight: ");
	scanf("%d",&w);
	printf("Enter graduation years: ");
	scanf("%d",&y);
	cout << endl;
	eng1.getAge(a);
	eng1.getHeight(h);
	eng1.getWeight(w);
	doc1.getYears(y);
	eng1.getFunc();
	
	return 0;
}
