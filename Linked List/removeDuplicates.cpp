/*
Problem 1: Remove Duplicates from Sorted List
Author: Arka Chakraborty (Dark-Programer) 
*/

/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // your code here
        if (head == NULL) {
            return head;
        }
        
        Node *current = head;
        
        while(current->next != NULL){
            if (current->next->data == current->data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
        
        return head;
    }
};