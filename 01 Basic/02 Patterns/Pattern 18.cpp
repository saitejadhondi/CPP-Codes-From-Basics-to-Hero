/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

E 
D E 
C D E 
B C D E 
A B C D E

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
            char ch='A'+i;
            for(int j=0; j<n-i; j++)
            {
                cout << ch << " ";
                ch++;
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