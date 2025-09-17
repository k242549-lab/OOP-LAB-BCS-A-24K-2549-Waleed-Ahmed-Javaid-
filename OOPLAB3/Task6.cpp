#include<iostream>
using namespace std;
class Vehicle{
	public:
	string Make;
	string Model;
	void displayinfo(){
		cout<<"Make = "<<Make<<endl<<"Model = "<<Model<<endl;
	}
};
class Car:public Vehicle{
	public:
	string enginetype;
	void displayinfo(){
		Vehicle::displayinfo();
		cout<<"Engine Type = "<<enginetype<<endl;
	}
};
int main(){
	Car c1;
	c1.Make="LEXUS";
	c1.Model="LX500";
	c1.enginetype="V8";
	c1.displayinfo();
}