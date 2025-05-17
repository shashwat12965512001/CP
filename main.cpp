#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size, count;
        cin >> size;
        int arr[size];
        count = 0;
        for (int j = 0; j < size; j++)
        {
            int val;
            cin >> val;
            arr[j] = val;
        }
        for (int j = 0; j < size - 1; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j + 1] % 2 == 0) || (arr[j] % 2 != 0 && arr[j + 1] % 2 != 0))
            {
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}
