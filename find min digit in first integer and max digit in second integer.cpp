#include <iostream>
using namespace std;
int maxinsecond(int );
int factorial(int);
int mininfirst(int );
int minandmax(int ,int );
int main()
{
	int n1,n2,s;
	cout<<"Enter a two positive intiger at least 2 digits : "<<endl;
	cin>>n1>>n2;
	cout<<" The min in first num is : "<<mininfirst(n1)<<endl;
	cout<<" The max in second num is : "<<maxinsecond(n2)<<endl;
	cout<<"------------------------------------"<<endl;
	s=maxinsecond(n2)-mininfirst(n1);
	if (s<0)
	{
		s=s*(-1);
	}
	cout<<"( "<<maxinsecond(n2)<<" - "<<mininfirst(n1)<<" )! =";
	cout<<factorial(s)<<endl;
	return 0;
}

// function to find min digit in first integer and max digit in second integer : 
//***********************
int maxinsecond(int y)
{
	// in second integer :
	int max=0,k;
	while(y!=0)
	{
		k=y%10;
		if (k>max)
		{
			max=k;
		}
		y/=10;
	}
	return max;
}
//***********************
int mininfirst(int x)
{
	int min=0,n;
	n=x%10;
	min=n;
	while(x!=0)
	{
		n=x%10;
		if (n<min)
		{
			min=n;
		}
		x/=10;
	}
	return min;
}
//factorial 
int factorial(int m)
{
	if (m<=1)
	{
		return 1;
	}
	else
	{
		return m * factorial(m-1);
	}
}