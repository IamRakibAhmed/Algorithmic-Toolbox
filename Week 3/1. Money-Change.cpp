#include <bits/stdc++.h>
using namespace std;

int get_change(int m)
{
    int ten = m / 10;
    int modTen = m % 10;

    int five = modTen / 5;
    int sum = ten + five;
    int modFive = modTen % 5;

    int one = modFive / 1;
    int res = sum + one;

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
