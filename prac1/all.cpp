// #include<iostream>

// using namespace std;

// void quicksort(int a[],int f,int l)
// {
// 	int i,j,temp,pivot;

// 	if(f<l)
// 	{
// 		pivot=f;
// 		i=f;
// 		j=l;

// 		while(i<j)
// 		{
// 			while(a[i]<a[pivot] && i<l)
// 				i++;
// 			while(a[j]>a[pivot])
// 				j--;

// 			if(i<j)
// 			{
// 				temp = a[i];
// 				a[i] = a[j];
// 				a[j] = temp;
// 			}
// 		}

// 		temp = a[pivot];
// 		a[pivot] = a[i];
// 		a[i] = temp;

// 		quicksort(a,f,j-1);
// 		quicksort(a,j+1,l);
// 	}
// }


// void insertion(int a[])
// {
// 	int i,j,k,temp;

// 	for(i=1;i<10;i++)
// 	{
// 		k=a[i];
// 		j=i-1;

// 		while(k<a[j] && j>=0)
// 		{
// 			a[j+1] = a[j];
// 			j=j-1;
// 		}
// 		a[j+1] = k;
// 	}
// }

// void shellsort(int a[], int n)
// {
// 	int i,j,temp,step;

// 	for(step=n/2;step>0;step=step/2)

// 		for(i=step;i<n;i++)
// 		{
// 			temp = a[i];

// 			for(j=i;j>=step;j=j-step)
// 			{
// 				if(temp<a[j-step])
// 					a[j]=a[j-step];
// 				else
// 					break;
// 			}
// 			a[j] = temp;

// 		}
// }

// int main()
// {
// 	int arr[10] = {9,8,7,6,5,4,3,2,1,10};
// 	//quicksort(arr,0,10);
// 	//insertion(arr);

// 	shellsort(arr,10);

// 	for( int i=0;i<10;i++)
// 	{
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }



// #include<iostream>
// #include<stack>

// using namespace std;

// int prec(char c)
// {
// 	if(c == '^')
// 	{
// 		return 3;
// 	}
// 	else if(c == '*' || c=='/')
// 	{
// 		return 2;
// 	}
// 	else if(c == '+' || c == '-')
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return 0;
// 	}
// }


// void intopost(string s)
// {
// 	string ns;
// 	int i;
// 	stack<char> st;
// 	st.push('N');
// 	int l = s.length();

// 	for(i=0;i<l;i++)
// 	{
// 		if(s[i] >= 'a' && s[i] <= 'z')
// 			ns += s[i];

// 		else if(s[i] == '(')
// 			st.push('(');

// 		else if(s[i] == ')')
// 		{
// 			while(st.top() !='N' && st.top() == '(')
// 			{
// 				char c = st.top();
// 				st.pop();
// 				ns += c;
// 			}

// 			if(st.top() == '(')
// 			{
// 				char c = st.top();
// 				st.pop();
// 			}
// 		}

// 		else
// 		{
// 			while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
// 			{
// 				char c = st.top();
// 				st.pop();
// 				ns += c;
// 			}
// 			st.push(s[i]); //////////////REMEMBER THIS TO PUSH
// 		}
// 	}

// 	while(st.top() != 'N')
// 	{
// 		char c = st.top();
// 		st.pop();
// 		ns += c;
// 	}

// 	cout<<ns<<endl;
// }

// int main()
// {
// 	string exp;
// 	cin>>exp;
// 	intopost(exp);
// 	return 0;
// }

// #include<iostream>

// using namespace std;
// int stack[20];
// int top = -1;

// int main()
// {
// 	string a;
// 	cin>>a;
// 	int i;

// 	for(i=0;a[i]!='\0';i++)
// 	{
// 		if(a[i] == '(' || a[i] == '{')
// 		{
// 			top++;
// 			stack[top] = a[i];
// 		}		

// 		else if(a[i] == ')' || a[i] == '}')
// 		{
// 			top--;
// 		}
// 	}

// 	if(top==-1)
// 	{
// 		cout<<"valid";
// 	}
// }

// #include<iostream>
// #define MAX 5
// using namespace std;
// int s[MAX];
// int front ,rear;

// void init()
// {
// 	front == rear == -1;
// }

// int isempty()
// {
// 	if(rear == -1)
// 		return 1;
// 	return 0;
// }

// int isfull()
// {
// 	if(rear==MAX-1)
// 		return 1;
// 	return 0;
// }

// void enqueue(int a)
// {
// 	if(rear==-1)
// 	{
// 		front = rear = 0;
// 		s[rear] = a;
// 	}
// 	else
// 	{
// 		rear = rear+1;
// 		s[rear]= a;
// 	}
// }

// void dequeue()
// {
	
// 	 if(front == rear)
// 	{
// 		front = rear = -1;
// 	}
// 	else
// 	{
// 		front = front + 1;
// 	}

// }

// void display()
// {
// 	int i;
// 	if(!isempty())
// 	{
// 		cout<<"\n";
// 		for(i=front;i<rear;i++)
// 		{
// 			cout<<"\t"<<s[i];
// 		}
// 	}
// }


// int main()
// {
// 	int x,i;

// 	init();

// 	cout<<"Give 5 elements: \n";
// 	for(i=0;i<5;i++)
// 	{
// 		cin>>x;
// 		if(!isfull())
// 		{
// 			enqueue(x);
// 		}
// 		else
// 		{
// 			cout<<"FUll\n";
// 			return 0;
// 		}
// 	}
// 	display();

// 	for(i=0;i<2;i++)
// 	{
// 		if(!isempty())
// 		{
// 			dequeue();
// 		}
// 		else
// 		{
// 			cout<<"ALREADY EMPTY\n";
// 			return 0;
// 		}
// 	}
// 	display();

// 	return 0;
// }


// #include<iostream>
// using namespace std;

// #define MAX 5
// static int order_no1 = 1;

// struct order
// {
// 	int n,order_no;
// };

// class queue
// {
// 	order Q[MAX];
// 	int front , rear;

// public:

// 	queue()
// 	{
// 		front=rear=-1;
// 	}

// 	int isempty()
// 	{
// 		if(rear==-1)
// 			return 1;
// 		return 0;
// 	}

// 	int isfull()
// 	{
// 		if(front==(rear+1)%MAX)
// 			return 1;
// 		else 
// 			return 0;
// 	}

// 	void insert(order data)
// 	{
// 		if(isempty())
// 		{
// 			rear=0;
// 			front=0;
// 			Q[rear]=data;
// 		}
// 		else
// 		{
// 			rear=(rear+1)%MAX;
// 			Q[rear]=data;
// 		}
// 	}

// 	order deliver()
// 	{
// 		order val;
// 		val = Q[front];

// 		if(front==rear)
// 		{
// 			front=rear=-1;
// 		}
// 		else
// 		{
// 			front=(front+1)%MAX;
// 		}
// 		return val;
// 	}

// 	void display()
// 	{
// 		order info;
// 		int i = front;

// 		if(isempty())
// 		{
// 			cout<<"empty queue\n";
// 		}
// 		else
// 		{
// 			while(i<=rear)
// 			{
// 				info = Q[i];
// 				cout<<"-----------\n";
// 				cout<<info.n<<"\t"<<info.order_no;
// 				i=i+1;
// 			}
// 		}
// 	}
// };

// int main()
// {
// 	queue q;
// 	order O;

// 	int ch;
// 	char yn;

// 	loop:
// 	cout<<"\n****************************************\n";
// 	cout<<"\n1.take order\n2.deliver\n3.check status\n4.display order\n5.exit\n";
// 	cin>>ch;

// 	switch(ch)
// 	{
// 		case 1:
// 			if(!q.isfull())
// 			{
// 				cout<<"*************\n";
// 				cout<<"pizza quantity\n";
// 				cin>>O.n;
// 				O.order_no=order_no1++;
// 				cout<<"your order no is :\t"<<O.order_no;
// 				q.insert(O);
// 			}
// 			else
// 			{
// 				cout<<"Wait Order Queue is full\n";
// 			}
// 			break;

// 		case 2:
// 			if(!q.isempty())
// 			{
// 				O=q.deliver();
// 				cout<<"*****************\n";
// 				cout<<"\nOrder delivered\n";
// 				cout<<O.order_no;
// 				cout<<"\nPizza Quntity :"<<O.n;
// 			}
// 			else
// 			{
// 				cout<<"You havent ordered anything\n";
// 			}
// 			break;

// 		case 3:
// 			if(q.isfull())
// 			{
// 				cout<<"\n No Orders stations are full\n";
// 			}
// 			else
// 			{
// 				cout<<"\nplace order we are free\n";
// 			}
// 			break;

// 		case 4:
// 			cout<<"\nList of orders\n";
// 			q.display();
// 			break;

// 		case 5:
// 		break;

// 		default:
// 			return 0;
// 	}
// 	cout<<"\n\nwant to continue ?\n";
// 	cin>>yn;
// 	if(yn=='y'|| yn=='Y')
// 	{
// 		goto loop;
// 	}
// 	else
// 	{
// 		return 0;
// 	}

// }



#include<iostream>
using namespace std;

struct node
{
	int data;
	char name[10];
	struct node *next;
};

struct node *temp,*s,*ptr;
struct node* head = NULL ;
struct node* tail = NULL ;

void insert_end()
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	cout<<"Give name of scretory\n";
	cin>>new_node->name;
	cout<<"Give PRN \n";
	cin>>new_node->data;

	new_node->next = NULL;

	if(head==NULL)
	{
		head=new_node;
		tail=new_node;
	}
	else
	{
		tail->next=head;
		tail = new_node;
	}
}

void insert_begin()
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	cout<<"Give name of president\n";
	cin>>new_node->name;
	cout<<"Give PRN \n";
	cin>>new_node->data;

	new_node->next = NULL;

	if(head==NULL)
	{
		head=new_node;
		tail=new_node;
	}
	else
	{
		new_node->next=head;
		head = new_node;
	}
}

void display()
{
	struct node *ptr;
	ptr = head;

	if(head==NULL)
	{
		cout<<"List is empty\n";
	}
	else
	{
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" "<<ptr->name<<"\n";
			ptr=ptr->next;
		}
	}

}

void insert_pos()
{
	int pos,i,counter=0;

	sruct node* new_node = (struct node*)malloc(sizeof(struct node));
	cout<<"give name of member\n";
	cin>>new_node->name;
	cout<<"PRN of member\n";
	cin>>new_node->data;
	new_node->next = NULL;

	cout<<"give position\n";
	cin>>pos;
	
	s=head;

	while(s!=NULL)
	{
		counter++;
		s=s->next;
	}

	if(head==NULL)
	{
		head = new_node;
	}
	else
	{

	}


}






























