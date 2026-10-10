// Date: 10/10/2026
#include<iostream>
using namespace std;

// Time Complexity: O(n)
// Space Compelxity: O(1)
int main()
{
    int n, h;
    cin >> n >> h;
    int count = 1, sum = 0;
    while(n--)
    {
        int a;
        cin >> a;

        if(a > h)
        {
            sum += count * 2;
        }
        else sum += count;
    }
    cout << sum << endl;
    return 0;
}