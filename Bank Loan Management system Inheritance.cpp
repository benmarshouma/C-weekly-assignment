#include<iostream>
#include<string>
using namespace std;

   class Customer{
	   protected:
	   	string name;
	   	public:
	   		Customer(string n){
				   name=n;
			   }
			   void setName(string n){
				   name=n;
			   }
			   string getName(){
				   return name;
			   }
   };
   class Loan: public Customer{
	   private:
	   	double loanAmount;
	   	double intrestRate;
	   	public:
	   		Loan(string n,double lA,double ir):Customer(n){
				   loanAmount=lA;
				   intrestRate=ir;
			   }
			   double getLoan(){
				   return loanAmount;
			   }
			   double getInterestRate(){
				   return intrestRate;
			   }
   };
   
   class HomeLoan: public Loan{
	   private:
	   	double propertyValue;
	   	public:
	   		HomeLoan(double lA,double ir,double pV,string n):Loan(n,lA,ir){
				    propertyValue=pV;
			   }
			   double getPropertyValue(){
				   return propertyValue;
			   }
			   void displayCustomerdetails(){
				   cout<<"===============;"<<endl;
				   cout<<"Name;"<<getName()<<endl;
				   cout<<"Loan Amount;"<<getLoan()<<endl;
				   cout<<"interest Rate;"<<getInterestRate()<<endl;
				   cout<<"propety Value;"<<getPropertyValue()<<endl;
				   cout<<"================;"<<endl;
			   }
   };
   
   int main()
   {
   	HomeLoan customer1(20000,15,700000,"John");
   	customer1.displayCustomerdetails();
	   
	   return 0;
   };
   