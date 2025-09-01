/*

You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. 
Return the GCD of the two numbers.
The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

Complexity Analysis:
Time Complexity: O(min(N1, N2)) – where N1 and N2 are given numbers. Iterating from 1 to min(N1, N2) and performing constant time operations in each iteration.
Space Complexity: O(1) – Using a couple of variables i.e., constant space.

*/

// METHOD1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int GCD(int n1, int n2) {
        int gcd;
            if(n1<n1)
        {
            gcd=n1;
        }
        else
        {
            gcd=n2;
        } 
        for(int i=gcd;i>=1;i--)
        {
            if((n1%i==0) && (n2%i==0))
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
    cout << sol.GCD(n1, n2);
    return 0;
}

/*
METHOD 2 Logic
while(n1!=0)
        {
            if(n1<n2)
            {
                n2=n2-n1;
            }
            else n1=n1-n2;
        }
        return n2;
*/