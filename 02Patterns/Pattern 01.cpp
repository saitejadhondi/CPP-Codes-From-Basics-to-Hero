#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void PrintStars(int n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cout << "*";
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