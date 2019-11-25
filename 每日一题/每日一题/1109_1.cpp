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

	int ac = arr[0] + arr[2];
	int bd = arr[1] + arr[3];
	int abcd = ac + bd;

	if (ac%2 == 0 && bd == 0 && abcd>=-120 && abcd<=120)
	{
		int A, B, C;
		A = (arr[0] + arr[2]) / 2;
		B = arr[2] - A;
		C = arr[3] - B;
		cout << A << ' ' << B << ' ' << C;

	}
	else
	{
		cout << "No" << endl;
	}
	

	system("pause");
	return 0;
}
