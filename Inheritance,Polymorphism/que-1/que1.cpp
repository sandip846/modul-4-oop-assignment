#include<iostream>
using namespace std;

class Cricketer
{
	protected:
       string name;
       int match;
	public :
      
	void set1(string n,int m)
	{
		name=n;
		match=m;
	}
	void get1()
	{
		cout<<"\n name = "<<name;
		cout<<"\n match = "<<match;
	}  
	     
};
class Batsman : public Cricketer
{
	private :
		int totalrun;
	    float average;
		string performance;
	public:
	void set2()
	{
		cout<<"\n enter run = ";
		cin>>totalrun;
		cout<<"\n performance = ";
		cin>>performance;
	}
	void calculateavaragerun()
	{
		Cricketer::get1();
		average =(float)totalrun/(float)match;
	}
	void get2()
	{
		cout<<"\n totalrun is = "<<totalrun;
		cout<<"\n avarage is = "<<average;
		cout<<"\n performance is = "<<performance;
	}			
};
int main()
{
    Batsman b1;
    b1.set1("hardik",10);
    
    
    b1.set2();
    b1.calculateavaragerun();
    b1.get2();
    
    return 0;
}
