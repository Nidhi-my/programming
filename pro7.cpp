//pro 7
#include<iostream>
#include<conio.h>
using namespace std;
int swap(int p,int q);
int main()
{
	int a,b;
	cout<<"enter the first no.\n";
	cin>>a;
	cout<<"enter the second no.\n";
	cin>>b;
	swap(a,b);
	getch();
}
int swap(int p,int q)
{
	int s;
	s=p;
	p=q;
	q=s;
	cout<<"The first no. is "<<p;
	cout<<"\nThe second no. is "<<q; 
}

