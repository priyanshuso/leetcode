/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {

        if (head == NULL) {
            return head;
        }
        Node* curr = head;
        while (curr != NULL) {
            // flatten the child node yaha par karenge
            if (curr->child != NULL) {
                Node* next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;
                // find th tail value here
                while (curr->next != NULL) {
                    curr = curr->next;
                }
                // tail ko attech karenge next ptr ke sath
                if (next != NULL) {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};