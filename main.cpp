#include <bits/stdc++.h>

using namespace std;

vector<int> returnIndexes(string str, string s)
{
    vector<int> indexes;
    for (int i = 0; i <= str.length() - s.length(); i++)
    {
        if (str.substr(i, s.length()) == s)
        {
            indexes.push_back(i);
        }
    }
    return indexes;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> n >> t;
    char last;
    string str;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        str += ch;
    }
    if (n <= 2)
    {
        if (n == 1)
        {
            cout << str;
            return 0;
        }
        else
        {
            if (str[0] == 'B' && str[1] == 'G')
            {
                str[0] = 'G';
                str[1] = 'B';
            }
            cout << str;
            return 0;
        }
    }
    for (int i = 0; i < t; i++)
    {
        vector<int> indexes = returnIndexes(str, "BG");
        for (auto i : indexes)
        {
            str[i] = 'G';
            str[i + 1] = 'B';
        }
    }
    cout << str;

    return 0;
}
