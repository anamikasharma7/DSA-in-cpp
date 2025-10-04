//Sum of n natural no.
/*Bablu bhaiya logic
#include<iostream>
using namespace std;
int main(){
    int i,sum,n;
    sum=0;
    cout<<"Enter your no.: ";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i;
    }
    cout<<sum;
}*/


/*Guddu bhaiya logic*/ //not using for loop direct method
#include<iostream>
using namespace std;
int main(){
    int i,sum,n;
    sum=0;
    cout<<"Enter your no.: ";
    cin>>n;
    cout<<(n*(n+1)/2);
    return 0;
}
