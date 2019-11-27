#include <iostream>
#include <string>
using namespace std;

bool IsPalindromeString(const string & str)
{
	size_t begin = 0;
	size_t end = str.size() - 1;

	while (begin < end)
	{
		if (str[begin] != str[end])
		{
			return false;
		}
		begin++;
		end--;
	}

	return true;
}

int main11101()
{
	string str1, str2;
	string str;
	getline(cin, str1);
	getline(cin, str2);

	int count = 0;
	for (size_t i = 0; i <= str1.size(); i++)
	{
		str = str1;
		str.insert(i, str2);
		if (IsPalindromeString(str))
		{
			count++;
		}
	}

	cout << count << endl;
	system("pause");
	return 0;
}
