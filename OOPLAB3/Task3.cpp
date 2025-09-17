#include<iostream>
using namespace std;
class Calculator{
	private:
	int a;int b;
	public:
	void setvalues(int x,int y){
		a=x;b=y;
	}
	int add(){
		return a+b;
	}
};
int main(){
	Calculator c;
	c.setvalues(22,42);
	int sum=c.add();
	cout<<"Sum = "<<sum<<endl;
	
}