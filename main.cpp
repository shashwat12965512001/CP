#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        arr[i] = n;
    }
    int first, second;
    first = second = 0;
    for (int i = 0; i < 5; i++)
    {
        int val = arr[i];
        if (first == 0)
        {
            first = val;
        }
        else if (second == 0 && val != first)
        {
            second = val;
        }
    }
    map<int, int> mp;
    mp[first] = 0;
    mp[second] = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == first)
        {
            mp[first]++;
        }
        else if (arr[i] == second)
        {
            mp[second]++;
        }
        else
        {
            cout << "No";
            return 0;
        }
    }
    if (mp[first] != 3 && mp[first] != 2)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}
