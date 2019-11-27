#include <iostream>
#include <string>
using namespace std;

int main11081()
{
	string str, cur, res;

	cin >> str;

	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cur += str[i];
		}
		else
		{
			if (res.length() < cur.length())
			{
				res = cur;
			}
			else
			{
				cur.clear();
			}
		}
	}

	cout << res << endl;

	system("pause");
	return 0;
}
