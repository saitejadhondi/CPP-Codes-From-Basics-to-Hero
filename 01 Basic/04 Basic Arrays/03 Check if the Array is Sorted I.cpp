/*
Given an array arr of size n, the task is to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order. 
If the array is sorted then return True, else return False.
TC --> O(N)
SC --> O(1)
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool arraySortedOrNot(vector<int> & arr, int n) {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                return false;
            }
        }
        return true;
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
    bool sorted = sol.arraySortedOrNot(arr, n);
    if (sorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}