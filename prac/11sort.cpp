#include<iostream>
using namespace std;

template<class T>

class sort
{
	T a[20];
	int i,j,n;


public:

	void get()
	{
		cout<<"how many elements you want :"<<endl;
		cin>>n;

		cout<<"Give elements:";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	}


	void selsort()
	{
		T temp;

		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}

	void disp()
	{
		for(i=0;i<n;i++)
		{
			cout<<"\t"<<a[i];
		}
	}

};

int main()
{
	sort<int> s1;
	sort<float> s2;
	s1.get();
	s1.selsort();
	s1.disp();

return 0;
}