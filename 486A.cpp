// Date: 15/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Compelxity: O(1)
// Space Complexity: O(1)
int main()
{
    long long n;
    cin >> n;
    
    if(n % 2 == 0) cout << n / 2 << endl;
    else if(n % 2 == 1) cout << -(n + 1) / 2 << endl;

    return 0;
}