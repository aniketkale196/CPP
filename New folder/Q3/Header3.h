//3) write a function template which will accept 3 different types of argument and return the total size of arguments passed.

#include<iostream>
using namespace std;

class Myclass
{
public:
	int num;
	Myclass(int num);


};

template<class type1,class type2,class type3>
void getsize(type1 a,type2 b,type3 c)
{
	int sum;
	sum=sizeof(a)+sizeof(b)+sizeof(c);
	cout<<sum<<endl;
}
