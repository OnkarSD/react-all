#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{

int i,j,m,n;
vector<int> v,e;
vector<int>::iterator it;
int arr[10][10];


    cout<<"Give number of offices :\n";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                arr[i][j]=0;
            }
            else
            {
                cout<<"Give distance between office "<<i<<"and office "<<j<<" :";
                cin>>arr[i][j];
            }
        }
    }

    for(i=0;i<n;i++)
    {   cout<<endl;
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
    }




  
    while(v.size() != n)
    {
        int low = 99;

        for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(arr[i][j]<low && arr[i][j]!=0)
                    {
                        low = arr[i][j];
                    }

                }
    
            }

        e.push_back(low);
        int iflag=0,jflag=0;
        for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(arr[i][j]==low)
                    {
                        arr[i][j]=0;

                        if(!v.empty())
                        {
                            for(int k=0; k<v.size();k++)
                            {
                            if(v[k]==i)
                                iflag=1;
                            if(v[k]==j)
                                jflag=1;

                            }
                            if(iflag==0)
                                v.push_back(i);
                            if(jflag==0)
                                v.push_back(j);
                        }
                        else
                        {
                            v.push_back(i);
                            v.push_back(j);
                        }

                        
                    }
                }
            }
    
    }

    cout<<endl<<"Array of Vertices :";
    for (it = v.begin(); it != v.end(); it++) 
        cout << *it <<" ";
    cout<<endl;
    
    cout<<endl<<"Array of Weights :";
    for (it = e.begin(); it != e.end(); it++) 
        cout << *it <<" "; 
    cout<<endl;
    
    int sum=0;
    for(it = e.begin(); it != e.end(); it++)
    	sum += *it;
   	
   	cout<<endl<<"Minimum Weight :"<<sum;

    



return 0;
}
