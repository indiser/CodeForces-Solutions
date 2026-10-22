// Date: 22/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)
int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while(t--)
    {
        int a, b;
        cin >> a >> b;

        if(a % b == 0) ans.push_back(0);
        else
        {
            int w = a % b;
            ans.push_back(b - w);
        }
    }
    for(auto val: ans) cout << val << endl;
    return 0;
}