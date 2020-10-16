// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?
// Output-104743
#include<iostream>
using namespace std;

int main() {
	int num = 2, count = 0, flag = 0, ans;
	while (count < 10001) {
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0)
				flag++;
		}
		if (flag == 0) {
			ans = num;
			count++;
		}
		num++;
		flag=0;
	}
	cout << ans;
}