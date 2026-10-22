// Date: 22/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)
int main()
{
    string a, b;
    cin >> a >> b;
    vector<char> ans;
    for (int i = 0, len = a.size(); i < len; i++)
    {
        ans.push_back((a[i] != b[i] ? '1' : '0'));
        cout << ans[i];
    }
    return 0;
}