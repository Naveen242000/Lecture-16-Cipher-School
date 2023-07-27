class Solution{
public: 
 bool hasCycle(ListNode *head){
   unordered_map<ListNode *,int>mp;
   ListNode *t=head;
while(t){
if(mp.count(t->next))return 1;
mp[t]++;
t=t->next;
}
return 0;
 }
};
