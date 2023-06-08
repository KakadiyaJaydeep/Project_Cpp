//1. WAP to create a class in which Read and Print House details along with Room details.

#include<iostream>
#include<string.h>
using namespace std;

class house{
	
	public:
		int house_number ;
		char house_name[70];
		char society[50];
		char area[30];
		char city[20];
};

int main(){
	
	house obj1,obj2;
	
	obj1.house_number = 79;
	strcpy(obj1.house_name,"Home");
	strcpy(obj1.society,"Rajesh");
	strcpy(obj1.area,"Varachha");
	strcpy(obj1.city,"Surat");
	cout<<"house number : ";
	cout<<obj1.house_number<<endl;
	cout<<"house name : ";
	cout<<obj1.house_name<<endl;
	cout<<"Society : ";
	cout<<obj1.society<<endl;
	cout<<"Area : ";
	cout<<obj1.area<<endl;
	cout<<"City : ";
	cout<<obj1.city<<endl<<endl;
	
	obj1.house_number = 101;
	strcpy(obj1.house_name,"Heaven");
	strcpy(obj1.society,"Shiv Rudra");
	strcpy(obj1.area,"Varachha");
	strcpy(obj1.city,"Surat");
	cout<<"house number : ";
	cout<<obj1.house_number<<endl;
	cout<<"house name : ";
	cout<<obj1.house_name<<endl;
	cout<<"Society : ";
	cout<<obj1.society<<endl;
	cout<<"Area : ";
	cout<<obj1.area<<endl;
	cout<<"City : ";
	cout<<obj1.city;
}
