#include <stdio.h>
int main() {
//1.feladat
    int osszeg=0;
    for(int i = 0;i <= 100;i++) {
        osszeg = osszeg + i;
    }
    printf("Összeg: %d\n", osszeg);

//2.feladat
    osszeg = 0;
    for(int i = 0;i<1000;i++) {
        if(i % 3 == 0 || i % 5 == 0) osszeg = osszeg + i;
    }
    printf("Összeg: %d\n", osszeg);

//3.feladat
    int n = 0;
    printf("Szám: ");
    scanf("%d", &n);
    for(int i = 1; i <= n;i++) {
        if(i % 4 == 0) printf("%d\n", i);
    }
//4.feladat
    n = 0;
    printf("Szám: ");
    scanf("%d", &n);
    for(int i = n; i > 0;i--) {
        if(i % 2 != 0) printf("%d\n",i);
    }

//5.feladat
    n = 0;
    printf("Szám: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("%d", i);
        if(i < n) printf(" -> ");
    }


    return 0;
}