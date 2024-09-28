#include<iostream>
using namespace std;
template<typename T,int size>
void sortarr(T (&arr)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int a[5] = {15,14,13,12,11};
	char b[5] = {'A','Z','D','M','S'};
	float c[5] = {50.26,78.60,20.50,25.25,30.20};
	
	sortarr(a);
	sortarr(b);
	sortarr(c);
	
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}

