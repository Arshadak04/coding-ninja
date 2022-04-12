#include<iostream>
#include "student_class.cpp"
using namespace std;

int main(){
	student s1;
	s1.rollnumber=1234;
	s1.age=12;
//	cout<<s1.getphone();
    s1.display();
	cout<<s1.rollnumber<<endl;
	student *s2=new student;
	(*s2).rollnumber=1235;
	s2 ->age=20;
	cout<<"s2 rollnumber "<<(*s2).rollnumber<<endl;
	cout<<"s2 age "<<s2 ->age<<endl;
	
	
}
