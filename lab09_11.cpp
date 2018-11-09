//11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )
//library
#include<iostream>
using namespace std;
int main()
	{
//taking interger a
		int a;
		float b;
		double c;
		bool d;
		char e;
		
		int *f;
		float *g;
		double *h;
		bool *i;
		char *j;
		//displaying all sizes of taken detail
		cout<<"The size of integer is "<<sizeof(a)<<endl;
		cout<<"The size of float is "<<sizeof(b)<<endl;
		cout<<"The size of double is "<<sizeof(c)<<endl;
		cout<<"The size of bool is "<<sizeof(d)<<endl;
		cout<<"The size of char is "<<sizeof(e)<<endl;
		cout<<"The size of integer pointer is "<<sizeof(f)<<endl;
		cout<<"The size of float pointer is "<<sizeof(g)<<endl;
		cout<<"The size of double pointer is "<<sizeof(h)<<endl;
		cout<<"The size of bool pointer is "<<sizeof(i)<<endl;
		cout<<"The size of char pointer is "<<sizeof(j)<<endl;
		return 0;
		
	}
