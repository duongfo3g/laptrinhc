#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, tong;
	printf("Nhap vao so nguyen N = ");
	scanf("%d",&N);
	tong = (N+1)*N*0.5;
	printf("\nTong cac so tu 1 toi N = %d", tong);
	return 0;
}
