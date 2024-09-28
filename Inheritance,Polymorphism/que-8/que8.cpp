#include<iostream>
using namespace std;
class math
{
	public :
			void sum(int a,int b)
			{
				int ans;
				ans=a+b;
				cout<<"\nAdd of "<<a<<" + "<<b<<" is = "<<ans<<endl;		
			}
			void sum(double a,double b)
			{
				int ans;
				ans=a-b;
				cout<<"\nSub of "<<a<<" - "<<b<<" is = "<<ans<<endl;
			}
			void sum(int a,double b)
			{
				int ans;
				ans=a*b;
				cout<<"\nMul  of "<<a<<" * "<<b<<" is = "<<ans<<endl;
			}
			void sum(float a,float b)
			{
				int ans;
				ans=a/b;
				cout<<"\nDivs of "<<a<<" / "<<b<<" is = "<<ans<<endl;
			}
};
int main()
{
	
	math m1;
	m1.sum(50,10);
	
	math m2;
	m2.sum(15.25,14.33);
	
	math m3;
	m3.sum(5,90.66);
	
	math m4;
	m4.sum(18.56,18.56);
	return 0;
}

