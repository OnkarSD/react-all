#include<iostream>
using namespace std;


class sample
{
public:
int age,income;
char ch;
string city;
public:
void get()
{
cout<<"enter age\n";
cin>>age;
cout<<"enter income\n";
cin>>income;
cout<<"enter city\n";
cin>>city;
cout<<"do you have a 4 wheeler ? (y/n)\n";
cin>>ch;
}

};


int main()
{
sample p;
p.get();


try
{
if((p.age<18) || (p.age>55))
{
throw p;
}
else
{
cout<<"the age is "<<p.age<<endl;
}
}
catch(sample p)
{
cout<<" age exception caught"<<endl;
}


try
{
if(p.city=="mumbai"||p.city=="pune"||p.city=="delhi"||p.city=="banglore"||p.city=="chennai")
{
cout<<"user stays in the given city"<<endl;
}
else
{
throw p;
}
}
catch(sample p)
{
cout<<"exception for city occured"<<endl;
}


try
{
if((p.income<50000)||(p.income>100000))
{
throw p;
}
else
{
cout<<"the income is "<<p.income<<endl;
}
}
catch(sample p)
{
cout<<"exception for income caught"<<endl;
}


try
{
if(p.ch=='y')
{
cout<<"the user has four wheeler"<<endl;
}
else
{
throw p;
}
}
catch(sample p)
{
cout<<"exception for vehicle cuaght"<<endl;
}
}