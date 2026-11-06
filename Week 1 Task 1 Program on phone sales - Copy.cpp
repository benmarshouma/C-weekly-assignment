#include <iostream>
using namespace std;

int main(){
	string customer_name;
	string model;
	int quantity;
	float price,Totalsales;
	
	cout<<"Enter your name"<<endl;
	cin>>customer_name;
	
	cout<<"Enter phone model"<<endl;
	cin>>model;
	
	cout<<"Enter quatity purchased"<<endl;
	cin>>quantity;
	
	cout<<"Enter price per phone"<<endl;
	cin>>price;
	
	Totalsales=quantity*price;
	
	cout<<"SALES_RECEIT"<<endl;
		cout<<"=========="<<endl;
		cout<<"customer name;"<<customer_name<<endl;
		cout<<"phone model;"<<model<<endl;
		cout<<"quantity purchased;"<<quantity<<endl;
		cout<<"price per phone;"<<price<<endl;
		cout<<"=========="<<endl;
		cout<<"TOTALSALES;"<<Totalsales<<endl;
		cout<<"=========="<<endl;
		
}