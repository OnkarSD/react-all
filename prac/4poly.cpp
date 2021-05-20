#include<iostream>
#include<cmath>
using namespace std;

class poly
{
	int a, b, c;

public:

	poly()
	{
		a==b==c==0;
	}

	friend istream & operator >>(istream &in, poly &p);
	friend ostream & operator <<(ostream &out,const poly &p);
	friend poly operator +(poly&, poly&);

	void eval(poly &p,int x)
	{
		int z;
		z=((p.a*x*x)+(p.b*x)+p.c);
		cout<<endl<<"Solution value of function is:"<<z<<endl;
	}

	void compute(poly &T) 
       {
       float x,y1,y2;
       x= T.b*T.b-4*T.a*T.c;      //x=b square-4ac if x>0 y=-b +- sqrt(x)/2a || x==0 then y=-a/2a
       if(x>0)
       {
       cout<<"Roots are real & not equal\n";
       y1 = (-T.b+sqrt(x))/(2*T.a);
       y2 = (-T.b-sqrt(x))/(2*T.a);
       cout<<y1<<"\n";
       cout<<y2<<"\n";
       }
       else if(x==0)
       {cout<<"roots are real & equal\n";
       y1= -T.a/(2*T.a);
       cout<<y1<<"\n";
       }
       else if(x<0)
       {
       cout<<"complex Roots\n";

       }


       }

};

istream & operator >>(istream &in, poly &p){
	cout<<"give a number:"<<endl;
	in>>p.a>>p.b>>p.c;
	return in;
}

ostream & operator <<(ostream &out,const poly &p){
	cout<<p.a<<"x^2+"<<p.b<<"x+"<<p.c;
	return out;
}

poly operator +(poly &p, poly &q){
	poly m;
	m.a=q.a+p.a;
	m.b=q.b+p.b;
	m.c=q.c+p.c;
	return m;
}

int main()
{

	poly p1,p2,p3,p4;

	cin>>p1;
	cin>>p2;
	p3=p1+p2;
	cout<<p3;
	p4.eval(p3,2);
	p4.compute(p3);


	return 0;
}