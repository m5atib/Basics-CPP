#include <iostream>
using namespace std;
int gcd(int n1,int n2) 
{
	while(n1!=n2)
	{
		if (n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1
		}
	}
	return n1;
}
// GCD(12/16)
//n1=12>>12-4>>8>>8-4>>4
//n2=16>>16-12>>4
int main()
{
	int m1,m2;
	cout<<"Enter tow positive integer : ";
	cin>>m1>>m2;
	cout<<gcd(m1,m2)<<endl;
	return 0;
}