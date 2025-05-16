#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int even, odd, positive, negative;
    even = odd = positive = negative = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (num < 0)
        {
            negative++;
        }
        else if (num > 0)
        {
            positive++;
        }
    }
    cout << "Even: " << even << '\n';
    cout << "Odd: " << odd << '\n';
    cout << "Positive: " << positive << '\n';
    cout << "Negative: " << negative << '\n';

    return 0;
}
