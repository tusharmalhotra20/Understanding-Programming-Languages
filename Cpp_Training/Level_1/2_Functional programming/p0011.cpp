/*
    Inverse Of A Number
        1. You are given a number following certain constraints.
        2. The key constraint is if the number is 5 digits long, it'll contain all the digits from 1 to 5 without missing any and without repeating any. e.g. 23415 is a 5 digit long number containing all digits from 1 to 5 without missing and repeating any digit from 1 to 5.Take a look at few other valid numbers - 624135, 81456273 etc.Here are a few invalid numbers - 139, 7421357 etc.
        3. The inverse of a number is defined as  the number created by interchanging the face value and index of digits of number.e.g. for 426135 (reading from right to left, 5 is in place 1, 3 is in place 2, 1 is in place 3, 6 is in place 4, 2 is in place 5 and 4 is in place 6), the inverse will be 416253 (reading from right to left, 3 is in place 1, 5 is in place 2,2 is in place 3, 6 is in place 4, 1 is in place 5 and 4 is in place 6) More examples - inverse of 2134 is 1243 and inverse of 24153 is 24153
        4. Take as input number "n", assume that the number will follow constraints.
        5. Print it's inverse.

p- position | d- digit at that position

num = 3241
p       d
1       1
2       4
3       2
4       3

1 * 10^1-1    +   2 * 10^4-1  +   3 * 10^2-1  +   4 * 10^3-1
1 + 2000 + 30 + 400

inverse = 2431
p       d
1       1
2       3
3       4
4       2

*/

#include <iostream>
#include <cmath>
using namespace std;

void find_inverse(long int num)
{
    long int inverse{};
    int pos{1};

    while (num > 0)
    {
        int remainder = num % 10; 
        num /= 10;
        inverse += pos * pow(10, remainder - 1);
        pos += 1;
    }
    cout << inverse << endl;
}

int main(int argc, char **argv)
{
    long long int num{};
    cin >> num;

    find_inverse(num);
    return 0;
}
