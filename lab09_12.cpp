//12. Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.  Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. Assign values a=2 and b = 3. Print the values of a, b and *p.  Now point p to b. Print the values of a, b and *p.
//library
#include<iostream>
using namespace std;
//main function
int main()
{
int a, b;//two variables a,b and a pointer variable p
int * p;
p = &a;
b = *p;
//displaying a is equal to
cout<< "a is equal to "<<a<<endl;
//displaying b is equal to
cout<< "b is equal to "<<b<<endl;
//displaying c is equal to
cout<< "*p is equal to "<<*p<<endl;
//giving both number its value
a=2;
b=3;
//showing a is equal to 
cout<< "again a is equal to "<<a<<endl;
//showing b is equal to 
cout<< "again b is equal to "<<b<<endl;
//showing *p is equal to 
cout<< "again *p is equal to  "<<*p<<endl;
//point p to b integer
p = &b;
//displaying a is equal to
cout<< " a is equal to "<<a<<endl;
//displaying b is equal to 
cout<< "b is equal to "<<b<<endl;
//diaplying c is equal to
cout<< "*p  is equal to  "<<*p<<endl;
//terminating programme
return 0;
}
