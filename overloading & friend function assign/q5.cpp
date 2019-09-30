
/*
5) Define a class with constructor and  member function

	create object, call member function
	now create a reference to that object, and using that reference try to call member function
*/

#include<iostream>
using namespace std;

class call
{
	int num;
public:
	call(int num)
	{
		this->num=num;
	}
	void disp()
	{
		cout<< "in disp"<<endl;
	}

};

int main()
{
	call c(45);
	c.disp();
	call &ref=c;
	ref.disp();

}