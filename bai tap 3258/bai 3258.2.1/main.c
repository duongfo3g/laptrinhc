#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, sum, i;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("\nNhap b = ");
	scanf("%d", &b);
	if (a < b) {
		sum = 0;
		for (i = a; i <= b; i++) {
			sum += i;
		}
	} else {
		sum = 0;
		for (i = b; i <= a; i++) {
			sum +=i;
		}
	}
	printf("\nTong tu a toi b = %d", sum);
	return 0;
}
