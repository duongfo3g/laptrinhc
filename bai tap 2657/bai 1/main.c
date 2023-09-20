#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	    int n, i, j;

    printf("Nh?p chi?u cao c?a tam giác: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // In ra kho?ng tr?ng d? t?o ra ph?n r?ng bên trái tam giác
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // In ra d?u '*' d? t?o ra ph?n tam giác
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Xu?ng dòng sau khi hoàn thành m?t dòng c?a tam giác
        printf("\n");
    }
	
	return 0;
}
