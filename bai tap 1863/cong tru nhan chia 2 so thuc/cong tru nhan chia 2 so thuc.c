#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, tong, hieu, tich, thuong;
	
	printf("\nNhap gia tri a = ");
	scanf("%f", &a);
	
	printf("\nNhap gia tri b = ");
	scanf("%f", &b);
	
	tong = a + b;
	hieu = a - b;
	tich = a*b;
	thuong = a/b;
	printf("\nTong = %f", tong);
	printf("\nHieu = %f", hieu);
	printf("\nTich = %f", tich);
	printf("\nThuong = %f", thuong);
	return 0;
}
