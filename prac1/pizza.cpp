#include<iostream>
using namespace std;
#define MAX 5
static int order_no1=1;

struct order
{
	int n,order_no;
};

class queue
{
	order Q[MAX];
	int front,rear;

public:

	queue()
	{
		front=rear=-1;
	}

	int isempty()
	{
		if(rear==-1)
			return 1;
		return 0;
	}

	int isfull()
	{
		if(front==(rear+1)%MAX)
			return 1;
		return 0;
	}

	void insert(order data)
	{
		if(isempty())
		{
			front=rear=0;
			Q[rear]=data;
		}
		else
		{
			rear=(rear+1)%MAX;
			Q[rear]=data;
		}
	}

	order deliver()
	{
		order val;
		val=Q[front];

		if(front==rear)
		{
			front=rear=-1;
		}	
		else
		{
			front=(front+1)%MAX;
		}
		return val;
	}


	void order_list()
	{
		int i;
		i=front;
		order info;
		if(isempty())
		{
			cout<<"\nNo order in Queue:\n";
			return;
		}
		else
		{
			while(i<=rear)
			{
				info=Q[i];
				cout<<"\n********************\n";
				cout<<"\nORDER NO:\t"<<info.order_no<<" ";
				cout<<"\nQUANTITY:\t"<<info.n<<" ";
				i=i+1;

			}
		}
	}
};

int main()
{
	queue q;
	order O;

	int ch;
	char yn;

	loop:
	cout<<"\n****************************************\n";
	cout<<"\n1.take order\n2.deliver\n3.check status\n4.display order\n5.exit\n";
	cin>>ch;

	switch(ch)
	{
		case 1:
			if(!q.isfull())
			{
				cout<<"*************\n";
				cout<<"pizza quantity\n";
				cin>>O.n;
				O.order_no=order_no1++;
				cout<<"your order no is :\t"<<O.order_no;
				q.insert(O);
			}
			else
			{
				cout<<"Wait Order Queue is full\n";
			}
			break;

		case 2:
			if(!q.isempty())
			{
				O=q.deliver();
				cout<<"*****************\n";
				cout<<"\nOrder delivered\n";
				cout<<O.order_no;
				cout<<"\nPizza Quntity :"<<O.n;
			}
			else
			{
				cout<<"You havent ordered anything\n";
			}
			break;

		case 3:
			if(q.isfull())
			{
				cout<<"\n No Orders stations are full\n";
			}
			else
			{
				cout<<"\nplace order we are free\n";
			}
			break;

		case 4:
			cout<<"\nList of orders\n";
			q.order_list();
			break;

		case 5:
		break;

		default:
			return 0;
	}
	cout<<"\n\nwant to continue ?\n";
	cin>>yn;
	if(yn=='y'|| yn=='Y')
	{
		goto loop;
	}
	else
	{
		return 0;
	}


return 0;
}