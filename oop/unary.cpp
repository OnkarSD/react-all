#include<iostream>
using namespace std;

class unary1 
{
	int a;
	int b;

public:
	void data(int x, int y)
	{
		a=x;
		b=y;
	}

	friend void operator -(unary1&);

	void display()
	{
		cout<<endl<<a<<endl<<b;
	}
};

void operator -(unary1 &u2)
{
	u2.a=-u2.a;
	u2.b=-u2.b;
	
}

int main()
{
	unary1 u1;
	u1.data(34,43);
	u1.display();

	-u1;
	u1.display();

	return 0;
}