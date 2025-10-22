//Print char from ‘Z’ to ‘A’ with the help of a for loop.
#include<iostream>
using namespace std;
int main(){
    char name;
    for(name='Z';name>='A';name=name-1)
    {
        cout<<name<<endl;
    }
    return 0;
}
