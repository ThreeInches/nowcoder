#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Gift {
public:
	int getValue(vector<int> gifts, int n)
	{
		if (gifts.empty())
		{
			return 0;
		}

		sort(gifts.begin(), gifts.end());
		int mid = gifts[gifts.size() / 2];

		int count = 0;
		for (int i = 0; i < gifts.size(); i++)
		{
			if (gifts[i] == mid)
			{
				count++;
			}
		}

		return (count>(gifts.size() / 2)) ? mid : 0;
	}
};

int main()
{
	
	system("pause");
	return 0;
}
