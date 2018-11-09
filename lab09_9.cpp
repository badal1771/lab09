//Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
#include<iostream>
using namespace std;

bool badal(char *p,char a )
{
//using while loop
while(*p!='\0')
{
 if(*p==a)
 {
  return 1;
 }
 p++;
 }
return 0;
}

int main()
{//using string in character
char str[20],b;
cout<<"input a  string ";
//input the string
cin>>str;
cout<<"input the character you want to check ";
//input the character
cin>>b;
char *p=str;
char a;
 bool c=badal(p,b);
//using if and else
 if(c==1)
 {
 cout<<b<<" is present in "<<str<<endl;}
 else
cout<<b<<" is not present in "<<str<<endl;
//terminating programme
 return 0;
}
