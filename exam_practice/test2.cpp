#include <iostream> 
using namespace std; 
class student{
	private:
	string name;
	int age;

	public:
	student(){
		name="Danny";
		age=20;

	}
	student(const student& obj){
		name=obj.name;
		age=obj.age;
	}


	void display(){
		cout<<"Student name"<<name<<endl;
		cout<<"Student age"<<age<<endl;
	}

};
 
int main() 
{ 
	student obj1;
	obj1.display();
	student obj2(obj1);
	obj2.display();

	return 0;
}