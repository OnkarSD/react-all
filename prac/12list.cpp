#include<iostream>
#include<list>
#include<iomanip>

using namespace std;

int main()
{
	list<int> l;
	list<int> :: iterator itr;
	int ele;

	l.push_front(10);
	l.push_back(20);
	l.push_front(11);
	l.push_back(21);

	for(itr=l.begin();itr!=l.end();itr++)
	{
		cout<<*itr;
	}

	return 0;
}

