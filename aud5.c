
#include <stdio.h>
// s ist Zahl, a das Array mit anzahl elementen s
int primfac(int a[], int s) {
    int z = 0;
    
    while(s > 1) {
        for (int i = 2; i<= s; i++) {
            if (s % i == 0) {
                a[z] =i;
                z++;
                s /= i;
                break;
            }
        }
    }

    return z;
}



/* 
Das hier ist meine eigene Lösung der Aufgabe(Per). Die unterscheidet sich etwas
von unserer, versucht gerne, beide Lösungen nachzuvollziehen und zu vergleichen (meine ist besser, lel)

int primfac(int a[], int s) {
    int z = 0, m = s;
    for (int i = 2; i <= s; i++) {
        while (m % i == 0) {
            m = m / i;
            a[z] = i;
            z++;
        }
    }
    return z;
} */


int main()
{
    int s;
    printf("Zahl s: ");
    scanf("%d", &s);
    
    int a [s];
    int z = primfac(a,s);
    
    printf("Primfaktoren von %d: \n", s);
    for (int i= 0; i<z; i++) {
        printf("%d \n",a[i]);
    }
    return 0;
}
