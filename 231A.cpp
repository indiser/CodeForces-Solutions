// Date: 07/10/2026
#include<iostream>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int main()
{
    int n;
    cin >> n;
    int count = 0;

    while(n--)
    {
        int a , b, c;
        cin >> a >> b >> c;

        if(
            a == 1 && b == 1 || a == 1 && c == 1 ||
            b == 1 && c ==1 || a == 1 && b == 1 && c == 1
        )
        {
            count++;
        }
    }

    cout << count <<endl;

    return 0;
}