// Date: 07/10/2026
#include<iostream>
#include<unordered_set>
using namespace std;

// Time Complexity: O(1)
// Space Complexity: O(1)
int main()
{
    string s;
    cin >> s;
    unordered_set<char> st(s.begin(), s.end());
    int len = st.size();

    if(len % 2 == 0) cout <<"CHAT WITH HER!"<< endl;
    else cout<<"IGNORE HIM!"<< endl;

    return 0;
}