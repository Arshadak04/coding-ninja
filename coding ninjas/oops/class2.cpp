#include<iostream>
using namespace std;
class student {
	public:
		
	int age;
	
	private:
		
	int roll_number;
	
	public:
		
	void display(){
		cout<<roll_number;
	}	
	
};

int main(){
	student s1;
	s1.age=12;
	cout<<s1.age;
	s1.display();
}
