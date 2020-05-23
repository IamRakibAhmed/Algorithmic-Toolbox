#include <iostream>
using namespace std;

long long pisano_period(long long m)
{
    long long a = 0, b = 1, c = a + b;

    for (int i = 0; i < m * m; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;

        if (a == 0 && b == 1)
            return i + 1;
    }
}

long long fibo_huge(long long n, long long m)
{
    long long rem = n % pisano_period(m);

    long long x = 0;
    long long y = 1;

    long long res = rem, sum;

    for (int i = 1; i < rem; i++)
    {
        res = (x + y) % m;
        x = y;
        y = res;
    }

    return res % m;
}

int main()
{
    long long n, m;
    cin >> n >> m;
    cout << fibo_huge(n, m) << endl;

    return 0;
}
