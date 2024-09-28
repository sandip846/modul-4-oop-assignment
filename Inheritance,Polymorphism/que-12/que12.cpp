#include<iostream>
using namespace std;
class Swap
{
	private :
		int x;
		int y;
	public :
		void setvalue(int a,int b)
		{
			x = a;
			y = b;
		}
		friend void swapvalues(Swap &obj);
		void display()
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of y = "<<y;
		}
};
void swapvalues(Swap &obj)
{
	obj.x = obj.x + obj.y;
	obj.y = obj.x - obj.y;
	obj.x = obj.x - obj.y;
}
int main()
{
	Swap s1;
	
	s1.setvalue(10,20);
	swapvalues(s1);
	s1.display();
	return 0;
}
