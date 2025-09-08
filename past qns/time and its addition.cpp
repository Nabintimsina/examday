#include<iostream>
using namespace std;

class Time {

		int day, hour, minutes, seconds;

	public:

		Time(): day(0) ,hour(0), minutes(0), seconds(0) {};

		Time(int h, int m, int s): day(0), hour(h), minutes(m), seconds(s) {};

		void Display() {

			cout<<"Time is : "<<day<<" Day, and   "<<hour<<" : "<<minutes<<" : "<<seconds<<endl;
		}
		
		friend Time Add(Time t1, Time t2);

};

Time Add(Time t1, Time t2) {

	Time sum ;

	sum.seconds = t1.seconds+ t2.seconds;
	sum.minutes = t1.minutes +  t2.minutes;
	sum.hour = t1.hour + t2.hour;
	
	if(sum.seconds >= 60){
		sum.seconds -= 60;
		sum.minutes += 1;
	}
	
	if(sum.minutes >= 60){
		sum.minutes -= 60;
		sum.hour += 1;
	}
	
	if(sum.hour>= 24){
		sum.hour -= 24;
		sum.day += 1;
	}
	
	return sum;
}


int main(){
	
	Time t1(5, 6, 7);
	Time t2(24, 56, 56);
	
	Time result = Add(t1, t2);
	
	result.Display();
	
	return 0;
}