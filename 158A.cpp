// Date: 07/10/2026
#include<iostream>
#include<vector>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int main()
{
    int n , k;
    cin >> n >> k;
    int count = 0;
    vector<int> vec;

    while(n--)
    {
        int i;
        cin >> i;
        vec.push_back(i);
    }

    for (int i = 0, len = vec.size(); i < len; i++)
    {
        if(vec[i] >= vec[k - 1] && vec[i] > 0) count++;
    }

    cout << count<< endl;

    return 0;
}