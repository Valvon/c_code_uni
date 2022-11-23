

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    // Aufgabe 2b)
    int a, b;
    printf("Zahl a: ");
    scanf("%d", &a);
    printf("Zahl b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Neuer Wert von a: %d\nNeuer Wert von b: %d\n", a, b);
    return 0;
}