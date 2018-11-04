//Write a piece of code which prints the characters in a cstring in a reverse order.
//char s[10] = "abcde";
//char* cptr;
// WRITE YOUR CODE HERE
#include <iostream>
using namespace std;

int main()
{
   char s[10] ="abcde";
   char* cptr;
   cptr=s;
   //using the loops
   for(int i=6;i>=0;i--)
   {
       cout<<*(cptr+i);
   }
   return 0;
}
