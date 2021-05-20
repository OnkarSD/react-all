#include<iostream>
#include<string.h>
using namespace std;


class student
{
	static char div;
	string name;
	int roll;
	string cls;
	string blood;
	string DOB;
	long int phone;

public:

	student(int r, string c, string b){
		roll = r;
		cls=c;
		blood=b;
	}

	void get()
	{
		cout<<endl<<"Give name of student:";
		cin>>name;
		cout<<endl<<"Give his/her date of birth:";
		cin>>DOB;
		cout<<endl<<"Give your phone number:";
		cin>>phone;
	}

	friend void disp(student s);

	static void print()
	{
		cout<<endl<<"\t\tDivision: ";
		cout<<div<<endl;
	}


};
char student :: div = 'A';

void disp(student s)
{
	cout<<"\t\tName:\t"<<s.name<<endl;
	cout<<"\t\tRollNo:\t"<<s.roll<<endl;
	cout<<"\t\tClass:\t"<<s.cls<<endl;
	cout<<"\t\tBlood:\t"<<s.blood<<endl;
	cout<<"\t\tDOB:\t"<<s.DOB<<endl;
	cout<<"\t\tPhoneNo: "<<s.phone<<endl;
}


int main(){

	student s1(10,"SE","A+");
	s1.get();
	cout<<"***********************STUDENT DATABASE *************************"<<endl;
	s1.print();
	disp(s1);
	return 0;
}
