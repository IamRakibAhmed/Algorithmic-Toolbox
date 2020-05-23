#include <bits/stdc++.h>
using namespace std;

long long fibo(long long n)
{
    long long i;

    long long a[n + 2];
    a[0] = 0;
    a[1] = 1;

    for (i = 2; i <= n; i++)
    {
        a[i] = ((a[i - 1] % 10) + (a[i - 2] % 10)) % 10;
    }
    return a[n] % 10;
}

long long fibo_sq(long long n)
{
    long long vSum = fibo(n % 60);
    long long hSum = fibo((n + 1) % 60);

    return (vSum * hSum) % 10;
}

int main()
{
    long long n;
    cin >> n;

    long long res = fibo_sq(n);
    cout << res << endl;

    return 0;
}
