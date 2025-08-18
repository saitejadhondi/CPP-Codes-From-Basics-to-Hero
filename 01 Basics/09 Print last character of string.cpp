/* Print last character of string

Given a string s. Return the last character of the given string s.


Examples:

Input : s = "takeuforward"

Output : d

Explanation : The last character of given string is "d".           */

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        char lastChar(string& s){
            int n=s.size();
            char c=s[n-1];
            return c;
        }
};

int main()
{
    Solution sol;
    string str;
    cin >> str;
    char c = sol.lastChar(str);
    cout << c;
    return 0;
}