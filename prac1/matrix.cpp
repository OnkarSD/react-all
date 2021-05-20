#include<iostream>
#include<cstring>
using namespace std;


void add(int a[3][3],int b[3][3])
{
	int i,j;

	for(i=0;i<3;i++)
	{
		cout<<"\n";

		for(j=0;j<3;j++)
		{
			cout<<a[i][j] + b[i][j]<<"\t";
		}
	}

}

void multiply(int a[3][3],int b[3][3])
{
	int i,j,k,sum,c[3][3];

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			sum=0;
			for(k=0; k<3; k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

int upper(int a[3][3])
{
	int i,j;

	for(i=1;i<3;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i][j]!=0)
				return 0;
		}
	}

	return 1;
}


int main()
{
	int x[3][3],y[3][3],z[3][3],i,j,ch;
	char yn;

loop:

	cout<<"what you want to do ?\n\n1.additon\n2.multiplication\n3.upper or not \n4.exit\n\n";
	cin>>ch;

	cout<<"Give first matrix:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>x[i][j];
		}
	}


	switch(ch)
	{
		case 1:
			cout<<"Give second matrix:\n";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>y[i][j];
				}
			}	
			cout<<"Matrix addition: \n\n";
			add(x,y);
			break;

		case 2:
			cout<<"Give second matrix:\n";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>y[i][j];
				}
			}
			cout<<"MAtrix multiplication \n\n";
			multiply(x,y);
			break;

		case 3:
			if(upper(x))
				cout<<"matrix is upper"<<endl;
			else
				cout<<"Its not upper triangular\n";
			break;

		case 4:
		return 0;
		
		default:
		cout<<"Whoops Wrong choice!!!\n";
	

	}

	cout<<"want to continue ?\n";
	cin>>yn;
	if(yn=='y' || yn=='Y')
		goto loop;
	else
		return 0;


	return 0;
}