#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        char last;
        for (int i = 0; i < size; i++)
        {
            char ch;
            cin >> ch;
            // cout << ch << " ";
            if (i == 0)
            {
                last = ch;
                continue;
            }
            if (ch == 'm' || ch == 'M')
            {
                if (last != 'm' && last != 'M')
                {
                    cout << "NO" << '\n';
                    break;
                }
            }
            else if (ch == 'e' || ch == 'E')
            {
                if (last != 'e' && last != 'E' && last != 'm' && last != 'M')
                {
                    cout << "NO" << '\n';
                    break;
                }
            }
            else if (ch == 'o' || ch == 'O')
            {
                if (last != 'e' && last != 'E' && last != 'o' && last != 'O')
                {
                    cout << "NO" << '\n';
                    break;
                }
            }
            else if (ch == 'w' || ch == 'W')
            {
                if (last != 'w' && last != 'W' && last != 'o' && last != 'O')
                {
                    cout << "NO" << '\n';
                    break;
                }
            }
            else
            {
                cout << "NO" << '\n';
                break;
            }
            last = ch;
            if (i == size - 1)
            {
                cout << "YES" << '\n';
            }
        }
        // cout << '\n';
    }
    return 0;
}