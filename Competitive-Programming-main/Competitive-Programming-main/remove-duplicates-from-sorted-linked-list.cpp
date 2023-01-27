#include<bits/stdc++.h>
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        if(head == NULL) return NULL;
        if(head->next==NULL) return head;
        while(temp!=NULL && temp->next !=NULL){
            if(temp && temp->val==temp->next->val){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};