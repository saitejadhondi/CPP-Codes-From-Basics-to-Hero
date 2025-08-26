/*

You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int countDigit(int n) {
        int count=0;
        if(n==0)
        {
            return 1;
        }
        while(n>0)
        {
            count++;
            n = n/10;
        }
        return count;
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