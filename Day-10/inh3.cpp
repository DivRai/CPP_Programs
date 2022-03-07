// Multilevel inheritance

#include<iostream>
using namespace std;

class person
{
	public:
		int age,height,weight;

	void getAge(int a)
	{		
		age=a;
		cout << "\nAge is " << age << endl;
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
	
class engineer: public person
{
	public:
		int years;
	
	void getYears(int y)
	{
		years=y;
		cout << "Graduation is of " << years << " years" << endl;
	}
};

class ECEngineer: public engineer
{
	public:

	void getFunc()
	{
		cout << "I am an EC engineer" << endl;
	}
};

int main()
{

	int a,h,w,y;

	ECEngineer ec1;
	printf("Enter age: ");
	scanf("%d",&a);
	printf("Enter height: ");
	scanf("%d",&h);
	printf("Enter weight: ");
	scanf("%d",&w);
	printf("Enter graduation years: ");
	scanf("%d",&y);
	ec1.getAge(a);
	ec1.getHeight(h);
	ec1.getWeight(w);
	ec1.getYears(y);
	ec1.getFunc();
	
	return 0;
}
