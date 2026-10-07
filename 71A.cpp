// Date: 07/10/2026
#include<iostream>
#include<string>
using namespace std;

// Time Complexity: O(n)
// Space Coomplexity: O(1)
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int len = s.size();

        if(len <= 10)
        {
            cout << s << endl;
        }
        else
        {
            cout << s[0] << len - 2 << s[len - 1] << endl;
        }
    }
    return 0;
    
}