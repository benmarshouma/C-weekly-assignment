#include <iostream>
using namespace std;

 class student{
	 public:
	 	string student_name;
	 	int admission_number,fee_balance;
	 	
	 	void input_details(){
			 cout<<"Enter student_name:"<<endl;
			 cin>>student_name;
			 
			 cout<<"Enter admission_number:"<<endl;
			 cin>>admission_number;
			 
			 cout<<"Enter fee_balance:"<<endl;
			 cin>>fee_balance;
		 }
			 
			void makepayment() {
    int amount;

    cout << "Enter amount to pay: ";
    cin >> amount;

    if (amount > 0 && amount <= fee_balance) {
        fee_balance = fee_balance - amount;
        cout << "Payment successful!" << endl;
    } else {
        cout << "Invalid payment amount!" << endl;
    }
}
		 
		 void display(){
			 cout<<"student_name:"<<student_name<<endl;
			 cout<<"admission_number:"<<admission_number<<endl;
			 cout<<"fee_balance:"<<fee_balance<<endl;
		 }
 };
  int main()
  {
  	student student1;
  	
  	student1.input_details();
  	student1.makepayment();
  	student1.display();
	  
	  return 0;
  }