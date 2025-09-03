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