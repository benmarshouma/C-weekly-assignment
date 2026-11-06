#include <iostream>
using namespace std;

 int main(){
   string student_name,grade;
   int exams_marks;
 	
 	cout<<"Enter student_name;"<<endl;
 	cin>>student_name;
 	
 	cout<<"Enter exams_markrs;"<<endl;
 	cin>>exams_marks;
 	
 	if("exams_marks>=70"){
		 grade="A";
	 }
	else if("exams_marks>=60"){
		  grade="B";
	 }
	else if("exams_marks>=50"){
		  grade="C";
	 }
	 else if("exams_marks>=40"){
		  grade="D";
	 }
	 else
	 {
		grade="fail";
	 }
	 cout<<"STUDENT RESULT"<<endl;
	 cout<<"=========="<<endl;
	 cout<<"student_name;"<<student_name<<endl;
	  cout<<"exams_marks;"<<exams_marks<<endl;
	   cout<<"grade;"<<grade<<endl;
	 
	 
	 return 0;
 }