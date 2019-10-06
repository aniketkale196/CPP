//4) write a class template , which can take any generic type display it and return the size of type passed.
//(hint : in this class template write two functions void disp() and int size() ).


#include<iostream>
using namespace std;
template<class type>
class Number
{
public:
	type num;
	Number(type num)
	{
		this->num=num;
	}
	
	void disp()
	{
		cout<<num<<endl;
	}
	int size()
	{
		return sizeof(num);
	}
};