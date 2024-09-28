#include<iostream>
using namespace std;
class Employee
{
	private :
		string name;
		int id;
	    char grade;
	public :
		Employee(string n,int i,char g)
		{
			name=n;
			id=i;
			grade=g;
		}
		void setsalary()
		{
			if(grade=='A')
			{
			    cout<<"\nsalary is ="<<100000;	
			}
			else if(grade=='B')
			{
				cout<<"\nsalary = "<<50000;
			}
			else
			{
				cout<<"\nsalary = " <<25000;
			}
		}
	    void display()
		{
			cout<<"\n enter name = "<<name;
	       	cout<<"\n enetr id = "<<id;
		    cout<<"\n performance grade = "<<grade;
			
		}
};
int main()
{
    Employee e1("sandip",5,'B');
	e1.display();
	e1.setsalary();
	return 0;
}		
		
		
	    	

