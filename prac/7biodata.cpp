#include<iostream>
using namespace std;

class personal
{
public:
	string name;
	int age;

public:

	void get()
	{
		cout<<"Give your name:"<<endl;
		cin>>name;
		cout<<"Give your age:"<<endl;
		cin>>age;
	}

};

class professional
{
public:
	string exp;
	string company;

public:

	void get1()
	{
		cout<<"Give the name of your company:"<<endl;
		cin>>company;
		cout<<"how much experience you have ?"<<endl;
		cin>>exp;
	}
};


class academic : public personal,public professional
{
	int marks;

public:

	void get2()
	{
		get();
		get1();
		cout<<"Give percentage of diploma :"<<endl;
		cin>>marks;
	}

	void display()
	{
		cout<<"\t\tName:\t"<<name;
		cout<<"\t\tAge :\t"<<age;
		cout<<"\t\tCompany:\t"<<company;
		cout<<"\t\tExp :\t"<<exp;
		cout<<"\t\tMarks\t:"<<marks<<"%";
	}

};

int main()
{
	academic a1;
	a1.get2();
	a1.display();
}













