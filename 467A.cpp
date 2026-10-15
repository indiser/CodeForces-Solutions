// Date: 15/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Compelxity: O(n)
// Space Complexity: O(1)
int main()
{
    int n;
    cin >> n;
    int count = 0;

    while(n--)
    {
        int p, q;
        cin >> p >> q;

        if(q - p >= 2) count++;
    }
    cout << count << endl;
}