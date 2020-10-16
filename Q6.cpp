// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<iostream>

using namespace std;

int main() {
	long sum = 0, sum1 = 0;
	for (int i = 1; i <= 100; i++) {
		sum = sum + (i * i);
		sum1 += i;
	}
	cout << (sum1 * sum1) - sum;
}