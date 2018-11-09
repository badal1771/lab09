//just i have used other parts of question 17 in it
//library
#include <iostream>
#include <cstring>
using namespace std;
int main()
{int b;
//giving two character of string in str and str2
    char str1[20]="badal";
    char str2[10]="biology";
    //displaying the use of strlen
    cout<<"length of badal word is "<<strlen(str1)<<endl;
    //displaying the use of strcmp
    cout<<"using of strcmp is "<<strcmp(str2,str1)<<endl;
    //displaying the use of strchr
    cout<<"using of strchr is"<<strchr(str2,b)-str2+1<<endl;
    //terminating the programme
    return 0;
}

