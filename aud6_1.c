#include <stdio.h>
#include <stdlib.h>

// einfach verkettete Liste
// structtyp namens element mit int value und liste next
// pointer auf list element
// genutzt für variablen Speicher bzw. arrays sind vonder größe definiert
typedef struct element *list;
struct element {
    int value;
    list next; 
    };

// TODO
void printList(list l) {
    if(l == NULL) {
        return;
    }
    printf("Liste: {%d", l->value);
    while(l->next != NULL){
        l = l->next;
        printf(",%d", l->value);
        
    }
    printf("}\n");
}

void append(list *lp, int n) {
    while (*lp != NULL) {
        lp = &(*lp)->next;
    }
    list newElement = malloc(sizeof(struct element));
    newElement->value = n;
    newElement->next = NULL;
    *lp = newElement;
}

int sum (list l) {
    if (l == NULL) {
        return 0;
    }
    return l->value + sum(l->next);
}

void rmEvens(list *lp){
    while(*lp != NULL) {
        if((*lp)->value % 2 == 0){
            list tmp = *lp;
            *lp = (*lp)->next;
            free(tmp);
        } else {
            lp = &(*lp)->next; 
        }
    }

}

int main(){
    list l  = NULL;
    append(&l, 4);
    append(&l, 2);
    append(&l, 0);
    append(&l, 3);
    append(&l, 55);
    append(&l, 5);
    //printList(l);
    int s = sum(l);
    printf("Sum is: %d", s);
    rmEvens(&l);
    //printList(l);

    return 0;
}