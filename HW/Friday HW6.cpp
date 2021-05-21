#include<iostream>;

using namespace std;
int main(){
	
	int x;
	
	cout<<"Enter any year is ";

	cin>>x;
	
	if(x%4==0 && x%400==0){
		cout<<"This year is leap.";
	}else if(x%100==0 || (x%4!=0 && x%400!=0)){
		cout<<"This year is common.";
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
