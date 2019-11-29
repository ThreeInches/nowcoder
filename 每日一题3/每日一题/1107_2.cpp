#if 1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main11072()
{
	string s;
	getline(cin, s);

	reverse(s.begin(), s.end());

	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
		{
			end++;
		}
		reverse(start, end);

		if (end != s.end())
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}

	}

	cout << s << endl;
	system("pause");
	return 0;
}
#else
#include <iostream>
#include <string>
using namespace std;

int main11072()
{
	string str1, str2;
	cin >> str2;

	while (cin >> str1)
	{
		str2 = str1 + " " + str2;
	}

	cout << str2 << endl;
	//system("pause");
	return 0;
}

#endif




