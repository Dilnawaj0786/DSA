
class Solution {
public:
    // ListNode* swapPairs(ListNode* head) {
    //     if(head == NULL || head->next == NULL) return head;
    //     ListNode* a = head;
    //     ListNode* ans = head->next;
    //     ListNode* prev = NULL;
    //     while(a != NULL){
    //         ListNode* b = a->next;
    //         if(b == NULL){
    //             prev->next = a;
    //             break;
    //         }
    //         ListNode* fwd = b->next;
    //         b->next = a;
    //         if(prev != NULL) prev->next = b;
    //         else head = b;
    //         prev = a; 
    //         a->next = NULL;
    //         a = fwd;
    //     }
    //     return ans;
    // }


    ListNode* Merge(ListNode* odd,ListNode* even){
        ListNode* temp1 = odd;
        ListNode* temp2 = even;
        ListNode* ans = new ListNode(-1);
        ListNode* temp3 = ans;

        while(temp1 != NULL && temp2 != NULL){
            temp3->next = temp2;
            temp2= temp2->next;
            temp3 = temp3->next;
            temp3->next = temp1;
            temp1= temp1->next;
            temp3 = temp3->next;
        }

        while(temp1 != NULL){
            temp3->next = temp1;
            temp1= temp1->next;
            temp3 = temp3->next;
        }

        while( temp2 != NULL){
            temp3->next = temp2;
            temp2= temp2->next;
            temp3 = temp3->next;
        }

        return ans->next;

    }

    ListNode* swapPairs(ListNode* head) {
        ListNode* odd = new ListNode(-1);
        ListNode* x = odd;
        ListNode* even = new ListNode(-1);
        ListNode* y = even;
        ListNode* temp = head;
        int z = 1;
        while(temp != NULL){
            if(z % 2 == 1){
                x->next = temp;
                x= x->next;
            }else{
                y->next = temp;
                y= y->next;
            }
            temp = temp->next;
            z++;
        }

        y->next = NULL;
        x->next = NULL;
        return Merge(odd->next,even->next);

    }
};