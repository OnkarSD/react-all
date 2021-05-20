#include<iostream>
using namespace std;

int pre(char c)
{
    if(c == '^')
    {
        return 4;
    }
    else if(c == '*' || c == '/')
    {
        return 3;
    }
    else if(c == '+' || c == '-')
    {
        return 2;
    }
    else
    {
        return 1;
    }
    
}

void in_post()
{
    char arr[20], stack[20];
	string outA;
	int top = -1;
	top++;
	stack[top] = 'X';
	
	
	cout<<"Give the expression  : "<<endl;
	cin>>arr;
     int i = 0;

    while(arr[i] != '\0')
    {
        if(arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >='A' && arr[i] <= 'Z')
        {
            outA = outA + arr[i];
        }

        //*************** LOGIC ONLY NEEDED FOR BRACKETS IN THE PROGRAM 

        // else if(arr[i] == '(')
        // {
        //     top++;
        //     stack[top] = arr[i];
        // }
        // else if(arr[i] == ')')
        // {
        //     while(stack[top] != 'X' && stack[top] != '(')
        //     {
        //         outA = outA + stack[top];
        //     }
        //     if(stack[top] == '(')
        //     {
        //         top--;
        //     }
        // }
        else
        {
            while(stack[top] != 'X' && pre(arr[i]) <= pre(stack[top]))
            {
                outA = outA + stack[top];
                top--;
            }
            top++;
            stack[top] = arr[i];
        }
    i++;
    }

    while(stack[top] != 'X')
    {
        outA = outA + stack[top];
        top--;
    }
    cout<<outA<<endl;    
    
}


int main()
{
    in_post();
    return 0;
}