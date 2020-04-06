#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << n << " = ";
	for (int i = 2; i <= n; i++)
	{
		while ((n % i) == 0)
		{
			if (n != i)
			{
				cout << i << " * ";
			}
			else
			{
				cout << i;
			}
			n = n / i;
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
