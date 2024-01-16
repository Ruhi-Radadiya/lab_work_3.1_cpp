#include<iostream>
#include<string.h>
using namespace std;

class Customer{
    private:
        int id;
 	    char name[100];
 		int age;
 		char telecom_brand_name[100];
 		int mobile_number;
 		char city[100];
		int simcard_validity;
	public:
		void setData(){
			cout<<"Enter ID: "<<endl;
			cin>>id;
			cout<<"Enter NAME: "<<endl;
			cin>>name;
			cout<<"Enter AGE: "<<endl;
			cin>>age;
			cout<<"Enter TELECOM BRAND NAME: "<<endl;
			cin>>telecom_brand_name;
			cout<<"Enter MOBILE NUMBER: "<<endl;
			cin>>mobile_number;
			cout<<"Enter CITY: "<<endl;
			cin>>city;
			cout<<"Enter SIMCARD VALIDITY: "<<endl;
			cin>>simcard_validity;
			cout<<"__________________________________"<<endl;
		}	
		void getData(){
			cout<<"__________HERE IT IS__________"<<endl;
			cout<<"ID : "<<id<<endl
				<<"NAME : "<<name<<endl
				<<"AGE : "<<age<<endl
				<<"TELECOM BRAND NAME : "<<telecom_brand_name<<endl
				<<"MOBILE NUMBER : "<<mobile_number<<endl
				<<"CITY : "<<city<<endl\
				<<"SIMCARD VALIDITY : "<<simcard_validity<<endl;
				cout<<"__________________________________"<<endl;
		}
};

int main(){
  	Customer c1,c2,c3,c4,c5;
   		c1.setData();
   		c1.getData();
   		c2.setData();
   		c2.getData();
   		c3.setData();
   		c3.getData();
   		c4.setData();
   		c4.getData();
   		c5.setData();
   		c5.getData();
   
    return 0;
}