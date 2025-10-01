#include<iostream>
using namespace std;
int sumarray(int* arr,int size){
	int sum=0;
	for(int i=0;i<size;i++){
			sum+=*(arr+i);
	}
	cout<<"Sum = "<<sum<<endl;
}
int main(){
	int size;
	cout<<"Enter size of array = ";cin>>size;
	int* arr=new int[size];
	for(int i=0;i<size;i++){
		cin>>*(arr+i);	
	}
	sumarray(arr,size);
	
	delete[] arr;
	
}