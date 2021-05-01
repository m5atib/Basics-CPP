#include<iostream>
#include<string.h> 
//for some versions of cfree just use the using namespace std; instead of string.h
using namespace std;
bool isPal(char []);
int main()
{
	char a[]="TaT";
	cout<<"Original Array: "<<a<<"\n";
	isPal(a);
}
bool isPal(char a[])
{
	int size=strlen(a);
	char c[size];

	int x=0;
	for(int i=0;i<size;i++)
	{
		c[x]=a[size-i-1];
		x++;
	}
	
	cout<<"Reversed Array: ";
	for(int i=0;i<size;i++)
	{
		cout<<c[i];
	}
	
	
	for(int i=0;i<size;i++)
	{
		if(a[i]!=c[i])
		{
			cout<<"\n\nArray is Not Palindrome\n";
			return 0;
			break;
		}
	}
	cout<<"\n\nArray is Palindrome\n";
	return 1;

}