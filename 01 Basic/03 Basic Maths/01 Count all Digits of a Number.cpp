/*

You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.

Complexity Analysis:

Time Complexity: O(log10(N)) – In every iteration we are dividing N by 10.

Space Complexity: O(1) – Using a couple of variables i.e., constant space.

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