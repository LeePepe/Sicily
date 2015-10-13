#include <iostream>
#include <cmath>

using namespace std;

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};

int main() {
    int n;
    cin >> n;
    for (int i = 0; primes[i] <= n; i++) {
        long long mersenne = (long long)pow(2.0, primes[i]) - 1;
        long long number = mersenne;
        long long f = 2;
        bool c = false, s = true;
        for (long long i = f; i * i <= number; i++) {
            if (number % i == 0) {
                c = true;
                number = number / i;
                if (s) {
                    s = false;
                    cout << i;
                } else {
                    cout << " * " << i;
                }
            }
        }
        
        if (c) {
            cout << " * " << number;
            cout << " = " << mersenne << " = ( 2 ^ " << primes[i] << " ) - 1" << endl;
        }
    }
    return 0;
}
