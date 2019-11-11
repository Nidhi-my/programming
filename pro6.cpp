//pro 6
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[50],n,i,j,temp;
	cout<<"enter the no. of terms\n";
	cin>>n;
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	getch();
}
