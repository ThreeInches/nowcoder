#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main11061()
{
	int n;
	cin >> n;

	vector<int> a;
	a.resize(3 * n);
	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	long long sum = 0;
	for (int i = n; i <= 3 * n - 2; i += 2)
	{
		sum += a[i];
	}

	cout << sum << endl;
	system("pause");
	return 0;
}
