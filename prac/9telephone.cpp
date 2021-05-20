#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class telephone
{
	string name;
	string phone;

public:

	void write()
	{
		fstream file("phone.txt",ios::out | ios::in | ios::app);
		cout<<"Give name and phoneNo: ";
		cin>>name>>phone;
		file<<name<<"\n"<<phone<<endl;
		file.close();
	}

	void read()
	{
		ifstream file("phone.txt");
		while(!file.eof())
		{
			file>>name>>phone;
			cout<<"Name:"<<name<<" "<<"phoneNo: "<<phone<<endl;
		}
		file.close();
	}

	void search()
	{
		string n,line;
		int flag=0;
		cout<<"Enter the name to be search:"<<endl;
		cin>>n;
		fstream file("phone.txt",ios::in | ios::out);

		while(getline(file, line))
		{
			if(line==n)
			{
				flag=1;
				break;
			}
		}
		file.close();
		if(flag==1)
			cout<<"record found"<<endl;

	}
};


int main()
{
	telephone t;
	int ch;
	char yn;

loop:
	cout<<"1.write\n2.display\n3.search\n4.exit\n";
	cin>>ch;

	switch(ch)
	{
		case 1:
		t.write();
		break;

		case 2:
		t.read();
		break;

		case 3:
		t.search();
		break;

		case 4:
		exit(1);
	}
	cout<<"want to continue";
	cin>>yn;
	if(yn=='y')
		goto loop;
	else
		exit(1);
return 0;
}
















