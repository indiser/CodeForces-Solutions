// Date: 15/10/2026
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
    bool isHard = false;

    while(n--)
    {
        int a;
        cin >> a;

        if(a == 1)
        {
            isHard = true;
            break;
        }
    }
    
    if(isHard == true) cout << "HARD" << endl;
    else cout << "EASY" << endl;
    return 0;
}