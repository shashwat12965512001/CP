#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int first[n];
    int second[n];
    for (int i = 0; i < n; i++)
    {
        cin >> first[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> second[i];
    }
    sort(first, first + n);
    sort(second, second + n);
    if (equal(first, first + n, second))
        cout << "yes";
    else
        cout << "no";

    return 0;
}
