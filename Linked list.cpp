#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void push(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void pop() {
   if(head==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< head->data <<endl;
      head = head->next;
   }
}
int main(){
    int A[5];
    push(3);
    push(1);
    push (0);
    push(-1);
    push(11);
    push(11);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    
    return 0;
}