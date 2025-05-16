#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num)
        {
            cout << "HARD" << '\n';
            break;
        }
        count++;
    }
    if (count == n)
    {
        cout << "EASY" << '\n';
    }

    return 0;
}
