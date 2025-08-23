/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

ABCDE
ABCD
ABC
AB
A

*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void PrintStars(int n)
    {
        for(int i=n-1; i>=0; i--)
        {
            for(char j='A'; j<='A'+i; j++)
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