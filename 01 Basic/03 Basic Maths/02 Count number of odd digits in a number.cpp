/*

You are given an integer n. You need to return the number of odd digits present in the number.
The number will have no leading zeroes, except when the number is 0 itself.
Examples:
Input: n = 5
Output: 1
Explanation: 5 is an odd digit.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int countDigit(int n) {
        int oddDigits=0;
        while(n>0)
        {
            int lastDigit=n%10;
            if(lastDigit%2!=0)
            {
                oddDigits++;
            }
            n=n/10;
        }
        return oddDigits;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    cout << sol.countDigit(n);
    return 0;
}