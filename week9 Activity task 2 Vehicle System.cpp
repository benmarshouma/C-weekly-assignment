#include<iostream>
#include<string>

using namespace std;

class vehicle{
	protected:
		string Brand;
		string year;
		
		public:
			vehicle(string Br,string yr){
			     Brand=Br;
				 year=yr;	
			}
			void displayVehicle(){
				
				cout<<"====================,"<<endl;
				cout<<"Vehicle Brand,"<<Brand<<endl;
				cout<<"year,"<<year<<endl;
				cout<<"====================,"<<endl;
			}
						
};
  class car :public vehicle{
	  private:
	  	int NumberofDoors;
	  	double EngineCapacity;
	  	public:
	  		car(string Br,string yr, int NoD,double EC):vehicle(Br,yr){
				  NumberofDoors=NoD;
				  EngineCapacity=EC;
			  }
			  void displayCar(){
			     
				  cout<<"===================,"<<endl;
				  cout<<"Vehicle Brand,"<<Brand<<endl;
				  cout<<"year,"<<year<<endl;
				  cout<<"NumberofDoors,"<<NumberofDoors	<<endl;
				  cout<<"EngineCapacity,"<<EngineCapacity<<endl;
				  cout<<"=====================,"<<endl;
				  	  
			  }	  	
  };
  int main()
  {
	  car car1("Toyota","2019",4,1800);
	  car1.displayCar();
	  return 0;
  }
