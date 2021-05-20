#include<iostream>
using namespace std;

class complex
{
 	int r;
 	int i;

 public:

 	void values(int temp1,int temp2)
 	{
 		r=temp1;
 		i=temp2;
 	}

 	void disp()
 	{
 		cout<<endl<<r<<"r"<<" + "<<i<<"i";
 	}

 	friend complex operator +(complex& , complex&);
 	friend complex operator -(complex& , complex&);
};

complex operator +(complex &a, complex &b)
{
	complex c;
	c.r=a.r+b.r;
	c.i=a.i+b.i;

	return c;
}

complex operator -(complex &a, complex &b)
{
	complex c;
	c.r=a.r-b.r;
	c.i=a.i-b.i;

	return c;
}

int main()
{
	complex c1,c2,c3,c4;
	c1.values(2,3);
	c2.values(4,5);
	c3=c2+c1;

	c3.disp();

	c4=c1-c2;

	c4.disp();

	return 0;
}