#include<iostream>
using namespace std;
class course
{
public:
	virtual void start()=0;
};
class Predac:public course
{
	public:
	void start()
	{
		cout<<"start karo predac"<<endl;
	}
};
class Dac:public course
{
	public:
	void start()
	{
		cout<<"start karo Dac"<<endl;
	}
	void orientation()
	{
		cout<<"Orientation start"<<endl;
	}
};
class Dbda:public course
{
	public:
	void start()
	{
		cout<<"start karo dbda"<<endl;
	}
};
void perf(course *ptr)
{
	ptr->start();
	if(typeid(*ptr)==typeid(Dac))
	{
		Dac *d=(Dac*)ptr;
		d->orientation();
	}
	Dac *d1=dynamic_cast<Dac*>(ptr);
	if(d1)
	{
		d1->orientation();
	}
}
int main()
{
	perf(new Dbda);
	perf(new Dac);
}