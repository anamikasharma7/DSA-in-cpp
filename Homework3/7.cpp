//Print n’th Fibonacci number.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    int a = 0, b = 1, next;

    if (n == 1)
        cout << "Fibonacci number at position 1 is: " << a;
    else if (n == 2)
        cout << "Fibonacci number at position 2 is: " << b;
    else {
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        cout << "Fibonacci number at position " << n << " is: " << b;
    }

    return 0;
}

/*Output:
Enter the position (n): 7
Fibonacci number at position 7 is: 8*/
