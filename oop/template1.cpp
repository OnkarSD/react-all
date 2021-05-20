#include<iostream>
using namespace std;

template <typename T>

	void add(T a, T b)
	{
		cout<<a+b<<endl;
	}

	template<typename T>	
	
		void sub(T a, T b)
		{
			cout<<a-b;
		}

int main()
{
	
	add<int>(10, 20);
	add<int>(30, 40);

	sub<float>(10.20, 34.50);

	return 0;

}