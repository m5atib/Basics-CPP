#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a;
    cin>>a;
    int temp=0,pos=0;
    int tempo=0;
    int arr[a.length()];

    for (int i=0; i<a.length() ; i++)
    {
          cin>>arr[i];
        
        
    }
    int mini= arr[0];
   for (int i=1; i<a.length() ; i++){
   	if (mini >arr[i] ) {
	   	mini=arr[i];
	   	pos = i;
	   }
   }
  
    string b;
    cin>>b;
  
     int arr2[b.length()];
   for (int i=0; i<b.length() ; i++)
    {
          cin>>arr2[i];
        
        
    }
   int pos2=0;
   int mini2 = arr2[0];
     for (int i=1; i<b.length() ; i++){
   	if (mini2 >arr2[i] ) {
	   	mini2=arr2[i];
	   	pos2 = i;
	   }
   }
    
//     Choose branch B then branch G
cout<<"Choose branch "<<a[pos]<<" then branch "<<b[pos2]<<endl;
    return 0;
}