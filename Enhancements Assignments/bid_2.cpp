/*
create following structure
struct book
{
	char bid[5];
	char name[30];
	int price;
};
ask user how many records he wants to create and accordingly allocate memory.
accept values from user and display.
( Hint :-  use  "new" operator)
*/
/*#include<iostream>
using namespace std;


struct book
{
	char bid[5];
	char name[30];
	int price;
};

	int main()
{
	
	int rec;
	book *b1;
	cout<<"how many records want to create "<<endl;
	cin>>rec;

	cout<< sizeof(b1);
	
	b1=new book[rec] ;


	cout<<"Enter records\n"<<rec<<endl;
	for(int i=0;i<rec;i++)
	{
		cin >> b1[i].bid ;
		cin >> b1[i].name ;
		cin >> b1[i].price;
	}
	cout<< "displaying data";
	for(int i=0;i<rec;i++)
	{
		cout<<b1[i].bid <<b1[i].name << b1[i].price<<endl;
	}
	
}*/