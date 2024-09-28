#include<iostream>
using namespace std;
template <typename T>
void swapvalues(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a=50;
	int b=100;
	
	cout<<"\nValue of a before swapping = "<<a;
	cout<<"\nValue of b before swapping = "<<b<<endl;
	
	
	swapvalues(a,b);
	
	
	cout<<"\nValue of a after swapping = "<<a;
	cout<<"\nValue of b after swapping = "<<b;
	

	return 0;
}

