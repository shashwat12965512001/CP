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
        int x, y, a, b, count;
        cin >> x >> y;
        a = b = count = 0;
        while (count < 1000)
        {
            count++;
            if (a < x)
            {
                if ((abs(x - a) != 1))
                {
                    a++;
                }
            }
            else
            {
                if ((abs(x - a) != 1))
                {
                    a--;
                }
            }
            if (b < y)
            {
                if ((abs(y - b) != 1))
                {
                    b++;
                }
            }
            else
            {
                if ((abs(y - b) != 1))
                {
                    b--;
                }
            }
            x--;
            y--;
            cout << "x: " << x << " | a: " << a << " | y: " << y << " | b: " << b << " \n";
        }
        if (x == a && y == b)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}