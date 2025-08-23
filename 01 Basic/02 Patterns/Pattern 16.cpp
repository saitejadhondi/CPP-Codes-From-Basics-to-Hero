/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

A
BB
CCC
DDDD
EEEEE

*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void PrintStars(int n)
    {
        char ch='A';
        for(int i=0; i<n; i++)
        {
            ch='A' + i;
            for(int j=0; j<=i; j++)
            {
                cout << ch;
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