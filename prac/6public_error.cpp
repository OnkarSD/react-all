#include<iostream>
#include<exception>
using namespace std;
class myexcep : public exception
{
	const char* what() const throw() {
		cout<<"Hsadh";
	}
};

class publication
{
public:
	string title;
	float price;
	publication(string t,float p)
	{
		title=t;
		price=p;
	}
	void display1()
	{
		cout<<"title="<<title<<endl;
		cout<<"price="<<price<<endl;
	}
};
class book:public publication
{
public:
	int pc; 
	book(string t, float p, int pc): publication(t,p)
	{
		this->pc=pc;
	}
	void display2()
	{
		cout<<"pagecount="<<pc<<endl;
	}
};
class tape:public publication 
{
public:
	float min;
	tape(string t,float p,float m): publication(t,p)
	{
		min=m;
	}
	void display3()
	{
		cout<<"playing time="<<min<<endl;
	}


};
int main()
{
	try
	{
		tape t1(1,100.2,32.1);
		book b1("ramayaan",100.2,300);
		b1.display1();
		t1.display3();
		b1.display2();
		throw myexcep;
	}
	catch(myexcep &e)
	{
		cout<<"----Caught exception----";
		t1.title=0;
		t1.price=0;
		t1.min=0;
		b1.pc=0;
		b1.display1();
		t1.display3();
		b1.display2();
	}
	return 0;
}