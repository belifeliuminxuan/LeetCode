#include <iostream>
using namespace std;
#include <vector>
#if 0
class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int prev, temp;
		for (int i=0;i<k;i++)
		{
			 prev = nums[nums.size() - 1];
			for (int j=0;j<nums.size();j++)
			{
				temp = nums[j];
				nums[j] = prev;
				prev = temp;
			}
		}
	}
};
#endif
class Solution {
public:
	void rotate(vector<int>& nums, int k) {

	}
};
int main()
{
	vector<int>num = { 1,2,3,4,5,6,7 };
	Solution S;
	S.rotate(num, 3);
	for (int i = 0; i < num.size(); i++)
		cout << num[i] << " ";
	return 0;
}
