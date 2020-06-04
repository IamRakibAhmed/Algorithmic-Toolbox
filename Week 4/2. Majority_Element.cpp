#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll major(vector<ll> &a)
{
    ll c = 1, index = 0;

    for (size_t i = 1; i < a.size(); i++)
    {
        if (a[index] == a[i])
            c++;
        else
            c--;

        if (c == 0)
        {
            index = i;
            c = 1;
        }
    }
    return a[index];
}

bool checkElement(vector<ll> &a)
{
    ll c = 0;
    ll element = major(a);

    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] == element)
            c++;
    }
    if (c > (a.size() / 2))
        return 1;

    return 0;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (size_t i = 0; i < n; i++)
        cin >> a[i];

    cout << checkElement(a) << endl;
}
