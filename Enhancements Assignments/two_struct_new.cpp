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
#include<iostream>
using namespace std;


struct book
{
	char bid[5];
	char name[30];
	int price;
};

	int main()
{
	
	int size;
	book b1;
	cout<<"how many records want to create "<<endl;
	cin>>size;

	cout<< sizeof(b1);
	
	/*book(*ptr)[3];*/
	/*ptr=(book(*)[3])new book[size*(sizeof(book))] ;

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> ptr[i][j];
		}
	}
	
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << ptr[i][j]<<endl;
		}
	}*/
}