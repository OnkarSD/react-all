#include<iostream>
#include<cstring>
#include<string.h>


using namespace std;

class compare
{
	 char str[20];

public:
	 void get()
	{
		cin>>str;
	}

	void operator ==(compare &c)
	{
		if(strcmp(str,c.str)==0)
			cout<<"equal";
		else
			cout<<"not";
	}
};

int main()
{
	compare s1,s2;
	s1.get();
	cout<<"sss";
	s2.get();
	s1==s2;

	return 0;
}














