#include <bits/stdc++.h>
using namespace std;

long long fibo_sum(long long n)
{
    long long a = 0, b = 1, c = 1, d = 1, i;
    n %= 60;

    if (n < 2)
        return n;
    for (i = 2; i <= n; i++)
    {
        c = (a + b) % 10;
        a = b;
        b = c;
        d = (d + c) % 10;
    }
    return d;
}

int main()
{
    long long n;
    cin >> n;

    long long res = fibo_sum(n);
    cout << res << endl;

    return 0;
}
