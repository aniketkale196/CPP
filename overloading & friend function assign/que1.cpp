/*1) class Number
   {
       int num;
   }
In the main function,
Number n1(8),n2(4),n3(20),n4(6),n5;
n5=n1-n2*n3/n4;*/

/*
#include<iostream>
using namespace std;
class Number
   {
      public:
	    int num;
  	    Number()
		{
			num=0;
		}
		Number(int num)
		{
			this->num=num;
		}
		Number operator*(Number &ref)
		{
			return Number(num*ref.num);
		}
		Number operator/(Number &ref)
		{
			return Number(num/ref.num);
		}
		Number operator-(Number &ref)
		{
			return Number(num-ref.num);
		}
   };

int main()
{
	Number n1(8),n2(4),n3(20),n4(6),n5;
	n5=n1-n2*n3/n4;
	cout<<n5.num<<endl;
}
*/