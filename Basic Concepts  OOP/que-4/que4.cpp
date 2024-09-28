#include<iostream>
using namespace std;
class Rectangle
{
	private :
		float length;
		float width;
	public :
		float set(float l,float w)
		{
			length = l;
			width = w;
		}
		float area()
		{
			return (length*width);
		}
		float perimeter()
		{
			return (length+width)*2;
		}	
};
int main()
{
	float len,wid;
	cout<<"\n enetr  length = ";
	cin>>len;
	cout<<"\n enter  width = ";
	cin>>wid;
	
	Rectangle r1;
	
	r1.set(len,wid);
    r1.area();
    r1.perimeter();
    
    cout<<"\n area of rectangle is = "<<r1.area()<<endl;
	cout<<"\nperimeter of circle is = "<<r1.perimeter();
	
	
	
	return 0;
}
