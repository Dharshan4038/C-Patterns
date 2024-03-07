#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void list_implementation(struct node *head,struct node *newnode,struct node *temp) {
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head == 0) {
            head = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to insert another element ? (0/1): ");
        scanf("%d",&choice); 
    }
    temp = head;
    printf("The data in the list are: ");
    while (temp != 0)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

struct node* insert_data(struct node *head,struct node *newnode,struct node *temp) {
    printf("Enter num of elements in linked list: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data %d: ",i+1);
        scanf("%d",&newnode->data);
        newnode -> next = 0;
        if(head == 0) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

void print_data(struct node *head,struct node *temp) {
    temp = head;
    printf("The data in the list are: ");
    while (temp != 0)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

void node_insert(struct node *head,struct node *temp) {
    int pos,n=1;
    printf("Enter Pos: ");
    scanf("%d",&pos);
    struct node *in_node;
    in_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &in_node->data);
    temp = head;
    while (temp != 0)
    {
        temp = temp -> next;
        n++;
    }
    temp = head;
    if(pos > n) {
        printf("invalid position !");
        exit(0);
    }
    if(pos == 0) {
        in_node->next = head;
        head = in_node;
    }
    else if (pos == n) {
        while (temp != 0)
        {
            temp = temp->next;
        }
        temp->next = in_node;
        in_node->next = 0;
    }
    else {
        int i=0;
        while(i< pos-1) {
            temp = temp->next;
            i++;
        }
        in_node->next = temp->next;
        temp->next = in_node;
    }
    print_data(head,temp);
}

struct node* reverse_sll(struct node *head) {
    struct node *prevnode,*currnode,*nextnode;
    prevnode = 0;
    currnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currnode->next = prevnode;
        prevnode = currnode;
        currnode = nextnode;
    }
    head = prevnode;
    return head;
}

struct node* del_beg(struct node* head,struct node* temp) {
    temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct node* del_end(struct node* head,struct node* temp) {
    temp=head;
    struct node* prev;
    while (temp->next != 0)
    {
        prev = temp;
        temp = temp -> next;
    }
    prev->next = 0;
    free(temp); 
}

int main() {
    struct node *head,*newnode,*temp;
    head = 0;
    // list_implementation(head,newnode,temp);
    head = insert_data(head,newnode,temp);
    // node_insert(head,temp);
    // head = reverse_sll(head);
    head = del_end(head,temp);
    print_data(head,temp);
}