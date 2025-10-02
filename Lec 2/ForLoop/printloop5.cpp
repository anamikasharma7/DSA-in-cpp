//given any no. find out all the no. till here and tell me,how will u do this

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter your number: ";
    cin>>num;
    for (int i=2;i<=num;i=i++)
    {
        cout<<i<<endl;
    }
    return 0;
}