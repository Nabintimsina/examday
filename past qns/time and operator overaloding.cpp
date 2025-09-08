#include<iostream>

using namespace std;


class Time{

	private :
	
		int hours,minutes, seconds;
			
	public:
		
		Time(int h, int m, int s): hours(h), minutes(m), seconds(s){};
		
		
		void display(){
			cout<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
			
		}
		
		void operator ++(int){
			
			seconds++;
			minutes++;
			hours++;
			
			if(seconds>= 60){
				minutes += 1;
				seconds -= 60;
			}
			
			if(minutes>= 60){
				hours += 1;
				minutes -= 60;
			}
			
			if(hours>= 24){
				
				cout<<"Day 1 "<<endl;
			}
			
		}
		
};

int main(){
	
	Time t(23, 60, 59);
	
	t++;
	
	t.display();
	
	
	return 0 ;
}