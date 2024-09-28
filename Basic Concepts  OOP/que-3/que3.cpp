#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void setradius(double r)
		{
			radius = r;
		}
		double area()
		{
			return 3.14*(radius*radius);
		}
		double circumference()
		{
			return 3.14*(2*radius);
		}
};
int main()
{
	double radius;
	cout<<"\nEnter value of radius = ";
	cin>>radius;
	Circle c1;
	c1.setradius(radius);
	cout<<"\nArea of circle = "<<c1.area();
	cout<<"\nCircumference of circle = "<<c1.circumference();
	return 0;
}
