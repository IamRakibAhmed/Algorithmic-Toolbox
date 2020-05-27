#include<bits/stdc++.h>
using namespace std;

long long max_revenue(vector<long long> profits, vector<long long> clicks, int n)
{
    sort(profits.begin(), profits.end());
    sort(clicks.begin(), clicks.end());

    long long sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += (profits[i] * clicks[i]);
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<long long> profits(n), clicks(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> profits[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> clicks[i];
    }

    long long res = max_revenue(profits, clicks, n);
    cout << res << endl;

    return 0;
}
