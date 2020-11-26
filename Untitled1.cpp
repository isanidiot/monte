#include<iostream>

#include <stdlib.h> 
using namespace std;
int main(){
	double iter=10000000;
	double ct=0; 
	double x;
	double y;
	for (int i=0; i<iter; i++) {
		x=double(rand()%1000000)/1000000;
		y=double(rand()%1000000)/1000000;
		if (x*x+y*y<1){
			ct++ ;
		}
	}
	cout<<double(4*ct)/iter;
}
