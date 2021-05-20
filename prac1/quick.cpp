#include<iostream>
using namespace std;

void quicksort(int a[],int f,int l)
{
	int i,j,pivot,temp;

	if(f<l)
	{
		pivot=f;
		i=f;
		j=l;

		while(i<j)
		{
			while(a[i]<a[pivot] && i<l)
				i++;

			while(a[j]>a[pivot])
				j--;

			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}

		temp	 = a[pivot];
		a[pivot] = a[i];
		a[i]	 = temp;

		quicksort(a,f,j-1);
		quicksort(a,j+1,l);
	}


}

int main()
{
	int i,count,a1[10];

	cout<<"\n How many elements you want ?\n";
	cin>>count;

	cout<<"give elements:\n";
	for(i=0;i<count;i++)
	{
		cin>>a1[i];
	}

	quicksort(a1,0,count-1);

	for(i=0;i<count;i++)
	{
		cout<<"\t"<<a1[i];
	}

	return 0;
}