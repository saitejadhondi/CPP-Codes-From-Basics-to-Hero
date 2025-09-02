/*

You are given two integers n1 and n2. 
You need find the Lowest Common Multiple (LCM) of the two given numbers. 
Return the LCM of the two numbers.
The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int LCM(int n1,int n2) {
    // This gives O(n1*n2) TC, you can improve by other method given at the end
    // other implementations with(Method 2 --> O(min(n1,n2))
    // Method 3 --> CD: O(log(min(a, b))) LCM: O(log(min(n1, n2))) (because it depends on GCD))
    // given below check it once
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


/*
Method 2:
int LCM(int n1,int n2) {
        int lcm;
        int n = max(n1, n2);
        int i = 1;
        
        while(1) {
            int mul = n * i;
            if(mul % n1 == 0 && mul % n2 == 0) {
                lcm = mul;
                break;
            }
            i++;
        }
        return lcm;
    }
*/

/*
Method 3
class Solution {
public:
    // Function to compute GCD using Euclidean algorithm
    int GCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Function to compute LCM using GCD
    int LCM(int n1, int n2) {
        return (n1 * n2) / GCD(n1, n2);
    }
};

*/