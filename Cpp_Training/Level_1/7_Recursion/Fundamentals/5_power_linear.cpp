/*
        1. You are given a number x.
        2. You are given another number n.
        3. You are required to calculate x raised to the power n. Don't change the signature of power function .

*/
#include <iostream>
using namespace std;

int power(int x, int n)
{
    // write your code here
    if (n == 0)     // Test case
        return 1;
    if (n == 1)
        return x;
    else
        return x * power(x, n - 1);
}

int main()
{
    int n, x;
    cin >> x >> n;
    cout << power(x, n);
}
