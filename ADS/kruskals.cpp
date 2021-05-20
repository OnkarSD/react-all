#include<iostream>
#include<vector>

using namespace std;


int main()
{
	
	int arr[4][4] = {{0,5,3,6},
					 {5,0,4,8},
					 {3,4,0,2},
					 {6,8,2,0}
		
					};
	
	
	int m,n=4,i,j,low;
	vector<int> v,e;
	vector<int>::iterator it;
	/*
	cout<<"Give the number of offices : \n";
	cin>>n;
	
	cout<<"Give the Distance Matrix :\n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				arr[i][j] = 0;
			}
			else
			{
			cout<<"Give the distance between office"<< i+1<<" and office"<< j+1<<"\n";
			cin>>arr[i][j];
			}
		}
	}
*/
	for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"\t";	
		}
	}
	
	while(v.size() != n)
	{
	
	low = 9999;
	
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
	
	int iflag=0, jflag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			if(arr[i][j]==low)
			{	
				arr[i][j] = 0;
			
				if(!v.empty())
				{
					for(int k = 0; k<v.size(); k++)
					{
						if(v[k]==i)
						{
							iflag = 1;
						}
						if(v[k]==j)
						{
							jflag = 1;
						}
						
					}
					if(iflag == 0)
						v.push_back(i);
					if(jflag == 0)
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
	
	for (it = v.begin(); it != v.end(); it++) 
        cout << *it <<" ";
    cout<<endl;
    
    for (it = e.begin(); it != e.end(); it++) 
        cout << *it <<" "; 
    cout<<endl;
    
    int sum=0;
    for(it = e.begin(); it != e.end(); it++)
    	sum += *it;
   	
   	cout<<endl<<"Minimum Weight :"<<sum;


return 0;
}


















