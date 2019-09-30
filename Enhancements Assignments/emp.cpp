/*create a structure "Employee" 
with members 
	int id
	char name[20];
	char desig[20];
now access it using
a) array 
b) DMA*/
/*
#include<iostream>
using namespace std;

struct Emp
{
	int id;
	char name[20];
	char desig[20];
};

int main()
{
	Emp *e1;
	e1=new Emp[1];


	cin>>e1[0].id;
	cin>>e1[0].name;
	cin>>e1[0].desig;

	cout<<e1[0].id;
	cout<<e1[0].name;
	cout<<e1[0].desig;

	Emp arr[2];
	for(int i=0;i<2;i++)
	{
		cin>>arr[i].id;
		cin>>arr[i].name;
		cin>>arr[i].desig;
	}
	for(int i=0;i<2;i++)
	{
		cout<<arr[i].id;
		cout<<arr[i].name;
		cout<<arr[i].desig<<endl;
	}
}*/