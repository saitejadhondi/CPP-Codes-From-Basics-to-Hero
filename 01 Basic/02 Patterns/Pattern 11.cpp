/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1

*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void PrintStars(int n)
    {
        int start=1;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                start=0;
            }
            else start=1;
            for(int j=1;j<=i;j++)
            {
                cout <<start <<" ";
                start=1-start;
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