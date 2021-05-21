#include <iostream>;

using namespace std;

int main(){
	
	int money;
	cout<<"Enter your $ amount: ";
	cin>>money;
	//1,2,5,10,20,50,100 
	
	if(money>=100){
		cout<<"100 : "<<money/100<<endl;
		money = money - money/100*100;
		
	}else{
		cout<<"100 : 0";
	}if(money>=50){
		cout<<"50 : "<<money/50<<endl;
		money = money - money/50*50;
		
	}else{
		cout<<"50 : 0";
		
    }if(money>=20){
		cout<<"20 : "<<money/20<<endl;
		money = money - money/20*20;
		
	}else{
		cout<<"20 : 0";
		
    }if(money>=10){
    	cout<<"10 : "<<money/10<<endl;
    	money = money - money/10*10;
    	
	}else{
		cout<<"10 : 0";
		
	}if(money>=5){
		cout<<"5 : "<<money/5<<endl;
		money = money - money/5*5;
		
	}else{
		cout<<"5 : 0";
		
	}if (money>=2){
		cout<<"2 : "<<money/2<<endl;
		money = money - money/2*2;
		
	}else{
		cout<<"2 : 0";
		
	}if (money>=1){
		cout<<"1 : "<<money/1<<endl;
		money = money - money/1*1;
		
	}else{
		cout<<"1 : 0";
		
	}
	

	 return 0;
}
