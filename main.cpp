#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    cout << 1 << '\n';
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << '\n';
        }
    }
    cout << num << '\n';

    return 0;
}
