//Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
//1.given age of a person
//2.we have to print adult if her age is greater  than 18 otherwise we have to print teenager

#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    if(number>18)
    {
        cout<<"Adult";
    }
    else
    {
        cout<<"Teenager";
    }
    return 0;
}