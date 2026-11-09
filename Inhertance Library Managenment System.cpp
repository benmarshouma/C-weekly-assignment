#include<iostream>
#include<string>
using namespace std;

class person{
	protected:
	string name;
	
	public:
		person(string n){
			name=n;
		}
	void setName(string n){
		name=n;	
	}
	string getName(){
		return name;
	}		
};
    class LibraryMember:public person{
		private:
			int MemberID;
			int booksBorrowed;
			public:
			 
			 LibraryMember(string n,int ID,int bks):person(n){
				 MemberID=ID;
				 booksBorrowed=bks;
			 }
			 int getMemberID(){
				 return MemberID;
			 }
			 int getbooksBorrowed(){
				 return booksBorrowed;
			 }
			 
	};
	class PremiumMember:public LibraryMember{
		private:
			double membershipFee;
			public:
				PremiumMember(string n,int ID,int bks, double Fee):LibraryMember(n,ID,bks){
					membershipFee=Fee;
				}
				double getMembership(){
					return membershipFee;
				}
	};
	int main(){
		PremiumMember member("Benmash",101,3,1500);
		
		cout<<"Name: "<<member .getName()<<endl;
		cout<<"MemberID: "<<member .getMemberID()<<endl;
		cout<<"booksBorrowed: "<<member .getbooksBorrowed()<<endl;
		cout<<"membershipFee: "<<member .getMembership()<<endl;
		return 0;
}