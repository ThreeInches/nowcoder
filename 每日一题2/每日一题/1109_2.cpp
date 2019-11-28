#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main11092()
{
	string str;
	string table = "0123456789ABCDEF";

	int m, n;
	cin >> m >> n;
	bool flag = false;

	if (m < 0)
	{
		m = 0 - m;
		flag = true;
	}

	while (m)
	{
		str += table[m%n];
		m /= n;
	}

	if (flag)
	{
		str += '-';
	}

	reverse(str.begin(), str.end());

	cout << str << endl;


	system("pause");
	return 0;
}
