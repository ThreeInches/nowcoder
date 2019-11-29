#include <iostream>
#include <algorithm>
using namespace std;

int main11111()
{
	int f0 = 0, f1 = 1, f;
	int left = 0, right = 0;
	int num;

	cin >> num;

	while (1)
	{
		f = f0 + f1;
		f0 = f1;
		f1 = f;

		if (f < num)
		{
			left = num - f;
		}
		else
		{
			right = f - num;
			break;
		}
	}

	cout << min(left, right) << endl;
	system("pause");
	return 0;
}
