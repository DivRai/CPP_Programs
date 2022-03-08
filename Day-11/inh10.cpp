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
	
	void disp()
	{
		cout << "FuelCar Class" << endl;
	}
};

class ElectricCar:public Car
{
	public:

	void disp()
	{
		cout << "ElectricCar Class" << endl;
	}
};

class HybridCar:public FuelCar, public ElectricCar
{
	public:

	void disp()
	{
		cout << "HybridCar class" << endl;
	}
};

int main()
{
	HybridCar hc1;
	hc1.disp();
	hc1.FuelCar::disp();
	hc1.ElectricCar::disp();

	return 0;
}
