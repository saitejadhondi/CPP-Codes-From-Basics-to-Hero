/*

You are given an integer n. 
You need to check if the number is prime or not. 
Return true if it is a prime number, otherwise return false.
A prime number is a number 
which has no divisors except 1 and itself.

Complexity Analysis:
Time Complexity: O(N) – Looping N times to find the count of all divisors of N.

Space Complexity: O(1) – Using a couple of variables i.e., constant space.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPrime(int n) {
        if(n<2) return false;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    bool ans = sol.isPrime(n);
    if (ans) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
}