//Calculate the power of a no.
#include<iostream>
using namespace std;
int main() {
    int n,pow,num,i;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;
    num=n;
    for(i=1;i<pow;i=i+1)
    {
        num=num*n;
    }
    cout<<num;
    return 0;
}
