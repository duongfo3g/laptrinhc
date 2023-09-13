#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, a2, a3, a4;
	printf("Nhap gia tri a = ");
	scanf("%d", &a);
	a2 = pow(a,2);
	a3 = pow(a,3);
	a4 = pow(a,4);
	printf("\na2 = %d", a2);
	printf("\na3 = %d", a3);
	printf("\na4 = %d", a4);
	return 0;
}
