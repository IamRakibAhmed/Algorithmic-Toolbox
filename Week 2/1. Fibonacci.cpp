#include<bits/stdc++.h>
using namespace std;

long long fibo(long long n)
{
    long long i, a[n + 2];
    a[0] = 0;
    a[1] = 1;

    for (i = 2; i <= n; i++)
        a[i] = a[i - 1] + a[i - 2];

    return a[n];
}

int main()
{
    long long n;
    cin >> n;

    long long res = fibo(n);
    cout << res << endl;

    return 0;
}
