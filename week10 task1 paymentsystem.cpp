#include<iostream>
#include<string>
using namespace std;

 class Payment{
	 public:
	 	void processPayment(int amount){
	 		
			 cout<<"cash payment;"<<amount<<"ksh"<<endl;
		 }
		 void processPayment(int amount,int transactionfee){
		 	
		 	int total=amount+transactionfee;
		 	
			 cout<<"card payment;"<<total<<"ksh"<<endl;
		 }
		 void processPayment(int amount,int fee,int discount){
		 	
		 	int total= amount + fee - discount;
		 	
			 cout<<"mobile payment;"<<total<<"ksh"<<endl;
		 }
 };
   int main()
   {
   	Payment payment1;
   	payment1.processPayment(1000);
   	payment1.processPayment(1000,10);
   	payment1.processPayment(10000,10,100);
	   
	   return 0;
   }