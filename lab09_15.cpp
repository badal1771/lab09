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
//pointer refering to the loop
p=&arr[0];
for(i=0; i < strlen(arr); i++)
//printing that pattern
{cout<<p++<<endl;}
//terminating the programme
return 0;
}
