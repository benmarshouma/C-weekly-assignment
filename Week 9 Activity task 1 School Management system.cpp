#include<iostream>
#include<string>
using namespace std;

class Person{
	protected:
		string name;
		string age;
		
		public:
			Person(string n,string a){
				name=n;
				age=a;
			}
			
			void displayPerson(){
			
				cout<<"====DETAILS====,"<<endl;
				cout<<"Person Name,"<<name<<endl;
				cout<<"person Age,"<<age<<endl;
				cout<<"==========,"<<endl;
			}
			
			
};

class Student :public Person{
	private:
		int AdmissionNumber;
		double Class;
		public:
			Student(string n,string a, int adm, double cl):Person(n,a){
				AdmissionNumber=adm;
				Class=cl;
			}
			void displayStudent(){
				 
				 cout<<"====================,"<<endl;
				 cout<<"Student Name,"<<name<<endl;
				 cout<<"Student Age,"<<age<<endl;
				 cout<<"Student AdmissionNumber,"<<AdmissionNumber<<endl;
				 cout<<"Student Class ,"<<Class<<endl;
				 cout<<"====================,"<<endl;
			}
};
 int main()
 {
	 Student s1("Benmash","20",3007,8);
	 s1.displayStudent();
	 return 0;
 }