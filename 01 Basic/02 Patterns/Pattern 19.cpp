/* 
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void PrintStars(int n)
    {
        int space=0;
        for(int i=n; i>=1; i--)
        {
            for(int j=1; j<=i; j++)
            {
                cout << "*";
            }
            for(int j=1; j<=space; j++)
            {
                cout << " ";
            }
            for(int j=1; j<=i; j++)
            {
                cout << "*";
            }
            space = space +2;
            cout << endl;
        }
        space=2*(n-1);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cout << "*";
            }
            for(int j=1; j<=space; j++)
            {
                cout << " ";
            }
            for(int j=1; j<=i; j++)
            {
                cout << "*";
            }
            space = space -2;
            cout << endl;
        }
    }
};
int main()
{
    Solution sol;
    int num;
    cin >> num;
    sol.PrintStars(num);
    return 0;
}