#include<iostream>
using namespace std;
void swapvalues(int arr1[],int arr2[],int size){
	for(int i=0;i<size;i++){
		int temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
}
void displayarray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void largestelement(int arr[],int size){
	int max=0;
	for(int i=0;i<size;i++){
		if(arr[i]>max) max=arr[i];
	}
	cout<<"Largest element in array = "<<max<<endl;
}

void secondlargest(int arr[],int size){
	int max=0;
	int max2=0;
	for(int i=0;i<size;i++){
		if(arr[i]>max) max=arr[i];
	}
	for(int i=0;i<size;i++){
		if(arr[i]>max2 && arr[i]<max) max2=arr[i];
	}
	cout<<"Second largest element = "<<max2<<endl;
}

void uniquevalue(int arr[],int size){
	int freq[size]={0};
	for(int i=0;i<size;i++){
		int temp=arr[i];
		for(int j=0;j<size;j++){
			if(arr[j]==temp) freq[i]++;
		}
	}
	for(int a=0;a<size;a++){
		if(freq[a]==1){
			cout<<arr[a]<<" x "<<freq[a]<<"(unique)"<<endl; 
		}
	}
}

int main(){
	int size;
	cout<<"Enter size for arrays = ";cin>>size;
	int arr1[size];int arr2[size];
	cout<<"Enter values in first array"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr1[i];
	}
	cout<<"Enter values in the second array"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr2[i];
	}
	displayarray(arr1,size);
	displayarray(arr2,size);
	largestelement(arr1,size);
	secondlargest(arr2,size);
	uniquevalue(arr1,size);
	swapvalues(arr1,arr2,size);
	displayarray(arr1,size);
	displayarray(arr2,size);
	
}