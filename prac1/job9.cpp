#include<iostream>
#define MAX 10
using namespace std;

int data[MAX];
int front,rear;

void initialise()
{
	front=rear=-1;
}

int empty()
{
	if(rear==-1)
		return 1;
	return 0;
}

int full()
{
	if(rear==MAX-1)
		return 1;
	return 0;
}

int enqueue(int x)
{
	if(rear==MAX-1)
	{
		front=rear=0;
		data[rear]=x;
	}
	else
	{
		rear=rear+1;
		data[rear]=x;
	}
}

int dequeue()
{
	int x;
	x=data[front];

	if(rear==front)
	{
		rear=front=-1;
	}
	else
	{
		front=front+1;
	}
	return(x);
}

void print()
{
	int i;
	if(!empty())
	{
		cout<<"\n";
		for(i=front;i<rear;i++)
		{
			cout<<"\t"<<data[i];
		}
	}
}


int main()
{
	int x,i;

	initialise();

	cout<<"Give 5 elements: \n";
	for(i=0;i<5;i++)
	{
		cin>>x;
		if(!full())
		{
			enqueue(x);
		}
		else
		{
			cout<<"FUll\n";
			return 0;
		}
	}
	print();

	for(i=0;i<2;i++)
	{
		if(!empty())
		{
			x=dequeue();
		}
		else
		{
			cout<<"ALREADY EMPTY\n";
			return 0;
		}
	}
	print();

	return 0;
}

