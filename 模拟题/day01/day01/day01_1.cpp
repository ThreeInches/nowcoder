#include <iostream>
#include <string>
using namespace std;

int main1()
{
	string str1;
	string str2;
	string res;
	int count[256] = { 0 };
	getline(cin, str1);
	getline(cin, str2);
	for (int i = 0; i < str2.size(); i++)
	{
		count[str2[i]]++;
	}
	for (int i = 0; i < str1.size(); i++)
	{
		if (count[str1[i]] == 0)
		{
			res += str1[i];
		}
	}
	cout << res << endl;
	system("pause");
	return 0;
}
