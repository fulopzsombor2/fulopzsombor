#include <stdio.h>





int main() {

// MarioV1
    int m = 0;
    printf("magassag: ");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

// MarioV2
    printf("magassag: ");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m-i; j++) {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

// Mariov3
    printf("magassag: ");
    scanf("%d",&m);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m-i; j++) {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("  ");
        for(int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");

    }

//Gyémánt
    printf("magassag: ");
    scanf("%d",&m);
    if (m % 2 == 0) {
        printf("Hiba\n");
        return 1;
    }
    for(int i = 0; i <= m/2; i++) {
        for(int j = 0; j < (m/2-i); j++) {
            printf(" ");
        }
        for(int j = 0; j < (2*i+1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = (m/2-1); i >= 0; i--) {
            for(int j = 0; j < (m/2-i); j++) {
                printf(" ");
            }
            for(int j = 0; j < (2*i+1); j++) {
                printf("*");
            }
            printf("\n");
        }



    return 0;
}