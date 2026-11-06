#include <iostream>
using namespace std;

int main()
{
	string employee_name;
	double total_salary,bonus,basic_salary;
	
	for(int i=1;i<=5;++i)
	{
		cout<<"Enter emloyee_name:"<<endl;
		cin>>employee_name;
		
		cout<<"basic_salary:"<<endl;
		cin>>basic_salary;
		
		bonus=0.05*basic_salary;
		total_salary=basic_salary+bonus;
		
		cout<<"=========="<<endl;
		cout<<"employee_name:"<<employee_name<<endl;
		cout<<"basic_salary:"<<basic_salary<<endl;
		cout<<"bonus:"<<bonus<<endl;
		cout<<"total salary:"<<total_salary<<endl;
	}
	
	return 0;
}