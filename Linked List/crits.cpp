/*
Problem 2:
Crits in a Linked List!

Given the head of a linked list, Find the number of critical points. (The starting and end are not considered critical points).

Local minima or maxima are called critical points.

A Node is called a local minima if both next and previous elements are greater than the current element.

A Node is called a local maxima if both next and previous elements are smaller than the current element.

Author : Arka Chakraborty (Dark-Programer)
*/

// Code:
// Node is defined as:
// struct Node{
//   int data;
//   Node* next;
//   Node(int data){
//       this->data = data;
//       this->next = nullptr;
//   }
// }
int solve(Node * head) {
    int critical_pts = 0;
    Node * prev = head;
    Node * current = head -> next;

    while (current != NULL && current -> next != NULL) {
        // Checking for local minima
        if (prev -> data > current -> data && current -> next -> data > current -> data){
            critical_pts++;
        }
        // Checking for local maxima
        else if (prev -> data < current -> data && current->next->data < current->data){
            critical_pts++;
        }
        prev = current;
        current = current -> next;
    }
    return critical_pts;
}