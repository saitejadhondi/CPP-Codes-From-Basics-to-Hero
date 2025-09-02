/*

You are given an integer n. 
Return the integer formed by 
placing the digits of n in reverse order.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> divisors(int n) {
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    vector<int> ans=sol.divisors(n);
    for(auto i:ans)
    {
        cout << i << " ";
    }
    return 0;
}