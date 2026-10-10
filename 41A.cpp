// Date: 10/10/2026
#include<iostream>
#include<string>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    s = string(s.rbegin(), s.rend());

    if(s == t) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}