/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****
*   *
*   *
*   *
*****

*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void PrintStars(int n)
    {
        if(n==1)
        {
            cout <<"*" <<endl;
            return;
        }
        for(int i=1; i<=n; i++)
        {
            cout << "*";
        }
        cout << endl;
        for(int i=1; i<=n-2; i++)
        {
            cout << "*";
            for(int j=1; j<=n-2; j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        for(int i=1; i<=n; i++)
        {
            cout << "*";
        }
        cout << endl;



        /*

        METHOD 2
        
        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){
                if(i == 0 || j == 0 || i == n-1 || j == n-1)
                    cout<<"*";
                else cout<<" ";
            }
         
            //move to the next row  
            cout<<endl;
        }
        
        */



    }
};
int main()
{
    Solution sol;
    int num;
    cin >> num;
    sol.PrintStars(num);
    return 0;
}