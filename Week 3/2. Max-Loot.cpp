#include<bits/stdc++.h>
using namespace std;

int get_max(int n, vector<int> value, vector<int> weight)
{
	double maxx = 0;
	int max_index = 0;
	
	for (size_t i = 0; i < n; i++)
	{
		if (weight[i] != 0 && (double)value[i] / weight[i] > maxx)
		{
			maxx = (double)value[i] / weight[i];
			max_index = i;
		}
	}
	return max_index;
}

double knapsack(vector<int> value, vector<int> weight, int n, int w)
{
	double val = 0.0;
	
	for (int i = 0; i < n; i++)
	{
		if (w == 0)
			return val;
		
		int index = get_max(n, value, weight);
		int m = min(w, weight[index]);
		val += m * (double)value[index] / weight[index];
		weight[index] -= m;
		w -= m;
	}
	return val;
}

int main()
{
	int n, w;
	cin >> n >> w;
	
	vector<int> value(n), weight(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> value[i] >> weight[i];
	}
	
	double res = knapsack(value, weight, n, w);
	cout << fixed << setprecision(4) << res << endl;
	
	return 0;
}