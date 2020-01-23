#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int res[10][4] = { 0 };

void fillSTForm(int src[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		res[i][0] = src[i];
	}

	for (i = 1; (1 << i) <= n; i++)
	{
		for (j = 0; j < n - (1 << i) + 1; j++)
		{
			res[j][i] = max(res[j][i - 1], res[j + (1 << (i - 1))][i - 1]);
		}
	}
}

int searchSTData(int src[], int l, int r)
{
	int n = log2(r - l + 1);
	return max(res[l][n], res[r - (1 << n) + 1][n]);
}

int main()
{
	int n = 100000;
	int a[] = { 0 };

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int m;
	cin >> m;


	fillSTForm(a, n);
	cout << searchSTData(a, 0, m);


	return 0;
}