#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int removeElement(vector<int>& nums, int val)
	{
		for (size_t i=0;i<nums.size()-1;++i)
		{
			if (nums[i]==val)
			{
				nums[i] == nums[i + 1];
			}
		}
		return nums.size() - 1;
	}
};
int main()
{
	return 0;
}