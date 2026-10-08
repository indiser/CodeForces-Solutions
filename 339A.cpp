// Date: 08/10/2026
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

// Time Complexity: O(n^2)
// Space Complexity: O(n)
vector<int> split(string input, string delimeter)
{
    vector<int> tokens;
    size_t pos = 0;
    string token;

    while((pos = input.find(delimeter)) != string::npos)
    {
        token = input.substr(0, pos);
        tokens.push_back(stoi(token));
        input.erase(0, pos + 1);
    }
    tokens.push_back(stoi(input));

    return tokens;
}

void bubbleSort(vector<int> &vec)
{
    int len = vec.size();

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if(vec[j] > vec[j+1]) swap(vec[j], vec[j+1]);
        }
    }
}

int main()
{
    string s;
    getline(cin, s);

    vector<int> vec = split(s, "+");
    bubbleSort(vec);

    string ans;

    for(auto val: vec)
    {
        ans += to_string(val);
        ans += '+';
    }

    cout << ans.substr(0, ans.size() - 1) << endl;
}