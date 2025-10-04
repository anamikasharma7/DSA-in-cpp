//Prime no.

#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter your no.: ";
    cin>>n;
    //using if else
    if(n<2)
    {
        cout<<"Not Prime";
        return 0;
    }
    else
    for(i=2;i<n;i=i+1)
{
if(n%2==0)
{
    cout<<"Not Prime";
    return 0;

}
}
cout<<"Prime";
}


    