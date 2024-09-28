#include<iostream>
using namespace std;
class shape 
{
	protected :
		double length;
		double width;
    public :
		void setvalue(double l,double w)
		{
			length = l;
			width = w;
		}
		void getvalue()
		{
			cout<<"\nLength = "<<length;
			cout<<"\nWidth = "<<width;
		}
};
class rec : public shape
{
	private :
		double area;
	public :
	   void calculatearea()
	   {
	   		shape :: getvalue();
	   	    area=length*width;
	   }	
	   void displayarea()
	   {
	   	    cout<<"\n Area of ranctangle  = "<<area;
	   }
};
int main()
{
	rec r1;
	r1.setvalue(2.3,3.6);
	r1.calculatearea();	
	r1.displayarea();
}
