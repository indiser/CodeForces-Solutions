// Date: 22/10/2026
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

    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 1) cout << "I hate ";
        else cout <<"I love ";
        if(i != n) cout <<"that ";
    }
    cout <<"it";
    return 0;
}