// #include<iostream>
// #include<stdlib.h>
// #include<string>

// using namespace std;

// struct node{
// 	string city;
// 	int dist;
// 	struct node *next;
// };

// class adjmatrix
// {
// 	int m[10][10],i,j,n;
// 	string v[20];
// 	char ch;
// 	node *head[20];
// 	node *temp = NULL;

// public:

// 	adjmatrix()
// 	{
// 		for(i= 0; i<20; i++)
// 			head[i] = NULL;
// 	}

// 	void makegraph()
// 	{
// 		cout<<"Number of cities :\n";
// 		cin>>n;
// 		cout<<"Give name of the cities :\n";
// 		for(i=0; i<n; i++)
// 		{
// 			cin>>v[i];
// 		}

// 		for(i=0; i<n; i++)
// 		{
// 			for(j=0; j<n; j++)
// 			{
// 				cout<<"Is there a path "<<v[i]<<"--"<<v[j]<<endl;
// 				cin>>ch;

// 				if(ch=='y')
// 				{
// 					cout<<"Give the path distance :";
// 					cin>>m[i][j];
// 				}
// 				else if(ch=='n')
// 				{
// 					m[i][j] = 0;
// 				}
// 				else
// 				{
// 					cout<<"ERROR BItCh now enter it again ahahah\n";

// 				}
// 			}
// 		}
// 	}

// 	void displayMatrix()
// 	{
// 		cout<<"\n";
//     	for(j=0;j<n;j++)
//      		{
//      			cout<<"\t"<<v[j];
//       		}

// 		for(i=0; i<n; i++)
// 		{
// 			cout<<"\n"<<v[i];
// 			for(j=0; j<n; j++)
// 			{
// 				cout<<"\t"<<m[i][j];
// 			}
// 			cout<<"\n";
// 		}
// 	}
// };

// int main()
// {
// 	adjmatrix a1;
// 	a1.makegraph();
// 	a1.displayMatrix();
// }

#include <iostream>
using namespace std;

int main()
{
	string name;
	int t;
	cin >> t;

	for (int i = 0; i <= t; i++)
	{
		cin >> name;
		cout << "Hello" << name;
		return 0;
	}
}
