#include <iostream>
using namespace std;

 class book{
	 public:
	 	string book_title,Author;
		 int number_of_copies_available;
	 	
	 	void input_details(){
			  cout<<"Enter book_title:"<<endl;
			  cin>>book_title;
			  
			  cout<<"Enter Author:"<<endl;
			  cin>>Author;
			  
			  cout<<"Enter number_of_copies_available:"<<endl;
			  cin>>number_of_copies_available;
		 }
			  
			  void borrowbook(){
			  if(number_of_copies_available>0){
				  number_of_copies_available--;
				  cout<<"book borrowed successfully!"<<endl;
			  }else{
				  cout<<"No copies available,"<<endl;
			  }
		 }
	  
	     void display(){
			 cout<<"book_title:"<<book_title<<endl;
			 cout<<"Author:"<<Author<<endl;
			 cout<<"copies available:"<<number_of_copies_available<<endl;
		 }
 }
 ;
		 
		 int main(){
			 book book1;
			 book1.input_details();
			 book1.display();
			 
			 return 0;
}