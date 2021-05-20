#include<iostream>
#include<stack>

using namespace std;


int precedence(char c)
{
	if(c=='^')
	{
		return 3;
	}
	else if(c == '*' || c == '/')
	{
		return 2;
	}
	else if(c == '+' || c == '-')
	{
		return 1;
	}
	else
	{
	 return -1;
	}
}

void intopost(string s)
{	
	stack<char> st;
	st.push('N');

	int l = s.length();
	string ns;

	for(int i=0;i<l;i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			
			ns += s[i];

		else if(s[i] == '(')
			st.push('(');

		else if (s[i] == ')')
		{
			while(st.top() != 'N' && st.top() != '(')
			{
				char c = st.top();
				st.pop();
				ns += c;
			}

			if(st.top() == '(')
			{
				char c = st.top();
				st.pop();
			}
		}

		else			//popping the operators
		{
			while(st.top()!='N' && precedence(s[i]) <= precedence(st.top()))
			{
				char c =st.top();
				st.pop();
				ns += c;
			}

			st.push(s[i]);
		}

	}

	while(st.top() != 'N')		//popping reamining
	{
		char c= st.top();
		st.pop();
		ns += c;

	}

	cout<< ns <<endl;
}


int main()
{
	string exp;
	cout<<"Give the expression to convert: \n";
	cin>>exp;
	intopost(exp);
	return 0;
}