#include<iostream>
#include<cstdlib>
using namespace std;

class Employee//
{
private://

char name[20];
int age;
int salary;
char mobile[15];

public://

void input_data()
{
cout<<"name";//
cin>>name;
cout<<"age:";
cin>>age;
cout<<"salary:";
cin>>salary;
cout<<"mobile:";
cin>>mobile;
}

void print_data()//
{
	cout<<name<<endl;//
	cout<<age<<endl;
	cout<<salary<<endl;
	cout<<mobile<<endl;
}

};



int main()
{
Employee eml;//

cout<<"��J���u���"<<endl;
eml.input_data();//
cout<<"��J���u���"<<endl<<endl;
 eml.print_data();//

system("pause");
return 0;
}
