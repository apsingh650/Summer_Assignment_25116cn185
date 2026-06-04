#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter range: ";
    cin >> start >> end;

    cout << "Armstrong numbers are: ";

    for(int i = start; i <= end; i++) {
        int temp = i, sum = 0, rem;

        while(temp > 0) {
            rem = temp % 10;
            sum += pow(rem, 3);
            temp /= 10;
        }

        if(sum == i)
            cout << i << " ";
    }

    return 0;
}