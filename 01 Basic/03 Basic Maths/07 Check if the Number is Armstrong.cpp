/*

You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

Complexity Analysis:
Time Complexity: O(log10(N)) – N is being divided by 10 until it becomes zero resulting in log10(N) iterations and in each iteration constant time operations are performed.

Space Complexity: O(1) – Using a couple of variables i.e., constant space, regardless of the size of the input.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    int countDigit(int n)
    {
        int count=0;
        while(n>0)
        {
            count++;
            n = n/10;
        }
        return count;
    }
public:
    bool isArmstrong(int n) {
      int copy=n;
      int totDigits = countDigit(n);
      int num=0;
      int lastDigit;
      while(n>0)
      {
        lastDigit = n%10;
        num = num + pow(lastDigit , totDigits);
        n = n/10;
      }
      if(num==copy) return true;
      else return false;    
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    bool ans=sol.isArmstrong(n);
    if(ans) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}