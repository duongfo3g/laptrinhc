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
	int n, m, i;
	printf("\nPlease, enter a number: ");
	printf("\n+ n: ");
	scanf("%d", &n);
	printf("\n+ m: ");
	scanf("%d", &m);	
	if (n < m) {
		for(i = n; i <=m; i++) {
			if(isPrime(i) == 1) {
				printf("%d\n", i);
			}
		}
	} else {
		for(i = m; i <=n; i++) {
			if(isPrime(i) == 1) {
				printf("%d\n", i);
			}
		}		
	}
	return 0;
}
