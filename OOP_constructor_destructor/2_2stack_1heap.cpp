/*#include<iostream>
using namespace std;

class myroom
{
private: int num;
public:  void setNum(int num);
		 int getNum();
		 myroom();
		 ~ myroom();
		 
};

void myroom:: setNum(int num)
{
	this->num=num;
}

int myroom:: getNum()
{
	return num;
}

	myroom:: myroom()
{
	cout<<"in constructor no args"<<endl;
}

	myroom:: ~myroom()
{
	cout<<"in destructor no args"<<endl;
}

	void main()
	{
		myroom m1;
		myroom m2;
		myroom *m3 =new myroom();
		m1.setNum(10);
		m2.setNum(20);
		m3->setNum(30);
		delete m3;
		cout<<m1.getNum()<<endl;
		
	}*/