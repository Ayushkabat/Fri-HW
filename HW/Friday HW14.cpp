#include<iostream>;

using namespace std;

int main(){
	int angle1, angle2, angle3, sum;
	cout<<"Enter 1st angle, for traingle: ";
	cin>>angle1;
	cout<<"Enter 2nd angle, for traingle: ";
	cin>>angle2;
	cout<<"Enter 3st angle, for traingle: ";
	cin>>angle3;
	
	sum = angle1 + angle2 + angle3;
	
	if(sum== 180){
	      if(angle1 > 0 && angle2 > 0 && angle3 > 0 ){
		       cout<<"It is a valid traingle";
 }
 }else{
 
 	cout<<"It is non traingle shape";
 }

	
	
	
	
	
	return 0;
}
