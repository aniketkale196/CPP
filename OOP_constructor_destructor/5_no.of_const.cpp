#include<iostream>
using namespace std;
/*
5) create a class, define different types of constructors. in main create n number 
 of objects. At the end display how many constructors are created for a class.
*/

class myroom
{
private: int num;
public:  void setNum(int num);
		 int getNum();
		 myroom();
		 myroom(int num);
		 ~myroom();
		 
};
int s=0;

void myroom:: setNum(int num)
{
	this->num=num;
}

int myroom:: getNum()
{
	cout<<num<<endl;
	return num;
}

	myroom:: myroom()
{
	cout<<"in constructor no args   "<<endl;
	s++;
}

	myroom:: myroom(int num)
{
	this->num=num;
	cout<<"in constructor no args  "<<num<<endl;
	s++;
}

	myroom:: ~myroom()
{
	cout<<"in destructor no args"<<endl;
}

	void main()
	{
		myroom m1;
		myroom m2(10);
		myroom m3(20);
		myroom m4(100);
		m1.setNum(30);
		cout<<s<<endl;
		
	}