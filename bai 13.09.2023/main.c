#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// bai 1
	int a,b;
	printf("Nhap vao a = ");
	scanf("%d",&a);
	printf("Nhap vao b = ");
	scanf("%d",&b);	
	if (a > b) {
		printf("\nSo lon nhat = %d, So nho nhat = %d",a,b);
	}
	else {
		printf("\nSo lon nhat = %d, So nho nhat = %d",b,a);
	}

	
	// bai 2
	float x,y;
	printf("\n\nNhap vao x = ");
	scanf("%f",&x);
	printf("\nNhap vao y = ");
	scanf("%f",&y);	
	if (y == 0) {
		printf("x/y khong co gia tri");
	}
	else {
		printf("x/y = %f", x/y);
	}
	return 0;
}
