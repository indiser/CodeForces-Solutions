// Date: 10/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int remain = 0, sum = 0;

    for (int i = 1; i <= w; i++)
    {
        sum += i * k;
    }
    
    remain = sum - n;

    if(remain < 0)
        cout << 0 << endl;
    else
        cout << remain << endl;
}