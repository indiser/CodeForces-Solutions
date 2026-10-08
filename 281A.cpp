// Date: 08/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

// Time Complexity: O(1)
// Space Complexity: O(1)
int main()
{
    string s;
    getline(cin, s);
    char fisrtWord = (char)toupper(s[0]);
    string res = fisrtWord + s.substr(1, s.size());

    cout << res <<endl;
}