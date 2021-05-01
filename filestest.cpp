#include <iostream.h>
#include <fstream.h>


int main()
{	//input from a file test.txt some numbers
	ifstream fin("test.txt");
	
	int x,y,z;
	
	fin>>x;
	cout<<x<<"\t from the file"<<endl;
	fin>>y>>z;
	int total= x+y+z; //got inetial three num and sum it 
	cout<<total<<endl;
	fin.close();
	
	//output to a file this.txt 
	ofstream fout("this.txt");
	for (int i=0;i<70;i++)
	{
		
		if (i%2==0)
			fout<<i<<endl;
	}
	fout.close();
	return 0;
}