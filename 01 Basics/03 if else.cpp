#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        void isAdult(int num)
        {
            if(num>=18)
            {
                cout << "Adult";
            }
            else
            {
                cout << "Teen";
            }
        }
};

int main()
{
    Solution sol;
    int num;
    cin >> num;
    sol.isAdult(num);
    return 0;    
}