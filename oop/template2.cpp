#include<iostream>
using namespace std;

#define MAX 5
template <class T>

class stack
{
public:

	T S[MAX];
int top;

public:
	stack()
	{
		top==-1;
	}

	int isfull()
	{
		if(top==MAX-1)
		{
			return 1;
		}
		else
			return 0;
	}
	
	int isempty()
	{
		if(top==-1)
			return 1;
		else
			return 0;
	}

	void push(T a)
	{
		if(!isfull())
		{
			top++;
			S[top] = a;
		}
		else
		{
			cout<<"\n stack is full";
		}
	}


	T pop()
	{
		T temp;

		if(!isempty())
		{
			temp = S[top];
			top--;
		}
		else
		{
			cout<<"\n Stack is empty";
			cout<<"\n"<<temp;
		}
	}

	void display()
	{
		if(!isempty())
		{
			while(!isempty())
			{
				cout<<"\t"<<S[top];
				top--;
			}
		}

		else
		{
			cout<<"stack is empty";
		}
	}

};

int main()
{
	stack<int> a;

	if(a.isempty())
		cout<<"stack is empty";
	if(!a.isfull())
		cout<<"stack is not full";

	a.push(10);
	a.push(20);
	a.push(30);
	a.push(40);
	a.push(50);

	cout<<"\n one element is popped";
	a.pop();

	cout<<"elements in stack are :";
	a.display();

	return 0;
}





