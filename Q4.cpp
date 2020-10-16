// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.
// Output-906609
#include <iostream> 
#include<algorithm>
using namespace std;

int main()
{
    int product, revprod, reverse = 0, max = 0;
    for (int x = 100; x < 1000; x++) {
        for (int y = 100; y < 1000; y++) {
            product = x * y;
            revprod = product;
            reverse = 0;
            while (revprod != 0) {
                reverse = reverse * 10 + revprod % 10;
                revprod /= 10;
            }
            if (reverse == product && product > max) {
                max = product;
            }
        }
    }
    cout << max;
}