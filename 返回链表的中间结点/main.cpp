/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* tmp;
        int i = 0;
        int j = 0;
        for (tmp = head; tmp; tmp = tmp->next)
        {
            i++;
        }
        int mid = i / 2;
        ListNode* _tmp;
        for (_tmp = head; _tmp; _tmp = _tmp->next)
        {
            j++;
            if (j == mid)
            {
                return _tmp;
            }
        }
    }
};

int main()
{
    return 0;
}