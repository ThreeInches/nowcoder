#include <iostream>
#include <vector>
using namespace std;



int main()
{
	vector<int> n;
	vector<long long> fib;

	for (auto& e : n)
	{
		cin >> e;
	}
	long long l1 = 0, l2 = 1;
	for (int i = 0; i < n.size(); i++)
	{
		while (n[i]--)
		{
			int res = l1 + l2;
			fib.push_back(res);
			l1 = l2;
			l2 = res;
		}
		cout << fib[fib.size() - 1] % 100000 << endl;
	}
	
	system("pause");
	return 0;
}
