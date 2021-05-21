#include<iostream>;

using namespace std;
int main(){
	int phy, che, bio, math, comp, x;
	
	cout<<"Enter you phy grade: ";
	cin>>phy;
	cout<<"Enter you che grade: ";
	cin>>che;
	cout<<"Enter you bio grade: ";
	cin>>bio;
	cout<<"Enter you math grade: ";
	cin>>math;
	cout<<"Enter you comp grade: ";
	cin>>comp;
	
	x=(phy+che+bio+math+comp)/5;
	if(x>=90){
		cout<<"Grade A ";
	}else if (x>=80){
		cout<<"Grade B ";
	}else if (x>=70){
		cout<<"Grade C ";
	}else if (x>=60){
		cout<<"Grade D ";
	}else if (x>=40){
		cout<<"Grade E ";
	}else if (x>=30){
		cout<<"Grade F ";
	}else 
		cout<<"Sorry you attempt failed ";
	






	return 0;
}
