#include<iostream>
#include<math.h>
using namespace std;
int m=1,i=1;
int s=0,count=1,j=1, avg,c,max;
int fact(int n)
{
	for ( int f=1; f<=n; f++)
	{
		m=m*f;
		
	}
	return m;
}
int main()
{
	
	
	
	cout<<fact(5)<<endl;


	return 0;
}
