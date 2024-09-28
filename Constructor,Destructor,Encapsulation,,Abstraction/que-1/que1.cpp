#include  <iostream>
using namespace std;

inline mul(int num1, int num2)
{
	return num1*num2;
}

inline cubic(int num1)
{
	return num1*num1*num1;
}
int main()
{
	int num1,num2;
	
	cout<<"\n enter num1 = ";
	cin>>num1;
	cout<<"\n enter num2 = ";
	cin>>num2;
	
	cout<<"\n multiplication  "<<num1 <<" or " <<num2 <<" = "<<mul(num1,num2) <<endl;
	cout<<"\n cubic is = "<<cubic(num1);
	cout<<"\n cubic is = "<<cubic(num2);
}
