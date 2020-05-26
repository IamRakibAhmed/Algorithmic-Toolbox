#include <bits/stdc++.h>
using namespace std;

bool comp(string& a, string& b)
{
    return (b + a > a + b);
}

string largest_number(vector<string> a)
{
    for (size_t i = 1; i < a.size(); i++)
    {
        for (size_t j = 0; j < a.size() - 1; j++)
        {
            if (comp(a[j], a[j + 1]))
                swap(a[j], a[j + 1]);
        }
    }

    stringstream ret;
    for (size_t i = 0; i < a.size(); i++)
    {
        ret << a[i];
    }
    string result;
    ret >> result;
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (size_t i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    cout << largest_number(a);

    return 0;
}
