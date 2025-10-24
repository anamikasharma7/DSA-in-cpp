/* a a a a a 
   b b b b b
   c c c c c
   d d d d d
   e e e e e
*/

#include<iostream>
using namespace std;
int main(){
    //char name='a' + row-1
    int row,col;
    for(row=1;row<=5;row=row+1)
    {
        char name='a'+ row-1;
        for(col=1;col<=5;col=col+1)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }

}