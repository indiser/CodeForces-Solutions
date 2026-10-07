// Date: 07/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Complexity: O(1)
// Space Coomplexity: O(1)
int main()
{
    int w;

    cin >> w;

    if(w == 2 || w == 1)
    {
        cout <<"NO"<< endl;
        return 0;
    }

    if(w % 2 == 0) cout <<"YES"<< endl;
    else cout <<"NO"<< endl;

    return 0;
}