
class course
{
public:
		virtual void start()=0;

};
class Predac:public course
{
	public:
	void start();
};
class Dac:public course
{
	public:
	void start();
	void orientation();
};
class Dbda:public course
{
	public:
	void start();
};
void perf(course *ptr);
