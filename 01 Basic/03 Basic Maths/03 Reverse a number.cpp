/*

You are given an integer n. 
Return the integer formed by 
placing the digits of n in reverse order.

Time Complexity: O(log10(N)) – In every iteration, N is divided by 10 (equivalent to the number of digits in N.)

Space Complexity: O(1) – Using a couple of variables i.e., constant space.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int reverseNumber(int n) {
        int lastDigit;
        int revNum=0;
        while(n>0)
        {
            lastDigit = n%10;
            revNum = revNum*10+lastDigit;
            n=n/10;
        }
        return revNum;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    cout << sol.reverseNumber(n);
    return 0;
}