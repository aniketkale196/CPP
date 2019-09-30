/*
3)create a class "MyClass1"
with members and member function "disp1().
create another class "MyClass2"
with members and member function "disp2().
now try to invoke disp1() from disp2()
in the main() function, create instances of both the classes and invoke their member functions.
*/
/*
#include<iostream>
using namespace std;


class myclass1
{
	int num1;
public:	void disp1();
		
};

void myclass1:: disp1()
{
	cout<<"disp1"<<num1<<endl;
}

class myclass2
{
	int num2;
public:		void disp2(myclass1 &ref);
		
};

void myclass2:: disp2(myclass1 &ref)
{
	ref.disp1();
	cout<<"disp2"<<num2<<endl;
}

void main()
{
	myclass1 m1;
	myclass2 m2;
	m1.disp1();
	m2.disp2(m1);
}*/