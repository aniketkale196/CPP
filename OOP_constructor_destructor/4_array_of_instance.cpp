/*

#include<iostream>
using namespace std;

*/
/*create a class.
accept from user, how many instances are required.
Accordingly create array of instances dynamically.
Now make sure that u call destructor for each and every instances.*/
/*
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
	cout<<num<<endl;
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
		int rec;
		cin>>rec;
		myroom (*arr)=new myroom[rec];
for(int i=0;i<rec;i++)
{
		arr[i].setNum(i);
		arr[i].getNum();

}

	delete []arr;
	}

	*/