#include <bits/stdc++.h>
using namespace std;

int get_change(int m)
{
    int ten = m / 10;
    int modTen = m % 10;

    int five = modTen / 5;
    int modFive = modTen % 5;

    int one = modFive / 1;
    int res = ten + five + one;

    return res;
}

int main()
{
    int m;
    cin >> m;

    int res = get_change(m);
    cout << res << endl;

    return 0;
}
