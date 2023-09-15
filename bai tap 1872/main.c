#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1, a2, a3, a4, maxa1a2, mina1a2, maxa3a4, mina3a4;
	
	printf("Nhap vao a1 = ");
	scanf("%d", &a1);
	
	printf("Nhap vao a2 = ");
	scanf("%d", &a2);	
	
	printf("Nhap vao a3 = ");
	scanf("%d", &a3);
	
	printf("Nhap vao a4 = ");
	scanf("%d", &a4);
	
	if (a1 > a2) {
		maxa1a2 = a1;
		mina1a2 = a2;
	}
	else {
		maxa1a2 = a2;
		mina1a2 = a1;
	}
	if (a3 > a4) {
		maxa3a4 = a3;
		mina3a4 = a4;
	}
	else {
		maxa3a4 = a4;
		mina3a4 = a3;
	}
	if (maxa1a2 > maxa3a4) {
		printf("\nGia tri lon nhat = %d", maxa1a2);
	}
	else {
		printf("\nGia tri lon nhat = %d", maxa3a4);
	}
	if (mina1a2 < mina3a4) {
		printf("\nGia tri nho nhat = %d", mina1a2);
	}
	else {
		printf("\nGia tri nho nhat = %d", mina3a4);
	}
	return 0;
}
