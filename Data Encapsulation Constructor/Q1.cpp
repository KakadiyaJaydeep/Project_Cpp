#include<iostream>

using namespace std;

class company{	
	
	public:
		int id,quantity,year,import,exports;
		char name[20],ceo[20];
	
	public:
		company(int id,int quantity,int import,char name[],int year,int exports,char ceo[]){
			cout<<"enter id:"<<id<<endl;
			cout<<"enter compony name:"<<name<<endl;
			cout<<"enter a revanue:"<<year<<endl;
			cout<<"enter a staff quantity:"<<quantity<<endl;
			cout<<"enter a import diamonds:"<<import<<endl;
			cout<<"enter a export diamonds:"<<exports<<endl;
			cout<<"enter a compony ceo name:"<<ceo<<endl;
		}
};

int main(){
	
	company obj(007,500,600,"Brother's",2023,520,"Lexo");
		
	return 0;
}
