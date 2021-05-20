#include<iostream>
#include<string>

using namespace std;

int main()
{
	float a, b, c;
	char op,x;

loop:
	cout<<"Give operation to be performed"<<endl;
	cout<<"+"<<endl<<"-"<<endl<<"*"<<endl<<"/"<<endl;
	cin>>op;

	cout<<"Give two Numbers :";
	cin>>a>>b;

	switch(op)
	{
		case '+':
			cout<<"\n"<<a+b<<endl;
			break;

		case '-':
			cout<<"\n"<<a-b<<endl;
			break;

		case '*':
			cout<<"\n"<<a*b<<endl;
			break;

		case '/':
			cout<<"\n"<<a/b<<endl;
			break;

		default:
			cout<<"\n Error no such operator !!!";
			break;
	}

	cout<<"want to continue?";
	cin>>x;
	if(x=='Y' || x=='y')
	{
		goto loop;
	}
	else

	return 0;
}