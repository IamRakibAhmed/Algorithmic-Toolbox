#include <bits/stdc++.h>
using namespace std;

vector<int> optimalSum(int n)
{
    vector<int> sum;

    for (size_t i = 1; n; i++)
    {
        if (n - i > i)
        {
            sum.push_back(i);
            n -= i;
        }
        else
        {
            sum.push_back(n);
            break;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> numofn = optimalSum(n);
    cout << numofn.size() << endl;

    for (size_t i = 0; i < numofn.size(); i++)
        cout << numofn[i] << " ";

    return 0;
}
