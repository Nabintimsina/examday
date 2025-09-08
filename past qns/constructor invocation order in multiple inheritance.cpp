#include<iostream>

using namespace std;


class Animal{
	
	protected: 
	
		Animal(){
			cout<<"Animal constructor"<<endl;
		}
		
	
};

class Dog : public Animal{
	
	
	protected: 
	
		Dog(){
			cout<<"Dog constructor!"<<endl;
		}
};

class BabyDog : public Dog{
	
	public: 
	
		BabyDog(){
			cout<<"BabyDog constructor!"<<endl;
		}
	
};


int main(){
	
	BabyDog bd;
	
	
	
	
	
	return 0;
}