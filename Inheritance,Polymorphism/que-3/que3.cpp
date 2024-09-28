#include<iostream>
using namespace std;
class person
{
	public :
	void details(string name,int age)
	{
		cout<<"\nname is = "<<name;
		cout<<"\nage is = "<<age;
	}
};
class student
{
	public :
		void per(float pct)
		{
			cout<<"\nper is = "<<pct;
		}
};
class teacher : public person,public student
{	
	public:
	void display(int salary)
	{
		cout<<"\nsalary = "<<salary;
	}
};
int main()
{
	int age,s;
	float num;
	string name;
	cout<<"\nEnter name =";
	cin>>name;
	cout<<"\nEnter age =";
	cin>>age;
	cout<<"\nEnter percentage =";
	cin>>num;
	cout<<"\nEnter salary =";
	cin>>s;
	
	teacher t1;
	t1.details(name,age);
	t1.per(num);
	t1.display(s);
	return 0;
}
