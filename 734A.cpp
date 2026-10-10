// Date: 10/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int antonCount = 0, danikCount = 0;

    for (int i = 0, len = s.size(); i < len; i++)
    {
        if(s[i] == 'A') antonCount++;
        else danikCount++;
    }

    if(antonCount > danikCount) cout << "Anton" << endl;
    else if(antonCount < danikCount) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}