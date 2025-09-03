/*
Given an array of n elements. 
The task is to return the count of the number of odd numbers in the array.
Complexity Analysis:
Time Complexity : O(N)
Each element in the array has to be inspected once to determine if it's odd, resulting in a linear time complexity where N is the number of elements in the array.
Space Complexity : O(1)
The space used is constant, as we only use a single counter regardless of the size of the input array.

*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countOdd(vector<int> arr, int n){
        int countOdd=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                countOdd++;
            }
        }
        return countOdd;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    Solution sol;
    int ans=sol.countOdd(arr, n);
    cout<<ans<<endl;
    return 0;
}