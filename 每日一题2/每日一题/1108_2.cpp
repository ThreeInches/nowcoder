#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
	vector<int> a;
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		if (numbers.empty())
		{
			return 0;
		}

		sort(numbers.begin(), numbers.end());
		int mid = numbers[numbers.size() / 2];

		int count = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == mid)
			{
				count++;
			}
		}

		return (count>(numbers.size() / 2)) ? mid : 0;
	}
};

int main11082()
{
	vector<int> a;	
	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];
	}

	Solution ab;
	int res = ab.MoreThanHalfNum_Solution(a);
	cout << res << endl;
	system("pause");
	return 0;
}
