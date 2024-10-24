/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1 == nullptr && list2 ==nullptr) return nullptr;
        if(list1 != nullptr && list2 ==nullptr) return list1;
        if(list1 == nullptr && list2 !=nullptr) return list2;

        ListNode* list_1 = list1->val <= list2->val ? list1:list2;
        ListNode* list_2 = list_1 == list1 ? list2:list1;

        ListNode* list = list_1;

        ListNode* prev = list_1;
        while(list_1 != nullptr && list_2 != nullptr)
        {
            if(list_1->val > list_2->val)
            {
                ListNode* newNode = list_2;
                list_2 = list_2->next;

                prev->next = newNode;
                newNode->next = list_1;

                list_1 = newNode;
            }

            prev = list_1;
            list_1 = list_1->next;
        } 

        if(list_2 != nullptr)
            prev->next = list_2;

        return list; 
    }
};