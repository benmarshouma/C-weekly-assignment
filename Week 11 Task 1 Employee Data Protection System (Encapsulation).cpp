#include <iostream>
using namespace std;
 
 class Employee{
	 private:
	 	string Employee_name;
	 	string Employee_ID;
	 	float Basic_salary;
	 	 float Net_salary;
	 	 public:
	 	 	void setEmployeeDetails(){
	 	 	cout<<"Employee_name :"<<endl;
	 	 	cin>>Employee_name;
	 	 	cout<<"Employee_ID :"<<endl;
	 	 	cin>>Employee_ID;
	 	 	cout<<"Basic_salary :"<<endl;
	 	 	cin>>Basic_salary;
			  }
			  void calculatesalary(){
				  float Net_salary;
				  Net_salary=Basic_salary+(0.10*Basic_salary);
			  }
			  void displayEmpolyeeDetails(){
				  cout<<"========Employee_Details========/n :"<<endl;
				  cout<<"Employee_name :"<<Employee_name<<endl;
				  cout<<"Employee_ID :"<<Employee_ID<<endl;
				  cout<<"Basic_salary :"<<Basic_salary<<endl;
				  cout<<"Net_salary :"<<Net_salary<<endl;
				  cout<<"==================== :"<<endl;
			  }
	 	 	
 }; 
 int main()
 {
 	Employee Employee;
 	Employee.setEmployeeDetails();
 	Employee.displayEmpolyeeDetails();
	 
	 return 0;
 } 