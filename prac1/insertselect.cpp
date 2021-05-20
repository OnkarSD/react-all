#include<iostream>
using namespace std;

void shell(int a[],int n)
{
	int i,j,step,temp;

	for(step=n/2;step>0;step=step/2)
	
		for(i=step;i<n;i++)
		{
			temp=a[i];

			for(j=i;j>=step;j=j-step)
			
				if(temp<a[j-step])
					a[j]=a[j-step];
				else
					break;
				a[j]=temp;
			}
	
	for(i=0; i<5; i++)
	{
		cout<<a[i]<<" ";
	}
}

void insertion(int a[],int n)
{
	cout<<"\nInsertion Sort :\n";
	int i,j,k;
	for(i=1; i<n; i++)
	{
		k=a[i];
		j=i-1;

		while(k<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
	}
	for(i=0; i<5; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int arr[5];
	int num,i;
	

	cout<<"give the elements:\n";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	shell(arr,5);
	//insertion(arr, 5);

	

return 0;
}