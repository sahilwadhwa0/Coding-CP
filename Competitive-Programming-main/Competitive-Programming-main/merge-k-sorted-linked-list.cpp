#include<bits/stdc++.h>
class Solution {
    ListNode* merge(ListNode* list1,ListNode* list2){
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val<=list2->val){
            list1->next = merge(list1->next,list2);
        }
        else{
            list2->next = merge(list1,list2->next);
            list1 = list2;
        }
        return list1;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];
        ListNode* list = NULL;
        for(auto i : lists){
            list = merge(list,i);
        }
        return list;
    }
};