/* 
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    * 
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:

    void diamond(int n)
    {
        printFirstHalf(n);
        printSecondHalf(n);
    }

    private:

    void printFirstHalf(int n)
    {
        for(int i=1; i<=n-1; i++)
        {
            for(int j=i;j<=n-1;j++)
            {
                cout << " ";
            }
            for(int j=1; j <= (2*i-1); j++)
            {  
                cout << "*";
            }
            for(int j=i;j<=n-1;j++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }

    void printSecondHalf(int n)
    {
        for(int i=n;i>=1;i--)
        {
            for(int j=n;j>i;j--)
            {
                cout << " ";
            }
            for(int j=1;j<=(2*i-1);j++)
            {
                cout << "*";
            }
            for(int j=n;j>i;j--)
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
    sol.diamond(num);
    return 0;
}