#include<iostream>
#define MAX 10

using namespace std;

void create(int a[],int n)
{
	int i,j;
	cout<<"Enter the players Array:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}


void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void intersect(int a[],int b[],int n,int m)
{
	int i,j,flag;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
				cout<<a[i]<<" ";
			else
				flag=1;
		}
	}
}

void onlycric(int a[],int b[],int n,int m)
{
	int i,j,flag;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
				flag=1;
				
		}
		if(flag==0)
			cout<<a[i]<<" ";
	}
}

void onlybad(int a[],int b[],int n,int m)
{
	int i,j,flag;
	for(i=0;i<n;i++)
	{
		flag=2;
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
				flag=1;
				
		}
		if(flag==2)
			cout<<b[i]<<" ";
	}
}



int main()
{
	int set1[MAX],set2[MAX],set3[MAX];
	int i,j,n,total,cricket,badminton,none;

	cout<<"Give total number of students: \n";
	cin>>total;
	cout<<"Give students playing cricket: \n";
	cin>>cricket;
	cout<<"give students playing badminton: \n";
	cin>>badminton;

	cout<<"Players playing cricket. \n";
	create(set1,cricket);

	cout<<"\n\nPlayers Playing Badminton . \n";
	create(set2,badminton);

	cout<<"\n\nPlayers playing both games :\n";
	intersect(set1,set2,cricket,badminton);

	cout<<"\n\nplayers playing Only cricket : \n";
	onlycric(set1,set2,cricket,badminton);

	cout<<"\n\nplayers playing Only Badminton : \n";
	onlybad(set1,set2,cricket,badminton);

	cout<<"\n\nPlayers playing both or anyone game: \n";
	print(set1,cricket);
	onlybad(set1,set2,cricket,badminton);

	cout<<"\n\nstudents playing NONE of game:\n";
	none = total-cricket-badminton;
	cout<<none<<endl;

	return 0;
}