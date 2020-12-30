#include<iostream>
using namespace std;

int main()
{
	int rows;
	cout<<"enter the rows";
	cin>>rows;
	for(int i=1;i<=rows;i++)
	{
		for(int space=i ; space<= rows; space++)
		{
			cout<<" ";
		}
	
		for(int j=i; j<=(2*i-1); j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
		for(int i=rows-1 ;i>=1;i--)
	{
		for(int space=i ; space<= rows; space++)
		{
			cout<<" ";
		}
	
		for(int j=i; j<=(2*i-1); j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
} 
