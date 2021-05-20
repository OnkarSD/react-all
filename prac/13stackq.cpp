#include<iostream>
#include<list>
#include<queue>
#include<stdlib.h>

using namespace std;

int main()
{
	list<int> st;
	list <int> :: iterator itr;
	queue <int> qu;
	int choice, item, ch;
	char yn;

	start:

	cout<<"\n1. Stack \n2. Queue"<<endl;
	cin>>ch;

	if(ch==1)
	{
		while(1)
		{
			cout<<"1.insert the element\n";
			cout<<"2.delete the element\n";
			cout<<"3.display stack\n";
			cout<<"4.Exit\n";
			cout<<"Enter your choice\n";
			cin>>choice;

			switch(choice)
			{
				case 1:
				cout<<"Give value to insert:\n";
				cin>>item;
				st.push_back(item);
				break;

				case 2:
				itr=st.end();
				st.pop_back();
				cout<<"element"<<*itr<<"is now deleted\n";
				itr--;
				
				break;

				case 3:
				for(itr=st.begin();itr!=st.end();itr++)
				{
				cout<<*itr<<endl;
				}
				break;

				case 4:
				exit(1);
				break;

				default:
				cout<<"Wrong choice !!!\n";
				break;
			}

		}

	}

	else if(ch==2)
	{
		while(1)
		{
			cout<<"1.insert element int Q:\n";
			cout<<"2.delete element from Q:\n";
			cout<<"3.exit:\n";
			cout<<"Give a choice:\n";
			cin>>choice;

			switch(choice)
			{
				case 1:
				cout<<"Give element to insert:\n";
				cin>>item;
				qu.push(item);
				break;

				case 2:
				item = qu.front();
				qu.pop();
				cout<<"element "<<item<<" is deleted.\n";
				break;

				case 3:
				exit(1);
				break;

				default:
				cout<<"Wrong choice !!!";
				break;

			}
		}
	}

	else
	{
		cout<<"OH!! Wrong Choice.";
		goto start;
	}

	cout<<"\nDo you want to continue?Y|N:\n";
	cin>>yn;

	if(yn=='y')
	{
		goto start;
	}

	return 0;
}