#include<iostream>

using namespace std;

class Second;
class First{
	int x;
	
	public:
		
		First(int a): x(a){}
		
		friend int Add(First f, Second s);
};

class Second{
	
	int y;
	
	public:
		Second(int b): y(b){}
		
		friend int Add(First f, Second s);
};

int Add(First f, Second s){
	
	return (f.x+ s.y);
	
	
}


int main(){

	First f(5);

	Second s(6);
	
	cout<<"Addition is  : "<<Add(f, s);







}



