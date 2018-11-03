//14. [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char badal[100]=" badal";
    int i,n;
    //using normal index method
    //no. of times to print
    cout<<"number of time to print"<<endl;
    //inputing the number n
    cin>>n;
    //displaying method
    cout<<"normal index method"<<endl;
    for (i=0;i<n;i++)
    {
     cout<<badal<<" , ";
    }
    cout<<endl;

char * bad;
bad=badal;
//using pointer method
//displaying method
cout<<"pointer method"<<endl;
bad++;
for (i=0;i<=n;i++)
{
    cout<<bad<<endl;
}
return 0;
}
