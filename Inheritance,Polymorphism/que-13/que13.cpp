#include<iostream>
using namespace std;
class number
{
	private :
		int num1;
		int num2;
	public :
		void setvalue(int a , int b)
		{
			num1 = a;
			num2 = b;	
		}		
		friend void max(number &obj);
		void display()
		{
			cout<<"\nValue of num1 ="<<num1;
			cout<<"\nValue od num2 ="<<num2;
		}
};
void max(number &obj)
{
	if(obj.num1>obj.num2)
	{
		cout<<"\nA is big";
	}
	else
	{
	cout<<"\nB is big";
	}
}

int main()
{
	number n1;
	n1.setvalue(200,150);
	n1.display();
	max(n1);
	
	return 0;
}
