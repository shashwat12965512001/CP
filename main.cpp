#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int lowercase, uppercase;
    lowercase = uppercase = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (islower(ch))
        {
            lowercase++;
        }
        else
        {
            uppercase++;
        }
    }
    if (uppercase > lowercase)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;

    return 0;
}
