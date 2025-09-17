#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int Rollno;
	Student(string n,int r){
		name=n;Rollno=r;
	}
};
int main(){
	Student s1("Waleed",121);
	cout<<"Name = "<<s1.name<<endl<<"Roll no = "<<s1.Rollno<<endl;
}