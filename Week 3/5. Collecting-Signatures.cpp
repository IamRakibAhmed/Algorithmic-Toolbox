#include<bits/stdc++.h>
using namespace std;

struct node
{
    int first, last;
};

vector<int> optimal_point(vector<node> &segment)
{
    sort(segment.begin(), segment.end(), [](const node &a, const node &b)->bool {
         return a.last < b.last;
    });

    vector<int> point;
    int p = segment[0].last;
    point.push_back(p);

    for (size_t i = 0; i < segment.size(); i++)
    {
        if (p < segment[i].first || p > segment[i].last)
        {
            p = segment[i].last;
            point.push_back(p);
        }
    }

    return point;
}

int main()
{
    int n;
    cin >> n;

    vector<node> segment(n);
    for (size_t i = 0; i < segment.size(); i++)
    {
        cin >> segment[i].first >> segment[i].last;
    }

    vector<int> point = optimal_point(segment);
    cout << point.size() << endl;
    for (size_t i = 0; i < point.size(); i++)
    {
        cout << point[i] << " ";
    }

    return 0;
}
