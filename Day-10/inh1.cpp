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

	void getFunc()
	{
		cout << "I am a doctor" << endl;
	}
};

class engineer: public person
{
	public:

	void getFunc()
	{
		cout << "I am an engineer" << endl;
	}
};

int main()
{

	int a,h,w;
	doctor doc1;
	printf("Enter age: ");
	scanf("%d",&a);
	printf("Enter height: ");
	scanf("%d",&h);
	printf("Enter weight: ");
	scanf("%d",&w);
	doc1.getAge(a);
	doc1.getHeight(h);
	doc1.getWeight(w);
	doc1.getFunc();

	engineer eng1;
	printf("\nEnter age: ");
	scanf("%d",&a);
	printf("Enter height: ");
	scanf("%d",&h);
	printf("Enter weight: ");
	scanf("%d",&w);
	eng1.getAge(a);
	eng1.getHeight(h);
	eng1.getWeight(w);
	eng1.getFunc();
	
	return 0;
}
