#include<iostream>
using namespace std;
class Person
{
	private :
		string name;
		int age;
		string country;
	public :
		void setvalue(string n,int a,string c)
		{
			name = n;
			age = a;
			country = c;
		}
		void getvalue()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nCountry = "<<country<<endl;
		}
};
int main()
{
	Person p1,p2,p3;
	p1.setvalue("Rushil",20,"India");
	p2.setvalue("akash",22,"pakistan");
	p3.setvalue("sahil",18,"india");
	
	p1.getvalue();
	p2.getvalue();
	p3.getvalue();
	return 0;
}
