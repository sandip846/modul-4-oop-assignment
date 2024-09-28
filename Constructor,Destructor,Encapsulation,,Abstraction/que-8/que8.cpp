#include<iostream>
using namespace std;
class Student
{
	private :
		int roll,sub1,sub2,std;
		string name;
	public :
		Student(int roll,string name,int sub1,int sub2,int std)
		{
			this->roll = roll;
			this->name = name;
			this->sub1 = sub1;
			this->sub2 = sub2;
			this->std = std;
		}
		string getname()
		{
			return name;
		}
		int getstd()
		{
			return std;
		}
		void grade()
		{
			if(sub1+sub2>150)
			{
				cout<<"A";
			}
			else
			{
				cout<<"B";
			}
		}
};
class Address
{
	private :
		string city;
		Student *ref;
	public :
		Address(string city,Student *ref)
		{
			this->city = city;
			this->ref = ref;
		}
		void display()
		{
			cout<<"\nStudent name = "<< ref->getname();
			cout<<"\n Class Name="<< ref->getstd();
			ref->grade();
			cout<<"\nGrade = ";
			
			cout<<"\nCity = "<<city;
		}
};
int main()
{
	Student s1(50,"rahil",50,60,11);
	Address a1("Ahmedabad",&s1);
	
	Student s2(51,"rushil",80,80,10);
	Address a2("Surat",&s2);
	
	a1.display();
	a2.display();
	return 0;
}
