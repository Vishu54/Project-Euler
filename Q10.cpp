// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.
// Output-142913828922
#include<iostream>
using namespace std;

int main() {
	int flag=0;
	long long num = 2,sum=0;
	while (num <= 2000000) {
		for (int i = 2; i <= sqrt(num); i++) {
			if (num % i == 0) {
				flag++;
			}
		}
		if (flag == 0) {
			sum += num;
		}
		num++;
		flag=0;
	}
	cout << sum;
}