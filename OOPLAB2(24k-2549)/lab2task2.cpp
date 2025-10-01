#include<iostream>
#include<string>
using namespace std;
void characterindex(string s,int* f,int* l,char ch){
	*f=-1;*l=-1;
	for(int i=0;i<s.length();i++){
		if(s[i]==ch){
			if(*f==-1) *f=i;
		}
		*l=i;
	}
	cout<<"First Index = "<<*f;
	cout<<"Last Index = "<<*l;
}
int main(){
	int first;int last;
	string sentence;
	char ch;
	cout<<"Enter a string = ";
	getline(cin,sentence);
	cout<<"Sentence = "<<sentence<<endl;
	cout<<"Enter character to check = ";cin>>ch;
	characterindex(sentence,&first,&last,ch);
}