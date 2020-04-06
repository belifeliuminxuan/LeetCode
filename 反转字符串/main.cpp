#include <iostream>
#include <string>
using namespace std;

//class Solution {
//public:
//	string reverseString(string s)
//	{
//		if (s.empty())
//		{
//			return s;
//		}
//		int  start = 0;
//		int  end = s.size() - 1;
//		while (start < end)
//		{
//			swap(s[start], s[end]);
//			++start;
//			--end;
//		}
//		return s;
//	}
//};

string reverseStr()
{
	string s;
	cin >> s;
	if (s.empty())
	{
		return s;
	}
	int start = 0;
	int end = s.size() - 1;
	while (start < end)
	{
		swap(s[start], s[end]);
		++start;
		--end;
	}
	return s;
}
int main()
{
	cout<<reverseStr();
	return 0;
}