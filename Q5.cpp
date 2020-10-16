// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
// Output-232792560
#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    while (a != 0)
    {
        long long c = a;
        a = b % a;
        b = c;
    }
    return b;
}

long long lcm(long long a, long long b)
{
    return a * (b / gcd(a, b));
}

int main()
{
    long long result = 1;
    for (int i = 2; i <= 20; i++)
        result = lcm(result, i);

    cout << result << endl;
        return 0;
}