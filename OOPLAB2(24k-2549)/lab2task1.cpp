#include<iostream>
using namespace std;
void Swapvalues(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=20;int b=10;
	Swapvalues(&a,&b);
	cout<<"a= "<<a<<" "<<"b= "<<b;
}