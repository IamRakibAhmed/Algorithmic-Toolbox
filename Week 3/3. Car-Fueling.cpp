#include <bits/stdc++.h>
using namespace std;

int minRefills(int dist, int tank, vector<int> & stops)
{
    int totalRefill = 0, currRefill = 0, lastRefill = 0;

    for (size_t i = 1; i < stops.size(); i++)
    {
        if ((stops.at(i) - stops.at(i - 1) > tank) || stops.at(0) > tank || (dist - stops.at(stops.size() - 1)) > tank)
            return -1;
    }

    for (size_t j = 0; j < stops.size(); j++)
    {
        if (j == stops.size() - 1)
        {
            if (dist - lastRefill <= tank)
                return totalRefill;

            else if (stops.at(j) - lastRefill <= tank)
                return totalRefill + 1;

            else
            {
                totalRefill++;
                lastRefill = stops.at(j - 1);
                j--;
                continue;
            }
        }

        else if (stops.at(j) - lastRefill <= tank)
            currRefill = stops.at(j);

        else
        {
            totalRefill++;
            lastRefill = currRefill;
            j--;
        }
    }
    return totalRefill;
}


int main()
{
    int d, c, n;
    cin >> d >> c >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; i++)
        cin >> stops.at(i);

    cout << minRefills(d, c, stops) << endl;

    return 0;
}
