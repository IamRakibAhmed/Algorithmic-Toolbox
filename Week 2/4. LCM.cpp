#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;

    long long rem = a % b;
    return gcd(b, rem);
}

int main()
{
    long long a, b;
    cin >> a >> b;

    long long m = a*b;
    long long res = gcd(a, b);
    long long lcm = m / res;
    cout << lcm << endl;

    return 0;
}
