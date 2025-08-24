/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void PrintStars(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=i;j<=n-1;j++)
            {
                cout << " ";
            }
            char ch='A';
            for(int j=1;j<2*i;j++)
            {
                cout << ch;
                if(i<=j)
                {
                    ch=ch-1;
                }
                else ch++;
            }
            for(int j=i;j<=n-1;j++)
            {
                cout << " ";
            }
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