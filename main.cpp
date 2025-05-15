#include <bits/stdc++.h>
using namespace std;

bool isValidMeow(string s)
{
    // Convert everything to lowercase
    for (char &c : s)
    {
        c = tolower(c);
    }

    // Remove consecutive duplicates
    string compressed;
    for (char c : s)
    {
        if (compressed.empty() || compressed.back() != c)
        {
            compressed += c;
        }
    }

    // Check if it matches "meow"
    return compressed == "meow";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (isValidMeow(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
