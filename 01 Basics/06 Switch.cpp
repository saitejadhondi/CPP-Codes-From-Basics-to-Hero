#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void whichWeekDay(int day) {
        if (day < 1 || day > 7) {
            cout << "Invalid";
            return;
        }
        switch (day) {
            case 1: cout << "Monday"; break;
            case 2: cout << "Tuesday"; break;
            case 3: cout << "Wednesday"; break;
            case 4: cout << "Thursday"; break;
            case 5: cout << "Friday"; break;
            case 6: cout << "Saturday"; break;
            case 7: cout << "Sunday"; break;
        }
    }
};

int main() {
    Solution sol;
    int day;
    cin >> day;
    sol.whichWeekDay(day);
    return 0;
}