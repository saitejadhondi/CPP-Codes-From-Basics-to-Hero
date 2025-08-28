/*

You are given an integer n. Return the value of n! or n factorial.



Factorial of a number is the product of all positive integers less than or equal to that number.

Complexity Analysis:
Time Complexity: O(N) – Iterating once from 1 to N.

Space Complexity: O(1) – Using a couple of variables i.e., constant space.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int factorial(int n) {
        int factNum=1;
        while(n>0)
        {
            factNum = factNum * n;
            n--;
        }
        return factNum;
    }
};
/* METHOD 2
class Solution {
public:
    int factorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
    }
};

*/
int main()
{
    Solution sol;
    int n;
    cin >> n;
    cout << sol.factorial(n);
    return 0;
}