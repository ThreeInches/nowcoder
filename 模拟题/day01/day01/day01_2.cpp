#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sum = -INT_MAX;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int max = 0;
			for (int k = i; k <= j; k++)
			{
				max += arr[k];
			}
			if (max>sum)
			{
				sum = max;
			}
		}
	}
	cout << sum;
	system("pause");
	return 0;
}
