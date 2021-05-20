#include<iostream>
using namespace std;

class over
{
	int real,img;

public:

	over(int r=0, int i=0)
	{
		real=r;
		img=i;
	}

	friend istream & operator >>(istream &in, over &o);
	friend ostream & operator <<(ostream &out, const over &o);
	friend over operator +(over&, over&);
	friend over operator *(over&, over&);
};

istream & operator >>(istream &in, over &o)
{
	cout<<"give real and img part numbers:"<<endl;
	in>>o.real>>o.img;
	return in;
}


ostream & operator<<(ostream &out, const over &o)
{
	
	out<<o.real<<"r"<<"+"<<o.img<<"i"<<endl;
}

over operator +(over &a, over &b)
{
	over c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

over operator *(over &a, over &b)
{
	over c;
	c.real = a.real * b.real;
	c.img = a.img * b.img;
	return c;
}


int main()
{
	over c1,c2,c3;
	cin>>c1>>c2;
	
	cout<<"Addition is performed:"<<endl;
	c3=c1+c2;
	cout<<c3;

	cout<<"Multiplication is performed:"<<endl;
	c3=c1*c2;
	cout<<c3;

	return 0;
}