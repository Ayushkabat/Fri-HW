#include<iostream>;

using namespace std;

int main(){
	
	int side1, side2, side3;
	cout<<"Enter 1st side num for traingle: ";
	cin>> side1;
	cout<<"Enter 2nd side num for traingle: ";
	cin>> side2;
	cout<<"Enter 3rd side num for traingle: ";
	cin>> side3;
	
	if((side1 + side2 > side3)&& (side1 + side3 > side2)&& (side2 + side3 > side1 )){
		cout<<"Traingle is valid";
	}else{
		cout<<"Traingle is not valid";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
