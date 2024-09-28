#include<iostream>
using namespace std;
class Cal
{
	public :
		void add()
		{
			int num1,num2,result;
			cout<<"\nEnter the value of num1= ";
			cin>> num1;
			cout<<"Enter the value of num2= ";
			cin>>num2;
			result = num1 + num2;
			cout<<"Addition of "<< num1 << " + " << num2<< " is  = " <<result<<endl;
		}
		void sub()
		{
			int num1,num2,result;
			cout<<"\nEnter the value of num1= ";
			cin>> num1;
			cout<<"Enter the value of num2= ";
			cin>>num2;
			result = num1 - num2;
			cout<<"Subtract of "<< num1 << " - " << num2<< " is  = " <<result<<endl;
		}
		void mul()
		{
			int num1,num2,result;
			cout<<"\nEnter the value of num1= ";
			cin>> num1;
			cout<<"Enter the value of num2= ";
			cin>>num2;
			result = num1 * num2;
			cout<<"Multiplication of "<< num1 << " * " << num2<< " is  = " <<result<<endl;
		}
		void div()
		{
			int num1,num2,result;
			cout<<"\nEnter the value of num1= ";
			cin>> num1;
			cout<<"Enter the value of num2= ";
			cin>>num2;
			result = num1 / num2;
			cout<<"divide of "<< num1 << " / " << num2<< " is  = " <<result<<endl;
		}
};

int main()
{
	Cal c1;
	c1.add();
	c1.sub();
	c1.mul();
	c1.div();
	
	return 0;
}

