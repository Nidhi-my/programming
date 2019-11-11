//pro 5
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[50],n,i,max,min;
	cout<<"enter the no. of terms\n";
	cin>>n;
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	cout<<"maximum elements is "<<max;
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<"\nminimum no. is "<<min;
	getch();
}
