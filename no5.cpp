#include <stdio.h>
struct Node { 
    int data; 
    struct Node* next; 
}; 

void printNthFromLast(struct Node* head, int n){ 
    int len = 0, i; 
    struct Node* temp = head; 
  
    while (temp != NULL) { 
        temp = temp->next; 
        len++; 
    } 

    if (len < n) return; 
  
    temp = head; 

    for (i = 1; i < len - n + 1; i++){
    	temp = temp->next; 
	}
    
    printf("%d\n", temp->data); 
  
    return; 
} 
  
void push(struct Node** head_ref, int new_data){ 
    struct Node* new_node = new Node(); 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 

int main(){
    struct Node* head = NULL; 
 
    push(&head, 1); 
    push(&head, 1000); 
    push(&head, 5); 
    push(&head, 100); 

    printNthFromLast(head, 4); 
    return 0; 
}
