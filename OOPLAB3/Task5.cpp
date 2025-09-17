#include<iostream>
using namespace std;
class Concrete{
	private:
		string msg;
	public:
		Concrete(string m){msg=m;}
		void displaymsg(){cout<<"Message = "<<msg<<endl;}
};
int main(){
	Concrete c("Hello everyone !!!!!!");
	c.displaymsg();
}