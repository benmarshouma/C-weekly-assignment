#include <iostream>
using namespace std;
 
 int main()
 { 
 	string student_name;
 	int age;
 	float exams_score;
 	
 	cout<<"Enter student_name:"<<endl;
 	cin>>student_name;
 	
 	cout<<"Enter age:"<<endl;
 	cin>>age;
 	
 	cout<<"Enter exams_score:"<<endl;
 	cin>>exams_score;
 	
 	if (age>=18)
	 {
	 	if (exams_score>=50)
		 {
		 	cout<<"Admitted:"<<endl;
		 }
      else{
		  cout<<"Not Admitted:Low score"<<endl;
	  }
	 }
	 else{
		 cout<<"Not Admitted:Underage"<<endl;
	 }
	 ;
	 cout<<"=========="<<endl;
	 cout<<"student_name:"<<student_name<<endl;
	 cout<<"age:"<<age<<endl;
	 cout<<"exams_score:"<<exams_score<<endl;
	 
	 return 0;
 }