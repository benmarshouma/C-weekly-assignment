#include<iostream>
#include<string>
using namespace std;

  class shape{
	  public:
	  	virtual void draw(){
			  cout<<"shape drawing;"<<endl;
		  }
  };
		  class circle:public shape{
			  public:
			  	void draw(){
					  cout<<"drawing circle;"<<endl;
				  }
		  };
		  class rectangle:public shape{
			  public:
			  	void draw(){
					  cout<<"drawing rectangle;"<<endl;
				  }
		  };
		  class triangle:public shape{
			  public:
			  	void draw(){
					  cout<<"drawing triangle;"<<endl;
				  }
		 };
  int main()
  {
  	circle c;
  	rectangle r;
  	triangle t;
  	
  	shape*ptr;
  	
  	ptr = &c;
  	ptr->draw();
  	
  	ptr = &r;
  	ptr->draw();
  	
  	ptr = &t;
  	ptr->draw();
  	
	  
	  return 0;
  }