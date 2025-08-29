/*

You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.



A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.

Complexity Analysis:
Time Complexity: O(N) – Running a loop from 1 to N.

Space Complexity: O(1) – Using a couple of variables i.e., constant space, regardless of the size of input.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPerfect(int n) {
        int perNum=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                perNum += i;
            }
        }    
        if(perNum==n) return true;
        else return false;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    bool ans=sol.isPerfect(n);
    if(ans) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }
    return 0;
}