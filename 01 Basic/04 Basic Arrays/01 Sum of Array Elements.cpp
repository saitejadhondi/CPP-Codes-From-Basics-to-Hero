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