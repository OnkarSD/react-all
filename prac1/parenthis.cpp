#include<iostream>

using namespace std;

char stack[50];


int main()
{
	string a;
	int i;
	int top = -1;

	cout<<"give expression\n";
	cin>>a;

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] == '(' || a[i] == '[' || a[i] == '{')
		{
			top++;
			stack[top]=a[i];
		}
		else if(a[i]==')' || a[i]==']' || a[i]=='}')
		{
			top--;
		}
	}

		if(top==-1){
		cout<<"expression is parenthise\n";
		}
		else
		cout<<"expression not valid\n";

	return 0;
}