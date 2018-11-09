//including library 
#include<iostream>
#include<cstring>
using namespace std;
//main function
int main ()
{char arr[20], *p;
int i,j;
//asking for input the character
cout<< "Input 10 characters in it"<<endl;
//inputing the array
cin>>arr;
j=strlen(arr)-1;
//pointer refering to the loop
p=&arr[j];
for(i=j; i>=0; i--)
//printing that pattern
{cout<<p--<<endl;}
//terminating the programme
return 0;
}
