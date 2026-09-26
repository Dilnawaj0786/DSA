
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans (m,vector<int>(n,-1));
        ListNode* temp = head;
        int first_row =0;
        int last_row = m-1;
        int first_col = 0;
        int last_col = n-1;

        while(temp != NULL){
            if(temp == NULL) break;
            for(int i=first_col;i<=last_col;i++){
                if(temp == NULL) break;
                ans[first_row][i] = temp->val;
                temp = temp->next;
            }
            first_row++;
            for(int i=first_row;i<=last_row;i++){
                if(temp == NULL) break;
                ans[i][last_col] = temp->val;
                temp = temp->next;
            }
            last_col--;
            for(int i=last_col;i>=first_col;i--){
                if(temp == NULL) break;
                ans[last_row][i] = temp->val;
                temp = temp->next;
            }
            last_row--;
            for(int i=last_row;i>= first_row;i--){
                if(temp == NULL) break;
                ans[i][first_col] = temp->val;
                temp = temp->next;
            }
            first_col++;
        }
        return ans;
    }
};