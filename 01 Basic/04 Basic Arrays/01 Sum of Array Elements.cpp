/*
Given an array arr of size n, 
the task is to find the sum of all the elements in the array.
Time and Space Complexity
Time Complexity : O(N) The time complexity is O(N) because each element in the array is processed exactly once.
Space Complexity : O(N)The space complexity is O(N) due to the recursion stack, which can grow up to the size of the array.
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int sumOfArrayElements(vector<int> &arr)
    {
        int left=0;
        return sum(arr, left);
    }
    private:
    int sum(vector<int> &arr, int left)
    {
        if(left==arr.size()) return 0;
        return arr[left]+sum(arr, left+1);
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
    int ans=sol.sumOfArrayElements(arr);
    cout<<ans<<endl;
    return 0;
}