#include <iostream>
using namespace std;

 int main(){
 	double number1,number2,result;
 	char operation;
	 
	 cout<<"Enter first number;"<<endl;
	 cin>>number1;
	 
	 cout<<"Enter second number;"<<endl;
	 cin>>number2;
	 
	 cout<<"Enter operator(+,-,*,/);"<<endl;
	 cin>>operation;
	 
	 switch(operation){
		 case'+':
		 result=number1+number2;
		 cout<<"result="<<result<<endl;
		 break;
	 
	 case'-':
	 result=number1+number2;
	 cout<<"result="<<result<<endl;
	 break;
 
     case'*':
     result=number1*number2;
     cout<<"result="<<result<<endl;
     break;
 
     case'/':
     if(number2==0){
		 cout<<"Error:Division by zero is not allowed,"<<endl;
		 }else{
			 result=number1/number2;
			 cout<<"result="<<result<<endl;
		 }
		 break;
	 
	   default:
	    cout<<"Invalid operator!"<<endl;
     
     
	 }
	 
	 return 0;
 }