//13. Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 
//including library
#include<iostream>
using namespace std;
int main() 
{
int arr[10]= {10,20,30,40,50,60,70,80,90,100};
//taking integer i
int i;
//displaying on screen about normal index method
cout<<"displaying using normal index method"<<endl;
//uding loop
for(int i = 0; i<10; i++)
//printing the value of array
{cout<<arr[i]<<" , ";}
cout<< endl;
cout<<"diaplaying using pointer method"<<endl;
//again using loop
for (int* j= arr; j<arr+10; j++)
//printing the value of array
{cout <<*j<<" , ";
}
cout<< endl;
//terminating progrrammme
return 0;
}
