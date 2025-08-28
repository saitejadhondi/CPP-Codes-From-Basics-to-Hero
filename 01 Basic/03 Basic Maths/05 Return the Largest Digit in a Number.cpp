/*

You are given an integer n. 
Return the largest digit present in the number.
Time Complexity: O(log10(N)) 
– In every iteration, N is divided by 10 (equivalent to the number of digits in N.)

Space Complexity: O(1) 
– Using a couple of variables i.e., constant space.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int largestDigit(int n) {
        int largeNum=0;
        int lastDigit;
        while(n>0)
        {
            lastDigit = n%10;
            if(lastDigit>largeNum)
            {
                largeNum = lastDigit;
            }
            n=n/10;
        }
        return largeNum;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    cout << sol.largestDigit(n);
    return 0;
}