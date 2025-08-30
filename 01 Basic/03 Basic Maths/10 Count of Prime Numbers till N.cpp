/*

You are given an integer n. 
You need to find out the number of prime numbers 
in the range [1, n] (inclusive). 
Return the number of prime numbers in the range.
A prime number is a number which has no divisors except, 1 and itself.

Complexity Analysis:
Time Complexity: O(N2) – Checking all numbers from 1 to n for prime and checking if a number is prime or not will take O(n) TC.

Space Complexity: O(1) – Using a couple of variables i.e., constant space.

*/

//Method 1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool isPrime(int n)
    {
        if(n==2) return true;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true; 
    }
public:
    int primeUptoN(int n) {
        if(n<2)
        {
            return 0;
        }
        int count=0;
        for(int i=2;i<=n;i++)
        {
            if(isPrime(i)) count++;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    cout << sol.primeUptoN(n);
    return 0;
}

/*

Method 2

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPrime(int n) {
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                count = count + 1;
            }
        }
        if (count == 2) return true;
        return false;
    }
    
public:
    int primeUptoN(int n) {
        int count = 0;
        for (int i = 2; i <= n; i++) {
            
            if (isPrime(i)) count++;
        }
        return count;
    }
};

int main() {
    int n = 6;
    Solution sol; 
    int ans = sol.primeUptoN(n);
    cout << "The count of primes till " << n << " is: " << ans;
    
    return 0;
}


*/