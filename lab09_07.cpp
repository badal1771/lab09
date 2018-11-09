//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
//including the library
#include<iostream>
using namespace std;
double* func(double arr[])
{double * p = arr;
//using the while loop
while (p < arr+5)
{ (p++)-1; 
if(*p<*(p+1))
*p = *(p+1);
else *p = *p;
cout<<*p<<endl;}
cout<< *p<< endl;
if (p == 0)
return NULL;
else return p;}
int main()
{//inputing array value
double arr[5]={10,20,30,40,50};
//displaying array
cout<< func(arr)<<endl;
//terminating the programme
return 0;
}
