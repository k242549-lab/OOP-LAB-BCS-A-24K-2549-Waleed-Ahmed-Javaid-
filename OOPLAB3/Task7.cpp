#include<iostream>
using namespace std;
class Student{
	private:
	string name;
	int rollno;
	double marks;
	char grade;
	public:
	Student(string n,int r,double m,char g){
		name=n;rollno=r;marks=m;grade=g;
	}
	void calculategrade(){
		if(marks>=90) grade='A';
		else if(marks>=80) grade='B';
		else if(marks>=70) grade='C';
		else if(marks>=60) grade='D';
		else if(marks<60) grade='F';
	}
	void displayinfo(){
		cout<<"Name = "<<name<<endl<<"Roll no = "<<rollno<<endl<<"Marks = "<<marks<<endl<<"Grade = "<<grade<<endl;
	}
};
int main(){
	Student s1("Waleed",111,85.55,' ');
	Student s2("Hasnain",122,56,' ');	
	s1.calculategrade();
	s2.calculategrade();
	s1.displayinfo();
	s2.displayinfo();
}