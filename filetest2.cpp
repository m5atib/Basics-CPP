//filetest2 
#include <iostream.h>
#include <fstream.h>

int main()
{	int x;
	ifstream ff("this.txt");
	while (!ff.eof())
	{
		
		ff>>x;
		cout<<x<<"\t from the file"<<endl;
	}
	ff.close();
	int marks[20][3]={0	};
	
	for (int i =0;i<20;i++)
	{
		marks[i][0]= rand()%25;
		marks[i][1]= rand()%50;
		marks[i][2] = marks[i][0] - marks[i][1];
	}
	ofstream farray("array.txt");
	for (int i=0;i<20;i++)
	{
		for (int j =0;j<3;j++)
			farray<<marks[i][j]<<"\t";
		farray<<endl;
	}
	farray.close();
	return 0;
}