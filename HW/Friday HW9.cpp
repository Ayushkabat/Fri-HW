#include<iostream>;

using namespace std;

int main(){
	char ch;cout<<"Please enter an alphabet or digit : "; 
	cin>>ch;
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
		cout<<"It is a alphabet"<<endl;
	}   
	 if (ch=='a' || ch=='y' || ch=='u' || ch=='i'||ch=='e'||ch=='o'){
		cout<<"This is vowel";
	}else if((ch>='a' && ch<='z')&& (ch!='a' || ch!='y' || ch!='u' || ch!='i'||ch!='e'||ch!='o')){
		cout<<"This is constant";
    }else if (ch>=0){
    	cout<<"This is digit";
	}else{
		cout<<"You have entered non alphabetic character";
	}
	
	
	
	
	return 0;
}
