//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.
//int main()
//{
  //char s[10] = "abcde";
  //revString(s);  // call the function
  //return 0;
//}
//void revtString(char* ptr)
//{
  // WRITE YOUR CODE HERE
//}
//include function
#include<iostream>
#include<cstring>
using namespace std;

void revString(char* ptr);

int main()
{
cout<<"string is .........."<<endl;
  char s[10] = "abcde";
  revString(&s[4]);
  return 0;
}
//using void
void revString(char* ptr)
{
  while(*ptr!='\0'){
cout<<*ptr;
ptr--;
}
cout<<endl;
}
