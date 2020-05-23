#include <bits/stdc++.h>
using namespace std;

long long fibo_sum(long long n)
{
    long long a = 0, b = 1, c = 1, d = 1, i;
    n %= 60;

    if (n == 1)
        return n;
    else if (n < 1)
        return 0;

    for (i = 2; i <= n; i++)
    {
        c = (a + b) % 10;
        a = b;
        b = c;
        d = (d + c) % 10;
    }
    return d;
}

long long fibo_res(long long m, long long n)
{
    long long high = fibo_sum(n);
    long long low = fibo_sum(m - 1);
    long long ans = (10 + high - low) % 10;

    return ans;
}

int main()
{
    long long m, n;
    cin >> m >> n;

    long long res = fibo_res(m, n);
    cout << res << endl;

    return 0;
}
