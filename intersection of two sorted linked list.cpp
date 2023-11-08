

/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
      Node* dummy = new Node(-1);
    Node* InSect = dummy;
    
    while(head1 && head2){
        if(head1->data == head2->data){
            InSect->next = new Node(head1->data);
            InSect = InSect->next;
            head1 = head1->next;
            head2 = head2->next;
        }
        else if(head1->data < head2->data) head1 = head1->next;
        else head2 = head2->next;
    }
    return dummy->next;
}
