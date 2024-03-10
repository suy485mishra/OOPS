#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define tt    \
    ll t;     \
    cin >> t; \
    while (t--)

int main()
{
    tt
    {
        ll n, m;
        cin >> n >> m;
        ll arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n, greater<int>());
        sort(arr2, arr2 + m);
        int left1 = 0, right1 = n - 1;
        int left2 = 0, right2 = m - 1;
        ll s = 0;

        while (left1 <= right1)
        {
            int diff1 = abs(arr1[left1] - arr2[left2]);
            int diff2 = abs(arr1[right1] - arr2[right2]);

            s += max(diff1, diff2);

            if (diff1 > diff2)
            {
                ++left1;
                ++left2;
            }
            else if (diff1 < diff2)
            {
                --right2;
                --right1;
            }
            else
            {
                if (arr1[left1] > arr2[left2])
                {
                    --right2;
                    --right1;
                }
                else
                {
                    ++left1;
                    ++left2;
                }
            }
        }

        cout << s << "\n";
    }
}