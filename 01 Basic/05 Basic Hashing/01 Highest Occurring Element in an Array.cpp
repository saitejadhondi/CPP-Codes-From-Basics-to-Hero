/*
Given an array nums of n integers, 
find the most frequent element in it i.e., the element that occurs the maximum number of times. 
If there are multiple elements that appear a maximum number of times, find the smallest of them.
*/


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//THIS IS THE OPTIMIZED APPROACH 
//USING UNORDERED MAP
//Time Complexity: O(N) and Space Complexity: O(N)
    int mostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        int maxFreq=0;
        int maxEle=0;
        unordered_map<int, int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
            int ele=it.first;
            int freq=it.second;
            if(freq>maxFreq)
            {
                maxFreq=freq;
                maxEle=ele;
            }
            else if(freq==maxFreq)
            {
                maxEle=min(maxEle, ele);
            }
        }
        return maxEle;
    }
};
int main()
{
    Solution sol;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<sol.mostFrequentElement(nums);
    return 0;
}