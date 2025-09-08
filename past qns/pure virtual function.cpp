#include <iostream>
using namespace std;

class Animal{
	
	public: 
	void virtual sound() = 0;
	
};

class Dog : public Animal{
	
	public:
		
	void sound(){
		cout<<"Dog barks ! ";
	}
};

int main(){
	
	Animal *an;
	
	Dog dg ;
	
	an = &dg;
	
	an->sound();
	
}