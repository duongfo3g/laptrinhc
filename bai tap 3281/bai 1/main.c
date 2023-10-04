#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isPrime(int a) {
	int i, check = 0;
	if (a == 2) {
		return 1;
	} else if (a < 2) {
		return 0;
	} else {
		for (i = 2; i < a; i++) {
			if (a % i == 0) {
				check = 1;
			}
		}
		if (check == 0) {
			return 1;
		} else {
			return 0;
		}
	}
}


int main(int argc, char *argv[]) {
	int a;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("%d", isPrime(a));
	return 0;
}
