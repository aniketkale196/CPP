//1) write a function template,which can accept anything as an argument and display it.
//It can also accept "Emp" class object as an argument.
//Now overload this function template, for int.


#include<iostream>
using namespace std;
class emp

{
public:
	int num;
	emp(int );
	~emp();

	template <class type>
	void accept(type a)
	{
		cout<<a;
	}
	friend ostream& operator<<(ostream& ,emp&);

};

