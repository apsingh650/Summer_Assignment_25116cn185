#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Enter term number: ";
    cin >> n;

    for(int i = 1; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Nth Fibonacci term: " << a;

    return 0;
}