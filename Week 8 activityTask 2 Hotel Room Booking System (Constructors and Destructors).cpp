#include<iostream>
using namespace std;

class RoomBooking{
	private:
		string Guest_name;
		string Room_number;
		int Number_of_days_booked;
	 
	    public:
	    	RoomBooking(string name,string number,int days_booked){
	    		Guest_name=name;
	    		Room_number=number;
	    		Number_of_days_booked=days_booked;
				
				cout<<"Room_booking_confirmed :"<<endl;
			}
			void displayBooking(){
				cout<<"=====Booking Details=====/n ;"<<endl;
				cout<<"Guest_name :"<<Guest_name<<endl;
				cout<<"Room_number :"<<Room_number<<endl;
				cout<<"Number_of_days_booked ;"<<Number_of_days_booked<<endl;
				cout<<"==================== :"<<endl;
			}
			~RoomBooking(){
				cout<<"Booking_ended,room_released :"<<endl;
			}
			
}
;
 int main()
 {
 	RoomBooking Booking("Benmash ouma","14c",5);
 	
 	Booking.displayBooking();
	 
	 return 0;
 }