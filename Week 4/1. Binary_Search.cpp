#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bin_search(vector<ll> &a, ll key, ll high, ll low)
{
    if (high < low)
        return -1;

    ll mid = low + ((high - low) / 2);

    if (key == a[mid])
        return mid;
    else if (key < a[mid])
        return bin_search(a, key, mid - 1, low);
    else
        return bin_search(a, key, high, mid + 1);
}

int main()
{
    ll n, k;

    cin >> n;
    vector<ll> a(n);
    for (size_t i = 0; i < n; i++)
        cin >> a[i];

    cin >> k;
    vector<ll> b(k);
    for (size_t i = 0; i < k; i++)
        cin >> b[i];

    for (size_t i = 0; i < b.size(); i++)
        cout << bin_search(a, b[i], n, 0) << " ";
}
