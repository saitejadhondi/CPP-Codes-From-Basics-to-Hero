/* Print X N numbers of times

Given two integers X and N, print the value X on the screen N times. Move to the next line after printing, even if N = 0.


Examples:

Input: X = 7, N = 5

Output: 7 7 7 7 7           */

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void PrintXNTimes(int x, int n)
    {
        if(n==0)
        {
            return;
        }
        for(int i=1;i<=n;i++)
            {
                cout << x ;
                if(i<n)
                {
                cout << " ";
                }
            }
    }

};

int main()
{
    int x, n;
    cin >> x;
    cin >> n;
    Solution sol;
    sol.PrintXNTimes(x,n);
    return 0;
}