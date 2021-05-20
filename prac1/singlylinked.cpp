#include<iostream>
 using namespace std;

 struct node
 {
 	int data;
 	char name[20];
 	struct node *next;
 };

struct node *temp,*s,*ptr;
struct node* head = NULL;
struct node* tail = NULL;

void insert_end()
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	cout<<"Enter secratory name :\n";
	cin>>new_node->name;
	cout<<"Enter the PRN\n";
	cin>>new_node->data;

	new_node->next = NULL;

	if(head==NULL)
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		tail->next = new_node;
		tail = new_node;
	}
}

void insert_begin()
{
	struct node* new_node =(struct node*)malloc(sizeof(struct node));
	cout<<"Enter president Name:\n";
	cin>>new_node->name;;
	cout<<"Enter the PRN for president:\n";
	cin>>new_node->data;

	new_node->next = NULL;

	if(head==NULL)
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		new_node->next=head;
		head=new_node;
	}
}

void display()
{
	struct node *ptr;
	ptr=head;

	if(head==NULL)
	{
		cout<<"List is Empty\n";
	}
	else
	{
		cout<<"Element in list are:\n";
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" "<<ptr->name<<"\n";
			ptr=ptr->next;
		}
	}
}


void insert_pos()
{
	int value,pos,counter=0;
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	cout<<"Enter members name:\n";
	cin>>new_node->name;
	cout<<"Enter PRN for member:\n";
	cin>>new_node->data;
	new_node->next = NULL;

	cout<<"Enter position of Members:\n";
	cin>>pos;
	int i;
	s = head;
	while(s != NULL)
	{
		s = s->next;
		counter++;
	}
	if(pos == 1)
	{
		if(head == NULL)
			head = new_node;
		else
		{
			new_node->next = head;
			head = new_node;
		}
	}

	else if(pos > 1 && pos<=counter)
	{
		s = head;
		for(i=1; i<pos ;i++)
		{
			ptr = s;
			s = s->next;
		}
		ptr->next = new_node;
		new_node-> next = s;
	}
	else
	{
		cout<<"position out of range\n";
	}
}

void delete_pos()
{
	int pos,i,counter=0;
	if(head==NULL)
	{
		cout<<"List is empty\n";
		return;
	}
	cout<<"Enter the position of value to be deleted\n";
	cin>>pos;

	if(pos == 1)
	{
		s = head;
		head = s->next;
		cout<<"president is deleted\n";
	}
	else
	{
		s = head;
		while(s != NULL)
		{
			s=s->next;
			counter++;
		}

		if(pos > 0 && pos <= counter)
		{
			for(i = 1;i<pos;i++)
			{
				ptr = s;
				s=s->next;
			}
			ptr->next = s->next;
		}
		else{
			cout<<"Position out of range\n";
		}
	}
		free(s);
		cout<<"member deleted\n";
	
}

void count()
{
	int count = 0;
	struct node* ptr;
	ptr = head;

	if(head== NULL)
	{
		cout<<"List is empty\n";
	}
	else
	{
		while(ptr != NULL)
		{
			ptr =ptr->next;
			count++;
		}
		cout<<"Total members are :"<<count;
	}
}

int main()
{
	int choice;
	while(1)
	{
		cout<<"\n\n****************************************************\n\n";
		cout<<"\n\nPinnacle Club\n\n";
		cout<<"\n\n****************************************************\n\n";	
		cout<<"\n1.Insert president :\n";
		cout<<"\n2.Insert secretory :\n";
		cout<<"\n3.insert member\n4.delete member\n5.display member\n6.count\n7.Exit\n";
		cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"Enter details of president\n";
				insert_begin();
				cout<<"\n";
				break;

			case 2:
				cout<<"Enter details of secretary:\n";
				insert_end();
				break;

			case 3:
				cout<<"Enter the details of member:\n";
				insert_pos();
				break;

			case 4:
				cout<<"\nDelete a member:\n";
				delete_pos();
				break;

			case 5:
				cout<<"\nDisplay Members\n";
				display();
				break;

			case 6:
				cout<<"\ncount of members\n";
				count();
				break;

			case 7:
				return 0;
			default:
				return 0;

		}
	}

	return 0;
}

