#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	char data[50],ch;
	fstream file;
	file.open("gfx.txt",ios::out);     //ios::out opening file in write mode

	if(!file)
	{
		cout<<"error while creating file"<<endl;
		return 0;
	}
	cout<<"FILE CREATION SUCESSFULL"<<endl;

	cout<<"writing on file:";
	cout<<endl<<"give your data:";
	cin.getline(data,50);

	file<<data<<endl;  // writing

	file.close();

	file.open("gfx.txt",ios::in);        //for read mode
	cout<<"reading from file:"<<endl;
	cout<<"File content Is :";
	
	while(!file.eof()) //reading
	{
		file>>ch;
		cout<<ch;
	}
		file.close();

	return 0;
}