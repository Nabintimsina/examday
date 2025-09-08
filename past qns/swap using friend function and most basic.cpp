#include<iostream>
using namespace std;

class Information {

	private:

		string name;
		string address;

	public:
		Information(string n, string a) {
			name = n;
			address = a;
		}

		void show() {
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
		}
		
		
		friend void Swaps(Information & a, Information & b);
		
};

 void Swaps(Information & a, Information & b){
 	
 	Information temp = a;
 	
 	
 	a.name = b.name;
 	b.name = temp.name;

 	a.address = b.address;
 	b.address = temp.address;
 	
 	
 }
 
 
 int main(){
 	
 	Information a("nabin ", "ktm");
	Information b("A", "h");
	
	Swaps(a, b);
	
	cout<<"Data of a : "<<endl;
	a.show();
	cout<<"Data of b : "<<endl;
	b.show();
	
 }
 
 
 
 
 
 