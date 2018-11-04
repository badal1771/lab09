//Write a function countEven(int*, int) which receives an integer array and its size, and returns the n//umber of even numbers in the array.
#include <iostream>
using namespace std;
//using function
int Even(int* x,int size)
{
    int i;
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(*(x+i)%2==0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    cout<<"enter size of array"<<endl;
    //enter the size of array
    cin>>size;
    int arr[size];
    //displaying the value in array
    cout<<"enter value in array"<<endl;
    for(int i=0;i<size;i++)
    {
        //INPUT AN ARRAY
        cin>>arr[i];
    }
    int* x=&arr[0];
    //no of even digits in that array
    cout<<"no. of even digits:"<<Even(x,size)<<endl;
}
