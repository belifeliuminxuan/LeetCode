#include <iostream>
using namespace std;
#include <vector>
//class Solution {
//public:
//	int removeElement(vector<int>& nums, int val)
//	{
//		int count = nums.size();
//		for (int i=0;i<nums.size();i++)
//		{
//			if (nums[i] == val&&nums[i+1]!=val)
//			{
//				for (int j = 0; j < nums.size() - 1; j++)
//					nums[j] = nums[j + 1];
//			}
//			else
//			{
//				for (int j = nums.size()-1; j>0; j--)
//					nums[j] = nums[j - 1];
//			}
//		}
//		return nums.size();
//	}
//};


class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int count = 0;
		for (int i=0;i<nums.size();i++)
		{
			if (nums[i] != val)
			{
				nums[count] = nums[i];
				count++;
			}
		}
		return count;
	}
};
int main()
{
	
	vector<int>testNum = { 0,1,2,2,3,0,4,2 };
	//cout << testNum.size();
	Solution S;
	cout<<S.removeElement(testNum, 2);
	return 0;
}