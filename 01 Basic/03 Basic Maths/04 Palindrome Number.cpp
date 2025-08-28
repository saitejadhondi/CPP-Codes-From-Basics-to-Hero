/*

You are given an integer n. 
You need to check whether the number is a palindrome number or not. 
Return true if it's a palindrome number, otherwise return false.
A palindrome number is a number which reads the same both left to right and right to left.

Time Complexity: O(log10(N)) – In every iteration, N is divided by 10 (equivalent to the number of digits in N.)

Space Complexity: O(1) – Using a couple of variables i.e., constant space.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPalindrome(int n) {
        int copy=n;
        int revNum=0;
        while(n>0)
        {
            int lastDigit = n%10;
            revNum = revNum*10+lastDigit;
            n=n/10;
        }
        if(revNum==copy) return true;
        return false;    
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    bool ans=sol.isPalindrome(n);
    if(ans) cout << "The given number is a palindrome";
    else cout << "The given number is not a palindrome";
    return 0;
}