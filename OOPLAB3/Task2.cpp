#include<iostream>
using namespace std;
class Student{
	private:
	int Rollno;
	public:
	string name;
	void setrollno(int r){
		Rollno=r;
	}
	int getrollno(){
		return Rollno;
	}

};
int main(){
	Student s1;
	s1.name="Waleed";
	s1.setrollno(121);
	cout<<"Name = "<<s1.name<<endl;
	int roll=s1.getrollno();
	cout<<"Roll no = "<<roll;
}