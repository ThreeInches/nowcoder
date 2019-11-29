#include <iostream>
#include <stack>
#include <string>
using namespace std;


class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		stack<char> ch;

		for (auto &i : A)
		{
			switch (i)
			{
			case '(':
				ch.push(i);
				break;
			case')':
			{
					   if (ch.empty() || ch.top() != '(')
					   {
						   return false;
					   }
					   else
					   {
						   ch.pop();
					   }
					   break;
			}
			default:
				return false;
			}
		}
		return true;
	}
};
int main()
{
	Parenthesis a;
	bool b = a.chkParenthesis("()()()", 6);
	bool c = a.chkParenthesis("()a()()", 7);
	bool d = a.chkParenthesis("()(()()", 7);

	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	system("pause");
	return 0;
}
