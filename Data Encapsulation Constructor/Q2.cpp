#include<iostream>

using namespace std;

class fast_foodcafe{	
	
	public:
		int id,year,rating,quantity;
		char name[20],location[20],type[20];
	
	public:
		fast_foodcafe(){
			cout<<"enter id: 546"<<endl;
			
			cout<<"enter a cafe name: Chai He Na"<<endl;
				
			cout<<"enter a cafe type: open"<<endl;
			
			cout<<"enter a staff quantity: 50"<<endl;
				
			cout<<"enter a cafe rating: 5"<<endl;
		
			cout<<"enter a cafe location: Rajkot"<<endl;
		
			cout<<"enter a establish year: 1999"<<endl;
			
		}			

};

int main(){
	
	fast_foodcafe obj;
	
	return 0;
}
