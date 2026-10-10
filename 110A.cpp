// Date: 10/10/2026
#include<iostream>
#include<string>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int main()
{
    long long n;
    cin >> n;

    string s = to_string(n);
    int count = 0;

    for (int i = 0, len = s.size(); i < len; i++)
    {
        if(s[i] == '4' || s[i] == '7') count++;
    }
    
    if(count == 4 || count == 7) cout << "YES"<< endl;
    else cout << "NO" << endl;
    
    return 0;
}