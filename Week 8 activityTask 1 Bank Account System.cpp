#include<iostream>
using namespace std;

class Bank_Account{
	private:
		string Account_holder_name;
		string Account_number;
		double Account_balance;
		
		public:
			Bank_Account(string name,string number,double balance){
				Account_holder_name=name;
				Account_number=number;
				Account_balance=balance;
			
				cout<<"Account_created_succefully :"<<endl;
			}
			
			void displayAccount(){
				cout<<"=====Account Details=====/n :"<<endl;
				cout<<"Account_holder_name :"<<Account_holder_name<<endl;
				cout<<"Account_number :"<<Account_number<<endl;
				cout<<"Account_balance :"<<Account_balance<<endl;
				cout<<"=================== :"<<endl;
			}
			 ~Bank_Account(){
				 cout<<"Account_closed_successfully :"<<endl;
			 }

}
;
  int main()
  {
  	Bank_Account Own_account("Benmash" ,"PCE1234" , 6500000.00);
  	
  	Own_account.displayAccount();
	  
	  return 0;
  }