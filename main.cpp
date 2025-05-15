#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string opinions[n];
        for (int j = 0; j < n; j++)
        {
            string single;
            for (int s = 0; s < k; s++)
            {
                char ch;
                cin >> ch;
                single += ch;
                switch (ch)
                {
                case '+':
                    break;
                case '-':
                    break;
                }
            }
            opinions[j] = single;
        }
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (opinions[i] == opinions[0])
            {
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}