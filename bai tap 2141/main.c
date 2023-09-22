#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float tinhtong(float a, float b) {
	float sum = a + b;
	return sum;
}

float tinhhieu(float a, float b) {
	float hieu = a - b;
	return hieu;
}

float tinhtich(float a, float b) {
	float tich = a*b;
	return tich;
}

float tinhthuong(float a, float b) {
	float thuong = a/b;
	return thuong;
}

int main(int argc, char *argv[]) {
	float a, b;
	printf("\nNhap a, b = ");
	scanf("%f %f", &a, &b);
	printf("\nTong = %f", tinhtong(a, b));
	printf("\nHieu = %f", tinhhieu(a, b));	
	printf("\nTich = %f", tinhtich(a, b));
	printf("\nThuong = %f", tinhthuong(a, b));	
	return 0;
}
