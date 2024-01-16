#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:
        int id;
 	    char name[100];
 		int age;
 		char course[100];
 		char email[100];
 		char city[100];
		char college[100];
	public:
		void setData(){
			cout<<"Enter ID: "<<endl;
			cin>>id;
			cout<<"Enter NAME: "<<endl;
			cin>>name;
			cout<<"Enter AGE: "<<endl;
			cin>>age;
			cout<<"Enter COURSE: "<<endl;
			cin>>course;
			cout<<"Enter EMAIL: "<<endl;
			cin>>email;
			cout<<"Enter CITY: "<<endl;
			cin>>city;
			cout<<"Enter COLLEGE: "<<endl;
			cin>>college;
			cout<<"__________________________________"<<endl;
		}	
		void getData(){
			cout<<"__________HERE IT IS__________"<<endl;
			cout<<"ID : "<<id<<endl
				<<"NAME : "<<name<<endl
				<<"AGE : "<<age<<endl
				<<"COURSE : "<<course<<endl
				<<"EMAIL : "<<email<<endl
				<<"CITY : "<<city<<endl\
				<<"COLLEGE : "<<college<<endl;
				cout<<"__________________________________"<<endl;
		}
};

int main(){
   Student s1,s2,s3,s4,s5;
   		s1.setData();
   		s1.getData();
   		s2.setData();
   		s2.getData();
   		s3.setData();
   		s3.getData();
   		s4.setData();
   		s4.getData();
   		s5.setData();
   		s5.getData();
   
    return 0;
}