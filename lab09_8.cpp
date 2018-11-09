//Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
//including the libarary
#include<iostream>
using namespace std;
int myStrLen(char i[]) 
{
int b=0;
char * p=i;
//using while loop
while (*p != '\0')
{b = b + 1;
p++;
}
//returning b
return b;
}
int main() {
char i[]= "biology";
//displying length of string
cout << myStrLen(i)<<endl;
//terminating programme
return 0;
}
