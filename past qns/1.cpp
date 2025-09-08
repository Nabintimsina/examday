#include<iostream>
using namespace std;

class Printer{
	
	public: 
	
		void prints(int a){
			cout<<"This is a int function! "<<endl;
			
		}
		
		void prints(double b ){
			cout<<"This is a double function! ";
		}
	
};

int main(){
	
	Printer p;
	
	p.prints(5);
	p.prints(6.0);
}