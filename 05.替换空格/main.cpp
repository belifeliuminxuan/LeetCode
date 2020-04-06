#include <iostream>
using namespace std;

#include <string>
class Solution {
public:
	string replaceSpace(string s) {
		string rep;
		size_t  i = 0;
		for (;i<s.length();i++)
		{
			if (s[i] != ' ')
			{
				rep += s[i];
			}
			else
			{
				rep += "%20";
			}

		}
		return rep;
	}
};

int main()
{
	Solution S;
	cout<<S.replaceSpace("i am s");
	return 0;
}