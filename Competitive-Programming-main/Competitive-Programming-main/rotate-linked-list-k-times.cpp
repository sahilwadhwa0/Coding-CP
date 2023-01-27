#include<bits/stdc++.h>
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        if(head->next==NULL||k==0) return head;
        ListNode* tail = head;
        int l = 1;
        while(tail->next!=NULL){
            l++;
            tail = tail->next;
        }
        tail->next = head;
        k = k%l;
        for(int i = 0; i<l-k;i++){
            tail = tail->next;
        }
        head = tail->next;
        tail->next = NULL;
        return head;
    }
};