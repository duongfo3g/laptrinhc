#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	    int n, i, j;

    printf("Nh?p chi?u cao c?a tam gi�c: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // In ra kho?ng tr?ng d? t?o ra ph?n r?ng b�n tr�i tam gi�c
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // In ra d?u '*' d? t?o ra ph?n tam gi�c
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Xu?ng d�ng sau khi ho�n th�nh m?t d�ng c?a tam gi�c
        printf("\n");
    }
	
	return 0;
}
