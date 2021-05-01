#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
	int x;
	ofstream ff("khatib.txt");
	int a[20][3];
	
	for (int i=0; i<20 ; i++)
	{
		a[i][0]=rand()%25;
		a[i][1]=rand()%50;
		a[i][2]=a[i][0]-a[i][1];
		for (int j=0; j<3; j++)
		{
			ff<<"\t"<<a[i][j]<<"\t";
		}
		ff<<endl;
		
	}
	while( !ff.eof() )
{
    getline( ff);
    //process the line
}
	
	ff.close();
	
	
	return 0;
}