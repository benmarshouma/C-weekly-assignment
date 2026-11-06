#include <iostream>
using namespace std;
 class Student{
	 private:
	 	string Student_name;
	 	string Admission_number;
	 	float Fee_balance;
	 	
	 	public:
	 		void inputStudentData(){
				 cout<<"Student_name :"<<endl;
				 cin>>Student_name;
				 cout<<"Admission_number :"<<endl;
				 cin>>Admission_number;
				 cout<<"Fee_balance :"<<endl;
				 cin>>Fee_balance;
			 }
			 void makePayment(){
	float amount;
	cout<<"Enter amount payed  \n"<<endl;
	cin>>amount;
	if(amount<=0){
		cout<<"Amount cannot be negative"<<endl;
		return;
		}
		 if(amount>Fee_balance){
			cout<<"Amount in excess. Pay full amount...\n"<<endl;
			Fee_balance=0;
		}
		else{
			Fee_balance=Fee_balance-amount;
			cout<<" Payment Successfully Recorded\n"<<endl;
		}
			 }
	    void displayStatus(){
	    	cout<<"=====STUDENT_STATUS=====/n"<<endl;
			cout<<"Student_name :"<<Student_name<<endl;
			cout<<"Admission_number :"<<Admission_number<<endl;
			cout<<"Fee_balance :"<<Fee_balance<<endl;
			cout<<"==================== :"<<endl;
		}
 };
 int main()
 {
 	Student Student;
 	Student.inputStudentData();
 	Student.makePayment();
 	Student.displayStatus();
	 
	 return 0;
 }