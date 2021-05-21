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
	
	x=(phy+che+bio+math+comp)%5;
		cout<< x;
	
	
	






	return 0;
}
