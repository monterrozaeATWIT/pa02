#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    //Ask user for amount of nodes
    int K = 0;
    printf("Enter the amount of nodes: ");
    scanf("%d",&K);

    //Make head node
    int i = 2;
    int n_size = sizeof(struct node);
    struct node *head = malloc(n_size);
    struct node *current = NULL;
    head->data=1;
    head->next=NULL;
    current = head;
    
    //Create node and attack to list
    if (K > 1)
    {
        while(i <= K)
            {
                struct node *temp = malloc(n_size);
                temp->data = i;

        while(current->next != NULL){
                current = current->next;
            }
    
        current->next = temp;
        i++;
    }
        
    }
    
    //Print all nodes from linked list
    struct node *toPrint = head;
    while(toPrint != NULL){
        printf("Hello World#%d\n",toPrint->data);

        toPrint = toPrint->next;
    }
    
    //Free all nodes from linked list
    struct node *toDelete = head;
    struct node *prev;
    while(toDelete != NULL)
    {
        int ret = toDelete->data;
        printf("Goodbye from node#%d\n",ret);
        prev = toDelete;
        toDelete = toDelete->next;
        free(prev);
    }


}
