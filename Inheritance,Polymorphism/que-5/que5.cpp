#include<iostream>
using namespace std;

class student
{
	public :
		void number(int roll)
		{
			cout<<"\nRoll no =  "<<roll;			
		}
};
class test : public student
{
	public :
		
		int gujrati=42;
		int english=55;
		
		
};
class result : public  test
{
	public :
		
		void get()
		{
			cout<<"\ngujrati  = "<<gujrati;
			cout<<"\nenglish = "<<english;
			int total;
			total=gujrati + english;
			cout<<"\nTotal  mark  = "<<total;
		}
};	
int main()
{
	result r1;
	r1.number(50);
	r1.get();
	return 0;
}
