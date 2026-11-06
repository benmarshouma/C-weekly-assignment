#include <iostream>
using namespace std;
  int main(){
  	string student_name;
  	double theory_marks,practical_marks,averagescore;
  	
  	
	  
	  cout<<"Enter student_name:"<<endl;
  	cin>>student_name;
  	
  	cout<<"Enter theory_marks;"<<endl;
  	cin>>theory_marks;
  	
  	cout<<"Enter practical_marks;"<<endl;
  	cin>>practical_marks;
  	
  	if(averagescore>=50){
		  cout<<"result ;passed"<<endl;
		  }
		  else{
		  	cout<<"result ;fail"<<endl;
	  }
  	
  	
	   averagescore=(theory_marks+practical_marks);
  	
  	cout<<"==========;"<<endl;
  	cout<<"student_name;"<<student_name<<endl;
  	cout<<"theory_marks;"<<theory_marks<<endl;
  	cout<<"practical_marks;"<<practical_marks<<endl;
  	cout<<"averagescore;"<<averagescore<<endl;
	  
	  return 0;
  }