#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool valid_triangle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return true;
    } else {
        return false;
    }
}

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int is_odd(int n) {
    if (n % 2 == 1) {
        return 1;
    } else {
        return 0;
    }
}


int get_min(int tomb[], int meret) {
    int min = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] < min) {
            min = tomb[i];
        }
    }
    return min;
}

int get_max(int tomb[], int meret) {
    int max = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] > max) {
            max = tomb[i];
        }
    }
    return max;
}

int sum_diff(int tomb[], int meret) {
    int osszeg = 0;
    for (int i = 0; i < meret - 1; i++) {
        osszeg += abs(tomb[i] - tomb[i + 1]);
    }
    return osszeg;
}

void print_array(int tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        printf("%d", tomb[i]);
        if (i < meret - 1) {
            printf(", ");
        }
    }
    printf("\n");
}







int main() {

    double oldal1, oldal2, oldal3;

        printf("Adja meg a háromszög három oldalát: ");
        if (scanf("%lf %lf %lf", &oldal1, &oldal2, &oldal3) == 3) {
            
            if (valid_triangle(oldal1, oldal2, oldal3)) {
                printf("A(z) %.2f, %.2f es %.2f oldalakkal a haromszog megszerkesztheto.\n", oldal1, oldal2, oldal3);
            } else {
                printf("A megadott oldalakbol NEM szerkesztheto haromszog.\n");
            }
            
        }


    int szam = 0;
    printf("A vizsgált szám: ");
    scanf("%d", &szam);
    
    if (is_even(szam)) {
        printf("A szám páros.\n");
    }

    if (is_odd(szam)) {
        printf("A szám páratlan.\n");
    }


    int szamok[] = {12, 5, 8, 2, 19, -3, 7};
    int n = 7;
    int legkisebb = get_min(szamok, n);
    printf("A tomb legkisebb eleme: %d\n", legkisebb);

    int szamok[] = {12, 5, 8, 2, 19, -3, 7};
    int n = 7;
    int legnagyobb = get_max(szamok, n);
    printf("A tomb legnagyobb eleme: %d\n", legnagyobb);


    int szamok[] = {4, 7, 34, 23, 67};
    int meret = 5;
    printf("A tomb elemei: ");
    print_array(szamok, meret);





    return 0;
}