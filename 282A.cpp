// Date: 07/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Complexity: O(n)
// Space Compelxity: O(1)
int main()
{
    int n;
    cin >> n;
    int x = 0;
    while(n--)
    {
        string s;
        cin >> s;
        if(s[1] == '+') x++;
        else x--;
    }
    cout << x << endl;
}