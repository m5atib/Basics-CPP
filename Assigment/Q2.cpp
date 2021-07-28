#include <iostream.h>
int main()
{
  int x , sum=0 ,k;
  cout<<"enter the num :"; cin>>x;
  while (x>0)
  {
  k=x%10;
  x/=10;
  sum+=k;
  }
  cout<<"the sum of the digit of entered number is : "<<sum<<endl;
  return 0;
}