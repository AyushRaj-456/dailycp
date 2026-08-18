#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (a[j - 1] < a[j] && a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                }
            }
        }
        if (is_sorted(a, a + n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}