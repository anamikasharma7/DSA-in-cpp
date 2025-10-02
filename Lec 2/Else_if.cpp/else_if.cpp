//If its week days mean for 1 print monday, 2 print tuesday, 3 print wednesday, 4 print thurday and so on
#include<iostream>
using namespace std;
int main() {
    int number;
    cin>>number;
    //using if else if statement
    if(number==1)
    {
        cout<<"Monday";
    }
    else if(number==2)
    {
        cout<<"Tuesday";
    }
       else if(number==3)
    {
        cout<<"Wednesday";
    }
       else if(number==4)
    {
        cout<<"Thursday";
    }
       else if(number==5)
    {
        cout<<"Friday";
    }
           else if(number==6)
    {
        cout<<"Saturday";
    }
           else if(number==7)
    {
        cout<<"Sunday";
    }
    else
    {
        cout<<"Enter valid day";
    }
    return 0;
}
