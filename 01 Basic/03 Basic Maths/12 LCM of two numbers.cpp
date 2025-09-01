/*

You are given an integer n. 
Return the integer formed by 
placing the digits of n in reverse order.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int LCM(int n1,int n2) {
        int lcm;
        if(n1<n2)
        {
            lcm=n2;
        }
        else
        {
            lcm=n1;
        }
        for(int i=lcm;i<=n1*n2;i++)
        {
            if(i%n1==0 && i%n2==0)
            {
                return i;
            }
        }
    }
};

int main()
{
    Solution sol;
    int n1, n2;
    cin >> n1;
    cin >> n2;
    cout << sol.LCM(n1, n2);
    return 0;
}