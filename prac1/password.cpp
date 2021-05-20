#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l,count=0;
	char a[4]={'a','b','c','d'};

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				for(l=0;l<4;l++)
				{
					cout<<a[i]<<a[j]<<a[k]<<a[l]<<endl;
					count++;
				}
			}
		}
	}
	cout<<"combinations are:"<<count;
	return 0;
}