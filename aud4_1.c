

// Anzahl Teilnehmer: ~25

int ack(int x, int y) {
    if (x == 0) {
        return y + 1;
    }
    if (y == 0) {
        return ack(x - 1, 1);
    }
    return ack(x - 1, ack(x, y - 1));
}

int palindrom(char *str, int n) {
    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++; // i = i + 1;
        j--; // j = j - 1;
    }
    return 1;
}

int main() {
    // Aufgabe 1a)
    int x, y;
    printf("Ackermann-Funktion:\nx: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("ack(%d, %d) = %d\n", x, y, ack(x, y));
    
    
    // Aufgabe 1b)
    int n;
    printf("Palindrom:\nLänge n: ");
    scanf("%d", &n);
    char str[n];
    printf("String str: ");
    scanf("%s", str);
    if (palindrom(str, n)) {
        printf("%s ist ein Palindrom!\n", str);
    } else {
        printf("%s ist kein Palindrom!\n", str);
    }
    
    return 0;
}
