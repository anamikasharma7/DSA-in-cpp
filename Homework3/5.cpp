//Print Sum of square of first n natural number

#include<iostream>
using namespace std;

int main() {
    int i, sum, n;
    sum = 0;
    cout << "Enter your no.: ";
    cin >> n;

    for(i = 1; i <= n; i = i + 1) {
        sum = sum + i * i;
    }

    cout << sum;
    return 0;
}

