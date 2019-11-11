//pro 4
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[50],n,i,sum=0;
	cout<<"enter the no. of terms\n";
	cin>>n;
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
	{
		 cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<"sum is "<<sum;
	getch();
}
