#include<iostream>
#include<cmath>
using namespace std;


float CalcAmt(int p, int n, int r = 50){
	
	float amt = p*pow((1+ r/100.0), n);
	
	return amt;
	
}

int main(){
	
	cout<<CalcAmt(5000, 4);
	
}