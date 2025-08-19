/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
1
12
123
1234
12345
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
            for(int j=1; j<=i; j++)
            {
                cout << j;
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