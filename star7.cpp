#include<iostream>
using namespace std;

int main()
{
	int rows,space;
	cout<<"enter the no. of rows";
	cin>>rows;
	for(int i=rows ; i>=1; i--)
	{
		for (space=i ;space<=rows; space++ )
		{
			cout<<" ";
		}
		for (int j=1; j<=(2*i-1); j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
