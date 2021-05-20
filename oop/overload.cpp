#include<iostream>
using namespace std;

class complex
{
	int real,img;

	public:
		complex(int r=0, int i=0)
		{
			real = r;
			img = i;
		}

		friend istream & operator >>(istream &in,  complex &c);
		friend ostream & operator <<(ostream &out, const complex &c);
		friend complex operator +(complex&, complex&);
};

complex operator +(complex &a, complex &b)
{
	complex d;
	d.real = a.real + b.real;
	d.img = a.img + b.img;
	return d;
}

istream & operator >>(istream &in, complex &c)
{
	cout<<"give real part";
	in>>c.real;
	cout<<"give img part";
	in>>c.img;
	return in;
}

ostream & operator <<(ostream &out, const complex &c)
{
	out<<endl<<c.real<<"r"<<"+"<<c.img<<"i";
	return out;
}

int main()
{
	complex c1,c2,c3;
	cin>>c1;
	cin>>c2;
	cout<<"Given object is :";
	cout<<c1<<c2;
	c3=c1+c2;
	cout<<c3;

	return 0;
}