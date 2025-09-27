#include<iostream>
using namespace std;
int main(){
	int m;
	int freq[8]={0};
	int denomitions[9]={5000,500,100,20,10,5,2,1};
	cout<<"Enter an amount of money = ";
	cin>>m;
	if(m<0) cout<<"Invalid Input";
	else{
		while(m>0){
			if(m>=5000){
				m-=5000;
				freq[0]++;
			}
			else if(m>=500){
				m-=500;
				freq[1]++;
			}
			else if(m>=100){
				m-=100;
				freq[2]++;
			}
				else if(m>=20){
				m-=20;
				freq[3]++;
			}
				else if(m>=10){
				m-=10;
				freq[4]++;
			}
				else if(m>=5){
				m-=5;
				freq[5]++;
			}
				else if(m>=2){
				m-=2;
				freq[6]++;
			}
				else if(m>=1){
				m-=1;
				freq[7]++;
			}
		}
	}
	for(int i=0;i<8;i++){
		if(freq[i]>0) cout<<denomitions[i]<<" = "<<freq[i]<<endl;
	}
}