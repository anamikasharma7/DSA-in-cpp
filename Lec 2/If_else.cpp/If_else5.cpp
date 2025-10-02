//If person is greater than 18 than print adult otherwise

#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter your first no: ";
    cin>>num;
    if(num>18)
    {
        cout<<"Adult";
    }
    else
    {
        cout<<"Teenager";
    }
    return 0;
}