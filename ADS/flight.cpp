#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

struct node{
	string city;
	int dist;
	struct node *next;
};

class adjmatrix
{
	int m[10][10],i,j,n;
	string v[20];
	char ch;
	node *head[20];
	node *temp = NULL;

public:

	adjmatrix()
	{
		for(i= 0; i<20; i++)
			head[i] = NULL;
	}

	void makeGraph()
	{
		cout<<"Number of cities :\n";
		cin>>n;
		cout<<"Give name of the cities :\n";
		for(i=0; i<n; i++)
		{
			cin>>v[i];
		}

		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				cout<<"Is there a path "<<v[i]<<"--"<<v[j]<<endl;
				cin>>ch;

				if(ch=='y')
				{
                    if(v[i] != v[j])
                    {
					    cout<<"Give the path distance :";
					    cin>>m[i][j];
                    }
                    else
                    {
                        m[i][j] = 0;
                    }
                    
				}
				else if(ch=='n')
				{
					m[i][j] = 0;
				}
		
                	else
                    {
                        cout<<"error";
                        
                    }
                
            }
        }
	}
	
	void makeListGraph()
	{
	
	    for(i=0; i<n; i++)
	    {
	        node *p = new node;
	        p->next = NULL;
	        p->city = v[i];
	        head[i] = p;
	        
	    }
	        
	      for(i=0; i<n; i++)
		    {
			    for(j=0; j<n; j++)
		    	{
		            if(m[i][j] > 0)
		            {
		                node *p = new node;
		                p->city = v[j];
		                p->dist = m[i][j];
		                p->next = NULL;
		                
		                if(head[i] == NULL)
		                {
		                    head[i]->next = p;
		                }
		                else
		                {
		                    temp = head[i];
		                    
		                    while(temp->next != NULL)
		                    {
		                        temp = temp->next;
		                    }
		                    temp->next = p;
		                }
		                
		            }	
		    	
		    	}
		    }
		    
	}
	
	void displayList()
	{
	    cout<<"List representation :\n";
	    
	    for(i=0; i<n; i++)
	    {
	        if(head[i] == NULL)
	        {
	            cout<<"Nothing to represent \n";
                break;
	        }
	        
	        else
	        {
	            cout<<"\n"<<head[i]->city;
	            temp = head[i]->next;
	            
	            while(temp != NULL)
	            {
	                cout<<"->"<<temp->city;
                    temp = temp->next;
	            }
                cout<<"\n";
	        }
	    }


	}

	void displayMatrix()
	{
		cout<<"\n";
    	for(j=0;j<n;j++)
     		{  
     			cout<<"\t"<<v[j]; 
      		}

		for(i=0; i<n; i++)
		{
			cout<<"\n"<<v[i];
			for(j=0; j<n; j++)
			{
				cout<<"\t"<<m[i][j];
			}
			cout<<"\n";
		}
	}
};


int main()
{
	adjmatrix a1;
	a1.makeGraph();
	a1.displayMatrix();
	a1.makeListGraph();
    a1.displayList();
}

