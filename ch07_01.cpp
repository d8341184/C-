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

cout<<"¿é¤J­û¤u¸ê®Æ"<<endl;
eml.input_data();//
cout<<"¿é¤J­û¤u¸ê®Æ"<<endl<<endl;
 eml.print_data();//

system("pause");
return 0;
}
//輸入員工資料
//name
//rrrr
//age:56
//salary:7878
//mobile:0987655433
//輸入員工資料

//rrrr
//56
//7878
//0987655433
