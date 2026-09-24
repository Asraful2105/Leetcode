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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
        {
            return NULL;
        }
        struct ListNode* temp=list1;
        if(list1 == NULL) return list2;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=list2;
        while(temp!=NULL)
        {
            temp=temp->next;
        }
        struct ListNode* i=list1;
        while(i!=NULL)
        {
           struct ListNode* j=list1;
            while(j->next!=NULL)
            {
                if(j->val>=j->next->val)
                {
                swap(j->val,j->next->val);
                // struct ListNode* t=j;
                // j=j->next;
                // j->next=t;
                }
                j=j->next;
            }
            i=i->next;
        }
        return list1;
    }   
};