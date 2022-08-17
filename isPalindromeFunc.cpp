
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vals;

        ListNode* currentNode = head;
        while (currentNode != NULL) {
            vals.push_back(currentNode->val);
            currentNode = currentNode->next;
        }

        int front = 0;
        int back = vals.size() - 1;
        while (front < back) {
            if (vals[front] != vals[back]) {
                return false;
            }
            front++;
            back--;
        }
        return true;       
    }
};
