//给定两个数组，编写一个函数来计算它们的交集。
//
//示例 1:
//
//输入: nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//输出 : [2]
//示例 2 :
//
//	输入 : nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
//	输出 : [9, 4]


#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		size_t Count = 0;
		if (nums1.size() > nums2.size())
			Count = nums2.size();
		else
			Count = nums1.size();
		vector<int>Ret(Count);
		for (size_t i=0;i<nums1.size()-1;++i)
		{
			for (size_t j=0;j<nums2.size()-1;++j)
			{
				if (nums1[i] == nums2[j])
					Ret[i] = nums2[i];
			}
		}
		return Ret;
	}
};


int main()
{
	return 0;
}