//Print Sum of cube of first n natural number

#include<iostream>
using namespace std;

int main() {
    int i, n, sum = 0;
    cout << "Enter your no.: ";
    cin >> n;

    for(i = 1; i <= n; i = i + 1) {
        sum = sum + (i * i * i);
    }

    cout << "Sum of cubes of first " << n << " natural numbers is: " << sum;
    return 0;
}
