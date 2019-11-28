#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int StrToInt(string str)
	{
		if (str.empty())
		{
			return 0;
		}

		int flag = 1;
		if (str[0] == '-')
		{
			flag = -1;
			str[0] = '0';
		}
		else if (str[0] == '+')
		{
			flag = 1;
			str[0] = '0';
		}

		int sum = 0;

		for (size_t i = 0; i < str.size(); i++)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				sum = 0;
				break;
			}

			sum = sum * 10 + str[i] - '0';
		}
		return flag * sum;
	}
};

int main() {

	system("pause");
	return 0;
}
