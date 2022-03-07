// Hybrid inheritance

#include<iostream>
using namespace std;

class Car
{
	public:

	void func1()
	{
		cout << "Car Class" << endl;
	}
};
	
class FuelCar:public Car
{
	public:
	
	void func2()
	{
		cout << "FuelCar Class" << endl;
	}
};

class ElectricCar:public Car
{
	public:

	void func3()
	{
		cout << "ElectricCar Class" << endl;
	}
};

class HybridCar:public FuelCar, public ElectricCar
{
	public:

	void func4()
	{
		cout << "HybridCar class" << endl;
	}
};

int main()
{
	HybridCar hc1;
	
	//hc1.func1();
	hc1.func2();
	hc1.func3();
	hc1.func4();
	
	return 0;
}
