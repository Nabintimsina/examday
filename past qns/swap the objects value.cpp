#include<iostream>
using namespace std;

class Information{
	
	private: 
		
		string name;
		string address;
		
	public:
		Information(string n, string a){
			name = n;
			address = a;
		}
		
		Information(Information &info){
			name = info.name;
			address = info.address;
			
			cout<<"Copy constructor called! "<<endl;
		}
		
		void show(){
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
			
			
		}

};

void swaps(Information &a, Information &b){
	
	Information temp = a;
	cout<<"1"<<endl;
	a = b;
	b= temp;
	
}


int main(){
	
	Information a("nabin ", "ktm");
	Information b("A", "h");
	
	swaps(a, b);
	
	cout<<"Data of a : "<<endl;
	a.show();
	cout<<"Data of b : "<<endl;
	b.show();
	
}