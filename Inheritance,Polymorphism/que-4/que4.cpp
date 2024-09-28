#include<iostream>
using namespace std;
class result 
{
	protected :
		string name;
		int roll;
		
		
	public :
	void getvalue()
	{
		cout<<"\n enter name = ";
		cin>>name;
		cout<<"\n enter roll number = ";
		cin>>roll;
	}
	void display()
	{
		cout<<"\n name = "<<name;
		cout<<"\n roll number = "<<roll;
	}	
	
};
class marks
{
	protected :
		int phy,chem,math,total;
		float per;
		
		
	public :
	void getmarks()
	{
		cout<<"\n enter physics marks = ";
		cin>>phy;
		cout<<"\n enter chemistry marks = ";
		cin>>chem;
		cout<<"\n enter maths marks = ";
		cin>>math;
	}
	void displaymarks()
	{
		cout<<"\n physics marks = "<<phy;
		cout<<"\n chemistry marks = "<<chem;
		cout<<"\n math marks = "<<math;
	}
	void calmarks()
	{
		total=phy+chem+math;
		cout<<"\n total marks = "<<total;
	}
	void calpercentage()
	{
		per =(float)total / 3;
		cout<<"\n percentage = "<<per;
	}
};
class marksheet : public result, public marks
{
	public :
    void displaymarksheet()
    {
		cout<<"\n marks sheet :=";
	    display();
	    displaymarks();
	    calmarks();
	    calpercentage();
	}
};
int main()
{
	marksheet m1;
    m1.getvalue();
	m1.getmarks();
	m1.displaymarksheet();
}
