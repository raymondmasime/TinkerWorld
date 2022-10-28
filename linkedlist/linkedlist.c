#include <stdlib.h>
#include <stdio.h>

/*******************************************************/

struct node {
    int value; //stores number
    struct node *next; //points to the next node in the list
};
typedef struct node node_t; //makes code cleaner


/********************************************************/

/**********Function that prints out the linked list*****/

void printlist(node_t *head){ //parse in head point to know where to start
    node_t *temporary = head; //declare temporary pointer and set to start at head pointer

    while (temporary != NULL){
        printf("%d - ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}
/*******************************************************/

int main(){
    /**
    *make three nodes and
    *declare them as local
    */
    node_t n1, n2, n3;
    node_t *head;
    n1.value = 56;
    n2.value = 23;
    n3.value = 5;

/*
*link them up into a list
*using any arbitrary order.
*Make head point to address of 
*n3.
*Set each node's next pointer to 
*the next address.
*/
    head = &n3;
    n3.next = &n1;
    n2.next = &n2;
    n1.next = NULL; //Set next pointer for last node to NULL, to know when to stop

    printlist(head);
    return 0;
}