#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number of integers = ";
	cin>>n;
	if(n<0){
		cout<<"Invalid Input";
	}
	else{
		for(int i=0;i<n;i++){
				for(int s=0;s<=n-i;s++){
				cout<<" ";
			}
			char ch='A';
			for(int j=1;j<=(2*i-1);j++){
				cout<<ch;
				ch++;
			}
			cout<<endl;
		}
		for(int a=n;a>=0;a--){
			for(int s=0;s<=n-a;s++){
				cout<<" ";
			}
			 char ch='A';
			for(int b=(2*a-1);b>=1;b--){
				cout<<ch;ch++;
			}
			cout<<endl;
		}
	}
}