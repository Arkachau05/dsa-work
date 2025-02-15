#include <bits/stdc++.h>
using namespace std;

void primeFactors(int num) {

    while (num % 2 == 0) {
        cout << 2 << " ";
        num /= 2;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }
    if (num > 1) {
        cout << num << " ";
    }
}

int main() {
    int num = 909876545;
    cout << "Prime factors of " << num << " are: ";
    primeFactors(num);
    return 0;
}