//8) write a function which can accept minimum 3 characters and maximum 5 characters and display them. ( use "default arguments")


#include<iostream>
using namespace std;

void acc(int a,int b,int c,int d=0,int e=1)
{
	cout<<a<<b<<c<<d<<e<<endl;
}

int main()
{
	acc(10,50,60,44 );
	return 0;
}

