#include<iostream>

using namespace std;

void linear(int a[],int n)
{
	int i,j,x,flag=0;
	cout<<"Give element to Search :\n";
	cin>>x;

	for(i=0;i<n;i++)
	{
		
			if(a[i]==x)
				flag=1;
	}

		if(flag==1)
		{
			cout<<"Element found at "<<i<<"th position.\n";
		}
	

}

void binary(int a[],int n)
{
	int i,f,l,flag=0,m,x;
	cout<<"give element to search: \n";
	cin>>x;
	f=0;
	l=n;
	m=(f+l)/2;

	for(i=0;i<n;i++)
	{
		if(a[m]<x)
		{
			f=m+1;
		}
		else if(a[m]==x)
		{
			flag=1;
			break;
		}
		else
		{
			l=m-1;
		}
		m=(f+l)/2;

	}

	if(flag==1)
		cout<<"Element found at "<<i<<"\n";


}



int main()
{
	int arr[10];
	int ch,num,i;

	cout<<"Give number of Element: \n";
	cin>>num;

	cout<<"give the elements: \n";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}

	cout<<"what to do ? \n";
	cout<<"\n1.linear\n2.Binary\n";
	cin>>ch;


	switch(ch)
	{
		case 1:
		linear(arr,num);

		case 2:
		binary(arr,num);

		default:
			return 0;
	}
	return 0;
}