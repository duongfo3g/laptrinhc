#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p, i, sum;
	p = (int*)calloc(10, sizeof(int));
	for(i = 0; i < 10; i++) {
		printf("\nNhap p[%d] = ", i);
		scanf("%d", p+i);
	}
// while
//	sum = 0;
//	i = 0;
//	while (i < 10) {
//		if (*(p+i) % 2 ==0) {
//			sum+=*(p+i);
//		}
//		i++;
//	}

	// for
	sum = 0;
	for(i = 0; i < 10; i++) {
		if(*(p+i) % 2 == 0) {
			sum+=*(p+i);
		}
	}
	printf("\nTong cac so chia het cho 2 trong mang p = %d", sum);
	return 0;
}
