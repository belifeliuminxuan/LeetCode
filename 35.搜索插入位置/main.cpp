#include <iostream>
using namespace std;
#include <vector>

//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		for (size_t i = 0; i < nums.size(); i++)
		{
			if (nums[i] == target)
				return i;
			else
			{
				for (size_t j=0;j<nums.size();j++)
				{
					if (target >= nums[j-1] && target <= nums[j])
						return j;
					else
						return nums.size();
				}
			}
		}
		return 0;
	}
};
int main()
{
	vector<int>testNums = { 1,3,4,5,6 };
	Solution S;
	cout<<S.searchInsert(testNums, 2);
	return 0;
}