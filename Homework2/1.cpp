//Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
//case1:Two no. is given
//case2:print the bigger no.
//case3:both the no. should not be same

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //using if-else
    if(a>b)
    {
        cout<<a;
    }
    else if(a<b)
    {
        cout<<b;
    }
    else
    {
        cout<<"None";
    }
    return 0;
}
