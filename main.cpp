#include <bits/stdc++.h>

using namespace std;

int isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    if (isPrime(num))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
