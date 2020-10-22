// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.
// Output-142913828922
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int i, j, t = 0, sum = 5;
    int flag = 0;
    i = 5;
    while (i < 2000000)
    {
        t = (int)sqrt(i);
        for (j = 3; j <= t; j = j + 2)
        {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (!flag)
            sum += i;
        flag = 0; i += 2;
    }
    cout << sum;
    return 0;
}