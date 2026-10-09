// Date: 09/10/2026
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int main()
{
    int a, b;
    cin >> a >> b;

    int i = 1;

    while(true)
    {
        a = a * 3;
        b = b * 2;

        if(a > b)
        {
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}