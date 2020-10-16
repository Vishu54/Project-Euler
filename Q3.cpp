// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?
// output-6857
#include<iostream>

using namespace std;

int main() {
    long long n = 600851475143;
    for (long long factor = 2; factor * factor <= n; factor++)
        while (n % factor == 0 && n != factor)
            n /= factor;

    cout << n;
}