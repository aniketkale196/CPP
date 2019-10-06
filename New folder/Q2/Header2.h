//2) write a function template,which can accept argument as any type of array( char,int or double) and sort it in ascending order.

#include<iostream>
using namespace std;

template<class T>
void sort(T *p, int size)
{
	T temp;
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}