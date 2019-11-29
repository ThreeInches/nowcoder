#include <iostream>
#include <vector>
using namespace std;

int main11091()
{
	int arr[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	int A, B1, B2, C;
	A = (arr[0] + arr[2]) / 2;
	C = (arr[3] - arr[1]) / 2;
	B1 = (arr[1] + arr[3]) / 2;
	B2 = (arr[2] - arr[0]) / 2;
	if (B1 != B2)
	{
		cout << "No";
	}
	else
	{
		cout << A << ' ' << B1 << ' ' << C;
	}
	system("pause");
	return 0;
}
