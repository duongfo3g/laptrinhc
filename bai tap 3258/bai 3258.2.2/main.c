#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	printf("Nhap N = ");
	scanf("%d", &N);
	int sum = 0, i, j;
	for (i = 2; i <= N; i++) {
		int check = 0;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				check = 1;
				break;
			}
		}
		if (check == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nTong cac so nguyen to tu 1 toi N = %d", sum);
	return 0;
}
