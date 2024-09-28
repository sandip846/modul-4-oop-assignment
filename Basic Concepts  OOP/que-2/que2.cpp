#include<iostream>
using namespace std;
class BankAccount
{
	private :
		string depositorName;
		int acountNo;
		string AccountType;
		double balance;

	public :
		void set(string Name,int a, string Type,double b)
		{
			depositorName = Name;
			acountNo = a;
			AccountType = Type;
			balance = b;
		}
		void deposit(double amount)
		{
			cout<<"\n"<<amount<<" Rs. credited";
			balance = balance + amount;
		}
		void withdraw(double amount)
		{
			if(balance>amount)
			{
				cout<<"\n"<<amount<<" Rs. debited"<<endl;
				balance = balance - amount;
			}
			else
			{
				cout<<"\nYour account balance is = "<<balance;
				cout<<"\nYou can not withdraw "<<amount;
			}
		}
		void get()
		{
			cout<<"\nDepositor Name = "<< depositorName;
			cout<<"\nAccount Number = "<< acountNo;
			cout<<"\nAccount Typr = "<< AccountType;
			cout<<"\nCurrent balance = "<<balance<<endl;
		}
};
int main()
{
	BankAccount B1;
	B1.set("sandip patel",123456, "current", 20000.00);
	B1.get();
	B1.deposit(40000);
	B1.withdraw(20000);
	B1.get();
	return 0;
}
