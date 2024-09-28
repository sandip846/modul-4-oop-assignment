#include<iostream>
using namespace std;
class demo1
{
	public :
		void shape(string n,double r)
		{
			cout<<"\nArea of "<<n<<" = "<<3.14*(r*r);
		}
		void shape(string n,double base,double height)
		{
			cout<<"\nArea of "<<n<<" = "<<0.5*(base*height);
		}
		void shape(string n,int l,int b)
		{
			cout<<"\nArea of "<<n<<" = "<<l*b;
		}
};
int main()
{
	demo1 s1;
	s1.shape("Circle",10.4);
	demo1 s2;
	s2.shape("Triangle",7.3,9.7);
	demo1 s3;
	s3.shape("Recatangle",6,3);
	return 0;
}
