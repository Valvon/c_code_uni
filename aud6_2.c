# include <stdio.h>
# include <stdlib.h>


typedef struct element *list;
struct element {
    int value;
    list next; 
    };

typedef struct node *tree;
struct node {int key;
 tree left, right;
 };

tree createNode(int n, tree l, tree r) {
    tree t = malloc(sizeof(struct node));
    t->key =n;
    t->left = l;
    t->right= r;
    return t;
}

void insertl(tree *tp, int n) {
    while (*tp != NULL) {
        // a->n = *a.n | wert von pointer tp
        // wird derefernziert zu struct und davon left
        tp = &(*tp)->left;
    }
    tree newTree = createNode(n, NULL,NULL);
    *tp = newTree;
}


int leafprod(tree t) {
    if ( t == NULL) {
        return 1;
    }
    if (t->left == NULL && t->right == NULL) {
        return t->key;
    }
    return leafprod(t->left) * leafprod(t->right);
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

void treeToListRec(tree t, list *lp){
    if (t == NULL) {
        return; // stop the function, return nothing  because return type is void
    }
    treeToListRec(t->left, lp);
    if (t->key % 2 == 0) {
        append(lp, t->key);
    }
    treeToListRec(t->right, lp);
}

list treeToList (tree t){
    list l = NULL;
    treeToListRec(t, &l);
    return l;
}

int main () {

    
    tree t1 = createNode(1, NULL, NULL);
    tree t2 = createNode(2, t1, NULL);
    tree t3 = createNode(1, NULL, NULL);
    tree tree = createNode(3, t3, t2);
    
    /*tree t =    createNode(3, createNode(1, NULL, NULL),
                    createNode(2,
                        createNode(1, NULL, NULL), NULL));*/
    insertl(t, 4);
    printf("Blattprodukt: %d \n", leafprod(t));

    
    return 0;
}


