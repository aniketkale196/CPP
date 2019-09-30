/*3) Given

class Module1
{
	int duration;
	public:
		Module1(int k)
		{
			duration=k;
		}
};

class Module2
{
	int duration;
	public:
		Module2(int k)
		{
			duration=k;
		}
};		
	
write a global function "check" which will take 2 modules (i.e. Module1 and Module2 ) and check whether Modules are same or not.
call this "check" function from main function.	
*/
/*
#include<iostream>
using namespace std;


class Module2;
class Module1
{
	int duration;
	public:
		Module1(int k)
		{
			duration=k;
		}
			friend void check(Module1 &,Module2 &);
};

class Module2
{
	int duration;
	public:
		Module2(int k)
		{
			duration=k;
		}
		friend void check(Module1 &,Module2 &);
};		

void check(Module1 &ref1,Module2 &ref2)
{
	if(ref1.duration==ref2.duration)
	{
		cout<<"Both modules are same"<<endl;
	}
	else
		cout<<"Andha Hai kya Bhosdike"<<endl;


}

int main()
{
	Module1 M1(4);
	Module2 M2(4);
	check(M1,M2);
	Module1 M3(4);
	Module2 M4(40);
	check(M3,M4);

}*/