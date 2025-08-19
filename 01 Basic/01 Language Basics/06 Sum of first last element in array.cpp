    #include<bits/stdc++.h>
    using namespace std;
    class Solution
    {
        public:
        int sumOfFirstandLast(vector<int> & nums)
        {
            int n=nums.size();
            if(n==0)
            {
                return 0;
            }
            else
            {
                int sum=nums[0]+nums[n-1];
                return sum;
            }
        }
    };
    int main()
    {
        int size;
        cin >> size;
        vector<int> nums;
        for(int i=0;i<size;i++)
        {
            int num;
            cin >> num;
            nums.push_back(num);
        }
        Solution sol;
        int sum=sol.sumOfFirstandLast(nums);
        cout << sum;
        return 0;
    }